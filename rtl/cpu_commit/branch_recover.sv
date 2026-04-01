// this module takes in commited rob entry, and announce branch mispredict signals
module branch_recovery
import rv32i_types::*;
(
    input   rob_t               rob_data_i,
    input   logic               commit,

    output  logic               commit_is_branch,
    output  logic               commit_is_jump,
    output  logic               commit_branch_actual_taken,
    output  logic   [31:0]      commit_branch_pc,
    output  logic               mispredict,
    output  logic   [31:0]      recover_pc
);
    assign commit_is_branch           = commit && rob_data_i.is_branch;
    assign commit_is_jump             = commit && rob_data_i.is_jump;
    assign mispredict                 = commit && rob_data_i.mispredict;
    assign recover_pc                 = rob_data_i.target_pc;
    assign commit_branch_pc           = rob_data_i.pc;
    assign commit_branch_actual_taken = commit && rob_data_i.branch_actual_taken;

endmodule