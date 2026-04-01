module alu
import rv32i_types::*;
(
    input   rob_t                       ROB_data_i,
    input   midcore_t                   MIDCORE_data_i,
    input   logic                       empty_i,
    // input   logic                       full_i,
    input   logic       [31:0]          lookup_alu_pr1_val,
    input   logic       [31:0]          lookup_alu_pr2_val,
    output  rob_t                       ROB_data_o,
    output  logic                       alu_valid
);
    logic   [31:0]  a, b;
    logic   [31:0]  f;
    logic signed   [31:0] as;
    logic signed   [31:0] bs;
    logic unsigned [31:0] au;
    logic unsigned [31:0] bu;

    assign a = MIDCORE_data_i.pr1_valid ? lookup_alu_pr1_val : ROB_data_i.pc;
    assign b = MIDCORE_data_i.pr2_valid ? lookup_alu_pr2_val : MIDCORE_data_i.imm_o;

    assign as =   signed'(a);
    assign bs =   signed'(b);
    assign au = unsigned'(a);
    assign bu = unsigned'(b);

    always_comb begin
        unique case (MIDCORE_data_i.alu_op)
            alu_add: f = au +   bu;
            alu_sll: f = au <<  bu[4:0];
            alu_sra: f = unsigned' (as >>> bu[4:0]);
            alu_sub: f = au -   bu;
            alu_xor: f = au ^   bu;
            alu_srl: f = au >>  bu[4:0];
            alu_or:  f = au |   bu;
            alu_and: f = au &   bu;
            alu_slt: f = {31'd0, (as <  bs)};
            alu_sltu: f = {31'd0, (au <  bu)};
            default: f = '0;
        endcase
    end

    // output
    assign alu_valid = !empty_i && ROB_data_i.valid;

    always_comb begin 
        ROB_data_o              = ROB_data_i;
        ROB_data_o.rs1_rdata    = lookup_alu_pr1_val;
        ROB_data_o.rs2_rdata    = lookup_alu_pr2_val;
        ROB_data_o.rd_wdata     = f;
        ROB_data_o.mem_addr     = '0;
        ROB_data_o.mem_rmask    = '0;
        ROB_data_o.mem_wmask    = '0;
        ROB_data_o.mem_rdata    = '0;
        ROB_data_o.mem_wdata    = '0;
        ROB_data_o.mispredict   = ROB_data_i.pred_taken || (ROB_data_i.pc_next != ROB_data_i.pc + 32'd4);
        ROB_data_o.target_pc    = ROB_data_i.pc + 32'd4;
        ROB_data_o.branch_actual_taken = '0;
        ROB_data_o.done         = alu_valid;
    end
    

endmodule : alu

