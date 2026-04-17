// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB_CPU_EXECUTE_H_
#define VERILATED_VTOP_TB_CPU_EXECUTE_H_  // guard

#include "verilated.h"
class Vtop_tb_lsq;


class Vtop_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tb_cpu_execute final : public VerilatedModule {
  public:
    // CELLS
    Vtop_tb_lsq* lsq;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst,0,0);
        VL_IN8(__PVT__exec_mispredict,0,0);
        VL_IN8(__PVT__exec_mispredict_rob_idx,5,0);
        VL_IN8(__PVT__rdPtr_i,5,0);
        VL_IN8(__PVT__load_commit_i,0,0);
        VL_IN8(__PVT__load_commit_rob_entry_i,5,0);
        VL_IN8(__PVT__store_commit_i,0,0);
        VL_IN8(__PVT__store_commit_rob_entry_i,5,0);
        VL_OUT8(__PVT__alu_full_o,0,0);
        VL_OUT8(__PVT__cmp_full_o,0,0);
        VL_OUT8(__PVT__load_full_o,0,0);
        VL_OUT8(__PVT__store_full_o,0,0);
        VL_OUT8(__PVT__jump_full_o,0,0);
        VL_OUT8(__PVT__mul_full_o,0,0);
        VL_OUT8(__PVT__wb_alu,0,0);
        VL_OUT8(__PVT__wb_load,0,0);
        VL_OUT8(__PVT__wb_jump,0,0);
        VL_OUT8(__PVT__wb_cmp,0,0);
        VL_OUT8(__PVT__wb_mul,0,0);
        VL_OUT8(__PVT__wb_fwd,0,0);
        VL_OUT8(__PVT__wb_alu_pr,6,0);
        VL_OUT8(__PVT__wb_load_pr,6,0);
        VL_OUT8(__PVT__wb_jump_pr,6,0);
        VL_OUT8(__PVT__wb_cmp_pr,6,0);
        VL_OUT8(__PVT__wb_mul_pr,6,0);
        VL_OUT8(__PVT__wb_fwd_pr,6,0);
        VL_OUT8(__PVT__cmp_valid_o,0,0);
        VL_OUT8(__PVT__jump_valid_o,0,0);
        VL_OUT8(__PVT__store_wb_valid_o,0,0);
        VL_OUT8(__PVT__fwd_ROB_exec_valid_o,0,0);
        VL_OUT8(__PVT__spec_load_mispredict_o,0,0);
        VL_OUT8(__PVT__spec_load_rob_idx_o,5,0);
        VL_OUT8(__PVT__spec_load_checkpoint_id_o,5,0);
        VL_OUT8(__PVT__dmem_read,0,0);
        VL_OUT8(__PVT__dmem_write,0,0);
        VL_OUT8(__PVT__dmem_wmask,3,0);
        VL_IN8(__PVT__dmem_resp,0,0);
        CData/*0:0*/ __PVT__alu_valid;
        CData/*0:0*/ __PVT__mul_valid;
        CData/*0:0*/ __PVT__alu_empty_i;
        CData/*0:0*/ __PVT__cmp_empty_i;
        CData/*0:0*/ __PVT__jump_empty_i;
        CData/*0:0*/ __PVT__mul_empty_i;
        CData/*0:0*/ __PVT__store_done;
        CData/*0:0*/ __Vcellinp__PRF__lookup_alu_pr2_valid;
        CData/*0:0*/ __Vcellinp__PRF__lookup_alu_pr1_valid;
        CData/*0:0*/ __Vcellinp__alu_rs__wr_en;
        CData/*0:0*/ __Vcellinp__cmp_rs__wr_en;
        CData/*0:0*/ __Vcellinp__jump_rs__wr_en;
        CData/*0:0*/ __Vcellinp__lsq__wr_en;
        CData/*0:0*/ __Vcellinp__mul_rs__wr_en;
        CData/*2:0*/ __PVT__alu_rs__DOT__wr_idx;
        CData/*2:0*/ __PVT__alu_rs__DOT__rd_idx;
        CData/*0:0*/ __PVT__alu_rs__DOT__wr_idx_valid;
        CData/*0:0*/ __PVT__alu_rs__DOT__rd_idx_valid;
        CData/*1:0*/ __PVT__cmp_rs__DOT__wr_idx;
        CData/*1:0*/ __PVT__cmp_rs__DOT__rd_idx;
        CData/*0:0*/ __PVT__cmp_rs__DOT__wr_idx_valid;
        CData/*0:0*/ __PVT__cmp_rs__DOT__rd_idx_valid;
        CData/*0:0*/ __PVT__cmp__DOT__br_en;
        CData/*0:0*/ __PVT__cmp__DOT__mispredict;
        CData/*0:0*/ __PVT__jump_rs__DOT__wr_idx;
        CData/*0:0*/ __PVT__jump_rs__DOT__rd_idx;
    };
    struct {
        CData/*0:0*/ __PVT__jump_rs__DOT__wr_idx_valid;
        CData/*0:0*/ __PVT__jump_rs__DOT__rd_idx_valid;
        CData/*0:0*/ __PVT__jump__DOT__mispredict;
        CData/*2:0*/ __PVT__mem__DOT__state;
        CData/*3:0*/ __PVT__mem__DOT__dmem_rmask;
        CData/*3:0*/ __PVT__mem__DOT__lat_rmask;
        CData/*3:0*/ __PVT__mem__DOT__lat_wmask;
        CData/*2:0*/ __PVT__mem__DOT__lat_funct3;
        CData/*0:0*/ __PVT__mem__DOT__flush_load;
        CData/*1:0*/ __PVT__mul_rs__DOT__wr_idx;
        CData/*1:0*/ __PVT__mul_rs__DOT__rd_idx;
        CData/*0:0*/ __PVT__mul_rs__DOT__wr_idx_valid;
        CData/*0:0*/ __PVT__mul_rs__DOT__rd_idx_valid;
        CData/*0:0*/ mul_unit__DOT____VdfgTmp_hd48f2dee__0;
        VL_IN(__PVT__load_commit_pc_i,31,0);
        VL_IN(__PVT__store_commit_pc_i,31,0);
        VL_OUT(__PVT__spec_load_recover_pc_o,31,0);
        VL_OUT(__PVT__dmem_addr,31,0);
        VL_IN(__PVT__dmem_rdata,31,0);
        VL_OUT(__PVT__dmem_wdata,31,0);
        IData/*31:0*/ __PVT__lookup_alu_pr1_val;
        IData/*31:0*/ __PVT__lookup_jump_pr1_val;
        IData/*31:0*/ __PVT__lookup_mul_pr1_val;
        IData/*31:0*/ __PVT__lookup_alu_pr2_val;
        IData/*31:0*/ __PVT__lookup_mul_pr2_val;
        IData/*31:0*/ __PVT__PRF__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __PVT__alu_rs__DOT__unnamedblk7__DOT__i;
        IData/*31:0*/ __PVT__alu_rs__DOT__unnamedblk8__DOT__i;
        IData/*31:0*/ __PVT__alu_rs__DOT__unnamedblk9__DOT__i;
        IData/*31:0*/ __PVT__alu__DOT__a;
        IData/*31:0*/ __PVT__alu__DOT__b;
        IData/*31:0*/ __PVT__cmp_rs__DOT__unnamedblk7__DOT__i;
        IData/*31:0*/ __PVT__cmp_rs__DOT__unnamedblk8__DOT__i;
        IData/*31:0*/ __PVT__cmp_rs__DOT__unnamedblk9__DOT__i;
        IData/*31:0*/ __PVT__cmp__DOT__a;
        IData/*31:0*/ __PVT__cmp__DOT__b;
        IData/*31:0*/ __PVT__cmp__DOT__br_target;
        IData/*31:0*/ __PVT__jump_rs__DOT__unnamedblk7__DOT__i;
        IData/*31:0*/ __PVT__jump_rs__DOT__unnamedblk8__DOT__i;
        IData/*31:0*/ __PVT__jump_rs__DOT__unnamedblk9__DOT__i;
        IData/*31:0*/ __PVT__jump__DOT__br_target;
        IData/*31:0*/ __PVT__mem__DOT__lat_addr;
        IData/*31:0*/ __PVT__mem__DOT__lat_wdata;
        IData/*31:0*/ __PVT__mem__DOT__lat_rdata;
        IData/*31:0*/ __PVT__mem__DOT__rd_v;
        IData/*31:0*/ __PVT__mul_rs__DOT__unnamedblk7__DOT__i;
        IData/*31:0*/ __PVT__mul_rs__DOT__unnamedblk8__DOT__i;
        IData/*31:0*/ __PVT__mul_rs__DOT__unnamedblk9__DOT__i;
        VL_INW(__PVT__ROB_midcore_i,381,0,12);
        VL_IN64(__PVT__MIDCORE_midcore_i,59,0);
        VL_OUTW(__PVT__alu_ROB_exec_o,381,0,12);
        VL_OUTW(__PVT__cmp_ROB_exec_o,381,0,12);
        VL_OUTW(__PVT__jump_ROB_exec_o,381,0,12);
        VL_OUTW(__PVT__mem_ROB_exec_o,381,0,12);
        VL_OUTW(__PVT__mul_ROB_exec_o,381,0,12);
        VL_OUTW(__PVT__store_wb_rob_data_o,381,0,12);
        VL_OUTW(__PVT__fwd_ROB_exec_o,381,0,12);
        VlWide<12>/*381:0*/ __PVT__alu_ROB_data_i;
        VlWide<12>/*381:0*/ __PVT__cmp_ROB_data_i;
        VlWide<12>/*381:0*/ __PVT__jump_ROB_data_i;
        VlWide<12>/*381:0*/ __PVT__mul_ROB_data_i;
        QData/*59:0*/ __PVT__alu_MIDCORE_data_i;
        QData/*59:0*/ __PVT__cmp_MIDCORE_data_i;
        QData/*59:0*/ __PVT__jump_MIDCORE_data_i;
    };
    struct {
        QData/*59:0*/ __PVT__mul_MIDCORE_data_i;
        VlWide<12>/*381:0*/ __PVT__wb_load_rob_data;
        VlWide<12>/*381:0*/ __PVT__mem__DOT__lat_rob_data;
        QData/*63:0*/ __PVT__mul_unit__DOT__result_ss;
        QData/*59:0*/ __VdfgTmp_h2f1d1f15__0;
        QData/*59:0*/ __VdfgTmp_hd1094721__0;
        QData/*59:0*/ __VdfgTmp_h53ffcfca__0;
        QData/*59:0*/ __VdfgTmp_hc98bfb62__0;
        VlUnpacked<IData/*31:0*/, 128> __PVT__PRF__DOT__prf;
        VlUnpacked<IData/*31:0*/, 128> __PVT__PRF__DOT__prf_next;
        VlUnpacked<CData/*0:0*/, 8> __PVT__alu_rs__DOT__valid;
        VlUnpacked<VlWide<12>/*381:0*/, 8> __PVT__alu_rs__DOT__rob_rs;
        VlUnpacked<QData/*59:0*/, 8> __PVT__alu_rs__DOT__midcore_rs;
        VlUnpacked<CData/*0:0*/, 8> __PVT__alu_rs__DOT__pr1_ready;
        VlUnpacked<CData/*0:0*/, 8> __PVT__alu_rs__DOT__pr2_ready;
        VlUnpacked<CData/*0:0*/, 8> __PVT__alu_rs__DOT__valid_next;
        VlUnpacked<VlWide<12>/*381:0*/, 8> __PVT__alu_rs__DOT__rob_rs_next;
        VlUnpacked<QData/*59:0*/, 8> __PVT__alu_rs__DOT__midcore_rs_next;
        VlUnpacked<CData/*0:0*/, 8> __PVT__alu_rs__DOT__pr1_ready_next;
        VlUnpacked<CData/*0:0*/, 8> __PVT__alu_rs__DOT__pr2_ready_next;
        VlUnpacked<CData/*0:0*/, 4> __PVT__cmp_rs__DOT__valid;
        VlUnpacked<VlWide<12>/*381:0*/, 4> __PVT__cmp_rs__DOT__rob_rs;
        VlUnpacked<QData/*59:0*/, 4> __PVT__cmp_rs__DOT__midcore_rs;
        VlUnpacked<CData/*0:0*/, 4> __PVT__cmp_rs__DOT__pr1_ready;
        VlUnpacked<CData/*0:0*/, 4> __PVT__cmp_rs__DOT__pr2_ready;
        VlUnpacked<CData/*0:0*/, 4> __PVT__cmp_rs__DOT__valid_next;
        VlUnpacked<VlWide<12>/*381:0*/, 4> __PVT__cmp_rs__DOT__rob_rs_next;
        VlUnpacked<QData/*59:0*/, 4> __PVT__cmp_rs__DOT__midcore_rs_next;
        VlUnpacked<CData/*0:0*/, 4> __PVT__cmp_rs__DOT__pr1_ready_next;
        VlUnpacked<CData/*0:0*/, 4> __PVT__cmp_rs__DOT__pr2_ready_next;
        VlUnpacked<CData/*0:0*/, 2> __PVT__jump_rs__DOT__valid;
        VlUnpacked<VlWide<12>/*381:0*/, 2> __PVT__jump_rs__DOT__rob_rs;
        VlUnpacked<QData/*59:0*/, 2> __PVT__jump_rs__DOT__midcore_rs;
        VlUnpacked<CData/*0:0*/, 2> __PVT__jump_rs__DOT__pr1_ready;
        VlUnpacked<CData/*0:0*/, 2> __PVT__jump_rs__DOT__pr2_ready;
        VlUnpacked<CData/*0:0*/, 2> __PVT__jump_rs__DOT__valid_next;
        VlUnpacked<VlWide<12>/*381:0*/, 2> __PVT__jump_rs__DOT__rob_rs_next;
        VlUnpacked<QData/*59:0*/, 2> __PVT__jump_rs__DOT__midcore_rs_next;
        VlUnpacked<CData/*0:0*/, 2> __PVT__jump_rs__DOT__pr1_ready_next;
        VlUnpacked<CData/*0:0*/, 2> __PVT__jump_rs__DOT__pr2_ready_next;
        VlUnpacked<CData/*0:0*/, 4> __PVT__mul_rs__DOT__valid;
        VlUnpacked<VlWide<12>/*381:0*/, 4> __PVT__mul_rs__DOT__rob_rs;
        VlUnpacked<QData/*59:0*/, 4> __PVT__mul_rs__DOT__midcore_rs;
        VlUnpacked<CData/*0:0*/, 4> __PVT__mul_rs__DOT__pr1_ready;
        VlUnpacked<CData/*0:0*/, 4> __PVT__mul_rs__DOT__pr2_ready;
        VlUnpacked<CData/*0:0*/, 4> __PVT__mul_rs__DOT__valid_next;
        VlUnpacked<VlWide<12>/*381:0*/, 4> __PVT__mul_rs__DOT__rob_rs_next;
        VlUnpacked<QData/*59:0*/, 4> __PVT__mul_rs__DOT__midcore_rs_next;
        VlUnpacked<CData/*0:0*/, 4> __PVT__mul_rs__DOT__pr1_ready_next;
        VlUnpacked<CData/*0:0*/, 4> __PVT__mul_rs__DOT__pr2_ready_next;
    };

    // INTERNAL VARIABLES
    Vtop_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tb_cpu_execute(Vtop_tb__Syms* symsp, const char* v__name);
    ~Vtop_tb_cpu_execute();
    VL_UNCOPYABLE(Vtop_tb_cpu_execute);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
