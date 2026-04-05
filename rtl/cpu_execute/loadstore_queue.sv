module loadstore_queue
import rv32i_types::*;
#(
    parameter LSQ_SIZE = 8,
    parameter PTR_SIZE = $clog2(LSQ_SIZE)
)(
    input   logic                       clk,
    input   logic                       rst,
    input   logic                       wr_en,
    input   logic                       rd_en,
    input   logic                       commit_i,           // store committed from ROB (sets committed flag)
    input   logic   [ROB_IDX-1:0]       commit_rob_entry_i, // ROB entry index of committing instruction
    input   logic   [31:0]              commit_pc_i,        // PC of committing instruction
    // Execute-time mispredict: partial flush + wrPtr rollback
    input   logic                       exec_mispredict,
    input   logic   [ROB_IDX-1:0]       exec_mispredict_rob_idx,
    input   logic   [ROB_IDX-1:0]       rob_rdPtr_i,            // ROB rdPtr for age comparison
    input   rob_t                       ROB_data_i,
    input   midcore_t                   MIDCORE_data_i,
    // from wb
    input   logic                       wb_alu,
    input   logic                       wb_load,
    input   logic                       wb_jump,
    input   logic                       wb_cmp,
    input   logic                       wb_mul,
    input   logic       [PRF_IDX-1:0]   wb_alu_pr,
    input   logic       [PRF_IDX-1:0]   wb_load_pr,
    input   logic       [PRF_IDX-1:0]   wb_jump_pr,
    input   logic       [PRF_IDX-1:0]   wb_cmp_pr,
    input   logic       [PRF_IDX-1:0]   wb_mul_pr,
    // output
    output  rob_t                       ROB_data_o,
    output  midcore_t                   MIDCORE_data_o,
    output  logic                       LDorST_o,           //0 is load, 1 is store
    output  logic                       READY_o,
    output  logic                       empty_o,
    output  logic                       full_o
);
    logic       LDorST      [LSQ_SIZE];      //0 is load, 1 is store
    rob_t       rob_rs      [LSQ_SIZE];
    midcore_t   midcore_rs  [LSQ_SIZE];
    logic       pr1_ready   [LSQ_SIZE];
    logic       pr2_ready   [LSQ_SIZE];

    logic       pr1_ready_next   [LSQ_SIZE];
    logic       pr2_ready_next   [LSQ_SIZE];

    logic[PTR_SIZE:0] wrPtr, wrPtrNext;
    logic[PTR_SIZE:0] rdPtr, rdPtrNext;

    // set ptr_next
    always_comb begin
        wrPtrNext = wrPtr;
        rdPtrNext = rdPtr;
        if (wr_en && !full_o) begin
            wrPtrNext = wrPtr + 1;
        end
        if (rd_en && !empty_o) begin
            rdPtrNext = rdPtr + 1;
        end
    end

    // New wrPtr after partial flush: rdPtrNext + number of surviving entries.
    // Position i=0 is the oldest entry (at rdPtrNext slot), i=1 next oldest, etc.
    // One-hot: bit[slot] set means that slot holds a store that committed from ROB
    // but is still waiting for dmem_resp. At most one bit can be set at any time.
    logic [LSQ_SIZE-1:0]    committed;

    always_ff @(posedge clk) begin
        if (rst) begin
            committed <= '0;
        end else begin
            // rd_en: entry consumed — clear its committed bit (priority over set below)
            if (rd_en && !empty_o)
                committed[rdPtr[PTR_SIZE-1:0]] <= 1'b0;
            // commit_i: store just retired from ROB — set its committed bit
            // triple-check: must be a store, rob_entry and PC must match LSQ head
            else if (commit_i && !empty_o && LDorST[rdPtr[PTR_SIZE-1:0]] &&
                     commit_rob_entry_i == rob_rs[rdPtr[PTR_SIZE-1:0]].rob_entry &&
                     commit_pc_i        == rob_rs[rdPtr[PTR_SIZE-1:0]].pc)
                committed[rdPtr[PTR_SIZE-1:0]] <= 1'b1;
        end
    end

    logic [LSQ_SIZE-1:0]    exec_occupied;
    logic [LSQ_SIZE-1:0]    exec_old_enough;
    logic [LSQ_SIZE-1:0]    exec_survivor;
    logic [ROB_IDX-1:0]     exec_entry_age  [LSQ_SIZE]; // relative age of each position
    logic [ROB_IDX-1:0]     exec_mispredict_age;         // threshold for comparison
    logic [PTR_SIZE:0]       exec_new_wrPtr;

    always_comb begin
        exec_mispredict_age = ROB_IDX'(exec_mispredict_rob_idx - rob_rdPtr_i);

        for (int i = 0; i < LSQ_SIZE; i++) begin
            exec_entry_age[i]  = ROB_IDX'(rob_rs[PTR_SIZE'(rdPtrNext[PTR_SIZE-1:0] + PTR_SIZE'(i))].rob_entry - rob_rdPtr_i);
            exec_occupied[i]   = {1'b0, PTR_SIZE'(i)} < (wrPtr - rdPtrNext);
            exec_old_enough[i] = (i == 0 && committed[rdPtrNext[PTR_SIZE-1:0]]) ||
                                 (exec_entry_age[i] <= exec_mispredict_age);
            exec_survivor[i]   = exec_occupied[i] && exec_old_enough[i];
        end

        exec_new_wrPtr = rdPtrNext;
        for (int i = 0; i < LSQ_SIZE; i++) begin
            if (exec_survivor[i])
                exec_new_wrPtr = exec_new_wrPtr + 1;
        end
    end

    //set ptr
    always_ff @( posedge clk ) begin
        if (rst) begin
            wrPtr <= '0;
            rdPtr <= '0;
        end else if (exec_mispredict) begin
            wrPtr <= exec_new_wrPtr;
            rdPtr <= rdPtrNext;  // rd_en may still fire same cycle
        end else begin
            wrPtr <= wrPtrNext;
            rdPtr <= rdPtrNext;
        end
    end

    // pr1 next
    always_comb begin 
        pr1_ready_next = pr1_ready;
        for(int i=0; i<LSQ_SIZE; i++) begin : pr1_wb_loop
            if((midcore_rs[i].pr1 != '0) && ((wb_alu  && (midcore_rs[i].pr1 == wb_alu_pr ))
                                            || (wb_load && (midcore_rs[i].pr1 == wb_load_pr))
                                            || (wb_jump && (midcore_rs[i].pr1 == wb_jump_pr))
                                            || (wb_cmp  && (midcore_rs[i].pr1 == wb_cmp_pr ))
                                            || (wb_mul  && (midcore_rs[i].pr1 == wb_mul_pr ))
                                        )
            ) begin : pr1_wb_match
                pr1_ready_next[i] = 1'b1;
            end : pr1_wb_match
        end : pr1_wb_loop
        if (!full_o && wr_en) begin : pr1_dispatch
            pr1_ready_next[wrPtr[PTR_SIZE-1:0]] = !MIDCORE_data_i.pr1_busy;
            if(MIDCORE_data_i.pr1_valid && ((wb_alu  && (MIDCORE_data_i.pr1 == wb_alu_pr ))
                                            || (wb_load && (MIDCORE_data_i.pr1 == wb_load_pr))
                                            || (wb_jump && (MIDCORE_data_i.pr1 == wb_jump_pr))
                                            || (wb_cmp  && (MIDCORE_data_i.pr1 == wb_cmp_pr ))
                                            || (wb_mul  && (MIDCORE_data_i.pr1 == wb_mul_pr ))
                                            )
            ) begin : pr1_dispatch_bypass
                pr1_ready_next[wrPtr[PTR_SIZE-1:0]] = 1'b1;
            end : pr1_dispatch_bypass
        end : pr1_dispatch
    end
    // pr2 next
    always_comb begin
        pr2_ready_next = pr2_ready;
        for(int i=0; i<LSQ_SIZE; i++) begin : pr2_wb_loop
            if((midcore_rs[i].pr2 != '0) && ((wb_alu  && (midcore_rs[i].pr2 == wb_alu_pr ))
                                            || (wb_load && (midcore_rs[i].pr2 == wb_load_pr))
                                            || (wb_jump && (midcore_rs[i].pr2 == wb_jump_pr))
                                            || (wb_cmp  && (midcore_rs[i].pr2 == wb_cmp_pr ))
                                            || (wb_mul  && (midcore_rs[i].pr2 == wb_mul_pr ))
                                        )
            ) begin : pr2_wb_match
                pr2_ready_next[i] = 1'b1;
            end : pr2_wb_match
        end : pr2_wb_loop
        if (!full_o && wr_en) begin : pr2_dispatch
            pr2_ready_next[wrPtr[PTR_SIZE-1:0]] = !MIDCORE_data_i.pr2_busy;
            if(MIDCORE_data_i.pr2_valid && ((wb_alu  && (MIDCORE_data_i.pr2 == wb_alu_pr ))
                                            || (wb_load && (MIDCORE_data_i.pr2 == wb_load_pr))
                                            || (wb_jump && (MIDCORE_data_i.pr2 == wb_jump_pr))
                                            || (wb_cmp  && (MIDCORE_data_i.pr2 == wb_cmp_pr ))
                                            || (wb_mul  && (MIDCORE_data_i.pr2 == wb_mul_pr ))
                                            )
            ) begin : pr2_dispatch_bypass
                pr2_ready_next[wrPtr[PTR_SIZE-1:0]] = 1'b1;
            end : pr2_dispatch_bypass
        end : pr2_dispatch
    end

    // enque data into fifo
    always_ff @( posedge clk ) begin
        if (rst) begin
            for (int i = 0; i < LSQ_SIZE; i++) begin : rst_init
                LDorST[i]      <= '0;
                rob_rs[i]      <= '0;
                midcore_rs[i]  <= '0;
                pr1_ready [i]  <= '0;
                pr2_ready [i]  <= '0;
            end
        end
        else if (!full_o && wr_en && !exec_mispredict) begin
            LDorST[wrPtr[PTR_SIZE-1:0]]      <= (MIDCORE_data_i.dispatch_to == 3'd3);
            rob_rs[wrPtr[PTR_SIZE-1:0]]      <= ROB_data_i;
            midcore_rs[wrPtr[PTR_SIZE-1:0]]  <= MIDCORE_data_i;
            pr1_ready                        <= pr1_ready_next;
            pr2_ready                        <= pr2_ready_next;
        end
        else if(wb_alu || wb_load || wb_jump || wb_cmp || wb_mul) begin
            pr1_ready <= pr1_ready_next;
            pr2_ready <= pr2_ready_next;
        end
        else begin
            LDorST[wrPtr[PTR_SIZE-1:0]]      <= LDorST[wrPtr[PTR_SIZE-1:0]]    ;
            rob_rs[wrPtr[PTR_SIZE-1:0]]      <= rob_rs[wrPtr[PTR_SIZE-1:0]]    ;
            midcore_rs[wrPtr[PTR_SIZE-1:0]]  <= midcore_rs[wrPtr[PTR_SIZE-1:0]];
            pr1_ready[wrPtr[PTR_SIZE-1:0]]   <= pr1_ready[wrPtr[PTR_SIZE-1:0]] ;
            pr2_ready[wrPtr[PTR_SIZE-1:0]]   <= pr2_ready[wrPtr[PTR_SIZE-1:0]] ;
        end
    end

    //assign data output
    assign ROB_data_o       = rob_rs[rdPtr[PTR_SIZE-1:0]];
    assign MIDCORE_data_o   = midcore_rs[rdPtr[PTR_SIZE-1:0]];
    assign LDorST_o         = LDorST[rdPtr[PTR_SIZE-1:0]];
    assign READY_o          = pr1_ready[rdPtr[PTR_SIZE-1:0]] && pr2_ready[rdPtr[PTR_SIZE-1:0]];

    // empty
    assign empty_o = (wrPtr == rdPtr);

    //full
    assign full_o = (wrPtr[PTR_SIZE] != rdPtr[PTR_SIZE]) && (wrPtr[PTR_SIZE-1:0] == rdPtr[PTR_SIZE-1:0]);
endmodule