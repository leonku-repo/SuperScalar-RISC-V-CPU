// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB_CPU_MIDCORE_H_
#define VERILATED_VTOP_TB_CPU_MIDCORE_H_  // guard

#include "verilated.h"


class Vtop_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tb_cpu_midcore final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst,0,0);
        VL_IN8(__PVT__mispredict,0,0);
        VL_OUT8(__PVT__decode_request,0,0);
        VL_IN8(__PVT__empty_i,0,0);
        VL_IN8(__PVT__branch_taken_i,0,0);
        VL_IN8(__PVT__rob_full,0,0);
        VL_IN8(__PVT__alu_full,0,0);
        VL_IN8(__PVT__cmp_full,0,0);
        VL_IN8(__PVT__load_full,0,0);
        VL_IN8(__PVT__store_full,0,0);
        VL_IN8(__PVT__jump_full,0,0);
        VL_IN8(__PVT__mul_full,0,0);
        VL_IN8(__PVT__wb_alu,0,0);
        VL_IN8(__PVT__wb_load,0,0);
        VL_IN8(__PVT__wb_jump,0,0);
        VL_IN8(__PVT__wb_cmp,0,0);
        VL_IN8(__PVT__wb_mul,0,0);
        VL_IN8(__PVT__wb_alu_pr,5,0);
        VL_IN8(__PVT__wb_load_pr,5,0);
        VL_IN8(__PVT__wb_jump_pr,5,0);
        VL_IN8(__PVT__wb_cmp_pr,5,0);
        VL_IN8(__PVT__wb_mul_pr,5,0);
        VL_IN8(__PVT__commit_update,0,0);
        VL_IN8(__PVT__commit_update_old_p,5,0);
        VL_IN8(__PVT__allocate_rob_entry,3,0);
        CData/*0:0*/ __PVT__stall;
        CData/*0:0*/ stall_rob_full;
        CData/*0:0*/ stall_alu_full;
        CData/*0:0*/ stall_cmp_full;
        CData/*0:0*/ stall_load_full;
        CData/*0:0*/ stall_store_full;
        CData/*0:0*/ stall_jump_full;
        CData/*0:0*/ stall_mul_full;
        CData/*0:0*/ stall_no_free_pr;
        CData/*4:0*/ __PVT__srat_lookup_rs1;
        CData/*5:0*/ __PVT__free_pr;
        CData/*0:0*/ __PVT__free_pr_valid;
        CData/*5:0*/ __PVT__rename_update_pr;
        CData/*4:0*/ __PVT__rename_update_ar;
        CData/*0:0*/ __Vcellinp__busy_table__rename_update;
        CData/*0:0*/ __PVT__decode__DOT__rs1_valid;
        CData/*0:0*/ __PVT__decode__DOT__rs2_valid;
        CData/*2:0*/ __PVT__decode__DOT__dispatch_to;
        CData/*3:0*/ __PVT__decode__DOT__alu_op;
        CData/*0:0*/ decode__DOT____VdfgExtracted_hf4d07035__0;
        CData/*0:0*/ decode__DOT____VdfgTmp_h90d7ced5__0;
        CData/*0:0*/ __PVT__rename2__DOT__pr1_busy_tmp;
        CData/*0:0*/ __PVT__rename2__DOT__pr2_busy_tmp;
        VL_IN(__PVT__pc_i,31,0);
        VL_IN(__PVT__pc_next_i,31,0);
        VL_IN(__PVT__inst_i,31,0);
        IData/*31:0*/ __PVT__decode__DOT__i_imm;
        IData/*31:0*/ __PVT__decode__DOT__imm_o;
        IData/*31:0*/ __PVT__srat__DOT__unnamedblk1__DOT__i;
        VL_OUTW(__PVT__ROB_midcore_o,368,0,12);
        VL_OUT64(__PVT__MIDCORE_midcore_o,57,0);
        VlWide<12>/*368:0*/ __PVT__ROB_decode_o;
        VlWide<12>/*368:0*/ __PVT__ROB_rename1_o;
        VlWide<12>/*368:0*/ __PVT__ROB_rename2_o;
        VlWide<12>/*368:0*/ __PVT__ROB_rename1_reg;
        VlWide<12>/*368:0*/ __PVT__ROB_rename2_reg;
        QData/*57:0*/ __PVT__MIDCORE_decode_o;
        QData/*57:0*/ __PVT__MIDCORE_rename1_o;
    };
    struct {
        QData/*57:0*/ __PVT__MIDCORE_rename2_o;
        QData/*57:0*/ __PVT__MIDCORE_rename1_reg;
        QData/*57:0*/ __PVT__MIDCORE_rename2_reg;
        QData/*57:0*/ __PVT__MIDCORE_rename2_wb_updated;
        QData/*63:0*/ __PVT__busy_table__DOT__bt;
        QData/*63:0*/ __PVT__busy_table__DOT__bt_next;
        QData/*63:0*/ __PVT__free_list__DOT__free_list;
        QData/*63:0*/ __PVT__free_list__DOT__free_list_next;
        QData/*63:0*/ __PVT__free_list__DOT__free_list_recovery;
        VL_IN8(__PVT__mispredict_arat[32],5,0);
        VlUnpacked<CData/*5:0*/, 32> __PVT__srat__DOT__srat;
        VlUnpacked<CData/*5:0*/, 32> __PVT__srat__DOT__srat_next;
    };

    // INTERNAL VARIABLES
    Vtop_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tb_cpu_midcore(Vtop_tb__Syms* symsp, const char* v__name);
    ~Vtop_tb_cpu_midcore();
    VL_UNCOPYABLE(Vtop_tb_cpu_midcore);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
