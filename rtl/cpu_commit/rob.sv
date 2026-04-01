module rob
import rv32i_types::*;
#(
    parameter fifo_size = 16,
    parameter ptr_width = $clog2(fifo_size)
)(
    input   logic                       clk,
    input   logic                       rst,
    input   logic                       wr_en,      // this is from rename2. allocate a new entry when done renaming
    input   logic                       rd_en,      // this is if ready to commit, we pop rob entry
    input   logic                       flush,      // when mispredict
    // from rename2, to allocate new entry
    input   rob_t                       rob_data_i, 
    // from write back, update rob when done execution
    input   rob_t                       alu_ROB_exec_i,
    input   rob_t                       cmp_ROB_exec_i,
    input   rob_t                       jump_ROB_exec_i,
    input   rob_t                       mem_ROB_exec_i,
    input   rob_t                       mul_ROB_exec_i,

    // TO MIDCORE
    output  logic   [ptr_width-1:0]     wrPtr_o,
    // TO EXECUTE
    output  logic   [ptr_width-1:0]     rdPtr_o,
    // Out
    output  rob_t                       data_o,
    output  logic                       empty_o,
    output  logic                       full_o
);
    //define FIFO
    rob_t   mem         [0:fifo_size-1];
    rob_t   mem_next    [0:fifo_size-1];

    //ptr has additional one bit
    logic[ptr_width:0] wrPtr, wrPtrNext;
    logic[ptr_width:0] rdPtr, rdPtrNext;

    logic   wb_update;

    // set ptr_next
    always_comb begin
        wrPtrNext = wrPtr;
        rdPtrNext = rdPtr;
        if (wr_en) begin
            wrPtrNext = wrPtr + 1;
        end
        if (rd_en) begin
            rdPtrNext = rdPtr + 1;
        end
    end

    //set ptr 
    always_ff @( posedge clk ) begin 
        if(rst || flush) begin
            wrPtr <= '0;
            rdPtr <= '0;
        end
        else begin
            wrPtr <= wrPtrNext;
            rdPtr <= rdPtrNext;
        end
    end

    // //set mem_next
    // always_comb begin 
    //     mem_next = mem;
    //     // rename2 new entry
    //     mem_next[wrPtr[ptr_width-1:0]] = wr_en ? rob_data_i : mem[wrPtr[ptr_width-1:0]];
    //     // write back alu
    //     mem_next[alu_ROB_exec_i.rob_entry] = alu_ROB_exec_i.done ? alu_ROB_exec_i : mem[alu_ROB_exec_i.rob_entry];
    //     // write back cmp
    //     mem_next[cmp_ROB_exec_i.rob_entry] = cmp_ROB_exec_i.done ? cmp_ROB_exec_i : mem[cmp_ROB_exec_i.rob_entry];
    //     // write back jump
    //     mem_next[jump_ROB_exec_i.rob_entry] = jump_ROB_exec_i.done ? jump_ROB_exec_i : mem[jump_ROB_exec_i.rob_entry];
    //     // write back mem
    //     mem_next[mem_ROB_exec_i.rob_entry] = mem_ROB_exec_i.done ? mem_ROB_exec_i : mem[mem_ROB_exec_i.rob_entry];
    // end
    
    //set mem_next (single driver — priority: default < dispatch < writeback)
    always_comb begin
        // default: hold all fields for every slot
        for (int i = 0; i < ROB_SIZE; i++) begin : defaults
            mem_next[i] = mem[i];
        end : defaults

        // dispatch: allocate new entry — copy all fields from rob_data_i,
        // then force writeback fields to clean/zero so stale data from the
        // previous occupant cannot cause a spurious commit.
        if (wr_en) begin : dispatch
            mem_next[wrPtr[ptr_width-1:0]]            = rob_data_i  ;
            mem_next[wrPtr[ptr_width-1:0]].done       = 1'b0        ;
            mem_next[wrPtr[ptr_width-1:0]].rs1_rdata  = '0          ;
            mem_next[wrPtr[ptr_width-1:0]].rs2_rdata  = '0          ;
            mem_next[wrPtr[ptr_width-1:0]].rd_wdata   = '0          ;
            mem_next[wrPtr[ptr_width-1:0]].mem_addr   = '0          ;
            mem_next[wrPtr[ptr_width-1:0]].mem_rmask  = '0          ;
            mem_next[wrPtr[ptr_width-1:0]].mem_wmask  = '0          ;
            mem_next[wrPtr[ptr_width-1:0]].mem_rdata  = '0          ;
            mem_next[wrPtr[ptr_width-1:0]].mem_wdata  = '0          ;
            mem_next[wrPtr[ptr_width-1:0]].mispredict          = '0          ;
            mem_next[wrPtr[ptr_width-1:0]].target_pc           = '0          ;
            mem_next[wrPtr[ptr_width-1:0]].branch_actual_taken = '0          ;
        end : dispatch

        // writeback: update execution results (highest priority — overrides
        // dispatch if writeback fires for the same slot in the same cycle)
        if (alu_ROB_exec_i.done) begin : wb_alu
            if (!mem[alu_ROB_exec_i.rob_entry].done) begin
                mem_next[alu_ROB_exec_i.rob_entry].pc_next             = alu_ROB_exec_i.pc_next            ;
                mem_next[alu_ROB_exec_i.rob_entry].rs1_rdata           = alu_ROB_exec_i.rs1_rdata          ;
                mem_next[alu_ROB_exec_i.rob_entry].rs2_rdata           = alu_ROB_exec_i.rs2_rdata          ;
                mem_next[alu_ROB_exec_i.rob_entry].rd_wdata            = alu_ROB_exec_i.rd_wdata           ;
                mem_next[alu_ROB_exec_i.rob_entry].mem_addr            = alu_ROB_exec_i.mem_addr           ;
                mem_next[alu_ROB_exec_i.rob_entry].mem_rmask           = alu_ROB_exec_i.mem_rmask          ;
                mem_next[alu_ROB_exec_i.rob_entry].mem_wmask           = alu_ROB_exec_i.mem_wmask          ;
                mem_next[alu_ROB_exec_i.rob_entry].mem_rdata           = alu_ROB_exec_i.mem_rdata          ;
                mem_next[alu_ROB_exec_i.rob_entry].mem_wdata           = alu_ROB_exec_i.mem_wdata          ;
                mem_next[alu_ROB_exec_i.rob_entry].mispredict          = alu_ROB_exec_i.mispredict         ;
                mem_next[alu_ROB_exec_i.rob_entry].target_pc           = alu_ROB_exec_i.target_pc          ;
                mem_next[alu_ROB_exec_i.rob_entry].branch_actual_taken = alu_ROB_exec_i.branch_actual_taken;
            end
            mem_next[alu_ROB_exec_i.rob_entry].done = 1'b1;
        end : wb_alu

        if (cmp_ROB_exec_i.done) begin : wb_cmp
            if (!mem[cmp_ROB_exec_i.rob_entry].done) begin
                mem_next[cmp_ROB_exec_i.rob_entry].pc_next             = cmp_ROB_exec_i.pc_next            ;
                mem_next[cmp_ROB_exec_i.rob_entry].rs1_rdata           = cmp_ROB_exec_i.rs1_rdata          ;
                mem_next[cmp_ROB_exec_i.rob_entry].rs2_rdata           = cmp_ROB_exec_i.rs2_rdata          ;
                mem_next[cmp_ROB_exec_i.rob_entry].rd_wdata            = cmp_ROB_exec_i.rd_wdata           ;
                mem_next[cmp_ROB_exec_i.rob_entry].mem_addr            = cmp_ROB_exec_i.mem_addr           ;
                mem_next[cmp_ROB_exec_i.rob_entry].mem_rmask           = cmp_ROB_exec_i.mem_rmask          ;
                mem_next[cmp_ROB_exec_i.rob_entry].mem_wmask           = cmp_ROB_exec_i.mem_wmask          ;
                mem_next[cmp_ROB_exec_i.rob_entry].mem_rdata           = cmp_ROB_exec_i.mem_rdata          ;
                mem_next[cmp_ROB_exec_i.rob_entry].mem_wdata           = cmp_ROB_exec_i.mem_wdata          ;
                mem_next[cmp_ROB_exec_i.rob_entry].mispredict          = cmp_ROB_exec_i.mispredict         ;
                mem_next[cmp_ROB_exec_i.rob_entry].target_pc           = cmp_ROB_exec_i.target_pc          ;
                mem_next[cmp_ROB_exec_i.rob_entry].branch_actual_taken = cmp_ROB_exec_i.branch_actual_taken;
            end
            mem_next[cmp_ROB_exec_i.rob_entry].done = 1'b1;
        end : wb_cmp

        if (jump_ROB_exec_i.done) begin : wb_jump
            if (!mem[jump_ROB_exec_i.rob_entry].done) begin
                mem_next[jump_ROB_exec_i.rob_entry].pc_next             = jump_ROB_exec_i.pc_next            ;
                mem_next[jump_ROB_exec_i.rob_entry].rs1_rdata           = jump_ROB_exec_i.rs1_rdata          ;
                mem_next[jump_ROB_exec_i.rob_entry].rs2_rdata           = jump_ROB_exec_i.rs2_rdata          ;
                mem_next[jump_ROB_exec_i.rob_entry].rd_wdata            = jump_ROB_exec_i.rd_wdata           ;
                mem_next[jump_ROB_exec_i.rob_entry].mem_addr            = jump_ROB_exec_i.mem_addr           ;
                mem_next[jump_ROB_exec_i.rob_entry].mem_rmask           = jump_ROB_exec_i.mem_rmask          ;
                mem_next[jump_ROB_exec_i.rob_entry].mem_wmask           = jump_ROB_exec_i.mem_wmask          ;
                mem_next[jump_ROB_exec_i.rob_entry].mem_rdata           = jump_ROB_exec_i.mem_rdata          ;
                mem_next[jump_ROB_exec_i.rob_entry].mem_wdata           = jump_ROB_exec_i.mem_wdata          ;
                mem_next[jump_ROB_exec_i.rob_entry].mispredict          = jump_ROB_exec_i.mispredict         ;
                mem_next[jump_ROB_exec_i.rob_entry].target_pc           = jump_ROB_exec_i.target_pc          ;
                mem_next[jump_ROB_exec_i.rob_entry].branch_actual_taken = jump_ROB_exec_i.branch_actual_taken;
            end
            mem_next[jump_ROB_exec_i.rob_entry].done = 1'b1;
        end : wb_jump

        if (mem_ROB_exec_i.done) begin : wb_mem
            if (!mem[mem_ROB_exec_i.rob_entry].done) begin
                mem_next[mem_ROB_exec_i.rob_entry].pc_next             = mem_ROB_exec_i.pc_next            ;
                mem_next[mem_ROB_exec_i.rob_entry].rs1_rdata           = mem_ROB_exec_i.rs1_rdata          ;
                mem_next[mem_ROB_exec_i.rob_entry].rs2_rdata           = mem_ROB_exec_i.rs2_rdata          ;
                mem_next[mem_ROB_exec_i.rob_entry].rd_wdata            = mem_ROB_exec_i.rd_wdata           ;
                mem_next[mem_ROB_exec_i.rob_entry].mem_addr            = mem_ROB_exec_i.mem_addr           ;
                mem_next[mem_ROB_exec_i.rob_entry].mem_rmask           = mem_ROB_exec_i.mem_rmask          ;
                mem_next[mem_ROB_exec_i.rob_entry].mem_wmask           = mem_ROB_exec_i.mem_wmask          ;
                mem_next[mem_ROB_exec_i.rob_entry].mem_rdata           = mem_ROB_exec_i.mem_rdata          ;
                mem_next[mem_ROB_exec_i.rob_entry].mem_wdata           = mem_ROB_exec_i.mem_wdata          ;
                mem_next[mem_ROB_exec_i.rob_entry].mispredict          = mem_ROB_exec_i.mispredict         ;
                mem_next[mem_ROB_exec_i.rob_entry].target_pc           = mem_ROB_exec_i.target_pc          ;
                mem_next[mem_ROB_exec_i.rob_entry].branch_actual_taken = mem_ROB_exec_i.branch_actual_taken;
            end
            mem_next[mem_ROB_exec_i.rob_entry].done = 1'b1;
        end : wb_mem

        if (mul_ROB_exec_i.done) begin : wb_mul
            if (!mem[mul_ROB_exec_i.rob_entry].done) begin
                mem_next[mul_ROB_exec_i.rob_entry].pc_next             = mul_ROB_exec_i.pc_next            ;
                mem_next[mul_ROB_exec_i.rob_entry].rs1_rdata           = mul_ROB_exec_i.rs1_rdata          ;
                mem_next[mul_ROB_exec_i.rob_entry].rs2_rdata           = mul_ROB_exec_i.rs2_rdata          ;
                mem_next[mul_ROB_exec_i.rob_entry].rd_wdata            = mul_ROB_exec_i.rd_wdata           ;
                mem_next[mul_ROB_exec_i.rob_entry].mem_addr            = mul_ROB_exec_i.mem_addr           ;
                mem_next[mul_ROB_exec_i.rob_entry].mem_rmask           = mul_ROB_exec_i.mem_rmask          ;
                mem_next[mul_ROB_exec_i.rob_entry].mem_wmask           = mul_ROB_exec_i.mem_wmask          ;
                mem_next[mul_ROB_exec_i.rob_entry].mem_rdata           = mul_ROB_exec_i.mem_rdata          ;
                mem_next[mul_ROB_exec_i.rob_entry].mem_wdata           = mul_ROB_exec_i.mem_wdata          ;
                mem_next[mul_ROB_exec_i.rob_entry].mispredict          = mul_ROB_exec_i.mispredict         ;
                mem_next[mul_ROB_exec_i.rob_entry].target_pc           = mul_ROB_exec_i.target_pc          ;
                mem_next[mul_ROB_exec_i.rob_entry].branch_actual_taken = mul_ROB_exec_i.branch_actual_taken;
            end
            mem_next[mul_ROB_exec_i.rob_entry].done = 1'b1;
        end : wb_mul
    end

    assign wb_update = alu_ROB_exec_i.done | cmp_ROB_exec_i.done | jump_ROB_exec_i.done | mem_ROB_exec_i.done | mul_ROB_exec_i.done;

    logic   f1, f2, f3;
    // enque data into fifo
    always_ff @( posedge clk ) begin
        f1 <= '0;
        f2 <= '0;
        f3 <= '0;
        if(rst || flush) begin
            for(int i=0; i<fifo_size; i++) begin : rst_init
                mem[i] <= '0;
            end :rst_init
            f1 <= '1;
        end
        else if ((!full_o && wr_en) || wb_update) begin
            // mem <= mem_next;
            for(int i=0; i<fifo_size; i++) begin : update_rob
                mem[i] <= mem_next[i];
            end :update_rob
            f2 <= '1;
        end
        else begin
            mem[wrPtr[ptr_width-1:0]] <= mem[wrPtr[ptr_width-1:0]];
            f3 <= '1;
        end
    end

    //assign data output  
    assign data_o = mem[rdPtr[ptr_width-1:0]];

    // empty
    assign empty_o = (wrPtr == rdPtr);

    //full
    assign full_o = (wrPtr[ptr_width] != rdPtr[ptr_width]) && (wrPtr[ptr_width-1:0] == rdPtr[ptr_width-1:0]);

    assign wrPtr_o = wrPtr[ptr_width-1:0];
    assign rdPtr_o = rdPtr[ptr_width-1:0];

endmodule