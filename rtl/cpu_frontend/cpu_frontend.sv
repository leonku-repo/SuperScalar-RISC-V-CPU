// front end includes fetch.sv, branch predict.sv, fetch_queue.sv
// front end will be passed into decode stage
module cpu_frontend
import rv32i_types::*;
(
    input   logic           clk,
    input   logic           rst,

    // Instruction memory port (read-only)
    output  logic   [31:0]  imem_addr,
    output  logic           imem_read,
    input   logic   [31:0]  imem_rdata,
    input   logic           imem_resp,

    // branch misprediction recovery
    input   logic           branch_mispredict,
    input   logic   [31:0]  recover_pc,
    input   logic           commit_is_branch,
    input   logic           commit_is_jump,
    input   logic           commit_branch_actual_taken,
    input   logic   [31:0]  commit_pc,

    // output from frontend to decode
    input   logic           decode_request,
    output  logic           empty_o,
    output  logic           branch_taken_o,
    output  logic   [31:0]  pc_o,
    output  logic   [31:0]  pc_next_o,
    output  logic   [31:0]  inst_o
);
    logic           fetchq_full;
    logic   [31:0]  branch_target;
    logic           branch_taken;
    logic           branch_valid;
    logic   [31:0]  inst_i;
    logic   [31:0]  pc_i;
    logic   [31:0]  pc_next_i;
    logic           branch_taken_i;
    logic           valid_fetch;

    branch_predict branch_predict(
        .pc_i(pc_i),
        .branch_target(branch_target),
        .branch_taken(branch_taken),
        .branch_valid(branch_valid),
        .commit_is_branch(commit_is_branch),
        .commit_is_jump(commit_is_jump),
        .commit_mispredict(branch_mispredict),
        .commit_branch_actual_taken(commit_branch_actual_taken),
        .commit_pc(commit_pc),
        .commit_target(recover_pc),
        .*
    );

    fetch fetch (
        // from frontend control signal
        .recover_pc(recover_pc),
        .flush(branch_mispredict),
        .freeze(fetchq_full),
        // from branch prdictor
        .branch_target(branch_target),
        .branch_taken(branch_taken),
        .branch_valid(branch_valid),
        // to fetch queue
        .inst_out(inst_i),
        .pc_out(pc_i),
        .pc_next_out(pc_next_i),
        .branch_taken_o(branch_taken_i),
        .fetchq_wr(valid_fetch),
        .*
    );

    fetch_queue fetch_queue(
        .wr_en(valid_fetch),
        .rd_en(decode_request),
        .flush(branch_mispredict),
        .branch_taken_i(branch_taken_i),
        .pc_i(pc_i),
        .pc_next_i(pc_next_i),
        .inst_i(inst_i),
        .empty_o(empty_o),
        .full_o(fetchq_full),
        .branch_taken_o(branch_taken_o),
        .pc_o(pc_o),
        .pc_next_o(pc_next_o),
        .inst_o(inst_o),
        .*
    );



endmodule : cpu_frontend