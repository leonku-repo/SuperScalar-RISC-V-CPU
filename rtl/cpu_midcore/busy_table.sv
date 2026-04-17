module busy_table
import rv32i_types::*;
(
    input   logic                   clk,
    input   logic                   rst,

    input   logic   [PRF_IDX-1:0]   pr1_i,
    input   logic   [PRF_IDX-1:0]   pr2_i,
    output  logic                   pr1_busy,
    output  logic                   pr2_busy,
    // update when rename done: set BT[rd_pr] = 1'b1, make busy
    input   logic                   rename_update,
    input   logic   [PRF_IDX-1:0]   rename_update_pr,
    // update when writeback done: set BT[rd_pr] = 1'b0, make not busy
    // input   logic                   wb_update,
    // input   logic   [PRF_IDX-1:0]   wb_update_pr,   
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
    // rebuild on exec_mispredict or spec_load_mispredict: ROB bt_rebuild_o already
    // accounts for both flush boundaries combinationally, so one input suffices.
    input   logic                   exec_mispredict,
    input   logic                   spec_load_mispredict,
    input   logic   [PRF_SIZE-1:0]  bt_rebuild_i
);
    logic   [PRF_SIZE-1:0]  bt, bt_next;
    logic   wb_update;
    assign wb_update = wb_alu | wb_load | wb_jump | wb_cmp | wb_mul | wb_fwd;

    always_ff @( posedge clk ) begin
        if(rst)
            bt <= '0;
        else if(exec_mispredict || spec_load_mispredict)
            bt <= bt_rebuild_i;
        else if(rename_update || wb_update)
            bt <= bt_next;
        else
            bt <= bt;
    end

    always_comb begin
        bt_next = bt;
        if (rename_update) bt_next[rename_update_pr] = 1'b1;
        if (wb_alu)        bt_next[wb_alu_pr]        = 1'b0;
        if (wb_load)       bt_next[wb_load_pr]       = 1'b0;
        if (wb_jump)       bt_next[wb_jump_pr]       = 1'b0;
        if (wb_cmp)        bt_next[wb_cmp_pr]        = 1'b0;
        if (wb_mul)        bt_next[wb_mul_pr]        = 1'b0;
        if (wb_fwd)        bt_next[wb_fwd_pr]        = 1'b0;
    end

    // no bypass needed
    assign pr1_busy = bt[pr1_i];
    assign pr2_busy = bt[pr2_i];
endmodule