// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb_cpu.h"

VL_INLINE_OPT void Vtop_tb_cpu___nba_sequent__TOP__top_tb__dut__3(Vtop_tb_cpu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_tb_cpu___nba_sequent__TOP__top_tb__dut__3\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->__PVT__wb_alu = ((IData)(vlSelf->__PVT__cpu_execute__DOT__alu_valid) 
                             & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                >> 0xeU));
    vlSelf->__PVT__wb_jump = ((IData)(vlSelf->__PVT__cpu_execute__DOT__jump_valid) 
                              & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                 >> 0xeU));
    vlSelf->__PVT__wb_cmp = ((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_valid) 
                             & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                >> 0xeU));
    vlSelf->__PVT__wb_mul = ((IData)(vlSelf->__PVT__cpu_execute__DOT__mul_valid) 
                             & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                >> 0xeU));
    vlSelf->__PVT__cpu_commit__DOT__rob__DOT__wrPtr 
        = (((IData)(vlSymsp->TOP__top_tb.__Vcellinp__dut__rst) 
            | (IData)(vlSelf->__PVT__mispredict)) ? 0U
            : (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__wrPtrNext));
    vlSelf->__PVT__rob_full = (((1U & ((IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__wrPtr) 
                                       >> 4U)) != (1U 
                                                   & ((IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr) 
                                                      >> 4U))) 
                               & ((0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__wrPtr)) 
                                  == (0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))));
    vlSelf->__PVT__monitor_valid = (((IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr) 
                                     != (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__wrPtr)) 
                                    & (IData)((0x18000U 
                                               == (0x18000U 
                                                   & vlSelf->__PVT__commit_rob_o[0xbU]))));
    vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtrNext 
        = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr;
    if (vlSelf->__PVT__monitor_valid) {
        vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtrNext 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
        vlSelf->__PVT__commit_branch_actual_taken = 
            (1U & vlSelf->__PVT__commit_rob_o[0U]);
        vlSelf->__Vcellinp__cpu_midcore__commit_update 
            = (1U & (vlSelf->__PVT__commit_rob_o[0xbU] 
                     >> 0xeU));
        vlSelf->__PVT__mispredict = (1U & (vlSelf->__PVT__commit_rob_o[1U] 
                                           >> 2U));
        vlSelf->cpu_frontend__DOT__branch_predict__DOT____Vcellinp__tage_predictor__update_valid 
            = (IData)((0U != (0x18U & vlSelf->__PVT__commit_rob_o[1U])));
    } else {
        vlSelf->__PVT__commit_branch_actual_taken = 0U;
        vlSelf->__Vcellinp__cpu_midcore__commit_update = 0U;
        vlSelf->__PVT__mispredict = 0U;
        vlSelf->cpu_frontend__DOT__branch_predict__DOT____Vcellinp__tage_predictor__update_valid = 0U;
    }
    vlSelf->__PVT__arat_o[0U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0U];
    vlSelf->__PVT__arat_o[1U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [1U];
    vlSelf->__PVT__arat_o[2U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [2U];
    vlSelf->__PVT__arat_o[3U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [3U];
    vlSelf->__PVT__arat_o[4U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [4U];
    vlSelf->__PVT__arat_o[5U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [5U];
    vlSelf->__PVT__arat_o[6U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [6U];
    vlSelf->__PVT__arat_o[7U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [7U];
    vlSelf->__PVT__arat_o[8U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [8U];
    vlSelf->__PVT__arat_o[9U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [9U];
    vlSelf->__PVT__arat_o[0xaU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0xaU];
    vlSelf->__PVT__arat_o[0xbU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0xbU];
    vlSelf->__PVT__arat_o[0xcU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0xcU];
    vlSelf->__PVT__arat_o[0xdU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0xdU];
    vlSelf->__PVT__arat_o[0xeU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0xeU];
    vlSelf->__PVT__arat_o[0xfU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0xfU];
    vlSelf->__PVT__arat_o[0x10U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x10U];
    vlSelf->__PVT__arat_o[0x11U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x11U];
    vlSelf->__PVT__arat_o[0x12U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x12U];
    vlSelf->__PVT__arat_o[0x13U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x13U];
    vlSelf->__PVT__arat_o[0x14U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x14U];
    vlSelf->__PVT__arat_o[0x15U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x15U];
    vlSelf->__PVT__arat_o[0x16U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x16U];
    vlSelf->__PVT__arat_o[0x17U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x17U];
    vlSelf->__PVT__arat_o[0x18U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x18U];
    vlSelf->__PVT__arat_o[0x19U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x19U];
    vlSelf->__PVT__arat_o[0x1aU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x1aU];
    vlSelf->__PVT__arat_o[0x1bU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x1bU];
    vlSelf->__PVT__arat_o[0x1cU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x1cU];
    vlSelf->__PVT__arat_o[0x1dU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x1dU];
    vlSelf->__PVT__arat_o[0x1eU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x1eU];
    vlSelf->__PVT__arat_o[0x1fU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x1fU];
    if (((IData)(vlSelf->__PVT__monitor_valid) & (vlSelf->__PVT__commit_rob_o[0xbU] 
                                                  >> 0xeU))) {
        vlSelf->__PVT__arat_o[(0x1fU & (vlSelf->__PVT__commit_rob_o[0xbU] 
                                        >> 9U))] = 
            (0x3fU & (vlSelf->__PVT__commit_rob_o[0xbU] 
                      >> 3U));
    }
    vlSelf->__PVT__cpu_execute__DOT__mem__DOT__store_match 
        = ((IData)(vlSelf->__PVT__cpu_execute__DOT__LDorST_i) 
           & ((IData)(vlSelf->__PVT__monitor_valid) 
              & ((((vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xaU] 
                    << 3U) | (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[9U] 
                              >> 0x1dU)) == ((vlSelf->__PVT__commit_rob_o[0xaU] 
                                              << 3U) 
                                             | (vlSelf->__PVT__commit_rob_o[9U] 
                                                >> 0x1dU))) 
                 & ((((vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[8U] 
                       << 3U) | (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[7U] 
                                 >> 0x1dU)) == ((vlSelf->__PVT__commit_rob_o[8U] 
                                                 << 3U) 
                                                | (vlSelf->__PVT__commit_rob_o[7U] 
                                                   >> 0x1dU))) 
                    & ((0xfU & (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[5U] 
                                >> 0xdU)) == (0xfU 
                                              & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)))))));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__commit_pred_taken 
        = ((IData)(vlSelf->__PVT__commit_branch_actual_taken) 
           ^ (IData)(vlSelf->__PVT__mispredict));
    vlSelf->__PVT__cpu_frontend__DOT__valid_fetch = 
        ((~ ((IData)(vlSelf->__PVT__mispredict) | (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__stale_in_flight))) 
         & (IData)(vlSymsp->TOP.imem_resp));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_target = 0U;
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                   >> 2U))][0U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                   [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                             >> 2U))]
                                   [0U] == vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_target 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_target
            [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                      >> 2U))][0U];
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                   >> 2U))][1U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                   [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                             >> 2U))]
                                   [1U] == vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_target 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_target
            [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                      >> 2U))][1U];
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                   >> 2U))][2U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                   [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                             >> 2U))]
                                   [2U] == vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_target 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_target
            [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                      >> 2U))][2U];
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                   >> 2U))][3U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                   [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                             >> 2U))]
                                   [3U] == vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_target 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_target
            [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                      >> 2U))][3U];
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_hit = 0U;
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                   >> 2U))][0U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                   [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                             >> 2U))]
                                   [0U] == vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_hit = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                   >> 2U))][1U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                   [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                             >> 2U))]
                                   [1U] == vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_hit = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                   >> 2U))][2U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                   [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                             >> 2U))]
                                   [2U] == vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_hit = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                   >> 2U))][3U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                   [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                             >> 2U))]
                                   [3U] == vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_hit = 1U;
    }
    if (((IData)(vlSelf->cpu_frontend__DOT__branch_predict__DOT____Vcellinp__tage_predictor__update_valid) 
         & (((vlSelf->__PVT__commit_rob_o[0xaU] << 3U) 
             | (vlSelf->__PVT__commit_rob_o[9U] >> 0x1dU)) 
            == vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_target 
            = ((vlSelf->__PVT__commit_rob_o[1U] << 0x1fU) 
               | (vlSelf->__PVT__commit_rob_o[0U] >> 1U));
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_hit = 1U;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__fifo_valid_pop 
        = ((IData)(vlSelf->cpu_frontend__DOT__branch_predict__DOT____Vcellinp__tage_predictor__update_valid) 
           & ((~ (((1U & ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtr) 
                          >> 4U)) == (1U & ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr) 
                                            >> 4U))) 
                  & (IData)(vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_hc4999392__0))) 
              & (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[5U] 
                   << 0x17U) | (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U] 
                                >> 9U)) == ((vlSelf->__PVT__commit_rob_o[0xaU] 
                                             << 3U) 
                                            | (vlSelf->__PVT__commit_rob_o[9U] 
                                               >> 0x1dU)))));
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0U] 
        = vlSelf->__PVT__arat_o[0U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[1U] 
        = vlSelf->__PVT__arat_o[1U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[2U] 
        = vlSelf->__PVT__arat_o[2U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[3U] 
        = vlSelf->__PVT__arat_o[3U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[4U] 
        = vlSelf->__PVT__arat_o[4U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[5U] 
        = vlSelf->__PVT__arat_o[5U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[6U] 
        = vlSelf->__PVT__arat_o[6U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[7U] 
        = vlSelf->__PVT__arat_o[7U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[8U] 
        = vlSelf->__PVT__arat_o[8U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[9U] 
        = vlSelf->__PVT__arat_o[9U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0xaU] 
        = vlSelf->__PVT__arat_o[0xaU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0xbU] 
        = vlSelf->__PVT__arat_o[0xbU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0xcU] 
        = vlSelf->__PVT__arat_o[0xcU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0xdU] 
        = vlSelf->__PVT__arat_o[0xdU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0xeU] 
        = vlSelf->__PVT__arat_o[0xeU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0xfU] 
        = vlSelf->__PVT__arat_o[0xfU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x10U] 
        = vlSelf->__PVT__arat_o[0x10U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x11U] 
        = vlSelf->__PVT__arat_o[0x11U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x12U] 
        = vlSelf->__PVT__arat_o[0x12U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x13U] 
        = vlSelf->__PVT__arat_o[0x13U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x14U] 
        = vlSelf->__PVT__arat_o[0x14U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x15U] 
        = vlSelf->__PVT__arat_o[0x15U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x16U] 
        = vlSelf->__PVT__arat_o[0x16U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x17U] 
        = vlSelf->__PVT__arat_o[0x17U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x18U] 
        = vlSelf->__PVT__arat_o[0x18U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x19U] 
        = vlSelf->__PVT__arat_o[0x19U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x1aU] 
        = vlSelf->__PVT__arat_o[0x1aU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x1bU] 
        = vlSelf->__PVT__arat_o[0x1bU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x1cU] 
        = vlSelf->__PVT__arat_o[0x1cU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x1dU] 
        = vlSelf->__PVT__arat_o[0x1dU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x1eU] 
        = vlSelf->__PVT__arat_o[0x1eU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x1fU] 
        = vlSelf->__PVT__arat_o[0x1fU];
    vlSelf->__PVT__dmem_wdata = 0U;
    vlSelf->__PVT__dmem_addr = ((IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__store_match)
                                 ? ((vlSelf->__PVT__commit_rob_o[4U] 
                                     << 0x13U) | (vlSelf->__PVT__commit_rob_o[3U] 
                                                  >> 0xdU))
                                 : vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__wrPtrNext 
        = vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__wrPtr;
    if (((IData)(vlSelf->__PVT__cpu_frontend__DOT__valid_fetch) 
         & (~ (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_full)))) {
        vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__wrPtrNext 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__wrPtr)));
    }
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__wrPtrNext 
        = vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__wrPtr;
    if (((IData)(vlSelf->__PVT__cpu_frontend__DOT__valid_fetch) 
         & (~ (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_full)))) {
        vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__wrPtrNext 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__wrPtr)));
    }
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__wrPtrNext 
        = vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__wrPtr;
    if (((IData)(vlSelf->__PVT__cpu_frontend__DOT__valid_fetch) 
         & (~ (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_full)))) {
        vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__wrPtrNext 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__wrPtr)));
    }
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__wrPtrNext 
        = vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__wrPtr;
    if (((IData)(vlSelf->__PVT__cpu_frontend__DOT__valid_fetch) 
         & (~ (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_full)))) {
        vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__wrPtrNext 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__wrPtr)));
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_ready 
        = ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_hit) 
           & (IData)(vlSymsp->TOP.imem_resp));
    vlSelf->__PVT__cpu_frontend__DOT__branch_valid 
        = ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_hit) 
           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtrNext 
        = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr;
    if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__fifo_valid_pop) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtrNext 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr)));
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T1 
            = (0x40U == (0x1c0U & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U]));
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T2 
            = (0x80U == (0x1c0U & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U]));
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T3 
            = (0xc0U == (0x1c0U & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U]));
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T4 
            = (0x100U == (0x1c0U & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U]));
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3 
            = vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h3beb847a__0;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2 
            = vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h7334ccba__0;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1 
            = (0U == (0x1c0U & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U]));
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4 
            = ((IData)(vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h3beb847a__0) 
               | (3U == (7U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U] 
                               >> 6U))));
    } else {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T1 = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T2 = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T3 = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T4 = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3 = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2 = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1 = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4 = 0U;
    }
    vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask = 0U;
    vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__cpu_execute__DOT__LDorST_i)))) {
        if ((1U & (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                           >> 0x12U)))) {
            if ((1U & (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                               >> 0x11U)))) {
                vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask 
                    = (0xfU & 0U);
                vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                                      >> 0x10U)))) {
                vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask 
                    = (0xfU & ((IData)(3U) << (3U & vlSelf->__PVT__dmem_addr)));
                vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v 
                    = (0xffffU & (vlSymsp->TOP.dmem_rdata 
                                  >> (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                            (1U 
                                                             & (vlSelf->__PVT__dmem_addr 
                                                                >> 1U)), 4U))));
            } else {
                vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask 
                    = (0xfU & ((IData)(1U) << (3U & vlSelf->__PVT__dmem_addr)));
                vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v 
                    = (0xffU & (vlSymsp->TOP.dmem_rdata 
                                >> (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                          (3U 
                                                           & vlSelf->__PVT__dmem_addr), 3U))));
            }
        } else if ((1U & (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                                  >> 0x11U)))) {
            if ((1U & (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                               >> 0x10U)))) {
                vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask 
                    = (0xfU & 0U);
                vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v = 0U;
            } else {
                vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask 
                    = (0xfU & 0xfU);
                vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v 
                    = vlSymsp->TOP.dmem_rdata;
            }
        } else if ((1U & (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                                  >> 0x10U)))) {
            vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask 
                = (0xfU & ((IData)(3U) << (3U & vlSelf->__PVT__dmem_addr)));
            vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v 
                = (((- (IData)((1U & (vlSymsp->TOP.dmem_rdata 
                                      >> (0x1fU & ((IData)(0xfU) 
                                                   + 
                                                   VL_SHIFTL_III(5,32,32, 
                                                                 (1U 
                                                                  & (vlSelf->__PVT__dmem_addr 
                                                                     >> 1U)), 4U))))))) 
                    << 0x10U) | (0xffffU & (vlSymsp->TOP.dmem_rdata 
                                            >> (0x1fU 
                                                & VL_SHIFTL_III(5,32,32, 
                                                                (1U 
                                                                 & (vlSelf->__PVT__dmem_addr 
                                                                    >> 1U)), 4U)))));
        } else {
            vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask 
                = (0xfU & ((IData)(1U) << (3U & vlSelf->__PVT__dmem_addr)));
            vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v 
                = (((- (IData)((1U & (vlSymsp->TOP.dmem_rdata 
                                      >> (0x1fU & ((IData)(7U) 
                                                   + 
                                                   VL_SHIFTL_III(5,32,32, 
                                                                 (3U 
                                                                  & vlSelf->__PVT__dmem_addr), 3U))))))) 
                    << 8U) | (0xffU & (vlSymsp->TOP.dmem_rdata 
                                       >> (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         (3U 
                                                          & vlSelf->__PVT__dmem_addr), 3U)))));
        }
    }
    vlSelf->__PVT__dmem_wmask = 0U;
    if (vlSelf->__PVT__cpu_execute__DOT__LDorST_i) {
        vlSelf->__PVT__dmem_wdata = ((IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__store_match)
                                      ? ((vlSelf->__PVT__commit_rob_o[2U] 
                                          << 0x1bU) 
                                         | (vlSelf->__PVT__commit_rob_o[1U] 
                                            >> 5U))
                                      : ((0U == (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                                                            >> 0x10U))))
                                          ? (((~ ((IData)(0xffU) 
                                                  << 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(5,32,32, 
                                                                   (3U 
                                                                    & vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr), 3U)))) 
                                              & vlSelf->__PVT__dmem_wdata) 
                                             | (0xffffffffULL 
                                                & ((0xffU 
                                                    & vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr2_val) 
                                                   << 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(5,32,32, 
                                                                    (3U 
                                                                     & vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr), 3U)))))
                                          : ((1U == 
                                              (7U & (IData)(
                                                            (vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                                                             >> 0x10U))))
                                              ? (((~ 
                                                   ((IData)(0xffffU) 
                                                    << 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(5,32,32, 
                                                                     (1U 
                                                                      & (vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr 
                                                                         >> 1U)), 4U)))) 
                                                  & vlSelf->__PVT__dmem_wdata) 
                                                 | (0xffffffffULL 
                                                    & ((0xffffU 
                                                        & vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr2_val) 
                                                       << 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(5,32,32, 
                                                                        (1U 
                                                                         & (vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr 
                                                                            >> 1U)), 4U)))))
                                              : ((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                                                              >> 0x10U))))
                                                  ? vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr2_val
                                                  : 0U))));
        vlSelf->__PVT__dmem_wmask = (0xfU & ((0U == 
                                              (7U & (IData)(
                                                            (vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                                                             >> 0x10U))))
                                              ? ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & vlSelf->__PVT__dmem_addr))
                                              : ((1U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                                                              >> 0x10U))))
                                                  ? 
                                                 ((IData)(3U) 
                                                  << 
                                                  (3U 
                                                   & vlSelf->__PVT__dmem_addr))
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                                                               >> 0x10U))))
                                                   ? 0xfU
                                                   : 0U))));
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtrNext 
        = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtr;
    if (((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_ready) 
         & (~ (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__full)))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtrNext 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtr)));
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[2U] 
        = ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[1U] 
        = ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[0U] 
        = ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__decrement_all_u = 0U;
    if ((4U != (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                   & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                  + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                     & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                 + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                    & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                   & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1))))) {
        if ((3U != (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                       & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                      + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                         & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                     + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                        & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                    + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                       & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1))))) {
            if ((2U == (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                          + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                             & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                         + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                            & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                        + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1))))) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk13__DOT__i = 4U;
            }
            if ((2U != (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                          + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                             & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                         + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                            & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                        + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1))))) {
                if ((1U != (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                               & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                              + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                                 & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                             + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                                & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                            + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                               & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1))))) {
                    if (((0U == (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                                    & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                                   + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                                      & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                                  + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                                     & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                                 + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                                    & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1)))) 
                         & ((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                              | (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3)) 
                             | (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2)) 
                            | (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1)))) {
                        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__decrement_all_u = 1U;
                    }
                }
                if ((1U == (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                               & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                              + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                                 & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                             + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                                & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                            + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                               & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1))))) {
                    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk14__DOT__i = 4U;
                }
            }
        }
        if ((3U == (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                       & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                      + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                         & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                     + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                        & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                    + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                       & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1))))) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk12__DOT__i = 4U;
        }
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[3U] 
        = ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4));
    vlSelf->__PVT__mem_ROB_exec_o[0U] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0U];
    vlSelf->__PVT__mem_ROB_exec_o[1U] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[1U];
    vlSelf->__PVT__mem_ROB_exec_o[2U] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[2U];
    vlSelf->__PVT__mem_ROB_exec_o[3U] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[3U];
    vlSelf->__PVT__mem_ROB_exec_o[4U] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[4U];
    vlSelf->__PVT__mem_ROB_exec_o[5U] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[5U];
    vlSelf->__PVT__mem_ROB_exec_o[6U] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[6U];
    vlSelf->__PVT__mem_ROB_exec_o[7U] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[7U];
    vlSelf->__PVT__mem_ROB_exec_o[8U] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[8U];
    vlSelf->__PVT__mem_ROB_exec_o[9U] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[9U];
    vlSelf->__PVT__mem_ROB_exec_o[0xaU] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xaU];
    vlSelf->__PVT__mem_ROB_exec_o[0xbU] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xbU];
    vlSelf->__PVT__mem_ROB_exec_o[5U] = ((0x1ffffU 
                                          & vlSelf->__PVT__mem_ROB_exec_o[5U]) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr1_val)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr2_val)))) 
                                            << 0x11U));
    vlSelf->__PVT__mem_ROB_exec_o[6U] = (((IData)((
                                                   ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr1_val)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr2_val)))) 
                                          >> 0xfU) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr1_val)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr2_val))) 
                                                     >> 0x20U)) 
                                            << 0x11U));
    vlSelf->__PVT__mem_ROB_exec_o[7U] = ((0xfffe0000U 
                                          & vlSelf->__PVT__mem_ROB_exec_o[7U]) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr1_val)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr2_val))) 
                                                     >> 0x20U)) 
                                            >> 0xfU));
    vlSelf->__PVT__mem_ROB_exec_o[2U] = ((0x1fU & vlSelf->__PVT__mem_ROB_exec_o[2U]) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask)) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(vlSelf->__PVT__dmem_wmask)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP.dmem_rdata))))) 
                                            << 5U));
    vlSelf->__PVT__mem_ROB_exec_o[3U] = (((IData)((
                                                   ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->__PVT__dmem_wmask)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSymsp->TOP.dmem_rdata))))) 
                                          >> 0x1bU) 
                                         | ((vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr 
                                             << 0xdU) 
                                            | ((IData)(
                                                       ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask)) 
                                                          << 0x24U) 
                                                         | (((QData)((IData)(vlSelf->__PVT__dmem_wmask)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSymsp->TOP.dmem_rdata)))) 
                                                        >> 0x20U)) 
                                               << 5U)));
    vlSelf->__PVT__mem_ROB_exec_o[4U] = ((0xffffe000U 
                                          & vlSelf->__PVT__mem_ROB_exec_o[4U]) 
                                         | (((0x1fU 
                                              & (vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr 
                                                 >> 0x13U)) 
                                             | ((IData)(
                                                        ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask)) 
                                                           << 0x24U) 
                                                          | (((QData)((IData)(vlSelf->__PVT__dmem_wmask)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSymsp->TOP.dmem_rdata)))) 
                                                         >> 0x20U)) 
                                                >> 0x1bU)) 
                                            | (0x1fe0U 
                                               & (vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr 
                                                  >> 0x13U))));
    vlSelf->__PVT__mem_ROB_exec_o[1U] = ((0x1fU & vlSelf->__PVT__mem_ROB_exec_o[1U]) 
                                         | (vlSelf->__PVT__dmem_wdata 
                                            << 5U));
    vlSelf->__PVT__mem_ROB_exec_o[2U] = ((0xffffffe0U 
                                          & vlSelf->__PVT__mem_ROB_exec_o[2U]) 
                                         | (vlSelf->__PVT__dmem_wdata 
                                            >> 0x1bU));
    vlSelf->__PVT__mem_ROB_exec_o[1U] = ((0xfffffffbU 
                                          & vlSelf->__PVT__mem_ROB_exec_o[1U]) 
                                         | (4U & ((0xfffffffcU 
                                                   & (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[1U] 
                                                      << 1U)) 
                                                  | ((((vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[9U] 
                                                        << 3U) 
                                                       | (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[8U] 
                                                          >> 0x1dU)) 
                                                      != 
                                                      ((IData)(4U) 
                                                       + 
                                                       ((vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xaU] 
                                                         << 3U) 
                                                        | (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[9U] 
                                                           >> 0x1dU)))) 
                                                     << 2U))));
    vlSelf->__PVT__mem_ROB_exec_o[0U] = (IData)(((QData)((IData)(
                                                                 ((IData)(4U) 
                                                                  + 
                                                                  ((vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xaU] 
                                                                    << 3U) 
                                                                   | (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[9U] 
                                                                      >> 0x1dU))))) 
                                                 << 1U));
    vlSelf->__PVT__mem_ROB_exec_o[1U] = ((0xfffffffeU 
                                          & vlSelf->__PVT__mem_ROB_exec_o[1U]) 
                                         | (IData)(
                                                   (((QData)((IData)(
                                                                     ((IData)(4U) 
                                                                      + 
                                                                      ((vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xaU] 
                                                                        << 3U) 
                                                                       | (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[9U] 
                                                                          >> 0x1dU))))) 
                                                     << 1U) 
                                                    >> 0x20U)));
    vlSelf->__PVT__mem_ROB_exec_o[4U] = ((0x1fffU & 
                                          vlSelf->__PVT__mem_ROB_exec_o[4U]) 
                                         | (vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v 
                                            << 0xdU));
    vlSelf->__PVT__mem_ROB_exec_o[5U] = ((0xffffe000U 
                                          & vlSelf->__PVT__mem_ROB_exec_o[5U]) 
                                         | (vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v 
                                            >> 0x13U));
    vlSelf->__PVT__mem_ROB_exec_o[0xbU] = ((0x17fffU 
                                            & vlSelf->__PVT__mem_ROB_exec_o[0xbU]) 
                                           | (0x1ffffU 
                                              & (((IData)(vlSelf->__PVT__cpu_execute__DOT__LDorST_i)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__cpu_execute__DOT__LDorST_i) 
                                                   && (((((~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem_empty_i)) 
                                                          & (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xbU] 
                                                             >> 0x10U)) 
                                                         & (IData)(vlSelf->__PVT__cpu_execute__DOT__READY_i)) 
                                                        & (~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__store_committed))) 
                                                       & (~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__store_match))))
                                                   : 
                                                  ((((~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem_empty_i)) 
                                                     & (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xbU] 
                                                        >> 0x10U)) 
                                                    & (IData)(vlSelf->__PVT__cpu_execute__DOT__READY_i)) 
                                                   & (IData)(vlSymsp->TOP.dmem_resp))) 
                                                 << 0xfU)));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 0U;
    if ((4U == (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                   & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                  + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                     & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                 + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                    & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                   & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1))))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk11__DOT__i = 4U;
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [0U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_4)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 1U;
            }
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [1U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_4)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 2U;
            }
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [2U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_4)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 3U;
            }
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [3U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_4)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 4U;
            }
        }
    } else if ((3U == (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                          & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                         + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                            & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                        + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                       + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                          & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1))))) {
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [0U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_3)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 1U;
            }
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [1U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_3)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 2U;
            }
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [2U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_3)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 3U;
            }
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [3U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_3)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 4U;
            }
        }
    } else if ((2U == (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                          & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                         + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                            & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                        + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                       + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                          & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1))))) {
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [0U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_2)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 1U;
            }
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [1U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_2)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 2U;
            }
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [2U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_2)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 3U;
            }
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [3U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_2)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 4U;
            }
        }
    } else if ((1U == (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                          & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                         + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                            & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                        + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                       + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                          & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1))))) {
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [0U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 1U;
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [1U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 2U;
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [2U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 3U;
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [3U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 4U;
        }
    } else if (((0U == (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                          + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                             & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                         + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                            & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                        + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1)))) 
                & ((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                     | (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3)) 
                    | (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2)) 
                   | (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1)))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 0U;
    }
    vlSelf->__PVT__cpu_commit__DOT__rob__DOT__wb_update 
        = (1U & ((vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                  | (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                     | (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                        | (vlSelf->__PVT__mem_ROB_exec_o[0xbU] 
                           | vlSelf->__PVT__mul_ROB_exec_o[0xbU])))) 
                 >> 0xfU));
    vlSelf->__PVT__wb_load = ((IData)(vlSelf->__PVT__cpu_execute__DOT__load_valid) 
                              & (vlSelf->__PVT__mem_ROB_exec_o[0xbU] 
                                 >> 0xeU));
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf_next[__Vilp] 
            = vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (vlSelf->__PVT__wb_alu) {
        vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf_next[(0x3fU 
                                                             & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                                >> 3U))] 
            = ((vlSelf->__PVT__alu_ROB_exec_o[5U] << 0x13U) 
               | (vlSelf->__PVT__alu_ROB_exec_o[4U] 
                  >> 0xdU));
    }
    if (vlSelf->__PVT__wb_cmp) {
        vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf_next[(0x3fU 
                                                             & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                                >> 3U))] 
            = ((vlSelf->__PVT__cmp_ROB_exec_o[5U] << 0x13U) 
               | (vlSelf->__PVT__cmp_ROB_exec_o[4U] 
                  >> 0xdU));
    }
    if (vlSelf->__PVT__wb_load) {
        vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf_next[(0x3fU 
                                                             & (vlSelf->__PVT__mem_ROB_exec_o[0xbU] 
                                                                >> 3U))] 
            = ((vlSelf->__PVT__mem_ROB_exec_o[5U] << 0x13U) 
               | (vlSelf->__PVT__mem_ROB_exec_o[4U] 
                  >> 0xdU));
    }
    if (vlSelf->__PVT__wb_jump) {
        vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf_next[(0x3fU 
                                                             & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                                >> 3U))] 
            = ((vlSelf->__PVT__jump_ROB_exec_o[5U] 
                << 0x13U) | (vlSelf->__PVT__jump_ROB_exec_o[4U] 
                             >> 0xdU));
    }
    if (vlSelf->__PVT__wb_mul) {
        vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf_next[(0x3fU 
                                                             & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                                >> 3U))] 
            = ((vlSelf->__PVT__mul_ROB_exec_o[5U] << 0x13U) 
               | (vlSelf->__PVT__mul_ROB_exec_o[4U] 
                  >> 0xdU));
    }
    vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf_next[0U] = 0U;
}

VL_INLINE_OPT void Vtop_tb_cpu___nba_sequent__TOP__top_tb__dut__5(Vtop_tb_cpu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_tb_cpu___nba_sequent__TOP__top_tb__dut__5\n"); );
    // Body
    vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc_next 
        = ((IData)(vlSymsp->TOP__top_tb.__Vcellinp__dut__rst)
            ? 0x60000000U : ((IData)(vlSelf->__PVT__mispredict)
                              ? ((vlSelf->__PVT__commit_rob_o[1U] 
                                  << 0x1fU) | (vlSelf->__PVT__commit_rob_o[0U] 
                                               >> 1U))
                              : ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetchq_full)
                                  ? vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc
                                  : (((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_valid) 
                                      & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp))
                                      ? vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_target
                                      : ((IData)(4U) 
                                         + vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc)))));
}
