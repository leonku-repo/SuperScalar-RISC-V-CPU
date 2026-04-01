// this sends out commit signal from rob and send out mispredict signals
// also updates architectural RAT
module cpu_commit
import rv32i_types::*;
(
    input   logic                       clk,
    input   logic                       rst,

    // from rename 2
    input   rob_t                       rob_data_i,
    // from write back
    input   rob_t                       alu_ROB_exec_i,
    input   rob_t                       cmp_ROB_exec_i,
    input   rob_t                       jump_ROB_exec_i,
    input   rob_t                       mem_ROB_exec_i,
    input   rob_t                       mul_ROB_exec_i,

    output  logic   [ROB_IDX-1:0]       rob_wr_idx,
    output  logic   [ROB_IDX-1:0]       rob_rd_idx,
    output  logic                       rob_full,

    output  logic                       commit,
    output  rob_t                       commit_rob_o,   //for rvfi and others

    output  logic                       mispredict,
    output  logic   [31:0]              recover_pc,
    output  logic                       commit_is_branch,
    output  logic                       commit_is_jump,
    output  logic                       commit_branch_actual_taken,
    output  logic   [31:0]              commit_branch_pc,

    output  logic [PRF_IDX-1:0]         arat_o [32]
);
    logic   rob_empty;

    assign commit = !rob_empty && commit_rob_o.valid && commit_rob_o.done;

    rob #(
        .fifo_size(ROB_SIZE)
    ) rob (
        .clk(clk),
        .rst(rst),
        .wr_en(rob_data_i.valid && !mispredict),      
        .rd_en(commit),      
        .flush(mispredict),    
        .rob_data_i(rob_data_i), 
        .alu_ROB_exec_i(alu_ROB_exec_i),
        .cmp_ROB_exec_i(cmp_ROB_exec_i),
        .jump_ROB_exec_i(jump_ROB_exec_i),
        .mem_ROB_exec_i(mem_ROB_exec_i),
        .mul_ROB_exec_i(mul_ROB_exec_i),
        .wrPtr_o(rob_wr_idx),
        .rdPtr_o(rob_rd_idx),
        .data_o(commit_rob_o),
        .empty_o(rob_empty),
        .full_o(rob_full)
    );

    arat arat(
        .clk(clk),
        .rst(rst),
        .commit(commit),
        .rd_valid(commit_rob_o.rd_valid),
        .rd_arch(commit_rob_o.rd_arch),
        .rd_pr(commit_rob_o.new_p),
        .arat_o(arat_o) 
    );

    branch_recovery branch_recovery(
        .rob_data_i(commit_rob_o),
        .commit(commit),
        .mispredict(mispredict),
        .recover_pc(recover_pc),
        .commit_is_branch(commit_is_branch),
        .commit_is_jump(commit_is_jump),
        .commit_branch_actual_taken(commit_branch_actual_taken),
        .commit_branch_pc(commit_branch_pc)
    );


endmodule