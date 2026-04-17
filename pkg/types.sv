
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
    localparam int unsigned ROB_SIZE         = 64;
    localparam int unsigned FETCH_QUEUE_SIZE = 16;
    localparam int unsigned PRF_SIZE         = 128;
    localparam int unsigned ALU_RS_SIZE      = 8;
    localparam int unsigned CMP_RS_SIZE      = 4;
    localparam int unsigned JUMP_RS_SIZE     = 2;
    localparam int unsigned MUL_RS_SIZE      = 4;
    localparam int unsigned LQ_SIZE          = 64;
    localparam int unsigned SQ_SIZE          = 64;


    // DONT TOUCH
    localparam logic [31:0] RESET_PC        = 32'h60000000;
    localparam int unsigned PRF_IDX          = $clog2(PRF_SIZE);
    localparam int unsigned ROB_IDX          = $clog2(ROB_SIZE);
    localparam int unsigned CP_SIZE          = CMP_RS_SIZE + JUMP_RS_SIZE; // 6 checkpoint slots
    localparam int unsigned CP_IDX           = $clog2(CP_SIZE);            // 3 bits
    localparam int unsigned LC_SIZE          = LQ_SIZE;   // one load checkpoint per LQ slot
    localparam int unsigned LQ_IDX           = $clog2(LQ_SIZE);
    localparam int unsigned SQ_IDX           = $clog2(SQ_SIZE);
    localparam int unsigned LC_IDX           = $clog2(LC_SIZE);

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
        // Checkpoint — written at dispatch, used for early recovery
        logic   [CP_IDX-1:0]    checkpoint_id;      // which branch checkpoint slot owns this branch/jump
        // Load checkpoint — written at dispatch for loads only
        logic   [LC_IDX-1:0]    spec_load_cp_id;    // which load checkpoint slot owns this load
    } rob_t;

    // Load queue state — computed combinationally every cycle per LQ entry (load_state_next),
    // then registered into lq_t.load_state each clock edge.
    // Identify-error always uses load_state_next so same-cycle store addr_valid transitions
    // are caught even if the load is completing (LS_EXECUTED) that same cycle.
    typedef enum logic [2:0] {
        LS_IDLE        = 3'd0,  // slot empty or addr not yet computed
        LS_FORWARDING  = 3'd1,  // youngest older store: addr match + wmask covers rmask + data_ready → bypass mem port
        LS_SAFE        = 3'd2,  // all older store addrs resolved, none match → go to dmem without risk
        LS_SPECULATIVE = 3'd3,  // ≥1 older store addr unresolved → proceed, identify-error will catch conflicts
        LS_STALL       = 3'd4,  // older store addr matches but data not ready OR mask mismatch → wait
        LS_EXECUTED    = 3'd5   // load has written its value to PRF; stays here until commit or spec mispredict
    } load_state_t;

    // Load queue entry.
    // load_state is the registered value (last cycle's decision).
    // load_state_next is a wire array computed outside this struct each cycle.
    // Embedded rob_t carries the full ROB snapshot so mem.sv can update the ROB entry
    // (rd_wdata, mem_addr, mem_rdata, etc.) the same way the old loadstore_queue did.
    typedef struct packed {
        logic                   valid;
        load_state_t            load_state;         // registered; combinational next-state is load_state_next[]
        logic                   was_forwarded;      // set when load completed via SQ forwarding; used to attribute spec_load_mispredict source
        // address computation — fields filled as wb signals arrive
        logic   [PRF_IDX-1:0]   pr1;               // base-address physical register
        logic                   pr1_ready;
        logic   [31:0]          pr1_val;            // captured from wb bus when pr1 wb fires
        logic   [31:0]          imm;                // sign-extended byte offset
        logic   [31:0]          addr;               // pr1_val + imm, valid when addr_valid=1
        logic                   addr_valid;
        logic   [3:0]           rmask;              // read byte mask from funct3 + addr[1:0]
        logic   [2:0]           funct3;             // lb/lh/lw/lbu/lhu — needed for data formatting on writeback
        // ROB snapshot — carried for writeback and RVFI
        rob_t                   rob_data;
    } lq_t;

    // Store queue entry.
    // Embedded rob_t for the same reason as lq_t.
    typedef struct packed {
        logic                   valid;
        logic                   committed;          // set when this store commits from ROB; cleared on dmem_resp
        logic                   rob_wb_sent;        // one-cycle pulse gate: set when store_wb_valid fires; cleared on slot reuse
        logic                   addr_valid;
        logic                   data_ready;         // pr2_val captured and wdata formatted
        // address computation
        logic   [PRF_IDX-1:0]   pr1;               // base-address physical register
        logic                   pr1_ready;
        logic   [31:0]          pr1_val;
        logic   [31:0]          imm;
        logic   [31:0]          addr;
        logic   [3:0]           wmask;              // write byte mask from funct3 + addr[1:0]
        // store data
        logic   [PRF_IDX-1:0]   pr2;               // store-data physical register
        logic                   pr2_ready;
        logic   [31:0]          pr2_val;
        logic   [2:0]           funct3;             // sb/sh/sw — needed for wdata byte-lane formatting
        logic   [31:0]          wdata;              // formatted store data, valid when data_ready=1
        // ROB snapshot
        rob_t                   rob_data;
    } sq_t;

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
