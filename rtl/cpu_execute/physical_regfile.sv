module physical_regfile
import rv32i_types::*;
(
    input   logic                       clk,
    input   logic                       rst,

    // update during writeback: alu, cmp, load, jump, mul, fwd (store-to-load forward)
    input   logic                       alu_wb,
    input   logic                       cmp_wb,
    input   logic                       load_wb,
    input   logic                       jump_wb,
    input   logic                       mul_wb,
    input   logic                       fwd_wb,
    input   logic   [31:0]              alu_val,
    input   logic   [31:0]              cmp_val,
    input   logic   [31:0]              load_val,
    input   logic   [31:0]              jump_val,
    input   logic   [31:0]              mul_val,
    input   logic   [31:0]              fwd_val,
    input   logic   [PRF_IDX-1:0]       alu_pr,
    input   logic   [PRF_IDX-1:0]       cmp_pr,
    input   logic   [PRF_IDX-1:0]       load_pr,
    input   logic   [PRF_IDX-1:0]       jump_pr,
    input   logic   [PRF_IDX-1:0]       mul_pr,
    input   logic   [PRF_IDX-1:0]       fwd_pr,

    // register value lookup: alu, cmp, jump, lsq, mul
    input   logic   [PRF_IDX-1:0]       lookup_alu_pr1,
    input   logic   [PRF_IDX-1:0]       lookup_cmp_pr1,
    input   logic   [PRF_IDX-1:0]       lookup_lsq_pr1,
    input   logic   [PRF_IDX-1:0]       lookup_jump_pr1,
    input   logic   [PRF_IDX-1:0]       lookup_mul_pr1,
    input   logic   [PRF_IDX-1:0]       lookup_alu_pr2,
    input   logic   [PRF_IDX-1:0]       lookup_cmp_pr2,
    input   logic   [PRF_IDX-1:0]       lookup_lsq_pr2,
    input   logic   [PRF_IDX-1:0]       lookup_jump_pr2,
    input   logic   [PRF_IDX-1:0]       lookup_mul_pr2,
    input   logic                       lookup_alu_pr1_valid,
    input   logic                       lookup_cmp_pr1_valid,
    input   logic                       lookup_lsq_pr1_valid,
    input   logic                       lookup_jump_pr1_valid,
    input   logic                       lookup_mul_pr1_valid,
    input   logic                       lookup_alu_pr2_valid,
    input   logic                       lookup_cmp_pr2_valid,
    input   logic                       lookup_lsq_pr2_valid,
    input   logic                       lookup_jump_pr2_valid,
    input   logic                       lookup_mul_pr2_valid,
    output  logic   [31:0]              lookup_alu_pr1_val,
    output  logic   [31:0]              lookup_cmp_pr1_val,
    output  logic   [31:0]              lookup_lsq_pr1_val,
    output  logic   [31:0]              lookup_jump_pr1_val,
    output  logic   [31:0]              lookup_mul_pr1_val,
    output  logic   [31:0]              lookup_alu_pr2_val,
    output  logic   [31:0]              lookup_cmp_pr2_val,
    output  logic   [31:0]              lookup_lsq_pr2_val,
    output  logic   [31:0]              lookup_jump_pr2_val,
    output  logic   [31:0]              lookup_mul_pr2_val
);

    logic   [31:0]  prf      [PRF_SIZE];
    logic   [31:0]  prf_next [PRF_SIZE];

    always_ff @( posedge clk ) begin
        if(rst) begin
            for(int i = 0; i < PRF_SIZE; i++) prf[i] <= '0;
        end
        else if(alu_wb || cmp_wb || load_wb || jump_wb || mul_wb || fwd_wb)
            prf <= prf_next;
        else
            prf <= prf;
    end

    always_comb begin
        prf_next = prf;
        if (alu_wb)  prf_next[alu_pr]  = alu_val;
        if (cmp_wb)  prf_next[cmp_pr]  = cmp_val;
        if (load_wb) prf_next[load_pr] = load_val;
        if (jump_wb) prf_next[jump_pr] = jump_val;
        if (mul_wb)  prf_next[mul_pr]  = mul_val;
        if (fwd_wb)  prf_next[fwd_pr]  = fwd_val;
        prf_next[0] = '0;
    end

    assign lookup_alu_pr1_val  = lookup_alu_pr1_valid  ? prf[lookup_alu_pr1]  : '0;
    assign lookup_cmp_pr1_val  = lookup_cmp_pr1_valid  ? prf[lookup_cmp_pr1]  : '0;
    assign lookup_lsq_pr1_val  = lookup_lsq_pr1_valid  ? prf[lookup_lsq_pr1]  : '0;
    assign lookup_jump_pr1_val = lookup_jump_pr1_valid ? prf[lookup_jump_pr1] : '0;
    assign lookup_mul_pr1_val  = lookup_mul_pr1_valid  ? prf[lookup_mul_pr1]  : '0;
    assign lookup_alu_pr2_val  = lookup_alu_pr2_valid  ? prf[lookup_alu_pr2]  : '0;
    assign lookup_cmp_pr2_val  = lookup_cmp_pr2_valid  ? prf[lookup_cmp_pr2]  : '0;
    assign lookup_lsq_pr2_val  = lookup_lsq_pr2_valid  ? prf[lookup_lsq_pr2]  : '0;
    assign lookup_jump_pr2_val = lookup_jump_pr2_valid ? prf[lookup_jump_pr2] : '0;
    assign lookup_mul_pr2_val  = lookup_mul_pr2_valid  ? prf[lookup_mul_pr2]  : '0;
endmodule
