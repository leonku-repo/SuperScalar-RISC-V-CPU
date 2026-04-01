// this is only decoding instructions
// dispatch_to has 5 options:
// 0 = alu
// 1 = cmp
// 2 = load
// 3 = store
// 4 = jump
// 
// for alu, a = rs1_valid ? rs1 : PC
//          b = rs2_valid ? rs2 : imm_o

module decode
import rv32i_types::*;
(
    // from fetch queue
    input   logic           branch_taken_i,
    input   logic   [31:0]  pc_i,
    input   logic   [31:0]  inst_i,
    input   logic   [31:0]  pc_next_i,
    input   logic           fq_empty_i,

    output  rob_t           ROB_decode_o,
    output  midcore_t       MIDCORE_decode_o
);

    logic   [6:0]   funct7;
    logic   [6:0]   opcode;
    logic   [31:0]  i_imm;
    logic   [31:0]  s_imm;
    logic   [31:0]  b_imm;
    logic   [31:0]  u_imm;
    logic   [31:0]  j_imm;
    logic   [4:0]   rs1_s;
    logic   [4:0]   rs2_s;
    logic   [4:0]   rd_s;
    logic   [2:0]   funct3;
    logic           rd_valid;
    logic           rs1_valid;
    logic           rs2_valid;
    logic           is_branch;
    logic   [31:0]  imm_o;
    logic   [2:0]   dispatch_to;
    logic   [3:0]   alu_op;


    assign funct7 = inst_i[31:25];
    assign opcode = inst_i[6:0];
    assign i_imm  = {{21{inst_i[31]}}, inst_i[30:20]};
    assign s_imm  = {{21{inst_i[31]}}, inst_i[30:25], inst_i[11:7]};
    assign b_imm  = {{20{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};
    assign u_imm  = {inst_i[31:12], 12'h000};
    assign j_imm  = {{12{inst_i[31]}}, inst_i[19:12], inst_i[20], inst_i[30:21], 1'b0};
    assign rs1_s  = (opcode == op_lui) ? 5'b0 : inst_i[19:15];  //lui is considered x0 + u_imm
    assign rs2_s  = inst_i[24:20];
    assign rd_s   = inst_i[11:7];
    assign funct3 = inst_i[14:12];

    assign rd_valid  = (opcode inside {op_reg, op_imm, op_load, op_jal, op_jalr, op_lui, op_auipc}) && (rd_s != 5'd0);
    assign rs1_valid = (opcode inside {op_reg, op_imm, op_store, op_load, op_br, op_jalr, op_lui});
    assign rs2_valid = (opcode inside {op_reg, op_store, op_br});
    assign is_branch = (opcode == op_br);
    logic is_jump;
    assign is_jump   = (opcode inside {op_jal, op_jalr});

    always_comb begin 
        imm_o = '0;
        case(opcode) 
            op_imm, op_load, op_jalr    : imm_o = i_imm;
            op_store                    : imm_o = s_imm;
            op_br                       : imm_o = b_imm;
            op_jal                      : imm_o = j_imm;
            op_lui, op_auipc            : imm_o = u_imm;
            default                     : imm_o = '0;
        endcase
    end

    always_comb begin
        dispatch_to = 3'd0;
        case(opcode)
            op_reg, op_imm, op_lui, op_auipc    : dispatch_to = 3'd0;
            op_br                               : dispatch_to = 3'd1;
            op_load                             : dispatch_to = 3'd2;
            op_store                            : dispatch_to = 3'd3;
            op_jal                              : dispatch_to = 3'd4;
            op_jalr                             : dispatch_to = 3'd5;
            default                             : dispatch_to = 3'd0;
        endcase
        // M-extension: op_reg + funct7==0x01 → MUL (dispatch_to=6)
        if (opcode == op_reg && funct7 == 7'b0000001)
            dispatch_to = 3'd6;
    end

    always_comb begin
        alu_op = {1'b0, funct3};
        case(funct3)
            add     :   alu_op[3] = opcode[5] & funct7[5];  //opcode[5] differs op_imm and op_reg 
            sr      :   alu_op[3] = funct7[5];
            default :   alu_op[3] = 1'b0;
        endcase
        if(opcode inside {op_lui, op_auipc}) alu_op = '0;
    end

    ///////////////////////////////////////////////////////
    ///////////         Midcore         ///////////////////
    ///////////////////////////////////////////////////////
    // decode
    assign MIDCORE_decode_o.imm_o           = imm_o;
    assign MIDCORE_decode_o.dispatch_to     = dispatch_to;
    assign MIDCORE_decode_o.alu_op          = alu_op;
    assign MIDCORE_decode_o.funct3          = funct3;
    assign MIDCORE_decode_o.pr1_valid       = rs1_valid;
    assign MIDCORE_decode_o.pr2_valid       = rs2_valid;
    // rename 1
    assign MIDCORE_decode_o.pr1             = '0;
    assign MIDCORE_decode_o.pr2             = '0;
    //rename 2
    assign MIDCORE_decode_o.pr1_busy        = '0;
    assign MIDCORE_decode_o.pr2_busy        = '0;

    ///////////////////////////////////////////////////////
    ///////////         ROB         ///////////////////////
    ///////////////////////////////////////////////////////
    // decode
    assign ROB_decode_o.valid      = !fq_empty_i;
    assign ROB_decode_o.rd_valid   = rd_valid;
    assign ROB_decode_o.rd_arch    = rd_s;
    assign ROB_decode_o.pc         = pc_i;
    assign ROB_decode_o.pc_next    = pc_next_i;
    assign ROB_decode_o.inst       = inst_i;
    assign ROB_decode_o.rs1_valid  = rs1_valid;
    assign ROB_decode_o.rs2_valid  = rs2_valid;
    assign ROB_decode_o.rs1_addr   = rs1_s;
    assign ROB_decode_o.rs2_addr   = rs2_s;
    assign ROB_decode_o.is_branch  = is_branch;
    assign ROB_decode_o.is_jump    = is_jump;
    assign ROB_decode_o.pred_taken = branch_taken_i;
    // rename
    assign ROB_decode_o.old_p      = '0;
    assign ROB_decode_o.new_p      = '0;
    assign ROB_decode_o.rob_entry  = '0;
    //execute
    assign ROB_decode_o.rs1_rdata  = '0;
    assign ROB_decode_o.rs2_rdata  = '0;
    assign ROB_decode_o.rd_wdata   = '0;
    assign ROB_decode_o.mem_addr   = '0;
    assign ROB_decode_o.mem_rmask  = '0;
    assign ROB_decode_o.mem_wmask  = '0;
    assign ROB_decode_o.mem_rdata  = '0;
    assign ROB_decode_o.mem_wdata  = '0;  
    assign ROB_decode_o.mispredict = '0; 
    assign ROB_decode_o.target_pc  = '0;
    assign ROB_decode_o.branch_actual_taken = '0;
    // wb
    assign ROB_decode_o.done       = '0;
endmodule
