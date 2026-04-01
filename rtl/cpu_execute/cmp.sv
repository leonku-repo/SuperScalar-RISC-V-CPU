module cmp
import rv32i_types::*;
(
    input   rob_t                       ROB_data_i,
    input   midcore_t                   MIDCORE_data_i,
    input   logic                       empty_i,
    // input   logic                       full_i,
    input   logic       [31:0]          lookup_cmp_pr1_val,
    input   logic       [31:0]          lookup_cmp_pr2_val,
    output  rob_t                       ROB_data_o,
    output  logic                       cmp_valid
);
    logic          [31:0] a, b;
    logic                 br_en;
    logic          [31:0] br_target;
    logic                 mispredict;
    logic signed   [31:0] as;
    logic signed   [31:0] bs;
    logic unsigned [31:0] au;
    logic unsigned [31:0] bu;
    
    assign a  = lookup_cmp_pr1_val;
    assign b  = lookup_cmp_pr2_val;
    assign as =   signed'(a);
    assign bs =   signed'(b);
    assign au = unsigned'(a);
    assign bu = unsigned'(b);

    always_comb begin
        unique case (MIDCORE_data_i.funct3)
            beq:  br_en = (au == bu);
            bne:  br_en = (au != bu);
            blt:  br_en = (as <  bs);
            bge:  br_en = (as >=  bs);
            bltu: br_en = (au <  bu);
            bgeu: br_en = (au >=  bu);
            default: br_en = 1'bx;
        endcase
    end
    assign br_target = br_en ? (ROB_data_i.pc + MIDCORE_data_i.imm_o) : (ROB_data_i.pc + 32'd4);
    assign mispredict = (ROB_data_i.pred_taken != br_en) || (ROB_data_i.pc_next != br_target);
    
    // output
    assign cmp_valid = !empty_i && ROB_data_i.valid;

    always_comb begin 
        ROB_data_o              = ROB_data_i;
        ROB_data_o.pc_next      = mispredict ? br_target : ROB_data_i.pc_next;
        ROB_data_o.rs1_rdata    = a;
        ROB_data_o.rs2_rdata    = b;
        ROB_data_o.rd_wdata     = '0;
        ROB_data_o.mem_addr     = '0;
        ROB_data_o.mem_rmask    = '0;
        ROB_data_o.mem_wmask    = '0;
        ROB_data_o.mem_rdata    = '0;
        ROB_data_o.mem_wdata    = '0;
        ROB_data_o.mispredict   = mispredict;
        ROB_data_o.target_pc    = br_target;
        ROB_data_o.branch_actual_taken = br_en;
        ROB_data_o.done         = cmp_valid;
    end

endmodule: cmp

