// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB_RISCV_FORMAL_MONITOR_RV32IMC_ISA_SPEC_H_
#define VERILATED_VTOP_TB_RISCV_FORMAL_MONITOR_RV32IMC_ISA_SPEC_H_  // guard

#include "verilated.h"


class Vtop_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__rvfi_valid,0,0);
        VL_OUT8(__PVT__spec_valid,0,0);
        VL_OUT8(__PVT__spec_trap,0,0);
        VL_OUT8(__PVT__spec_rs1_addr,4,0);
        VL_OUT8(__PVT__spec_rs2_addr,4,0);
        VL_OUT8(__PVT__spec_rd_addr,4,0);
        VL_OUT8(__PVT__spec_mem_rmask,3,0);
        VL_OUT8(__PVT__spec_mem_wmask,3,0);
        CData/*0:0*/ __PVT__spec_insn_add_valid;
        CData/*0:0*/ __PVT__spec_insn_addi_valid;
        CData/*0:0*/ __PVT__spec_insn_and_valid;
        CData/*0:0*/ __PVT__spec_insn_andi_valid;
        CData/*0:0*/ __PVT__spec_insn_auipc_valid;
        CData/*0:0*/ __PVT__spec_insn_beq_valid;
        CData/*0:0*/ __PVT__spec_insn_bge_valid;
        CData/*0:0*/ __PVT__spec_insn_bgeu_valid;
        CData/*0:0*/ __PVT__spec_insn_blt_valid;
        CData/*0:0*/ __PVT__spec_insn_bltu_valid;
        CData/*0:0*/ __PVT__spec_insn_bne_valid;
        CData/*0:0*/ __PVT__spec_insn_c_add_valid;
        CData/*0:0*/ __PVT__spec_insn_c_addi_valid;
        CData/*0:0*/ __PVT__spec_insn_c_addi16sp_valid;
        CData/*0:0*/ __PVT__spec_insn_c_addi4spn_valid;
        CData/*0:0*/ __PVT__spec_insn_c_and_valid;
        CData/*0:0*/ __PVT__spec_insn_c_andi_valid;
        CData/*0:0*/ __PVT__spec_insn_c_beqz_valid;
        CData/*0:0*/ __PVT__spec_insn_c_bnez_valid;
        CData/*0:0*/ __PVT__spec_insn_c_j_valid;
        CData/*0:0*/ __PVT__spec_insn_c_jal_valid;
        CData/*0:0*/ __PVT__spec_insn_c_jalr_valid;
        CData/*0:0*/ __PVT__spec_insn_c_jr_valid;
        CData/*0:0*/ __PVT__spec_insn_c_li_valid;
        CData/*0:0*/ __PVT__spec_insn_c_lui_valid;
        CData/*0:0*/ __PVT__spec_insn_c_lw_valid;
        CData/*0:0*/ __PVT__spec_insn_c_lwsp_valid;
        CData/*0:0*/ __PVT__spec_insn_c_mv_valid;
        CData/*0:0*/ __PVT__spec_insn_c_or_valid;
        CData/*0:0*/ __PVT__spec_insn_c_slli_valid;
        CData/*0:0*/ __PVT__spec_insn_c_srai_valid;
        CData/*0:0*/ __PVT__spec_insn_c_srli_valid;
        CData/*0:0*/ __PVT__spec_insn_c_sub_valid;
        CData/*0:0*/ __PVT__spec_insn_c_sw_valid;
        CData/*0:0*/ __PVT__spec_insn_c_swsp_valid;
        CData/*0:0*/ __PVT__spec_insn_c_xor_valid;
        CData/*0:0*/ __PVT__spec_insn_div_valid;
        CData/*0:0*/ __PVT__spec_insn_divu_valid;
        CData/*0:0*/ __PVT__spec_insn_jal_valid;
        CData/*0:0*/ __PVT__spec_insn_jalr_valid;
        CData/*0:0*/ __PVT__spec_insn_lb_valid;
        CData/*0:0*/ __PVT__spec_insn_lbu_valid;
        CData/*0:0*/ __PVT__spec_insn_lh_valid;
        CData/*0:0*/ __PVT__spec_insn_lhu_valid;
        CData/*0:0*/ __PVT__spec_insn_lui_valid;
        CData/*0:0*/ __PVT__spec_insn_lw_valid;
        CData/*0:0*/ __PVT__spec_insn_mul_valid;
        CData/*0:0*/ __PVT__spec_insn_mulh_valid;
        CData/*0:0*/ __PVT__spec_insn_mulhsu_valid;
        CData/*0:0*/ __PVT__spec_insn_mulhu_valid;
        CData/*0:0*/ __PVT__spec_insn_or_valid;
        CData/*0:0*/ __PVT__spec_insn_ori_valid;
        CData/*0:0*/ __PVT__spec_insn_rem_valid;
        CData/*0:0*/ __PVT__spec_insn_remu_valid;
        CData/*0:0*/ __PVT__spec_insn_sb_valid;
        CData/*0:0*/ __PVT__spec_insn_sh_valid;
    };
    struct {
        CData/*0:0*/ __PVT__spec_insn_sll_valid;
        CData/*0:0*/ __PVT__spec_insn_slli_valid;
        CData/*0:0*/ __PVT__spec_insn_slt_valid;
        CData/*0:0*/ __PVT__spec_insn_slti_valid;
        CData/*0:0*/ __PVT__spec_insn_sltiu_valid;
        CData/*0:0*/ __PVT__spec_insn_sltu_valid;
        CData/*0:0*/ __PVT__spec_insn_sra_valid;
        CData/*0:0*/ __PVT__spec_insn_srai_valid;
        CData/*0:0*/ __PVT__spec_insn_srl_valid;
        CData/*0:0*/ __PVT__spec_insn_srli_valid;
        CData/*0:0*/ __PVT__spec_insn_sub_valid;
        CData/*0:0*/ __PVT__spec_insn_sw_valid;
        CData/*0:0*/ __PVT__spec_insn_xor_valid;
        CData/*0:0*/ __PVT__spec_insn_xori_valid;
        CData/*0:0*/ __PVT__insn_blt__DOT__cond;
        CData/*0:0*/ __PVT__insn_bltu__DOT__cond;
        CData/*5:0*/ __PVT__insn_c_slli__DOT__insn_shamt;
        SData/*9:0*/ insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0;
        VL_IN(__PVT__rvfi_insn,31,0);
        VL_IN(__PVT__rvfi_pc_rdata,31,0);
        VL_IN(__PVT__rvfi_rs1_rdata,31,0);
        VL_IN(__PVT__rvfi_rs2_rdata,31,0);
        VL_IN(__PVT__rvfi_mem_rdata,31,0);
        VL_OUT(__PVT__spec_rd_wdata,31,0);
        VL_OUT(__PVT__spec_pc_wdata,31,0);
        VL_OUT(__PVT__spec_mem_addr,31,0);
        VL_OUT(__PVT__spec_mem_wdata,31,0);
        IData/*31:0*/ __PVT__spec_insn_add_rd_wdata;
        IData/*31:0*/ __PVT__spec_insn_beq_pc_wdata;
        IData/*31:0*/ __PVT__spec_insn_bge_pc_wdata;
        IData/*31:0*/ __PVT__spec_insn_bgeu_pc_wdata;
        IData/*31:0*/ __PVT__spec_insn_blt_pc_wdata;
        IData/*31:0*/ __PVT__spec_insn_bltu_pc_wdata;
        IData/*31:0*/ __PVT__spec_insn_bne_pc_wdata;
        IData/*31:0*/ __PVT__spec_insn_c_and_rd_wdata;
        IData/*31:0*/ __PVT__spec_insn_c_beqz_pc_wdata;
        IData/*31:0*/ __PVT__spec_insn_c_bnez_pc_wdata;
        IData/*31:0*/ __PVT__spec_insn_c_j_pc_wdata;
        IData/*31:0*/ __PVT__spec_insn_c_or_rd_wdata;
        IData/*31:0*/ __PVT__spec_insn_c_sub_rd_wdata;
        IData/*31:0*/ __PVT__spec_insn_c_xor_rd_wdata;
        IData/*31:0*/ __PVT__spec_insn_jal_rd_wdata;
        IData/*31:0*/ __PVT__spec_insn_jal_pc_wdata;
        IData/*31:0*/ __PVT__spec_insn_sb_mem_wdata;
        IData/*31:0*/ __PVT__insn_addi__DOT__result;
        IData/*31:0*/ __PVT__insn_c_addi16sp__DOT__insn_imm;
        IData/*31:0*/ __PVT__insn_c_lui__DOT__insn_imm;
        IData/*31:0*/ __PVT__insn_c_lw__DOT__addr;
        IData/*31:0*/ __PVT__insn_c_lwsp__DOT__addr;
        IData/*31:0*/ insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0;
        IData/*31:0*/ insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0;
        IData/*31:0*/ __PVT__insn_c_swsp__DOT__addr;
        IData/*31:0*/ insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0;
        IData/*31:0*/ __PVT__insn_lw__DOT__result;
        IData/*31:0*/ insn_lw__DOT____VdfgTmp_hac1c962f__0;
        IData/*31:0*/ __PVT__insn_sb__DOT__addr;
        IData/*31:0*/ insn_sw__DOT____VdfgTmp_h889c0e76__0;
        QData/*63:0*/ __VdfgTmp_hb1a4827e__0;
    };

    // INTERNAL VARIABLES
    Vtop_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec(Vtop_tb__Syms* symsp, const char* v__name);
    ~Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec();
    VL_UNCOPYABLE(Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
