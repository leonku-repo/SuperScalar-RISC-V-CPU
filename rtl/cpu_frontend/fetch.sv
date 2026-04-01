module fetch
import rv32i_types::*;
(
    input   logic           clk,
    input   logic           rst,

    // front end control signal
    input   logic   [31:0]  recover_pc,
    input   logic           flush,
    input   logic           freeze,

    // Instruction memory port (read-only)
    output  logic   [31:0]  imem_addr,
    output  logic           imem_read,
    input   logic   [31:0]  imem_rdata,
    input   logic           imem_resp,

    // Branch predictor input
    input   logic   [31:0]  branch_target,
    input   logic           branch_taken,
    input   logic           branch_valid,

    // fetch queue output
    output  logic   [31:0]  inst_out,
    output  logic   [31:0]  pc_out,
    output  logic   [31:0]  pc_next_out,
    output  logic           branch_taken_o,
    output  logic           fetchq_wr
); 
    logic [31:0] pc, pc_next;
    logic        stale_in_flight;

    always_ff @( posedge clk ) begin : set_pc
        if(rst)
            pc <= RESET_PC;
        else if(flush)
            pc <= recover_pc;
        else if(imem_resp && !stale_in_flight)
            pc <= pc_next;
        else
            pc <= pc;
    end

    always_comb begin : set_pc_next
        pc_next = pc;
        if(rst)
            // pc_next = RESET_PC + 32'd4;
            pc_next = RESET_PC;
        else if(flush)
            pc_next = recover_pc;
        else if(freeze)
            pc_next = pc;
        else if(branch_valid && branch_taken)
            pc_next = branch_target;
        else 
            pc_next = pc + 32'd4;
    end

    always_ff @(posedge clk) begin : track_stale
        if (rst)
            stale_in_flight <= 1'b0;
        else if (flush && !imem_resp)   // flush while no resp: stale request still in flight
            stale_in_flight <= 1'b1;
        else if (imem_resp)             // any response clears the flag
            stale_in_flight <= 1'b0;
    end : track_stale

    assign imem_addr = pc;
    assign imem_read = !imem_resp || !freeze;

    assign fetchq_wr = imem_resp && !flush && !stale_in_flight;
    assign inst_out = imem_rdata;
    assign pc_out = pc;
    assign pc_next_out = pc_next;
    assign branch_taken_o = branch_valid && branch_taken;


endmodule : fetch