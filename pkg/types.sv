
package pcmux;
    typedef enum bit [1:0] {
        pc_plus4  = 2'b00
        ,alu_out  = 2'b01
        ,alu_mod2 = 2'b10
    } pcmux_sel_t;
endpackage

package marmux;
    typedef enum bit {
        pc_out = 1'b0
        ,alu_out = 1'b1
    } marmux_sel_t;
endpackage

package cmpmux;
    typedef enum bit {
        rs2_out = 1'b0
        ,i_imm = 1'b1
    } cmpmux_sel_t;
endpackage

package alumux;
    typedef enum bit {
        rs1_out = 1'b0
        ,pc_out = 1'b1
    } alumux1_sel_t;

    typedef enum bit [2:0] {
        i_imm    = 3'b000
        ,u_imm   = 3'b001
        ,b_imm   = 3'b010
        ,s_imm   = 3'b011
        ,j_imm   = 3'b100
        ,rs2_out = 3'b101
    } alumux2_sel_t;
endpackage

package regfilemux;
    typedef enum bit [3:0] {
        alu_out   = 4'b0000
        ,br_en    = 4'b0001
        ,u_imm    = 4'b0010
        ,lw       = 4'b0011
        ,pc_plus4 = 4'b0100
        ,lb        = 4'b0101
        ,lbu       = 4'b0110  // unsigned byte
        ,lh        = 4'b0111
        ,lhu       = 4'b1000  // unsigned halfword
    } regfilemux_sel_t;
endpackage


package rv32i_types;

    // Mux types are in their own packages to prevent identiier collisions
    // e.g. pcmux::pc_plus4 and regfilemux::pc_plus4 are seperate identifiers
    // for seperate enumerated types
    import pcmux::*;
    import marmux::*;
    import cmpmux::*;
    import alumux::*;
    import regfilemux::*;

    // CPU configuration parameters (previously in cpu_config package)
    localparam int unsigned FETCH_QUEUE_SIZE = 8;
    localparam int unsigned PRF_SIZE         = 64;
    localparam int unsigned ALU_RS_SIZE      = 4;
    localparam int unsigned CMP_RS_SIZE      = 2;
    localparam int unsigned JUMP_RS_SIZE     = 2;
    localparam int unsigned MUL_RS_SIZE      = 4;
    localparam int unsigned LS_QUEUE_SIZE    = 16;

    // DONT TOUCH
    localparam logic [31:0] RESET_PC        = 32'h60000000;
    localparam int unsigned PRF_IDX          = $clog2(PRF_SIZE);
    localparam int unsigned ROB_SIZE         = 16;
    localparam int unsigned ROB_IDX          = $clog2(ROB_SIZE);

    typedef enum bit [6:0] {
        op_lui   = 7'b0110111, // load upper immediate (U type)
        op_auipc = 7'b0010111, // add upper immediate PC (U type)
        op_jal   = 7'b1101111, // jump and link (J type)
        op_jalr  = 7'b1100111, // jump and link register (I type)
        op_br    = 7'b1100011, // branch (B type)
        op_load  = 7'b0000011, // load (I type)
        op_store = 7'b0100011, // store (S type)
        op_imm   = 7'b0010011, // arith ops with register/immediate operands (I type)
        op_reg   = 7'b0110011  // arith ops with register operands (R type)
    } rv32i_opcode;

    typedef enum bit [2:0] {
        beq  = 3'b000,
        bne  = 3'b001,
        blt  = 3'b100,
        bge  = 3'b101,
        bltu = 3'b110,
        bgeu = 3'b111
    } branch_funct3_t;

    typedef enum bit [2:0] {
        lb  = 3'b000,
        lh  = 3'b001,
        lw  = 3'b010,
        lbu = 3'b100,
        lhu = 3'b101
    } load_funct3_t;

    typedef enum bit [2:0] {
        sb = 3'b000,
        sh = 3'b001,
        sw = 3'b010
    } store_funct3_t;

    typedef enum bit [2:0] {
        add  = 3'b000, //check bit 30 for sub if op_reg opcode
        sll  = 3'b001,
        slt  = 3'b010,
        sltu = 3'b011,
        axor = 3'b100,
        sr   = 3'b101, //check bit 30 for logical/arithmetic
        aor  = 3'b110,
        aand = 3'b111
    } arith_funct3_t;

    typedef enum bit [3:0] {    //{funct7[5], funct3[2:0]}
        alu_add  = 4'b0000,     //{1'b0, add}
        alu_sll  = 4'b0001,     //{1'b0, sll}
        alu_slt  = 4'b0010,     //{1'b0, slt}
        alu_sltu = 4'b0011,     //{1'b0, sltu}
        alu_xor  = 4'b0100,     //{1'b0, axor}
        alu_srl  = 4'b0101,     //{1'b0, sr}
        alu_or   = 4'b0110,     //{1'b0, aor}
        alu_and  = 4'b0111,     //{1'b0, aand}
        alu_sub  = 4'b1000,     //{1'b1, add}
        alu_sra  = 4'b1101      //{1'b1, sr}
    } alu_ops;

    typedef struct packed {
        // Bookkeeping
        logic                   valid;
        logic                   done;
        // Register rename
        logic                   rd_valid;
        logic   [4:0]           rd_arch;
        logic   [PRF_IDX-1:0]   new_p;
        logic   [PRF_IDX-1:0]   old_p;
        // RVFI — captured at rename
        logic   [31:0]          pc;
        logic   [31:0]          pc_next;
        logic   [31:0]          inst;
        logic                   rs1_valid;
        logic                   rs2_valid;    
        logic   [4:0]           rs1_addr;
        logic   [4:0]           rs2_addr;
        logic   [31:0]          rs1_rdata;
        logic   [31:0]          rs2_rdata;
        logic   [ROB_IDX-1:0]   rob_entry;
        // RVFI — written at writeback
        logic   [31:0]          rd_wdata;
        // RVFI — written at execute (loads/stores only)
        logic   [31:0]          mem_addr;
        logic   [3:0]           mem_rmask;
        logic   [3:0]           mem_wmask;
        logic   [31:0]          mem_rdata;
        logic   [31:0]          mem_wdata;
        // Branch — written at writeback
        logic                   is_branch;      // conditional branch (op_br only)
        logic                   is_jump;        // unconditional jump (op_jal / op_jalr)
        logic                   mispredict;
        logic                   pred_taken;
        logic   [31:0]          target_pc;
        logic                   branch_actual_taken;
    } rob_t;

    typedef struct packed {
        logic   [31:0]          imm_o;
        logic   [2:0]           dispatch_to;
        logic   [3:0]           alu_op;
        logic   [2:0]           funct3;
        logic                   pr1_valid;
        logic                   pr2_valid;
        logic   [PRF_IDX-1:0]   pr1;
        logic   [PRF_IDX-1:0]   pr2;
        logic                   pr1_busy;
        logic                   pr2_busy;
    } midcore_t;

endpackage : rv32i_types

// add your types in this file if needed.
