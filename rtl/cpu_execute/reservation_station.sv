module reservation_station
import rv32i_types::*;
#(
    parameter RS_SIZE = 4,
    parameter PTR_SIZE = $clog2(RS_SIZE)
)(
    // from rename
    input   logic                       clk,
    input   logic                       rst,
    input   logic                       wr_en,
    input   logic                       rd_en,
    // Execute-time mispredict: partial invalidation
    input   logic                       exec_mispredict,
    input   logic   [ROB_IDX-1:0]       exec_mispredict_rob_idx,
    input   logic   [ROB_IDX-1:0]       rdPtr,
    // Spec-load mispredict: partial invalidation
    input   logic                       spec_load_mispredict,
    input   logic   [ROB_IDX-1:0]       spec_load_rob_idx,
    input   rob_t                       ROB_data_i,
    input   midcore_t                   MIDCORE_data_i,
    // from wb
    input   logic                       wb_alu,
    input   logic                       wb_load,
    input   logic                       wb_jump,
    input   logic                       wb_cmp,
    input   logic                       wb_mul,
    input   logic                       wb_fwd,
    input   logic       [PRF_IDX-1:0]   wb_alu_pr,
    input   logic       [PRF_IDX-1:0]   wb_load_pr,
    input   logic       [PRF_IDX-1:0]   wb_jump_pr,
    input   logic       [PRF_IDX-1:0]   wb_cmp_pr,
    input   logic       [PRF_IDX-1:0]   wb_mul_pr,
    input   logic       [PRF_IDX-1:0]   wb_fwd_pr,
    // output
    output  rob_t                       ROB_data_o,
    output  midcore_t                   MIDCORE_data_o,
    output  logic                       empty_o,
    output  logic                       full_o
);

    logic       valid       [RS_SIZE];
    rob_t       rob_rs      [RS_SIZE];
    midcore_t   midcore_rs  [RS_SIZE];
    logic       pr1_ready   [RS_SIZE];
    logic       pr2_ready   [RS_SIZE];

    logic       valid_next       [RS_SIZE];
    rob_t       rob_rs_next      [RS_SIZE];
    midcore_t   midcore_rs_next  [RS_SIZE];
    logic       pr1_ready_next   [RS_SIZE];
    logic       pr2_ready_next   [RS_SIZE];

    logic   [PTR_SIZE-1:0]  wr_idx, rd_idx;
    logic                   wr_idx_valid, rd_idx_valid;

    // set output
    always_comb begin
        empty_o = 1'b1;
        for (int i = 0; i < RS_SIZE; i++) begin : empty_check
            if (valid[i]) empty_o = 1'b0;
        end
    end
    always_comb begin
        full_o = 1'b1;
        for (int i = 0; i < RS_SIZE; i++) begin : full_check
            if (!valid[i]) full_o = 1'b0;
        end
    end
    assign ROB_data_o = rd_idx_valid ? rob_rs[rd_idx] : '0;
    assign MIDCORE_data_o = rd_idx_valid ? midcore_rs[rd_idx] : '0;
    
    // set wr/rd index
    always_comb begin 
        wr_idx_valid = '0;
        wr_idx = '0;
        for(int i=0; i<RS_SIZE; i++) begin : wr_idx_loop
            if(!valid[i]) begin : wr_found
                wr_idx_valid = 1'b1;
                wr_idx = i[PTR_SIZE-1:0];
            end : wr_found
        end : wr_idx_loop
    end
    always_comb begin 
        rd_idx_valid = '0;
        rd_idx = '0;
        for(int i=0; i<RS_SIZE; i++) begin : rd_idx_loop
            if(valid[i] && pr1_ready[i] && pr2_ready[i]) begin : rd_found
                rd_idx_valid = 1'b1;
                rd_idx = i[PTR_SIZE-1:0];
            end : rd_found
        end : rd_idx_loop
    end
    // set **_next
    always_comb begin
        valid_next = valid;
        if (!full_o  && wr_en && wr_idx_valid && !exec_mispredict && !spec_load_mispredict) valid_next[wr_idx] = 1'b1;
        if (!empty_o && rd_en && rd_idx_valid) valid_next[rd_idx] = 1'b0;
    end
    always_comb begin
        rob_rs_next = rob_rs;
        if (!full_o && wr_en && wr_idx_valid && !exec_mispredict && !spec_load_mispredict) rob_rs_next[wr_idx] = ROB_data_i;
    end
    always_comb begin
        midcore_rs_next = midcore_rs;
        if (!full_o && wr_en && wr_idx_valid && !exec_mispredict && !spec_load_mispredict) midcore_rs_next[wr_idx] = MIDCORE_data_i;
    end
    // pr1 next
    always_comb begin
        pr1_ready_next = pr1_ready;
        for(int i=0; i<RS_SIZE; i++) begin : pr1_wb_loop
            if(valid[i] && ((wb_alu  && (midcore_rs[i].pr1 == wb_alu_pr ))
                            || (wb_load && (midcore_rs[i].pr1 == wb_load_pr))
                            || (wb_jump && (midcore_rs[i].pr1 == wb_jump_pr))
                            || (wb_cmp  && (midcore_rs[i].pr1 == wb_cmp_pr ))
                            || (wb_mul  && (midcore_rs[i].pr1 == wb_mul_pr ))
                            || (wb_fwd  && (midcore_rs[i].pr1 == wb_fwd_pr ))
                        )
            ) begin : pr1_wb_match
                pr1_ready_next[i] = 1'b1;
            end : pr1_wb_match
        end : pr1_wb_loop
        if (!full_o && wr_en && wr_idx_valid && !exec_mispredict && !spec_load_mispredict) begin : pr1_dispatch
            pr1_ready_next[wr_idx] = !MIDCORE_data_i.pr1_busy;
            if(MIDCORE_data_i.pr1_valid && ((wb_alu  && (MIDCORE_data_i.pr1 == wb_alu_pr ))
                                            || (wb_load && (MIDCORE_data_i.pr1 == wb_load_pr))
                                            || (wb_jump && (MIDCORE_data_i.pr1 == wb_jump_pr))
                                            || (wb_cmp  && (MIDCORE_data_i.pr1 == wb_cmp_pr ))
                                            || (wb_mul  && (MIDCORE_data_i.pr1 == wb_mul_pr ))
                                            || (wb_fwd  && (MIDCORE_data_i.pr1 == wb_fwd_pr ))
                                            )
            ) begin : pr1_dispatch_bypass
                pr1_ready_next[wr_idx] = 1'b1;
            end : pr1_dispatch_bypass
        end : pr1_dispatch
    end
    // pr2 next
    always_comb begin
        pr2_ready_next = pr2_ready;
        for(int i=0; i<RS_SIZE; i++) begin : pr2_wb_loop
            if(valid[i] && ((wb_alu  && (midcore_rs[i].pr2 == wb_alu_pr ))
                            || (wb_load && (midcore_rs[i].pr2 == wb_load_pr))
                            || (wb_jump && (midcore_rs[i].pr2 == wb_jump_pr))
                            || (wb_cmp  && (midcore_rs[i].pr2 == wb_cmp_pr ))
                            || (wb_mul  && (midcore_rs[i].pr2 == wb_mul_pr ))
                            || (wb_fwd  && (midcore_rs[i].pr2 == wb_fwd_pr ))
                        )
            ) begin : pr2_wb_match
                pr2_ready_next[i] = 1'b1;
            end : pr2_wb_match
        end : pr2_wb_loop
        if (!full_o && wr_en && wr_idx_valid) begin : pr2_dispatch
            pr2_ready_next[wr_idx] = !MIDCORE_data_i.pr2_busy;
            if(MIDCORE_data_i.pr2_valid && ((wb_alu  && (MIDCORE_data_i.pr2 == wb_alu_pr ))
                                            || (wb_load && (MIDCORE_data_i.pr2 == wb_load_pr))
                                            || (wb_jump && (MIDCORE_data_i.pr2 == wb_jump_pr))
                                            || (wb_cmp  && (MIDCORE_data_i.pr2 == wb_cmp_pr ))
                                            || (wb_mul  && (MIDCORE_data_i.pr2 == wb_mul_pr ))
                                            || (wb_fwd  && (MIDCORE_data_i.pr2 == wb_fwd_pr ))
                                            )
            ) begin : pr2_dispatch_bypass
                pr2_ready_next[wr_idx] = 1'b1;
            end : pr2_dispatch_bypass
        end : pr2_dispatch
    end
    // update rs register
    always_ff @( posedge clk ) begin
        if (rst) begin
            for (int i = 0; i < RS_SIZE; i++) begin : rst_init
                valid[i]      <= '0;
                rob_rs[i]     <= '0;
                midcore_rs[i] <= '0;
                pr1_ready[i]  <= '0;
                pr2_ready[i]  <= '0;
            end
        end else begin
            // Normal dispatch / issue / wakeup updates
            if ((!empty_o && rd_en) || (!full_o && wr_en && !exec_mispredict && !spec_load_mispredict)) begin
                valid      <= valid_next;
                rob_rs     <= rob_rs_next;
                midcore_rs <= midcore_rs_next;
                pr1_ready  <= pr1_ready_next;
                pr2_ready  <= pr2_ready_next;
            end else if (wb_alu || wb_load || wb_jump || wb_cmp || wb_mul || wb_fwd) begin
                pr1_ready <= pr1_ready_next;
                pr2_ready <= pr2_ready_next;
            end

            // Partial invalidation: clear entries younger than exec_mispredict_rob_idx.
            // Placed after normal update so it takes priority (last assignment wins).
            if (exec_mispredict) begin
                for (int i = 0; i < RS_SIZE; i++) begin : partial_flush_exec
                    if (valid[i] &&
                        ROB_IDX'(rob_rs[i].rob_entry - rdPtr) >
                        ROB_IDX'(exec_mispredict_rob_idx - rdPtr))
                        valid[i] <= 1'b0;
                end : partial_flush_exec
            end

            // Spec-load mispredict: clear entries younger than spec_load_rob_idx.
            if (spec_load_mispredict) begin
                for (int i = 0; i < RS_SIZE; i++) begin : partial_flush_spec
                    if (valid[i] &&
                        ROB_IDX'(rob_rs[i].rob_entry - rdPtr) >
                        ROB_IDX'(spec_load_rob_idx - rdPtr))
                        valid[i] <= 1'b0;
                end : partial_flush_spec
            end
        end
    end
endmodule