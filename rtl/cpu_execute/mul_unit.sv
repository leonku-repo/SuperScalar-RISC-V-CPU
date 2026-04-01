// Single-cycle multiply unit for RISC-V M extension (MUL/MULH/MULHSU/MULHU)
// dispatch_to == 3'd6
// funct3 selects operation:
//   3'b000: MUL     — lower 32 bits of signed(rs1) × signed(rs2)
//   3'b001: MULH    — upper 32 bits of signed(rs1) × signed(rs2)
//   3'b010: MULHSU  — upper 32 bits of signed(rs1) × unsigned(rs2)
//   3'b011: MULHU   — upper 32 bits of unsigned(rs1) × unsigned(rs2)
module mul_unit
import rv32i_types::*;
(
    input   rob_t       ROB_data_i,
    input   midcore_t   MIDCORE_data_i,
    input   logic       empty_i,
    input   logic [31:0] lookup_mul_pr1_val,
    input   logic [31:0] lookup_mul_pr2_val,
    output  rob_t       ROB_data_o,
    output  logic       mul_valid
);
    logic signed   [31:0] rs1s;
    logic unsigned [31:0] rs1u;
    logic signed   [31:0] rs2s;
    logic unsigned [31:0] rs2u;

    logic signed   [63:0] result_ss;   // signed   × signed
    logic unsigned [63:0] result_uu;   // unsigned × unsigned
    logic signed   [64:0] result_su;   // signed   × unsigned (65-bit prevents overflow)
    logic          [31:0] f;

    assign rs1s = signed'(lookup_mul_pr1_val);
    assign rs1u = unsigned'(lookup_mul_pr1_val);
    assign rs2s = signed'(lookup_mul_pr2_val);
    assign rs2u = unsigned'(lookup_mul_pr2_val);

    assign result_ss = rs1s * rs2s;
    assign result_uu = rs1u * rs2u;
    // {1'b0, rs2u} zero-extends rs2 to 33 bits so its sign bit is always 0,
    // making signed'(...) treat it as unsigned → signed(rs1) × unsigned(rs2)
    assign result_su = rs1s * signed'({1'b0, rs2u});

    // DIV special cases per RISC-V spec:
    //   divide by zero  → result = -1 (all 1s) for both DIV and DIVU
    //   signed overflow → rs1=INT32_MIN, rs2=-1 → result = INT32_MIN
    logic signed   [31:0] div_result_s;
    logic unsigned [31:0] div_result_u;
    always_comb begin
        if (rs2s == '0)
            div_result_s = '1;                          // divide by zero → -1
        else if (rs1s == 32'sh80000000 && rs2s == -1)
            div_result_s = 32'sh80000000;               // signed overflow
        else
            div_result_s = rs1s / rs2s;
    end
    always_comb begin
        div_result_u = (rs2u == '0) ? '1 : rs1u / rs2u; // divide by zero → all 1s
    end

    always_comb begin
        f = '0;
        case (MIDCORE_data_i.funct3)
            3'b000: f = result_ss[31:0];    // MUL
            3'b001: f = result_ss[63:32];   // MULH
            3'b010: f = result_su[63:32];   // MULHSU
            3'b011: f = result_uu[63:32];   // MULHU
            3'b100: f = unsigned'(div_result_s);                                // DIV
            3'b101: f = div_result_u;                                           // DIVU
            3'b110: f = (rs2s == '0) ? unsigned'(rs1s) :                        // REM  (divide by zero → rs1)
                        (rs1s == 32'sh80000000 && rs2s == -1) ? '0 :            //      (overflow → 0)
                        unsigned'(rs1s % rs2s);
            3'b111: f = (rs2u == '0) ? rs1u : rs1u % rs2u;                     // REMU (divide by zero → rs1)
            default: f = '0;
        endcase
    end

    assign mul_valid = !empty_i && ROB_data_i.valid;

    always_comb begin
        ROB_data_o              = ROB_data_i;
        ROB_data_o.rs1_rdata    = lookup_mul_pr1_val;
        ROB_data_o.rs2_rdata    = lookup_mul_pr2_val;
        ROB_data_o.rd_wdata     = f;
        ROB_data_o.mem_addr     = '0;
        ROB_data_o.mem_rmask    = '0;
        ROB_data_o.mem_wmask    = '0;
        ROB_data_o.mem_rdata    = '0;
        ROB_data_o.mem_wdata    = '0;
        ROB_data_o.mispredict   = ROB_data_i.pred_taken || (ROB_data_i.pc_next != ROB_data_i.pc + 32'd4);
        ROB_data_o.target_pc    = ROB_data_i.pc + 32'd4;
        ROB_data_o.branch_actual_taken = '0;
        ROB_data_o.done         = mul_valid;
    end
endmodule : mul_unit
