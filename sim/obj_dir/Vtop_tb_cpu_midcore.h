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
        VL_IN8(__PVT__exec_mispredict,0,0);
        VL_IN8(__PVT__exec_mispredict_rob_idx,5,0);
        VL_IN8(__PVT__rdPtr_i,5,0);
        VL_IN8(__PVT__spec_load_mispredict,0,0);
        VL_IN8(__PVT__spec_load_rob_idx_i,5,0);
        VL_IN8(__PVT__checkpoint_full,0,0);
        VL_IN8(__PVT__cp_checkpoint_id_i,2,0);
        VL_IN8(__PVT__lc_checkpoint_full,0,0);
        VL_IN8(__PVT__lc_checkpoint_id_i,5,0);
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
        VL_IN8(__PVT__wb_fwd,0,0);
        VL_IN8(__PVT__wb_alu_pr,6,0);
        VL_IN8(__PVT__wb_load_pr,6,0);
        VL_IN8(__PVT__wb_jump_pr,6,0);
        VL_IN8(__PVT__wb_cmp_pr,6,0);
        VL_IN8(__PVT__wb_mul_pr,6,0);
        VL_IN8(__PVT__wb_fwd_pr,6,0);
        VL_IN8(__PVT__commit_update,0,0);
        VL_IN8(__PVT__commit_update_old_p,6,0);
        VL_IN8(__PVT__allocate_rob_entry,5,0);
        VL_OUT8(__PVT__cp_dispatch_valid,0,0);
        VL_OUT8(__PVT__cp_dispatch_rob_idx,5,0);
        VL_OUT8(__PVT__lc_dispatch_valid_o,0,0);
        VL_OUT8(__PVT__lc_dispatch_rob_idx_o,5,0);
        VL_OUT8(__PVT__cp_rename_update_o,0,0);
        VL_OUT8(__PVT__cp_rename_update_pr_o,6,0);
        CData/*0:0*/ __PVT__stall;
        CData/*0:0*/ stall_rob_full;
        CData/*0:0*/ stall_alu_full;
        CData/*0:0*/ stall_cmp_full;
        CData/*0:0*/ stall_load_full;
        CData/*0:0*/ stall_store_full;
        CData/*0:0*/ stall_jump_full;
        CData/*0:0*/ stall_mul_full;
        CData/*0:0*/ stall_no_free_pr;
        CData/*0:0*/ stall_checkpoint_full;
        CData/*4:0*/ __PVT__srat_lookup_rs1;
        CData/*6:0*/ __PVT__free_pr;
        CData/*0:0*/ __PVT__free_pr_valid;
        CData/*4:0*/ __PVT__rename_update_ar;
        CData/*0:0*/ __PVT__is_br_or_jump;
        CData/*0:0*/ stall_lc_checkpoint_full;
        CData/*0:0*/ __VdfgTmp_hc8d9bbac__0;
        CData/*0:0*/ __VdfgTmp_h1b7601cf__0;
        CData/*0:0*/ __PVT__decode__DOT__rs1_valid;
        CData/*0:0*/ __PVT__decode__DOT__rs2_valid;
        CData/*2:0*/ __PVT__decode__DOT__dispatch_to;
        CData/*3:0*/ __PVT__decode__DOT__alu_op;
    };
    struct {
        CData/*0:0*/ decode__DOT____VdfgExtracted_hf4d07035__0;
        CData/*0:0*/ decode__DOT____VdfgTmp_h90d7ced5__0;
        CData/*0:0*/ __PVT__rename2__DOT__pr1_busy_tmp;
        CData/*0:0*/ __PVT__rename2__DOT__pr2_busy_tmp;
        VL_INW(__PVT__recover_alloc_list_i,127,0,4);
        VL_INW(__PVT__spec_load_recover_alloc_list_i,127,0,4);
        VL_INW(__PVT__bt_rebuild_i,127,0,4);
        VL_IN(__PVT__pc_i,31,0);
        VL_IN(__PVT__pc_next_i,31,0);
        VL_IN(__PVT__inst_i,31,0);
        IData/*31:0*/ __PVT__decode__DOT__i_imm;
        IData/*31:0*/ __PVT__decode__DOT__imm_o;
        IData/*31:0*/ __PVT__srat__DOT__unnamedblk1__DOT__i;
        VlWide<4>/*127:0*/ __PVT__busy_table__DOT__bt;
        VlWide<4>/*127:0*/ __PVT__busy_table__DOT__bt_next;
        VlWide<4>/*127:0*/ __PVT__free_list__DOT__free_list;
        VlWide<4>/*127:0*/ __PVT__free_list__DOT__free_list_next;
        VL_OUTW(__PVT__ROB_midcore_o,381,0,12);
        VL_OUT64(__PVT__MIDCORE_midcore_o,59,0);
        VlWide<12>/*381:0*/ __PVT__ROB_decode_o;
        VlWide<12>/*381:0*/ __PVT__ROB_rename1_o;
        VlWide<12>/*381:0*/ __PVT__ROB_rename2_o;
        VlWide<12>/*381:0*/ __PVT__ROB_rename1_reg;
        VlWide<12>/*381:0*/ __PVT__ROB_rename2_reg;
        QData/*59:0*/ __PVT__MIDCORE_decode_o;
        QData/*59:0*/ __PVT__MIDCORE_rename1_o;
        QData/*59:0*/ __PVT__MIDCORE_rename2_o;
        QData/*59:0*/ __PVT__MIDCORE_rename1_reg;
        QData/*59:0*/ __PVT__MIDCORE_rename2_reg;
        QData/*59:0*/ __PVT__MIDCORE_rename2_wb_updated;
        VL_IN8(__PVT__recover_srat_i[32],6,0);
        VL_IN8(__PVT__spec_load_recover_srat_i[32],6,0);
        VL_OUT8(__PVT__cp_dispatch_srat[32],6,0);
        VL_OUT8(__PVT__lc_dispatch_srat_o[32],6,0);
        VlUnpacked<CData/*6:0*/, 32> __PVT__srat_o;
        VlUnpacked<CData/*6:0*/, 32> __PVT__srat__DOT__srat;
        VlUnpacked<CData/*6:0*/, 32> __PVT__srat__DOT__srat_next;
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
