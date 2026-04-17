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

    // Execute-time recovery (PC redirect + pipeline flush)
    input   logic           exec_mispredict,
    input   logic   [31:0]  exec_recover_pc,
    input   logic   [ROB_IDX-1:0]  exec_mispredict_rob_idx,
    // Spec-load mispredict recovery
    input   logic           spec_load_mispredict,
    input   logic   [31:0]  spec_load_recover_pc,
    input   logic   [ROB_IDX-1:0]  spec_load_rob_idx,
    // ROB rdPtr for age comparison
    input   logic   [ROB_IDX-1:0]  rdPtr_i,
    // Commit-time TAGE/BTB training
    input   logic           commit_mispredict,        // ROB-head mispredict flag; for TAGE pred derivation + flush
    input   logic   [31:0]  commit_target_pc,         // actual target of committing branch; for BTB update_target
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
    logic           flush_combined;
    logic   [31:0]  recover_pc_combined;
    logic   [31:0]  branch_target;
    logic           branch_taken;
    logic           branch_valid;
    logic   [31:0]  inst_i;
    logic   [31:0]  pc_i;
    logic   [31:0]  pc_next_i;
    logic           branch_taken_i;
    logic           valid_fetch;

    assign flush_combined = exec_mispredict || spec_load_mispredict;

    always_comb begin
        recover_pc_combined = exec_recover_pc;
        if (exec_mispredict && spec_load_mispredict) begin
            if (ROB_IDX'(exec_mispredict_rob_idx - rdPtr_i) <= ROB_IDX'(spec_load_rob_idx - rdPtr_i))
                recover_pc_combined = exec_recover_pc;
            else
                recover_pc_combined = spec_load_recover_pc;
        end else if (spec_load_mispredict)
            recover_pc_combined = spec_load_recover_pc;
    end

    branch_predict branch_predict(
        .pc_i(pc_i),
        .branch_target(branch_target),
        .branch_taken(branch_taken),
        .branch_valid(branch_valid),
        .commit_is_branch(commit_is_branch),
        .commit_is_jump(commit_is_jump),
        .commit_mispredict(commit_mispredict),
        .commit_branch_actual_taken(commit_branch_actual_taken),
        .commit_pc(commit_pc),
        .commit_target(commit_target_pc),
        .*
    );

    fetch fetch (
        // from frontend control signal
        .recover_pc(recover_pc_combined),
        .flush(flush_combined),
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
        .flush(flush_combined),
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