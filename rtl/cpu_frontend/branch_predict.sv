module branch_predict
import rv32i_types::*;
(
    input   logic           clk,
    input   logic           rst,

    input   logic   [31:0]  pc_i,
    input   logic           imem_resp,      // valid instruction fetched; gates TAGE FIFO push
    output  logic   [31:0]  branch_target,
    output  logic           branch_taken,
    output  logic           branch_valid,

    input   logic           commit_is_branch,
    input   logic           commit_is_jump,
    input   logic           commit_mispredict,
    input   logic           commit_branch_actual_taken,
    input   logic   [31:0]  commit_pc,
    input   logic   [31:0]  commit_target
);

    logic           btb_hit;
    logic [31:0]    btb_target;

    //////////////////////////////////////////////////////////////
    //////////////////////////  BTB  /////////////////////////////
    //////////////////////////////////////////////////////////////
    assign branch_valid  = btb_hit && branch_taken;
    assign branch_target = btb_target;
    btb #(.BTB_SETS(16)) btb (
        .clk            (clk),
        .rst            (rst),
        .lookup_pc      (pc_i),
        .lookup_hit     (btb_hit),
        .lookup_target  (btb_target),
        .update_en      (commit_is_branch || commit_is_jump),
        .update_pc      (commit_pc),
        .update_target  (commit_target)
    );

    //////////////////////////////////////////////////////////////
    //////////////////////  Branch Prediction  ///////////////////
    //////////////////////////////////////////////////////////////
    // assign branch_taken = 1'b0;  // always not taken
    // assign branch_taken = 1'b1;  // always taken

    // // 2-bit saturating counter predictor
    // bp_nbit_counter #(.COUNTER_BITS(2), .PHT_ENTRIES(64)) predictor (
    //     .clk                        (clk),
    //     .rst                        (rst),
    //     .pc_i                       (pc_i),
    //     .branch_taken               (branch_taken),
    //     .commit_is_branch           (commit_is_branch),
    //     .commit_branch_actual_taken (commit_branch_actual_taken),
    //     .commit_pc                  (commit_pc)
    // );

    // update_prediction = what was predicted at fetch time.
    // Derived: if mispredict, prediction was wrong = !actual; else right = actual.
    logic   tage_ready;
    logic   dummy;
    logic   commit_pred_taken;
    assign  commit_pred_taken = commit_branch_actual_taken ^ commit_mispredict;

    // lookup_valid = imem_resp: FIFO pushes only when a real instruction is
    // fetched. freeze is implicitly handled (imem_resp low during stall).
    // flush = commit_mispredict: on mispredict, wrPtr snaps back to rdPtr,
    // discarding in-flight FIFO entries for squashed instructions.
    TAGE tage_predictor (
        .clk                (clk),
        .rst                (rst),
        .lookup_pc          (pc_i),
        .lookup_valid       (imem_resp && btb_hit),
        .lookup_prediction  (branch_taken),
        .lookup_target      (dummy),
        .lookup_ready       (tage_ready),
        .update_pc          (commit_pc),
        .update_prediction  (commit_pred_taken),
        .update_actual      (commit_branch_actual_taken),
        .update_target      (commit_target),
        .update_valid       (commit_is_branch || commit_is_jump),
        .flush              (commit_mispredict)
    );

endmodule