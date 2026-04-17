// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb_cpu_midcore.h"

extern const VlWide<12>/*383:0*/ Vtop_tb__ConstPool__CONST_h7e30f2cb_0;

VL_INLINE_OPT void Vtop_tb_cpu_midcore___ico_sequent__TOP__top_tb__dut__cpu_midcore__0(Vtop_tb_cpu_midcore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_tb_cpu_midcore___ico_sequent__TOP__top_tb__dut__cpu_midcore__0\n"); );
    // Body
    vlSelf->__PVT__stall = ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__rob_full) 
                            | ((IData)(vlSelf->stall_alu_full) 
                               | ((IData)(vlSelf->stall_cmp_full) 
                                  | ((IData)(vlSelf->stall_load_full) 
                                     | ((IData)(vlSelf->stall_store_full) 
                                        | ((IData)(vlSelf->stall_jump_full) 
                                           | ((IData)(vlSelf->stall_mul_full) 
                                              | ((IData)(vlSelf->stall_no_free_pr) 
                                                 | ((IData)(vlSelf->stall_checkpoint_full) 
                                                    | ((IData)(vlSelf->stall_lc_checkpoint_full) 
                                                       | ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict) 
                                                          | (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_mispredict_o))))))))))));
    vlSelf->__PVT__rename2__DOT__pr1_busy_tmp = (1U 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                             >> 0x11U)) 
                                                    & (vlSelf->__PVT__busy_table__DOT__bt[
                                                       (((1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                                     >> 0x11U)))
                                                          ? 
                                                         (0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                                     >> 9U)))
                                                          : 0U) 
                                                        >> 5U)] 
                                                       >> 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                                    >> 0x11U)))
                                                         ? 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                                    >> 9U)))
                                                         : 0U))));
    if (((IData)((vlSelf->__PVT__MIDCORE_rename1_reg 
                  >> 0x11U)) & (((((((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_alu) 
                                     & ((0x7fU & (IData)(
                                                         (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                          >> 9U))) 
                                        == (0x7fU & 
                                            (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__alu_ROB_exec_o[0xbU] 
                                             >> 0xfU)))) 
                                    | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_load) 
                                       & ((0x7fU & (IData)(
                                                           (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                            >> 9U))) 
                                          == (0x7fU 
                                              & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                 >> 0xfU))))) 
                                   | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_jump) 
                                      & ((0x7fU & (IData)(
                                                          (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                           >> 9U))) 
                                         == (0x7fU 
                                             & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__jump_ROB_exec_o[0xbU] 
                                                >> 0xfU))))) 
                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_cmp) 
                                     & ((0x7fU & (IData)(
                                                         (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                          >> 9U))) 
                                        == (0x7fU & 
                                            (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__cmp_ROB_exec_o[0xbU] 
                                             >> 0xfU))))) 
                                 | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_mul) 
                                    & ((0x7fU & (IData)(
                                                        (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                         >> 9U))) 
                                       == (0x7fU & 
                                           (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mul_ROB_exec_o[0xbU] 
                                            >> 0xfU))))) 
                                | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                   & ((0x7fU & (IData)(
                                                       (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                        >> 9U))) 
                                      == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__rename2__DOT__pr1_busy_tmp = 0U;
    }
    vlSelf->__PVT__rename2__DOT__pr2_busy_tmp = (1U 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                             >> 0x10U)) 
                                                    & (vlSelf->__PVT__busy_table__DOT__bt[
                                                       (((1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                                     >> 0x10U)))
                                                          ? 
                                                         (0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                                     >> 2U)))
                                                          : 0U) 
                                                        >> 5U)] 
                                                       >> 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                                    >> 0x10U)))
                                                         ? 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                                    >> 2U)))
                                                         : 0U))));
    if (((IData)((vlSelf->__PVT__MIDCORE_rename1_reg 
                  >> 0x10U)) & (((((((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_alu) 
                                     & ((0x7fU & (IData)(
                                                         (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                          >> 2U))) 
                                        == (0x7fU & 
                                            (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__alu_ROB_exec_o[0xbU] 
                                             >> 0xfU)))) 
                                    | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_load) 
                                       & ((0x7fU & (IData)(
                                                           (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                            >> 2U))) 
                                          == (0x7fU 
                                              & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                 >> 0xfU))))) 
                                   | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_jump) 
                                      & ((0x7fU & (IData)(
                                                          (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                           >> 2U))) 
                                         == (0x7fU 
                                             & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__jump_ROB_exec_o[0xbU] 
                                                >> 0xfU))))) 
                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_cmp) 
                                     & ((0x7fU & (IData)(
                                                         (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                          >> 2U))) 
                                        == (0x7fU & 
                                            (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__cmp_ROB_exec_o[0xbU] 
                                             >> 0xfU))))) 
                                 | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_mul) 
                                    & ((0x7fU & (IData)(
                                                        (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                         >> 2U))) 
                                       == (0x7fU & 
                                           (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mul_ROB_exec_o[0xbU] 
                                            >> 0xfU))))) 
                                | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                   & ((0x7fU & (IData)(
                                                       (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                        >> 2U))) 
                                      == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__rename2__DOT__pr2_busy_tmp = 0U;
    }
    vlSelf->__VdfgTmp_hc8d9bbac__0 = ((~ (IData)(vlSelf->__PVT__stall)) 
                                      & (vlSelf->__PVT__ROB_rename2_reg[0xbU] 
                                         >> 0x1dU));
    vlSelf->__PVT__decode_request = (1U & ((~ (IData)(vlSelf->__PVT__stall)) 
                                           & (~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__fetch_empty))));
    vlSelf->__PVT__cp_rename_update_o = ((~ (IData)(vlSelf->__PVT__stall)) 
                                         & (0x28000000U 
                                            == (0x28000000U 
                                                & vlSelf->__PVT__ROB_rename1_reg[0xbU])));
    vlSelf->__PVT__ROB_midcore_o[0U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0U];
    vlSelf->__PVT__ROB_midcore_o[1U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[1U];
    vlSelf->__PVT__ROB_midcore_o[2U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[2U];
    vlSelf->__PVT__ROB_midcore_o[3U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[3U];
    vlSelf->__PVT__ROB_midcore_o[4U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[4U];
    vlSelf->__PVT__ROB_midcore_o[5U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[5U];
    vlSelf->__PVT__ROB_midcore_o[6U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[6U];
    vlSelf->__PVT__ROB_midcore_o[7U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[7U];
    vlSelf->__PVT__ROB_midcore_o[8U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[8U];
    vlSelf->__PVT__ROB_midcore_o[9U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[9U];
    vlSelf->__PVT__ROB_midcore_o[0xaU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xaU];
    vlSelf->__PVT__ROB_midcore_o[0xbU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xbU];
    vlSelf->__PVT__MIDCORE_midcore_o = 0ULL;
    if ((1U & (~ (IData)(vlSelf->__PVT__stall)))) {
        vlSelf->__PVT__ROB_midcore_o[0U] = vlSelf->__PVT__ROB_rename2_reg[0U];
        vlSelf->__PVT__ROB_midcore_o[1U] = vlSelf->__PVT__ROB_rename2_reg[1U];
        vlSelf->__PVT__ROB_midcore_o[2U] = vlSelf->__PVT__ROB_rename2_reg[2U];
        vlSelf->__PVT__ROB_midcore_o[3U] = vlSelf->__PVT__ROB_rename2_reg[3U];
        vlSelf->__PVT__ROB_midcore_o[4U] = vlSelf->__PVT__ROB_rename2_reg[4U];
        vlSelf->__PVT__ROB_midcore_o[5U] = vlSelf->__PVT__ROB_rename2_reg[5U];
        vlSelf->__PVT__ROB_midcore_o[6U] = vlSelf->__PVT__ROB_rename2_reg[6U];
        vlSelf->__PVT__ROB_midcore_o[7U] = vlSelf->__PVT__ROB_rename2_reg[7U];
        vlSelf->__PVT__ROB_midcore_o[8U] = vlSelf->__PVT__ROB_rename2_reg[8U];
        vlSelf->__PVT__ROB_midcore_o[9U] = vlSelf->__PVT__ROB_rename2_reg[9U];
        vlSelf->__PVT__ROB_midcore_o[0xaU] = vlSelf->__PVT__ROB_rename2_reg[0xaU];
        vlSelf->__PVT__ROB_midcore_o[0xbU] = vlSelf->__PVT__ROB_rename2_reg[0xbU];
        if (vlSelf->__PVT__is_br_or_jump) {
            vlSelf->__PVT__ROB_midcore_o[0U] = ((0xfffffe3fU 
                                                 & vlSelf->__PVT__ROB_midcore_o[0U]) 
                                                | ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cp_checkpoint_id) 
                                                   << 6U));
        }
        if ((2U == (7U & (IData)((vlSelf->__PVT__MIDCORE_rename2_reg 
                                  >> 0x19U))))) {
            vlSelf->__PVT__ROB_midcore_o[0U] = ((0xffffffc0U 
                                                 & vlSelf->__PVT__ROB_midcore_o[0U]) 
                                                | (IData)(vlSymsp->TOP__top_tb__dut.__PVT__lc_checkpoint_id));
        }
        vlSelf->__PVT__MIDCORE_midcore_o = vlSelf->__PVT__MIDCORE_rename2_reg;
    }
    vlSelf->__PVT__MIDCORE_rename2_wb_updated = vlSelf->__PVT__MIDCORE_rename2_reg;
    if (vlSelf->__PVT__stall) {
        if (((IData)((vlSelf->__PVT__MIDCORE_rename2_reg 
                      >> 0x11U)) & (((((((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_alu) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                        >> 9U))) 
                                            == (0x7fU 
                                                & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__alu_ROB_exec_o[0xbU] 
                                                   >> 0xfU)))) 
                                        | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_load) 
                                           & ((0x7fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                          >> 9U))) 
                                              == (0x7fU 
                                                  & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                     >> 0xfU))))) 
                                       | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_jump) 
                                          & ((0x7fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                         >> 9U))) 
                                             == (0x7fU 
                                                 & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__jump_ROB_exec_o[0xbU] 
                                                    >> 0xfU))))) 
                                      | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_cmp) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                        >> 9U))) 
                                            == (0x7fU 
                                                & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__cmp_ROB_exec_o[0xbU] 
                                                   >> 0xfU))))) 
                                     | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_mul) 
                                        & ((0x7fU & (IData)(
                                                            (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                             >> 9U))) 
                                           == (0x7fU 
                                               & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mul_ROB_exec_o[0xbU] 
                                                  >> 0xfU))))) 
                                    | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                       & ((0x7fU & (IData)(
                                                           (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                            >> 9U))) 
                                          == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
            vlSelf->__PVT__MIDCORE_rename2_wb_updated 
                = (0xffffffffffffffdULL & vlSelf->__PVT__MIDCORE_rename2_wb_updated);
        }
        if (((IData)((vlSelf->__PVT__MIDCORE_rename2_reg 
                      >> 0x10U)) & (((((((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_alu) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                        >> 2U))) 
                                            == (0x7fU 
                                                & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__alu_ROB_exec_o[0xbU] 
                                                   >> 0xfU)))) 
                                        | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_load) 
                                           & ((0x7fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                          >> 2U))) 
                                              == (0x7fU 
                                                  & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                     >> 0xfU))))) 
                                       | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_jump) 
                                          & ((0x7fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                         >> 2U))) 
                                             == (0x7fU 
                                                 & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__jump_ROB_exec_o[0xbU] 
                                                    >> 0xfU))))) 
                                      | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_cmp) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                        >> 2U))) 
                                            == (0x7fU 
                                                & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__cmp_ROB_exec_o[0xbU] 
                                                   >> 0xfU))))) 
                                     | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_mul) 
                                        & ((0x7fU & (IData)(
                                                            (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                             >> 2U))) 
                                           == (0x7fU 
                                               & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mul_ROB_exec_o[0xbU] 
                                                  >> 0xfU))))) 
                                    | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                       & ((0x7fU & (IData)(
                                                           (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                            >> 2U))) 
                                          == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
            vlSelf->__PVT__MIDCORE_rename2_wb_updated 
                = (0xffffffffffffffeULL & vlSelf->__PVT__MIDCORE_rename2_wb_updated);
        }
    }
    vlSelf->__PVT__MIDCORE_rename2_o = vlSelf->__PVT__MIDCORE_rename1_reg;
    vlSelf->__PVT__MIDCORE_rename2_o = ((0xffffffffffffffcULL 
                                         & vlSelf->__PVT__MIDCORE_rename2_o) 
                                        | (IData)((IData)(
                                                          (((IData)(vlSelf->__PVT__rename2__DOT__pr1_busy_tmp) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->__PVT__rename2__DOT__pr2_busy_tmp)))));
    vlSelf->__PVT__lc_dispatch_valid_o = ((IData)(vlSelf->__VdfgTmp_hc8d9bbac__0) 
                                          & (0x4000000ULL 
                                             == (0xe000000ULL 
                                                 & vlSelf->__PVT__MIDCORE_rename2_reg)));
    vlSelf->__PVT__srat__DOT__srat_next[0U] = vlSelf->__PVT__srat__DOT__srat
        [0U];
    vlSelf->__PVT__srat__DOT__srat_next[1U] = vlSelf->__PVT__srat__DOT__srat
        [1U];
    vlSelf->__PVT__srat__DOT__srat_next[2U] = vlSelf->__PVT__srat__DOT__srat
        [2U];
    vlSelf->__PVT__srat__DOT__srat_next[3U] = vlSelf->__PVT__srat__DOT__srat
        [3U];
    vlSelf->__PVT__srat__DOT__srat_next[4U] = vlSelf->__PVT__srat__DOT__srat
        [4U];
    vlSelf->__PVT__srat__DOT__srat_next[5U] = vlSelf->__PVT__srat__DOT__srat
        [5U];
    vlSelf->__PVT__srat__DOT__srat_next[6U] = vlSelf->__PVT__srat__DOT__srat
        [6U];
    vlSelf->__PVT__srat__DOT__srat_next[7U] = vlSelf->__PVT__srat__DOT__srat
        [7U];
    vlSelf->__PVT__srat__DOT__srat_next[8U] = vlSelf->__PVT__srat__DOT__srat
        [8U];
    vlSelf->__PVT__srat__DOT__srat_next[9U] = vlSelf->__PVT__srat__DOT__srat
        [9U];
    vlSelf->__PVT__srat__DOT__srat_next[0xaU] = vlSelf->__PVT__srat__DOT__srat
        [0xaU];
    vlSelf->__PVT__srat__DOT__srat_next[0xbU] = vlSelf->__PVT__srat__DOT__srat
        [0xbU];
    vlSelf->__PVT__srat__DOT__srat_next[0xcU] = vlSelf->__PVT__srat__DOT__srat
        [0xcU];
    vlSelf->__PVT__srat__DOT__srat_next[0xdU] = vlSelf->__PVT__srat__DOT__srat
        [0xdU];
    vlSelf->__PVT__srat__DOT__srat_next[0xeU] = vlSelf->__PVT__srat__DOT__srat
        [0xeU];
    vlSelf->__PVT__srat__DOT__srat_next[0xfU] = vlSelf->__PVT__srat__DOT__srat
        [0xfU];
    vlSelf->__PVT__srat__DOT__srat_next[0x10U] = vlSelf->__PVT__srat__DOT__srat
        [0x10U];
    vlSelf->__PVT__srat__DOT__srat_next[0x11U] = vlSelf->__PVT__srat__DOT__srat
        [0x11U];
    vlSelf->__PVT__srat__DOT__srat_next[0x12U] = vlSelf->__PVT__srat__DOT__srat
        [0x12U];
    vlSelf->__PVT__srat__DOT__srat_next[0x13U] = vlSelf->__PVT__srat__DOT__srat
        [0x13U];
    vlSelf->__PVT__srat__DOT__srat_next[0x14U] = vlSelf->__PVT__srat__DOT__srat
        [0x14U];
    vlSelf->__PVT__srat__DOT__srat_next[0x15U] = vlSelf->__PVT__srat__DOT__srat
        [0x15U];
    vlSelf->__PVT__srat__DOT__srat_next[0x16U] = vlSelf->__PVT__srat__DOT__srat
        [0x16U];
    vlSelf->__PVT__srat__DOT__srat_next[0x17U] = vlSelf->__PVT__srat__DOT__srat
        [0x17U];
    vlSelf->__PVT__srat__DOT__srat_next[0x18U] = vlSelf->__PVT__srat__DOT__srat
        [0x18U];
    vlSelf->__PVT__srat__DOT__srat_next[0x19U] = vlSelf->__PVT__srat__DOT__srat
        [0x19U];
    vlSelf->__PVT__srat__DOT__srat_next[0x1aU] = vlSelf->__PVT__srat__DOT__srat
        [0x1aU];
    vlSelf->__PVT__srat__DOT__srat_next[0x1bU] = vlSelf->__PVT__srat__DOT__srat
        [0x1bU];
    vlSelf->__PVT__srat__DOT__srat_next[0x1cU] = vlSelf->__PVT__srat__DOT__srat
        [0x1cU];
    vlSelf->__PVT__srat__DOT__srat_next[0x1dU] = vlSelf->__PVT__srat__DOT__srat
        [0x1dU];
    vlSelf->__PVT__srat__DOT__srat_next[0x1eU] = vlSelf->__PVT__srat__DOT__srat
        [0x1eU];
    vlSelf->__PVT__srat__DOT__srat_next[0x1fU] = vlSelf->__PVT__srat__DOT__srat
        [0x1fU];
    vlSelf->__PVT__free_list__DOT__free_list_next[0U] 
        = vlSelf->__PVT__free_list__DOT__free_list[0U];
    vlSelf->__PVT__free_list__DOT__free_list_next[1U] 
        = vlSelf->__PVT__free_list__DOT__free_list[1U];
    vlSelf->__PVT__free_list__DOT__free_list_next[2U] 
        = vlSelf->__PVT__free_list__DOT__free_list[2U];
    vlSelf->__PVT__free_list__DOT__free_list_next[3U] 
        = vlSelf->__PVT__free_list__DOT__free_list[3U];
    if (vlSelf->__PVT__cp_rename_update_o) {
        vlSelf->__PVT__srat__DOT__srat_next[vlSelf->__PVT__rename_update_ar] 
            = vlSelf->__PVT__cp_rename_update_pr_o;
        vlSelf->__PVT__free_list__DOT__free_list_next[((IData)(vlSelf->__PVT__cp_rename_update_pr_o) 
                                                       >> 5U)] 
            = ((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->__PVT__cp_rename_update_pr_o)))) 
               & vlSelf->__PVT__free_list__DOT__free_list_next[
               ((IData)(vlSelf->__PVT__cp_rename_update_pr_o) 
                >> 5U)]);
    }
    if (vlSymsp->TOP__top_tb__dut.__Vcellinp__cpu_midcore__commit_update) {
        vlSelf->__PVT__free_list__DOT__free_list_next[(3U 
                                                       & (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[0xbU] 
                                                          >> 0xdU))] 
            = (vlSelf->__PVT__free_list__DOT__free_list_next[
               (3U & (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[0xbU] 
                      >> 0xdU))] | ((IData)(1U) << 
                                    (0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[0xbU] 
                                              >> 8U))));
    }
    vlSelf->__PVT__ROB_rename1_o[0U] = vlSelf->__PVT__ROB_decode_o[0U];
    vlSelf->__PVT__ROB_rename1_o[1U] = vlSelf->__PVT__ROB_decode_o[1U];
    vlSelf->__PVT__ROB_rename1_o[2U] = vlSelf->__PVT__ROB_decode_o[2U];
    vlSelf->__PVT__ROB_rename1_o[3U] = vlSelf->__PVT__ROB_decode_o[3U];
    vlSelf->__PVT__ROB_rename1_o[4U] = vlSelf->__PVT__ROB_decode_o[4U];
    vlSelf->__PVT__ROB_rename1_o[5U] = vlSelf->__PVT__ROB_decode_o[5U];
    vlSelf->__PVT__ROB_rename1_o[6U] = vlSelf->__PVT__ROB_decode_o[6U];
    vlSelf->__PVT__ROB_rename1_o[7U] = vlSelf->__PVT__ROB_decode_o[7U];
    vlSelf->__PVT__ROB_rename1_o[8U] = vlSelf->__PVT__ROB_decode_o[8U];
    vlSelf->__PVT__ROB_rename1_o[9U] = vlSelf->__PVT__ROB_decode_o[9U];
    vlSelf->__PVT__ROB_rename1_o[0xaU] = vlSelf->__PVT__ROB_decode_o[0xaU];
    vlSelf->__PVT__ROB_rename1_o[0xbU] = vlSelf->__PVT__ROB_decode_o[0xbU];
    vlSelf->__PVT__ROB_rename1_o[0xbU] = ((0x3fc000ffU 
                                           & vlSelf->__PVT__ROB_rename1_o[0xbU]) 
                                          | (0x3fffffffU 
                                             & (((0x8000000U 
                                                  & vlSelf->__PVT__ROB_decode_o[0xbU])
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__cp_rename_update_o) 
                                                   & ((0x1fU 
                                                       & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                          >> 7U)) 
                                                      == (IData)(vlSelf->__PVT__rename_update_ar)))
                                                   ? (IData)(vlSelf->__PVT__cp_rename_update_pr_o)
                                                   : 
                                                  vlSelf->__PVT__srat__DOT__srat
                                                  [
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                      >> 7U))])
                                                  : 0U) 
                                                << 8U)));
    vlSelf->__PVT__ROB_rename1_o[1U] = (0x3fffU & vlSelf->__PVT__ROB_rename1_o[1U]);
    vlSelf->__PVT__ROB_rename1_o[2U] = 0U;
    vlSelf->__PVT__ROB_rename1_o[3U] = 0U;
    vlSelf->__PVT__ROB_rename1_o[4U] = 0U;
    vlSelf->__PVT__ROB_rename1_o[5U] = 0U;
    vlSelf->__PVT__ROB_rename1_o[6U] = 0U;
    vlSelf->__PVT__ROB_rename1_o[7U] = (0xf0000000U 
                                        & vlSelf->__PVT__ROB_rename1_o[7U]);
    vlSelf->__PVT__ROB_rename1_o[1U] = (0xfffff7ffU 
                                        & vlSelf->__PVT__ROB_rename1_o[1U]);
    vlSelf->__PVT__ROB_rename1_o[0U] = (0x1ffU & vlSelf->__PVT__ROB_rename1_o[0U]);
    vlSelf->__PVT__ROB_rename1_o[1U] = (0xfffffc00U 
                                        & vlSelf->__PVT__ROB_rename1_o[1U]);
    vlSelf->__PVT__ROB_rename1_o[0xbU] = (0x2fffffffU 
                                          & vlSelf->__PVT__ROB_rename1_o[0xbU]);
    vlSelf->__PVT__MIDCORE_rename1_o = vlSelf->__PVT__MIDCORE_decode_o;
    vlSelf->__PVT__MIDCORE_rename1_o = ((0xfffffffffff0003ULL 
                                         & vlSelf->__PVT__MIDCORE_rename1_o) 
                                        | ((QData)((IData)(
                                                           ((((1U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__MIDCORE_decode_o 
                                                                          >> 0x11U)))
                                                               ? 
                                                              (((IData)(vlSelf->__PVT__cp_rename_update_o) 
                                                                & ((IData)(vlSelf->__PVT__rename_update_ar) 
                                                                   == (IData)(vlSelf->__PVT__srat_lookup_rs1)))
                                                                ? (IData)(vlSelf->__PVT__cp_rename_update_pr_o)
                                                                : 
                                                               vlSelf->__PVT__srat__DOT__srat
                                                               [vlSelf->__PVT__srat_lookup_rs1])
                                                               : 0U) 
                                                             << 7U) 
                                                            | ((1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__MIDCORE_decode_o 
                                                                           >> 0x10U)))
                                                                ? 
                                                               (((IData)(vlSelf->__PVT__cp_rename_update_o) 
                                                                 & ((IData)(vlSelf->__PVT__rename_update_ar) 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                                        >> 0x14U))))
                                                                 ? (IData)(vlSelf->__PVT__cp_rename_update_pr_o)
                                                                 : 
                                                                vlSelf->__PVT__srat__DOT__srat
                                                                [
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                                    >> 0x14U))])
                                                                : 0U)))) 
                                           << 2U));
    vlSelf->__PVT__MIDCORE_rename1_o = (0xffffffffffffffcULL 
                                        & vlSelf->__PVT__MIDCORE_rename1_o);
    vlSelf->__PVT__busy_table__DOT__bt_next[0U] = vlSelf->__PVT__busy_table__DOT__bt[0U];
    vlSelf->__PVT__busy_table__DOT__bt_next[1U] = vlSelf->__PVT__busy_table__DOT__bt[1U];
    vlSelf->__PVT__busy_table__DOT__bt_next[2U] = vlSelf->__PVT__busy_table__DOT__bt[2U];
    vlSelf->__PVT__busy_table__DOT__bt_next[3U] = vlSelf->__PVT__busy_table__DOT__bt[3U];
    if (vlSelf->__PVT__cp_rename_update_o) {
        vlSelf->__PVT__busy_table__DOT__bt_next[((IData)(vlSelf->__PVT__cp_rename_update_pr_o) 
                                                 >> 5U)] 
            = (vlSelf->__PVT__busy_table__DOT__bt_next[
               ((IData)(vlSelf->__PVT__cp_rename_update_pr_o) 
                >> 5U)] | ((IData)(1U) << (0x1fU & (IData)(vlSelf->__PVT__cp_rename_update_pr_o))));
    }
    if (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_alu) {
        vlSelf->__PVT__busy_table__DOT__bt_next[(3U 
                                                 & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__alu_ROB_exec_o[0xbU] 
                                                    >> 0x14U))] 
            = ((~ ((IData)(1U) << (0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__alu_ROB_exec_o[0xbU] 
                                            >> 0xfU)))) 
               & vlSelf->__PVT__busy_table__DOT__bt_next[
               (3U & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__alu_ROB_exec_o[0xbU] 
                      >> 0x14U))]);
    }
    if (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_load) {
        vlSelf->__PVT__busy_table__DOT__bt_next[(3U 
                                                 & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                    >> 0x14U))] 
            = ((~ ((IData)(1U) << (0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[0xbU] 
                                            >> 0xfU)))) 
               & vlSelf->__PVT__busy_table__DOT__bt_next[
               (3U & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[0xbU] 
                      >> 0x14U))]);
    }
    if (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_jump) {
        vlSelf->__PVT__busy_table__DOT__bt_next[(3U 
                                                 & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__jump_ROB_exec_o[0xbU] 
                                                    >> 0x14U))] 
            = ((~ ((IData)(1U) << (0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__jump_ROB_exec_o[0xbU] 
                                            >> 0xfU)))) 
               & vlSelf->__PVT__busy_table__DOT__bt_next[
               (3U & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__jump_ROB_exec_o[0xbU] 
                      >> 0x14U))]);
    }
    if (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_cmp) {
        vlSelf->__PVT__busy_table__DOT__bt_next[(3U 
                                                 & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__cmp_ROB_exec_o[0xbU] 
                                                    >> 0x14U))] 
            = ((~ ((IData)(1U) << (0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__cmp_ROB_exec_o[0xbU] 
                                            >> 0xfU)))) 
               & vlSelf->__PVT__busy_table__DOT__bt_next[
               (3U & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__cmp_ROB_exec_o[0xbU] 
                      >> 0x14U))]);
    }
    if (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_mul) {
        vlSelf->__PVT__busy_table__DOT__bt_next[(3U 
                                                 & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mul_ROB_exec_o[0xbU] 
                                                    >> 0x14U))] 
            = ((~ ((IData)(1U) << (0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mul_ROB_exec_o[0xbU] 
                                            >> 0xfU)))) 
               & vlSelf->__PVT__busy_table__DOT__bt_next[
               (3U & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mul_ROB_exec_o[0xbU] 
                      >> 0x14U))]);
    }
    if (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) {
        vlSelf->__PVT__busy_table__DOT__bt_next[((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o) 
                                                 >> 5U)] 
            = ((~ ((IData)(1U) << (0x1fU & (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))) 
               & vlSelf->__PVT__busy_table__DOT__bt_next[
               ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o) 
                >> 5U)]);
    }
}

extern const VlUnpacked<CData/*2:0*/, 256> Vtop_tb__ConstPool__TABLE_he9283809_0;

VL_INLINE_OPT void Vtop_tb_cpu_midcore___nba_sequent__TOP__top_tb__dut__cpu_midcore__0(Vtop_tb_cpu_midcore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_tb_cpu_midcore___nba_sequent__TOP__top_tb__dut__cpu_midcore__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<12>/*381:0*/ __Vdly__ROB_rename2_reg;
    VL_ZERO_W(382, __Vdly__ROB_rename2_reg);
    CData/*0:0*/ __Vdlyvset__srat__DOT__srat__v0;
    __Vdlyvset__srat__DOT__srat__v0 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v32;
    __Vdlyvval__srat__DOT__srat__v32 = 0;
    CData/*0:0*/ __Vdlyvset__srat__DOT__srat__v32;
    __Vdlyvset__srat__DOT__srat__v32 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v33;
    __Vdlyvval__srat__DOT__srat__v33 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v34;
    __Vdlyvval__srat__DOT__srat__v34 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v35;
    __Vdlyvval__srat__DOT__srat__v35 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v36;
    __Vdlyvval__srat__DOT__srat__v36 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v37;
    __Vdlyvval__srat__DOT__srat__v37 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v38;
    __Vdlyvval__srat__DOT__srat__v38 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v39;
    __Vdlyvval__srat__DOT__srat__v39 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v40;
    __Vdlyvval__srat__DOT__srat__v40 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v41;
    __Vdlyvval__srat__DOT__srat__v41 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v42;
    __Vdlyvval__srat__DOT__srat__v42 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v43;
    __Vdlyvval__srat__DOT__srat__v43 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v44;
    __Vdlyvval__srat__DOT__srat__v44 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v45;
    __Vdlyvval__srat__DOT__srat__v45 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v46;
    __Vdlyvval__srat__DOT__srat__v46 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v47;
    __Vdlyvval__srat__DOT__srat__v47 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v48;
    __Vdlyvval__srat__DOT__srat__v48 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v49;
    __Vdlyvval__srat__DOT__srat__v49 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v50;
    __Vdlyvval__srat__DOT__srat__v50 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v51;
    __Vdlyvval__srat__DOT__srat__v51 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v52;
    __Vdlyvval__srat__DOT__srat__v52 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v53;
    __Vdlyvval__srat__DOT__srat__v53 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v54;
    __Vdlyvval__srat__DOT__srat__v54 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v55;
    __Vdlyvval__srat__DOT__srat__v55 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v56;
    __Vdlyvval__srat__DOT__srat__v56 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v57;
    __Vdlyvval__srat__DOT__srat__v57 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v58;
    __Vdlyvval__srat__DOT__srat__v58 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v59;
    __Vdlyvval__srat__DOT__srat__v59 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v60;
    __Vdlyvval__srat__DOT__srat__v60 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v61;
    __Vdlyvval__srat__DOT__srat__v61 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v62;
    __Vdlyvval__srat__DOT__srat__v62 = 0;
    CData/*6:0*/ __Vdlyvval__srat__DOT__srat__v63;
    __Vdlyvval__srat__DOT__srat__v63 = 0;
    VlWide<12>/*383:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_19;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_28;
    VlWide<4>/*127:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_34;
    VlWide<4>/*127:0*/ __Vtemp_35;
    // Body
    __Vdly__ROB_rename2_reg[0U] = vlSelf->__PVT__ROB_rename2_reg[0U];
    __Vdly__ROB_rename2_reg[1U] = vlSelf->__PVT__ROB_rename2_reg[1U];
    __Vdly__ROB_rename2_reg[2U] = vlSelf->__PVT__ROB_rename2_reg[2U];
    __Vdly__ROB_rename2_reg[3U] = vlSelf->__PVT__ROB_rename2_reg[3U];
    __Vdly__ROB_rename2_reg[4U] = vlSelf->__PVT__ROB_rename2_reg[4U];
    __Vdly__ROB_rename2_reg[5U] = vlSelf->__PVT__ROB_rename2_reg[5U];
    __Vdly__ROB_rename2_reg[6U] = vlSelf->__PVT__ROB_rename2_reg[6U];
    __Vdly__ROB_rename2_reg[7U] = vlSelf->__PVT__ROB_rename2_reg[7U];
    __Vdly__ROB_rename2_reg[8U] = vlSelf->__PVT__ROB_rename2_reg[8U];
    __Vdly__ROB_rename2_reg[9U] = vlSelf->__PVT__ROB_rename2_reg[9U];
    __Vdly__ROB_rename2_reg[0xaU] = vlSelf->__PVT__ROB_rename2_reg[0xaU];
    __Vdly__ROB_rename2_reg[0xbU] = vlSelf->__PVT__ROB_rename2_reg[0xbU];
    __Vdlyvset__srat__DOT__srat__v0 = 0U;
    __Vdlyvset__srat__DOT__srat__v32 = 0U;
    __Vtableidx1 = (((IData)((0x2000033U == (0xfe00007fU 
                                             & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst))) 
                     << 7U) | (0x7fU & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst));
    vlSelf->__PVT__decode__DOT__dispatch_to = Vtop_tb__ConstPool__TABLE_he9283809_0
        [__Vtableidx1];
    vlSelf->__PVT__decode__DOT__i_imm = (((- (IData)(
                                                     (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                      >> 0x1fU))) 
                                          << 0xbU) 
                                         | (0x7ffU 
                                            & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                               >> 0x14U)));
    vlSelf->__PVT__srat_lookup_rs1 = ((0x37U == (0x7fU 
                                                 & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst))
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                  >> 0xfU)));
    vlSelf->__PVT__decode__DOT__rs2_valid = ((0x33U 
                                              == (0x7fU 
                                                  & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                             | ((0x23U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                                | (0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst))));
    vlSelf->decode__DOT____VdfgExtracted_hf4d07035__0 
        = ((0x37U == (0x7fU & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
           | (0x17U == (0x7fU & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)));
    vlSelf->decode__DOT____VdfgTmp_h90d7ced5__0 = (
                                                   (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                                   | (0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)));
    if ((((IData)(vlSymsp->TOP__top_tb.__Vcellinp__dut__rst) 
          | (IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict)) 
         | (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_mispredict_o))) {
        vlSelf->__PVT__MIDCORE_rename1_reg = 0ULL;
        __Vtemp_2[1U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[1U];
        __Vtemp_2[2U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[2U];
        __Vtemp_2[3U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[3U];
        __Vtemp_2[4U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[4U];
        __Vtemp_2[5U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[5U];
        __Vtemp_2[6U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[6U];
        __Vtemp_2[7U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[7U];
        __Vtemp_2[8U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[8U];
        __Vtemp_2[9U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[9U];
        __Vtemp_2[0xaU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xaU];
        __Vtemp_2[0xbU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xbU];
        vlSelf->__PVT__ROB_rename1_reg[0U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0U];
        __Vdly__ROB_rename2_reg[0U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0U];
        __Vdly__ROB_rename2_reg[1U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[1U];
        __Vdly__ROB_rename2_reg[2U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[2U];
        __Vdly__ROB_rename2_reg[3U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[3U];
        __Vdly__ROB_rename2_reg[4U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[4U];
        __Vdly__ROB_rename2_reg[5U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[5U];
        __Vdly__ROB_rename2_reg[6U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[6U];
        __Vdly__ROB_rename2_reg[7U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[7U];
        __Vdly__ROB_rename2_reg[8U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[8U];
        __Vdly__ROB_rename2_reg[9U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[9U];
        __Vdly__ROB_rename2_reg[0xaU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xaU];
        __Vdly__ROB_rename2_reg[0xbU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xbU];
        vlSelf->__PVT__MIDCORE_rename2_reg = 0ULL;
    } else if (vlSelf->__PVT__stall) {
        vlSelf->__PVT__MIDCORE_rename1_reg = vlSelf->__PVT__MIDCORE_rename1_reg;
        __Vtemp_2[1U] = vlSelf->__PVT__ROB_rename1_reg[1U];
        __Vtemp_2[2U] = vlSelf->__PVT__ROB_rename1_reg[2U];
        __Vtemp_2[3U] = vlSelf->__PVT__ROB_rename1_reg[3U];
        __Vtemp_2[4U] = vlSelf->__PVT__ROB_rename1_reg[4U];
        __Vtemp_2[5U] = vlSelf->__PVT__ROB_rename1_reg[5U];
        __Vtemp_2[6U] = vlSelf->__PVT__ROB_rename1_reg[6U];
        __Vtemp_2[7U] = vlSelf->__PVT__ROB_rename1_reg[7U];
        __Vtemp_2[8U] = vlSelf->__PVT__ROB_rename1_reg[8U];
        __Vtemp_2[9U] = vlSelf->__PVT__ROB_rename1_reg[9U];
        __Vtemp_2[0xaU] = vlSelf->__PVT__ROB_rename1_reg[0xaU];
        __Vtemp_2[0xbU] = vlSelf->__PVT__ROB_rename1_reg[0xbU];
        vlSelf->__PVT__ROB_rename1_reg[0U] = vlSelf->__PVT__ROB_rename1_reg[0U];
        __Vdly__ROB_rename2_reg[0U] = vlSelf->__PVT__ROB_rename2_reg[0U];
        __Vdly__ROB_rename2_reg[1U] = vlSelf->__PVT__ROB_rename2_reg[1U];
        __Vdly__ROB_rename2_reg[2U] = vlSelf->__PVT__ROB_rename2_reg[2U];
        __Vdly__ROB_rename2_reg[3U] = vlSelf->__PVT__ROB_rename2_reg[3U];
        __Vdly__ROB_rename2_reg[4U] = vlSelf->__PVT__ROB_rename2_reg[4U];
        __Vdly__ROB_rename2_reg[5U] = vlSelf->__PVT__ROB_rename2_reg[5U];
        __Vdly__ROB_rename2_reg[6U] = vlSelf->__PVT__ROB_rename2_reg[6U];
        __Vdly__ROB_rename2_reg[7U] = vlSelf->__PVT__ROB_rename2_reg[7U];
        __Vdly__ROB_rename2_reg[8U] = vlSelf->__PVT__ROB_rename2_reg[8U];
        __Vdly__ROB_rename2_reg[9U] = vlSelf->__PVT__ROB_rename2_reg[9U];
        __Vdly__ROB_rename2_reg[0xaU] = vlSelf->__PVT__ROB_rename2_reg[0xaU];
        __Vdly__ROB_rename2_reg[0xbU] = vlSelf->__PVT__ROB_rename2_reg[0xbU];
        vlSelf->__PVT__MIDCORE_rename2_reg = vlSelf->__PVT__MIDCORE_rename2_wb_updated;
    } else {
        vlSelf->__PVT__MIDCORE_rename1_reg = vlSelf->__PVT__MIDCORE_rename1_o;
        __Vtemp_2[1U] = vlSelf->__PVT__ROB_rename1_o[1U];
        __Vtemp_2[2U] = vlSelf->__PVT__ROB_rename1_o[2U];
        __Vtemp_2[3U] = vlSelf->__PVT__ROB_rename1_o[3U];
        __Vtemp_2[4U] = vlSelf->__PVT__ROB_rename1_o[4U];
        __Vtemp_2[5U] = vlSelf->__PVT__ROB_rename1_o[5U];
        __Vtemp_2[6U] = vlSelf->__PVT__ROB_rename1_o[6U];
        __Vtemp_2[7U] = vlSelf->__PVT__ROB_rename1_o[7U];
        __Vtemp_2[8U] = vlSelf->__PVT__ROB_rename1_o[8U];
        __Vtemp_2[9U] = vlSelf->__PVT__ROB_rename1_o[9U];
        __Vtemp_2[0xaU] = vlSelf->__PVT__ROB_rename1_o[0xaU];
        __Vtemp_2[0xbU] = vlSelf->__PVT__ROB_rename1_o[0xbU];
        vlSelf->__PVT__ROB_rename1_reg[0U] = vlSelf->__PVT__ROB_rename1_o[0U];
        __Vdly__ROB_rename2_reg[0U] = vlSelf->__PVT__ROB_rename2_o[0U];
        __Vdly__ROB_rename2_reg[1U] = vlSelf->__PVT__ROB_rename2_o[1U];
        __Vdly__ROB_rename2_reg[2U] = vlSelf->__PVT__ROB_rename2_o[2U];
        __Vdly__ROB_rename2_reg[3U] = vlSelf->__PVT__ROB_rename2_o[3U];
        __Vdly__ROB_rename2_reg[4U] = vlSelf->__PVT__ROB_rename2_o[4U];
        __Vdly__ROB_rename2_reg[5U] = vlSelf->__PVT__ROB_rename2_o[5U];
        __Vdly__ROB_rename2_reg[6U] = vlSelf->__PVT__ROB_rename2_o[6U];
        __Vdly__ROB_rename2_reg[7U] = vlSelf->__PVT__ROB_rename2_o[7U];
        __Vdly__ROB_rename2_reg[8U] = vlSelf->__PVT__ROB_rename2_o[8U];
        __Vdly__ROB_rename2_reg[9U] = vlSelf->__PVT__ROB_rename2_o[9U];
        __Vdly__ROB_rename2_reg[0xaU] = vlSelf->__PVT__ROB_rename2_o[0xaU];
        __Vdly__ROB_rename2_reg[0xbU] = vlSelf->__PVT__ROB_rename2_o[0xbU];
        __Vdly__ROB_rename2_reg[5U] = ((0xf03fffffU 
                                        & __Vdly__ROB_rename2_reg[5U]) 
                                       | (0xfc00000U 
                                          & (((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__wrPtr) 
                                              + (1U 
                                                 & ((vlSelf->__PVT__ROB_rename2_reg[0xbU] 
                                                     >> 0x1dU) 
                                                    & (~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict))))) 
                                             << 0x16U)));
        vlSelf->__PVT__MIDCORE_rename2_reg = vlSelf->__PVT__MIDCORE_rename2_o;
    }
    vlSelf->__PVT__ROB_rename1_reg[1U] = __Vtemp_2[1U];
    vlSelf->__PVT__ROB_rename1_reg[2U] = __Vtemp_2[2U];
    vlSelf->__PVT__ROB_rename1_reg[3U] = __Vtemp_2[3U];
    vlSelf->__PVT__ROB_rename1_reg[4U] = __Vtemp_2[4U];
    vlSelf->__PVT__ROB_rename1_reg[5U] = __Vtemp_2[5U];
    vlSelf->__PVT__ROB_rename1_reg[6U] = __Vtemp_2[6U];
    vlSelf->__PVT__ROB_rename1_reg[7U] = __Vtemp_2[7U];
    vlSelf->__PVT__ROB_rename1_reg[8U] = __Vtemp_2[8U];
    vlSelf->__PVT__ROB_rename1_reg[9U] = __Vtemp_2[9U];
    vlSelf->__PVT__ROB_rename1_reg[0xaU] = __Vtemp_2[0xaU];
    vlSelf->__PVT__ROB_rename1_reg[0xbU] = __Vtemp_2[0xbU];
    if (vlSymsp->TOP__top_tb.__Vcellinp__dut__rst) {
        vlSelf->__PVT__srat__DOT__unnamedblk1__DOT__i = 0x20U;
        __Vtemp_5[1U] = 0U;
        __Vtemp_5[2U] = 0U;
        __Vtemp_5[3U] = 0U;
        vlSelf->__PVT__busy_table__DOT__bt[0U] = 0U;
    } else if (((IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict) 
                | (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_mispredict_o))) {
        __Vtemp_5[1U] = vlSymsp->TOP__top_tb__dut.__PVT__bt_rebuild[1U];
        __Vtemp_5[2U] = vlSymsp->TOP__top_tb__dut.__PVT__bt_rebuild[2U];
        __Vtemp_5[3U] = vlSymsp->TOP__top_tb__dut.__PVT__bt_rebuild[3U];
        vlSelf->__PVT__busy_table__DOT__bt[0U] = vlSymsp->TOP__top_tb__dut.__PVT__bt_rebuild[0U];
    } else if (((IData)(vlSelf->__PVT__cp_rename_update_o) 
                | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_alu) 
                   | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_load) 
                      | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_jump) 
                         | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_cmp) 
                            | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                               | (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_mul)))))))) {
        __Vtemp_5[1U] = vlSelf->__PVT__busy_table__DOT__bt_next[1U];
        __Vtemp_5[2U] = vlSelf->__PVT__busy_table__DOT__bt_next[2U];
        __Vtemp_5[3U] = vlSelf->__PVT__busy_table__DOT__bt_next[3U];
        vlSelf->__PVT__busy_table__DOT__bt[0U] = vlSelf->__PVT__busy_table__DOT__bt_next[0U];
    } else {
        __Vtemp_5[1U] = vlSelf->__PVT__busy_table__DOT__bt[1U];
        __Vtemp_5[2U] = vlSelf->__PVT__busy_table__DOT__bt[2U];
        __Vtemp_5[3U] = vlSelf->__PVT__busy_table__DOT__bt[3U];
        vlSelf->__PVT__busy_table__DOT__bt[0U] = vlSelf->__PVT__busy_table__DOT__bt[0U];
    }
    vlSelf->__PVT__busy_table__DOT__bt[1U] = __Vtemp_5[1U];
    vlSelf->__PVT__busy_table__DOT__bt[2U] = __Vtemp_5[2U];
    vlSelf->__PVT__busy_table__DOT__bt[3U] = __Vtemp_5[3U];
    __Vtemp_19[0U] = 1U;
    __Vtemp_19[1U] = 0U;
    __Vtemp_19[2U] = 0U;
    __Vtemp_19[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_20, __Vtemp_19, 
                  (0x7fU & (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[0xbU] 
                            >> 8U)));
    __Vtemp_28[0U] = 1U;
    __Vtemp_28[1U] = 0U;
    __Vtemp_28[2U] = 0U;
    __Vtemp_28[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_29, __Vtemp_28, 
                  (0x7fU & (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[0xbU] 
                            >> 8U)));
    __Vtemp_34[0U] = 1U;
    __Vtemp_34[1U] = 0U;
    __Vtemp_34[2U] = 0U;
    __Vtemp_34[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_35, __Vtemp_34, 
                  (0x7fU & (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[0xbU] 
                            >> 8U)));
    if (vlSymsp->TOP__top_tb.__Vcellinp__dut__rst) {
        __Vtemp_11[1U] = 0xffffffffU;
        __Vtemp_11[2U] = 0xffffffffU;
        __Vtemp_11[3U] = 0xffffffffU;
        vlSelf->__PVT__free_list__DOT__free_list[0U] = 0U;
        __Vdlyvset__srat__DOT__srat__v0 = 1U;
    } else {
        if (((IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict) 
             & (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_mispredict_o))) {
            __Vtemp_11[1U] = ((vlSelf->__PVT__free_list__DOT__free_list[1U] 
                               | (((0x3fU & ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict_rob_idx) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr))) 
                                   <= (0x3fU & ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_rob_idx_o) 
                                                - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr))))
                                   ? ((5U >= (IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_checkpoint_id))
                                       ? vlSymsp->TOP__top_tb__dut.__PVT__checkpoint__DOT__cp_alloc_list
                                      [vlSymsp->TOP__top_tb__dut.__PVT__exec_checkpoint_id][1U]
                                       : 0U) : vlSymsp->TOP__top_tb__dut.__PVT__load_checkpoint__DOT__cp_alloc_list
                                  [vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_checkpoint_id_o][1U])) 
                              | ((IData)(vlSymsp->TOP__top_tb__dut.__Vcellinp__cpu_midcore__commit_update)
                                  ? __Vtemp_20[1U] : 0U));
            __Vtemp_11[2U] = ((vlSelf->__PVT__free_list__DOT__free_list[2U] 
                               | (((0x3fU & ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict_rob_idx) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr))) 
                                   <= (0x3fU & ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_rob_idx_o) 
                                                - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr))))
                                   ? ((5U >= (IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_checkpoint_id))
                                       ? vlSymsp->TOP__top_tb__dut.__PVT__checkpoint__DOT__cp_alloc_list
                                      [vlSymsp->TOP__top_tb__dut.__PVT__exec_checkpoint_id][2U]
                                       : 0U) : vlSymsp->TOP__top_tb__dut.__PVT__load_checkpoint__DOT__cp_alloc_list
                                  [vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_checkpoint_id_o][2U])) 
                              | ((IData)(vlSymsp->TOP__top_tb__dut.__Vcellinp__cpu_midcore__commit_update)
                                  ? __Vtemp_20[2U] : 0U));
            __Vtemp_11[3U] = ((vlSelf->__PVT__free_list__DOT__free_list[3U] 
                               | (((0x3fU & ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict_rob_idx) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr))) 
                                   <= (0x3fU & ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_rob_idx_o) 
                                                - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr))))
                                   ? ((5U >= (IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_checkpoint_id))
                                       ? vlSymsp->TOP__top_tb__dut.__PVT__checkpoint__DOT__cp_alloc_list
                                      [vlSymsp->TOP__top_tb__dut.__PVT__exec_checkpoint_id][3U]
                                       : 0U) : vlSymsp->TOP__top_tb__dut.__PVT__load_checkpoint__DOT__cp_alloc_list
                                  [vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_checkpoint_id_o][3U])) 
                              | ((IData)(vlSymsp->TOP__top_tb__dut.__Vcellinp__cpu_midcore__commit_update)
                                  ? __Vtemp_20[3U] : 0U));
            vlSelf->__PVT__free_list__DOT__free_list[0U] 
                = ((vlSelf->__PVT__free_list__DOT__free_list[0U] 
                    | (((0x3fU & ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict_rob_idx) 
                                  - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr))) 
                        <= (0x3fU & ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_rob_idx_o) 
                                     - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr))))
                        ? ((5U >= (IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_checkpoint_id))
                            ? vlSymsp->TOP__top_tb__dut.__PVT__checkpoint__DOT__cp_alloc_list
                           [vlSymsp->TOP__top_tb__dut.__PVT__exec_checkpoint_id][0U]
                            : 0U) : vlSymsp->TOP__top_tb__dut.__PVT__load_checkpoint__DOT__cp_alloc_list
                       [vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_checkpoint_id_o][0U])) 
                   | ((IData)(vlSymsp->TOP__top_tb__dut.__Vcellinp__cpu_midcore__commit_update)
                       ? __Vtemp_20[0U] : 0U));
            if (((0x3fU & ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict_rob_idx) 
                           - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr))) 
                 <= (0x3fU & ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_rob_idx_o) 
                              - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr))))) {
                __Vdlyvval__srat__DOT__srat__v32 = 
                    vlSelf->__PVT__recover_srat_i[0U];
                __Vdlyvval__srat__DOT__srat__v33 = 
                    vlSelf->__PVT__recover_srat_i[1U];
                __Vdlyvval__srat__DOT__srat__v34 = 
                    vlSelf->__PVT__recover_srat_i[2U];
                __Vdlyvval__srat__DOT__srat__v35 = 
                    vlSelf->__PVT__recover_srat_i[3U];
                __Vdlyvval__srat__DOT__srat__v36 = 
                    vlSelf->__PVT__recover_srat_i[4U];
                __Vdlyvval__srat__DOT__srat__v37 = 
                    vlSelf->__PVT__recover_srat_i[5U];
                __Vdlyvval__srat__DOT__srat__v38 = 
                    vlSelf->__PVT__recover_srat_i[6U];
                __Vdlyvval__srat__DOT__srat__v39 = 
                    vlSelf->__PVT__recover_srat_i[7U];
                __Vdlyvval__srat__DOT__srat__v40 = 
                    vlSelf->__PVT__recover_srat_i[8U];
                __Vdlyvval__srat__DOT__srat__v41 = 
                    vlSelf->__PVT__recover_srat_i[9U];
                __Vdlyvval__srat__DOT__srat__v42 = 
                    vlSelf->__PVT__recover_srat_i[0xaU];
                __Vdlyvval__srat__DOT__srat__v43 = 
                    vlSelf->__PVT__recover_srat_i[0xbU];
                __Vdlyvval__srat__DOT__srat__v44 = 
                    vlSelf->__PVT__recover_srat_i[0xcU];
                __Vdlyvval__srat__DOT__srat__v45 = 
                    vlSelf->__PVT__recover_srat_i[0xdU];
                __Vdlyvval__srat__DOT__srat__v46 = 
                    vlSelf->__PVT__recover_srat_i[0xeU];
                __Vdlyvval__srat__DOT__srat__v47 = 
                    vlSelf->__PVT__recover_srat_i[0xfU];
                __Vdlyvval__srat__DOT__srat__v48 = 
                    vlSelf->__PVT__recover_srat_i[0x10U];
                __Vdlyvval__srat__DOT__srat__v49 = 
                    vlSelf->__PVT__recover_srat_i[0x11U];
                __Vdlyvval__srat__DOT__srat__v50 = 
                    vlSelf->__PVT__recover_srat_i[0x12U];
                __Vdlyvval__srat__DOT__srat__v51 = 
                    vlSelf->__PVT__recover_srat_i[0x13U];
                __Vdlyvval__srat__DOT__srat__v52 = 
                    vlSelf->__PVT__recover_srat_i[0x14U];
                __Vdlyvval__srat__DOT__srat__v53 = 
                    vlSelf->__PVT__recover_srat_i[0x15U];
                __Vdlyvval__srat__DOT__srat__v54 = 
                    vlSelf->__PVT__recover_srat_i[0x16U];
                __Vdlyvval__srat__DOT__srat__v55 = 
                    vlSelf->__PVT__recover_srat_i[0x17U];
                __Vdlyvval__srat__DOT__srat__v56 = 
                    vlSelf->__PVT__recover_srat_i[0x18U];
                __Vdlyvval__srat__DOT__srat__v57 = 
                    vlSelf->__PVT__recover_srat_i[0x19U];
                __Vdlyvval__srat__DOT__srat__v58 = 
                    vlSelf->__PVT__recover_srat_i[0x1aU];
                __Vdlyvval__srat__DOT__srat__v59 = 
                    vlSelf->__PVT__recover_srat_i[0x1bU];
                __Vdlyvval__srat__DOT__srat__v60 = 
                    vlSelf->__PVT__recover_srat_i[0x1cU];
                __Vdlyvval__srat__DOT__srat__v61 = 
                    vlSelf->__PVT__recover_srat_i[0x1dU];
                __Vdlyvval__srat__DOT__srat__v62 = 
                    vlSelf->__PVT__recover_srat_i[0x1eU];
                __Vdlyvval__srat__DOT__srat__v63 = 
                    vlSelf->__PVT__recover_srat_i[0x1fU];
            } else {
                __Vdlyvval__srat__DOT__srat__v32 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0U];
                __Vdlyvval__srat__DOT__srat__v33 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [1U];
                __Vdlyvval__srat__DOT__srat__v34 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [2U];
                __Vdlyvval__srat__DOT__srat__v35 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [3U];
                __Vdlyvval__srat__DOT__srat__v36 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [4U];
                __Vdlyvval__srat__DOT__srat__v37 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [5U];
                __Vdlyvval__srat__DOT__srat__v38 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [6U];
                __Vdlyvval__srat__DOT__srat__v39 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [7U];
                __Vdlyvval__srat__DOT__srat__v40 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [8U];
                __Vdlyvval__srat__DOT__srat__v41 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [9U];
                __Vdlyvval__srat__DOT__srat__v42 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0xaU];
                __Vdlyvval__srat__DOT__srat__v43 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0xbU];
                __Vdlyvval__srat__DOT__srat__v44 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0xcU];
                __Vdlyvval__srat__DOT__srat__v45 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0xdU];
                __Vdlyvval__srat__DOT__srat__v46 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0xeU];
                __Vdlyvval__srat__DOT__srat__v47 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0xfU];
                __Vdlyvval__srat__DOT__srat__v48 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0x10U];
                __Vdlyvval__srat__DOT__srat__v49 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0x11U];
                __Vdlyvval__srat__DOT__srat__v50 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0x12U];
                __Vdlyvval__srat__DOT__srat__v51 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0x13U];
                __Vdlyvval__srat__DOT__srat__v52 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0x14U];
                __Vdlyvval__srat__DOT__srat__v53 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0x15U];
                __Vdlyvval__srat__DOT__srat__v54 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0x16U];
                __Vdlyvval__srat__DOT__srat__v55 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0x17U];
                __Vdlyvval__srat__DOT__srat__v56 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0x18U];
                __Vdlyvval__srat__DOT__srat__v57 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0x19U];
                __Vdlyvval__srat__DOT__srat__v58 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0x1aU];
                __Vdlyvval__srat__DOT__srat__v59 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0x1bU];
                __Vdlyvval__srat__DOT__srat__v60 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0x1cU];
                __Vdlyvval__srat__DOT__srat__v61 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0x1dU];
                __Vdlyvval__srat__DOT__srat__v62 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0x1eU];
                __Vdlyvval__srat__DOT__srat__v63 = 
                    vlSelf->__PVT__spec_load_recover_srat_i
                    [0x1fU];
            }
        } else if (vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict) {
            __Vtemp_11[1U] = ((vlSelf->__PVT__free_list__DOT__free_list[1U] 
                               | ((5U >= (IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_checkpoint_id))
                                   ? vlSymsp->TOP__top_tb__dut.__PVT__checkpoint__DOT__cp_alloc_list
                                  [vlSymsp->TOP__top_tb__dut.__PVT__exec_checkpoint_id][1U]
                                   : 0U)) | ((IData)(vlSymsp->TOP__top_tb__dut.__Vcellinp__cpu_midcore__commit_update)
                                              ? __Vtemp_29[1U]
                                              : 0U));
            __Vtemp_11[2U] = ((vlSelf->__PVT__free_list__DOT__free_list[2U] 
                               | ((5U >= (IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_checkpoint_id))
                                   ? vlSymsp->TOP__top_tb__dut.__PVT__checkpoint__DOT__cp_alloc_list
                                  [vlSymsp->TOP__top_tb__dut.__PVT__exec_checkpoint_id][2U]
                                   : 0U)) | ((IData)(vlSymsp->TOP__top_tb__dut.__Vcellinp__cpu_midcore__commit_update)
                                              ? __Vtemp_29[2U]
                                              : 0U));
            __Vtemp_11[3U] = ((vlSelf->__PVT__free_list__DOT__free_list[3U] 
                               | ((5U >= (IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_checkpoint_id))
                                   ? vlSymsp->TOP__top_tb__dut.__PVT__checkpoint__DOT__cp_alloc_list
                                  [vlSymsp->TOP__top_tb__dut.__PVT__exec_checkpoint_id][3U]
                                   : 0U)) | ((IData)(vlSymsp->TOP__top_tb__dut.__Vcellinp__cpu_midcore__commit_update)
                                              ? __Vtemp_29[3U]
                                              : 0U));
            vlSelf->__PVT__free_list__DOT__free_list[0U] 
                = ((vlSelf->__PVT__free_list__DOT__free_list[0U] 
                    | ((5U >= (IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_checkpoint_id))
                        ? vlSymsp->TOP__top_tb__dut.__PVT__checkpoint__DOT__cp_alloc_list
                       [vlSymsp->TOP__top_tb__dut.__PVT__exec_checkpoint_id][0U]
                        : 0U)) | ((IData)(vlSymsp->TOP__top_tb__dut.__Vcellinp__cpu_midcore__commit_update)
                                   ? __Vtemp_29[0U]
                                   : 0U));
            __Vdlyvval__srat__DOT__srat__v32 = vlSelf->__PVT__recover_srat_i
                [0U];
            __Vdlyvval__srat__DOT__srat__v33 = vlSelf->__PVT__recover_srat_i
                [1U];
            __Vdlyvval__srat__DOT__srat__v34 = vlSelf->__PVT__recover_srat_i
                [2U];
            __Vdlyvval__srat__DOT__srat__v35 = vlSelf->__PVT__recover_srat_i
                [3U];
            __Vdlyvval__srat__DOT__srat__v36 = vlSelf->__PVT__recover_srat_i
                [4U];
            __Vdlyvval__srat__DOT__srat__v37 = vlSelf->__PVT__recover_srat_i
                [5U];
            __Vdlyvval__srat__DOT__srat__v38 = vlSelf->__PVT__recover_srat_i
                [6U];
            __Vdlyvval__srat__DOT__srat__v39 = vlSelf->__PVT__recover_srat_i
                [7U];
            __Vdlyvval__srat__DOT__srat__v40 = vlSelf->__PVT__recover_srat_i
                [8U];
            __Vdlyvval__srat__DOT__srat__v41 = vlSelf->__PVT__recover_srat_i
                [9U];
            __Vdlyvval__srat__DOT__srat__v42 = vlSelf->__PVT__recover_srat_i
                [0xaU];
            __Vdlyvval__srat__DOT__srat__v43 = vlSelf->__PVT__recover_srat_i
                [0xbU];
            __Vdlyvval__srat__DOT__srat__v44 = vlSelf->__PVT__recover_srat_i
                [0xcU];
            __Vdlyvval__srat__DOT__srat__v45 = vlSelf->__PVT__recover_srat_i
                [0xdU];
            __Vdlyvval__srat__DOT__srat__v46 = vlSelf->__PVT__recover_srat_i
                [0xeU];
            __Vdlyvval__srat__DOT__srat__v47 = vlSelf->__PVT__recover_srat_i
                [0xfU];
            __Vdlyvval__srat__DOT__srat__v48 = vlSelf->__PVT__recover_srat_i
                [0x10U];
            __Vdlyvval__srat__DOT__srat__v49 = vlSelf->__PVT__recover_srat_i
                [0x11U];
            __Vdlyvval__srat__DOT__srat__v50 = vlSelf->__PVT__recover_srat_i
                [0x12U];
            __Vdlyvval__srat__DOT__srat__v51 = vlSelf->__PVT__recover_srat_i
                [0x13U];
            __Vdlyvval__srat__DOT__srat__v52 = vlSelf->__PVT__recover_srat_i
                [0x14U];
            __Vdlyvval__srat__DOT__srat__v53 = vlSelf->__PVT__recover_srat_i
                [0x15U];
            __Vdlyvval__srat__DOT__srat__v54 = vlSelf->__PVT__recover_srat_i
                [0x16U];
            __Vdlyvval__srat__DOT__srat__v55 = vlSelf->__PVT__recover_srat_i
                [0x17U];
            __Vdlyvval__srat__DOT__srat__v56 = vlSelf->__PVT__recover_srat_i
                [0x18U];
            __Vdlyvval__srat__DOT__srat__v57 = vlSelf->__PVT__recover_srat_i
                [0x19U];
            __Vdlyvval__srat__DOT__srat__v58 = vlSelf->__PVT__recover_srat_i
                [0x1aU];
            __Vdlyvval__srat__DOT__srat__v59 = vlSelf->__PVT__recover_srat_i
                [0x1bU];
            __Vdlyvval__srat__DOT__srat__v60 = vlSelf->__PVT__recover_srat_i
                [0x1cU];
            __Vdlyvval__srat__DOT__srat__v61 = vlSelf->__PVT__recover_srat_i
                [0x1dU];
            __Vdlyvval__srat__DOT__srat__v62 = vlSelf->__PVT__recover_srat_i
                [0x1eU];
            __Vdlyvval__srat__DOT__srat__v63 = vlSelf->__PVT__recover_srat_i
                [0x1fU];
        } else if (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_mispredict_o) {
            __Vtemp_11[1U] = ((vlSelf->__PVT__free_list__DOT__free_list[1U] 
                               | vlSymsp->TOP__top_tb__dut.__PVT__load_checkpoint__DOT__cp_alloc_list
                               [vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_checkpoint_id_o][1U]) 
                              | ((IData)(vlSymsp->TOP__top_tb__dut.__Vcellinp__cpu_midcore__commit_update)
                                  ? __Vtemp_35[1U] : 0U));
            __Vtemp_11[2U] = ((vlSelf->__PVT__free_list__DOT__free_list[2U] 
                               | vlSymsp->TOP__top_tb__dut.__PVT__load_checkpoint__DOT__cp_alloc_list
                               [vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_checkpoint_id_o][2U]) 
                              | ((IData)(vlSymsp->TOP__top_tb__dut.__Vcellinp__cpu_midcore__commit_update)
                                  ? __Vtemp_35[2U] : 0U));
            __Vtemp_11[3U] = ((vlSelf->__PVT__free_list__DOT__free_list[3U] 
                               | vlSymsp->TOP__top_tb__dut.__PVT__load_checkpoint__DOT__cp_alloc_list
                               [vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_checkpoint_id_o][3U]) 
                              | ((IData)(vlSymsp->TOP__top_tb__dut.__Vcellinp__cpu_midcore__commit_update)
                                  ? __Vtemp_35[3U] : 0U));
            vlSelf->__PVT__free_list__DOT__free_list[0U] 
                = ((vlSelf->__PVT__free_list__DOT__free_list[0U] 
                    | vlSymsp->TOP__top_tb__dut.__PVT__load_checkpoint__DOT__cp_alloc_list
                    [vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_checkpoint_id_o][0U]) 
                   | ((IData)(vlSymsp->TOP__top_tb__dut.__Vcellinp__cpu_midcore__commit_update)
                       ? __Vtemp_35[0U] : 0U));
            __Vdlyvval__srat__DOT__srat__v32 = vlSelf->__PVT__spec_load_recover_srat_i
                [0U];
            __Vdlyvval__srat__DOT__srat__v33 = vlSelf->__PVT__spec_load_recover_srat_i
                [1U];
            __Vdlyvval__srat__DOT__srat__v34 = vlSelf->__PVT__spec_load_recover_srat_i
                [2U];
            __Vdlyvval__srat__DOT__srat__v35 = vlSelf->__PVT__spec_load_recover_srat_i
                [3U];
            __Vdlyvval__srat__DOT__srat__v36 = vlSelf->__PVT__spec_load_recover_srat_i
                [4U];
            __Vdlyvval__srat__DOT__srat__v37 = vlSelf->__PVT__spec_load_recover_srat_i
                [5U];
            __Vdlyvval__srat__DOT__srat__v38 = vlSelf->__PVT__spec_load_recover_srat_i
                [6U];
            __Vdlyvval__srat__DOT__srat__v39 = vlSelf->__PVT__spec_load_recover_srat_i
                [7U];
            __Vdlyvval__srat__DOT__srat__v40 = vlSelf->__PVT__spec_load_recover_srat_i
                [8U];
            __Vdlyvval__srat__DOT__srat__v41 = vlSelf->__PVT__spec_load_recover_srat_i
                [9U];
            __Vdlyvval__srat__DOT__srat__v42 = vlSelf->__PVT__spec_load_recover_srat_i
                [0xaU];
            __Vdlyvval__srat__DOT__srat__v43 = vlSelf->__PVT__spec_load_recover_srat_i
                [0xbU];
            __Vdlyvval__srat__DOT__srat__v44 = vlSelf->__PVT__spec_load_recover_srat_i
                [0xcU];
            __Vdlyvval__srat__DOT__srat__v45 = vlSelf->__PVT__spec_load_recover_srat_i
                [0xdU];
            __Vdlyvval__srat__DOT__srat__v46 = vlSelf->__PVT__spec_load_recover_srat_i
                [0xeU];
            __Vdlyvval__srat__DOT__srat__v47 = vlSelf->__PVT__spec_load_recover_srat_i
                [0xfU];
            __Vdlyvval__srat__DOT__srat__v48 = vlSelf->__PVT__spec_load_recover_srat_i
                [0x10U];
            __Vdlyvval__srat__DOT__srat__v49 = vlSelf->__PVT__spec_load_recover_srat_i
                [0x11U];
            __Vdlyvval__srat__DOT__srat__v50 = vlSelf->__PVT__spec_load_recover_srat_i
                [0x12U];
            __Vdlyvval__srat__DOT__srat__v51 = vlSelf->__PVT__spec_load_recover_srat_i
                [0x13U];
            __Vdlyvval__srat__DOT__srat__v52 = vlSelf->__PVT__spec_load_recover_srat_i
                [0x14U];
            __Vdlyvval__srat__DOT__srat__v53 = vlSelf->__PVT__spec_load_recover_srat_i
                [0x15U];
            __Vdlyvval__srat__DOT__srat__v54 = vlSelf->__PVT__spec_load_recover_srat_i
                [0x16U];
            __Vdlyvval__srat__DOT__srat__v55 = vlSelf->__PVT__spec_load_recover_srat_i
                [0x17U];
            __Vdlyvval__srat__DOT__srat__v56 = vlSelf->__PVT__spec_load_recover_srat_i
                [0x18U];
            __Vdlyvval__srat__DOT__srat__v57 = vlSelf->__PVT__spec_load_recover_srat_i
                [0x19U];
            __Vdlyvval__srat__DOT__srat__v58 = vlSelf->__PVT__spec_load_recover_srat_i
                [0x1aU];
            __Vdlyvval__srat__DOT__srat__v59 = vlSelf->__PVT__spec_load_recover_srat_i
                [0x1bU];
            __Vdlyvval__srat__DOT__srat__v60 = vlSelf->__PVT__spec_load_recover_srat_i
                [0x1cU];
            __Vdlyvval__srat__DOT__srat__v61 = vlSelf->__PVT__spec_load_recover_srat_i
                [0x1dU];
            __Vdlyvval__srat__DOT__srat__v62 = vlSelf->__PVT__spec_load_recover_srat_i
                [0x1eU];
            __Vdlyvval__srat__DOT__srat__v63 = vlSelf->__PVT__spec_load_recover_srat_i
                [0x1fU];
        } else {
            if (((IData)(vlSelf->__PVT__cp_rename_update_o) 
                 | (IData)(vlSymsp->TOP__top_tb__dut.__Vcellinp__cpu_midcore__commit_update))) {
                __Vtemp_11[1U] = vlSelf->__PVT__free_list__DOT__free_list_next[1U];
                __Vtemp_11[2U] = vlSelf->__PVT__free_list__DOT__free_list_next[2U];
                __Vtemp_11[3U] = vlSelf->__PVT__free_list__DOT__free_list_next[3U];
                vlSelf->__PVT__free_list__DOT__free_list[0U] 
                    = vlSelf->__PVT__free_list__DOT__free_list_next[0U];
            } else {
                __Vtemp_11[1U] = vlSelf->__PVT__free_list__DOT__free_list[1U];
                __Vtemp_11[2U] = vlSelf->__PVT__free_list__DOT__free_list[2U];
                __Vtemp_11[3U] = vlSelf->__PVT__free_list__DOT__free_list[3U];
                vlSelf->__PVT__free_list__DOT__free_list[0U] 
                    = vlSelf->__PVT__free_list__DOT__free_list[0U];
            }
            if (vlSelf->__PVT__cp_rename_update_o) {
                __Vdlyvval__srat__DOT__srat__v32 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0U];
                __Vdlyvval__srat__DOT__srat__v33 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [1U];
                __Vdlyvval__srat__DOT__srat__v34 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [2U];
                __Vdlyvval__srat__DOT__srat__v35 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [3U];
                __Vdlyvval__srat__DOT__srat__v36 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [4U];
                __Vdlyvval__srat__DOT__srat__v37 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [5U];
                __Vdlyvval__srat__DOT__srat__v38 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [6U];
                __Vdlyvval__srat__DOT__srat__v39 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [7U];
                __Vdlyvval__srat__DOT__srat__v40 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [8U];
                __Vdlyvval__srat__DOT__srat__v41 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [9U];
                __Vdlyvval__srat__DOT__srat__v42 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0xaU];
                __Vdlyvval__srat__DOT__srat__v43 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0xbU];
                __Vdlyvval__srat__DOT__srat__v44 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0xcU];
                __Vdlyvval__srat__DOT__srat__v45 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0xdU];
                __Vdlyvval__srat__DOT__srat__v46 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0xeU];
                __Vdlyvval__srat__DOT__srat__v47 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0xfU];
                __Vdlyvval__srat__DOT__srat__v48 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0x10U];
                __Vdlyvval__srat__DOT__srat__v49 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0x11U];
                __Vdlyvval__srat__DOT__srat__v50 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0x12U];
                __Vdlyvval__srat__DOT__srat__v51 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0x13U];
                __Vdlyvval__srat__DOT__srat__v52 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0x14U];
                __Vdlyvval__srat__DOT__srat__v53 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0x15U];
                __Vdlyvval__srat__DOT__srat__v54 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0x16U];
                __Vdlyvval__srat__DOT__srat__v55 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0x17U];
                __Vdlyvval__srat__DOT__srat__v56 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0x18U];
                __Vdlyvval__srat__DOT__srat__v57 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0x19U];
                __Vdlyvval__srat__DOT__srat__v58 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0x1aU];
                __Vdlyvval__srat__DOT__srat__v59 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0x1bU];
                __Vdlyvval__srat__DOT__srat__v60 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0x1cU];
                __Vdlyvval__srat__DOT__srat__v61 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0x1dU];
                __Vdlyvval__srat__DOT__srat__v62 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0x1eU];
                __Vdlyvval__srat__DOT__srat__v63 = 
                    vlSelf->__PVT__srat__DOT__srat_next
                    [0x1fU];
            } else {
                __Vdlyvval__srat__DOT__srat__v32 = 
                    vlSelf->__PVT__srat__DOT__srat[0U];
                __Vdlyvval__srat__DOT__srat__v33 = 
                    vlSelf->__PVT__srat__DOT__srat[1U];
                __Vdlyvval__srat__DOT__srat__v34 = 
                    vlSelf->__PVT__srat__DOT__srat[2U];
                __Vdlyvval__srat__DOT__srat__v35 = 
                    vlSelf->__PVT__srat__DOT__srat[3U];
                __Vdlyvval__srat__DOT__srat__v36 = 
                    vlSelf->__PVT__srat__DOT__srat[4U];
                __Vdlyvval__srat__DOT__srat__v37 = 
                    vlSelf->__PVT__srat__DOT__srat[5U];
                __Vdlyvval__srat__DOT__srat__v38 = 
                    vlSelf->__PVT__srat__DOT__srat[6U];
                __Vdlyvval__srat__DOT__srat__v39 = 
                    vlSelf->__PVT__srat__DOT__srat[7U];
                __Vdlyvval__srat__DOT__srat__v40 = 
                    vlSelf->__PVT__srat__DOT__srat[8U];
                __Vdlyvval__srat__DOT__srat__v41 = 
                    vlSelf->__PVT__srat__DOT__srat[9U];
                __Vdlyvval__srat__DOT__srat__v42 = 
                    vlSelf->__PVT__srat__DOT__srat[0xaU];
                __Vdlyvval__srat__DOT__srat__v43 = 
                    vlSelf->__PVT__srat__DOT__srat[0xbU];
                __Vdlyvval__srat__DOT__srat__v44 = 
                    vlSelf->__PVT__srat__DOT__srat[0xcU];
                __Vdlyvval__srat__DOT__srat__v45 = 
                    vlSelf->__PVT__srat__DOT__srat[0xdU];
                __Vdlyvval__srat__DOT__srat__v46 = 
                    vlSelf->__PVT__srat__DOT__srat[0xeU];
                __Vdlyvval__srat__DOT__srat__v47 = 
                    vlSelf->__PVT__srat__DOT__srat[0xfU];
                __Vdlyvval__srat__DOT__srat__v48 = 
                    vlSelf->__PVT__srat__DOT__srat[0x10U];
                __Vdlyvval__srat__DOT__srat__v49 = 
                    vlSelf->__PVT__srat__DOT__srat[0x11U];
                __Vdlyvval__srat__DOT__srat__v50 = 
                    vlSelf->__PVT__srat__DOT__srat[0x12U];
                __Vdlyvval__srat__DOT__srat__v51 = 
                    vlSelf->__PVT__srat__DOT__srat[0x13U];
                __Vdlyvval__srat__DOT__srat__v52 = 
                    vlSelf->__PVT__srat__DOT__srat[0x14U];
                __Vdlyvval__srat__DOT__srat__v53 = 
                    vlSelf->__PVT__srat__DOT__srat[0x15U];
                __Vdlyvval__srat__DOT__srat__v54 = 
                    vlSelf->__PVT__srat__DOT__srat[0x16U];
                __Vdlyvval__srat__DOT__srat__v55 = 
                    vlSelf->__PVT__srat__DOT__srat[0x17U];
                __Vdlyvval__srat__DOT__srat__v56 = 
                    vlSelf->__PVT__srat__DOT__srat[0x18U];
                __Vdlyvval__srat__DOT__srat__v57 = 
                    vlSelf->__PVT__srat__DOT__srat[0x19U];
                __Vdlyvval__srat__DOT__srat__v58 = 
                    vlSelf->__PVT__srat__DOT__srat[0x1aU];
                __Vdlyvval__srat__DOT__srat__v59 = 
                    vlSelf->__PVT__srat__DOT__srat[0x1bU];
                __Vdlyvval__srat__DOT__srat__v60 = 
                    vlSelf->__PVT__srat__DOT__srat[0x1cU];
                __Vdlyvval__srat__DOT__srat__v61 = 
                    vlSelf->__PVT__srat__DOT__srat[0x1dU];
                __Vdlyvval__srat__DOT__srat__v62 = 
                    vlSelf->__PVT__srat__DOT__srat[0x1eU];
                __Vdlyvval__srat__DOT__srat__v63 = 
                    vlSelf->__PVT__srat__DOT__srat[0x1fU];
            }
        }
        __Vdlyvset__srat__DOT__srat__v32 = 1U;
    }
    vlSelf->__PVT__free_list__DOT__free_list[1U] = 
        __Vtemp_11[1U];
    vlSelf->__PVT__free_list__DOT__free_list[2U] = 
        __Vtemp_11[2U];
    vlSelf->__PVT__free_list__DOT__free_list[3U] = 
        __Vtemp_11[3U];
    vlSelf->__PVT__decode__DOT__imm_o = ((0x40U & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                          ? ((0x20U 
                                              & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                              ? ((0x10U 
                                                  & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                   ? 
                                                  ((4U 
                                                    & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                    ? 
                                                   ((2U 
                                                     & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                                   >> 0x1fU))) 
                                                       << 0x14U) 
                                                      | ((0xff000U 
                                                          & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst) 
                                                         | ((0x800U 
                                                             & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                                >> 9U)) 
                                                            | (0x7feU 
                                                               & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                                  >> 0x14U)))))
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((4U 
                                                    & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                    ? 
                                                   ((2U 
                                                     & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                      ? vlSelf->__PVT__decode__DOT__i_imm
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0x800U 
                                                          & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                             << 4U)) 
                                                         | ((0x7e0U 
                                                             & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                                  >> 7U)))))
                                                      : 0U)
                                                     : 0U))))
                                              : 0U)
                                          : ((0x20U 
                                              & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                              ? ((0x10U 
                                                  & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                  ? 
                                                 ((8U 
                                                   & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                    ? 
                                                   ((2U 
                                                     & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                      : 0U)
                                                     : 0U)
                                                    : 0U))
                                                  : 
                                                 ((8U 
                                                   & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                                   >> 0x1fU))) 
                                                       << 0xbU) 
                                                      | ((0x7e0U 
                                                          & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                               >> 7U))))
                                                      : 0U)
                                                     : 0U))))
                                              : ((0x10U 
                                                  & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                  ? 
                                                 ((8U 
                                                   & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                    ? 
                                                   ((2U 
                                                     & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                      ? vlSelf->__PVT__decode__DOT__i_imm
                                                      : 0U)
                                                     : 0U)))
                                                  : 
                                                 ((8U 
                                                   & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)
                                                      ? vlSelf->__PVT__decode__DOT__i_imm
                                                      : 0U)
                                                     : 0U))))));
    vlSelf->__PVT__decode__DOT__alu_op = (7U & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                >> 0xcU));
    vlSelf->__PVT__decode__DOT__alu_op = ((7U & (IData)(vlSelf->__PVT__decode__DOT__alu_op)) 
                                          | (8U & (
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                         >> 0xcU)))
                                                     ? (IData)(
                                                               (0x40000020U 
                                                                == 
                                                                (0x40000020U 
                                                                 & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                          >> 0xcU))) 
                                                     && (1U 
                                                         & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                            >> 0x1eU)))) 
                                                   << 3U)));
    if (vlSelf->decode__DOT____VdfgExtracted_hf4d07035__0) {
        vlSelf->__PVT__decode__DOT__alu_op = 0U;
    }
    vlSelf->__PVT__decode__DOT__rs1_valid = ((IData)(vlSelf->decode__DOT____VdfgTmp_h90d7ced5__0) 
                                             | ((0x23U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                                | ((3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                                   | ((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                                      | ((0x67U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                                         | (0x37U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)))))));
    vlSelf->__PVT__ROB_rename2_reg[0U] = __Vdly__ROB_rename2_reg[0U];
    vlSelf->__PVT__ROB_rename2_reg[1U] = __Vdly__ROB_rename2_reg[1U];
    vlSelf->__PVT__ROB_rename2_reg[2U] = __Vdly__ROB_rename2_reg[2U];
    vlSelf->__PVT__ROB_rename2_reg[3U] = __Vdly__ROB_rename2_reg[3U];
    vlSelf->__PVT__ROB_rename2_reg[4U] = __Vdly__ROB_rename2_reg[4U];
    vlSelf->__PVT__ROB_rename2_reg[5U] = __Vdly__ROB_rename2_reg[5U];
    vlSelf->__PVT__ROB_rename2_reg[6U] = __Vdly__ROB_rename2_reg[6U];
    vlSelf->__PVT__ROB_rename2_reg[7U] = __Vdly__ROB_rename2_reg[7U];
    vlSelf->__PVT__ROB_rename2_reg[8U] = __Vdly__ROB_rename2_reg[8U];
    vlSelf->__PVT__ROB_rename2_reg[9U] = __Vdly__ROB_rename2_reg[9U];
    vlSelf->__PVT__ROB_rename2_reg[0xaU] = __Vdly__ROB_rename2_reg[0xaU];
    vlSelf->__PVT__ROB_rename2_reg[0xbU] = __Vdly__ROB_rename2_reg[0xbU];
    if (__Vdlyvset__srat__DOT__srat__v0) {
        vlSelf->__PVT__srat__DOT__srat[0U] = 0U;
        vlSelf->__PVT__srat__DOT__srat[1U] = 1U;
        vlSelf->__PVT__srat__DOT__srat[2U] = 2U;
        vlSelf->__PVT__srat__DOT__srat[3U] = 3U;
        vlSelf->__PVT__srat__DOT__srat[4U] = 4U;
        vlSelf->__PVT__srat__DOT__srat[5U] = 5U;
        vlSelf->__PVT__srat__DOT__srat[6U] = 6U;
        vlSelf->__PVT__srat__DOT__srat[7U] = 7U;
        vlSelf->__PVT__srat__DOT__srat[8U] = 8U;
        vlSelf->__PVT__srat__DOT__srat[9U] = 9U;
        vlSelf->__PVT__srat__DOT__srat[0xaU] = 0xaU;
        vlSelf->__PVT__srat__DOT__srat[0xbU] = 0xbU;
        vlSelf->__PVT__srat__DOT__srat[0xcU] = 0xcU;
        vlSelf->__PVT__srat__DOT__srat[0xdU] = 0xdU;
        vlSelf->__PVT__srat__DOT__srat[0xeU] = 0xeU;
        vlSelf->__PVT__srat__DOT__srat[0xfU] = 0xfU;
        vlSelf->__PVT__srat__DOT__srat[0x10U] = 0x10U;
        vlSelf->__PVT__srat__DOT__srat[0x11U] = 0x11U;
        vlSelf->__PVT__srat__DOT__srat[0x12U] = 0x12U;
        vlSelf->__PVT__srat__DOT__srat[0x13U] = 0x13U;
        vlSelf->__PVT__srat__DOT__srat[0x14U] = 0x14U;
        vlSelf->__PVT__srat__DOT__srat[0x15U] = 0x15U;
        vlSelf->__PVT__srat__DOT__srat[0x16U] = 0x16U;
        vlSelf->__PVT__srat__DOT__srat[0x17U] = 0x17U;
        vlSelf->__PVT__srat__DOT__srat[0x18U] = 0x18U;
        vlSelf->__PVT__srat__DOT__srat[0x19U] = 0x19U;
        vlSelf->__PVT__srat__DOT__srat[0x1aU] = 0x1aU;
        vlSelf->__PVT__srat__DOT__srat[0x1bU] = 0x1bU;
        vlSelf->__PVT__srat__DOT__srat[0x1cU] = 0x1cU;
        vlSelf->__PVT__srat__DOT__srat[0x1dU] = 0x1dU;
        vlSelf->__PVT__srat__DOT__srat[0x1eU] = 0x1eU;
        vlSelf->__PVT__srat__DOT__srat[0x1fU] = 0x1fU;
    }
    if (__Vdlyvset__srat__DOT__srat__v32) {
        vlSelf->__PVT__srat__DOT__srat[0U] = __Vdlyvval__srat__DOT__srat__v32;
        vlSelf->__PVT__srat__DOT__srat[1U] = __Vdlyvval__srat__DOT__srat__v33;
        vlSelf->__PVT__srat__DOT__srat[2U] = __Vdlyvval__srat__DOT__srat__v34;
        vlSelf->__PVT__srat__DOT__srat[3U] = __Vdlyvval__srat__DOT__srat__v35;
        vlSelf->__PVT__srat__DOT__srat[4U] = __Vdlyvval__srat__DOT__srat__v36;
        vlSelf->__PVT__srat__DOT__srat[5U] = __Vdlyvval__srat__DOT__srat__v37;
        vlSelf->__PVT__srat__DOT__srat[6U] = __Vdlyvval__srat__DOT__srat__v38;
        vlSelf->__PVT__srat__DOT__srat[7U] = __Vdlyvval__srat__DOT__srat__v39;
        vlSelf->__PVT__srat__DOT__srat[8U] = __Vdlyvval__srat__DOT__srat__v40;
        vlSelf->__PVT__srat__DOT__srat[9U] = __Vdlyvval__srat__DOT__srat__v41;
        vlSelf->__PVT__srat__DOT__srat[0xaU] = __Vdlyvval__srat__DOT__srat__v42;
        vlSelf->__PVT__srat__DOT__srat[0xbU] = __Vdlyvval__srat__DOT__srat__v43;
        vlSelf->__PVT__srat__DOT__srat[0xcU] = __Vdlyvval__srat__DOT__srat__v44;
        vlSelf->__PVT__srat__DOT__srat[0xdU] = __Vdlyvval__srat__DOT__srat__v45;
        vlSelf->__PVT__srat__DOT__srat[0xeU] = __Vdlyvval__srat__DOT__srat__v46;
        vlSelf->__PVT__srat__DOT__srat[0xfU] = __Vdlyvval__srat__DOT__srat__v47;
        vlSelf->__PVT__srat__DOT__srat[0x10U] = __Vdlyvval__srat__DOT__srat__v48;
        vlSelf->__PVT__srat__DOT__srat[0x11U] = __Vdlyvval__srat__DOT__srat__v49;
        vlSelf->__PVT__srat__DOT__srat[0x12U] = __Vdlyvval__srat__DOT__srat__v50;
        vlSelf->__PVT__srat__DOT__srat[0x13U] = __Vdlyvval__srat__DOT__srat__v51;
        vlSelf->__PVT__srat__DOT__srat[0x14U] = __Vdlyvval__srat__DOT__srat__v52;
        vlSelf->__PVT__srat__DOT__srat[0x15U] = __Vdlyvval__srat__DOT__srat__v53;
        vlSelf->__PVT__srat__DOT__srat[0x16U] = __Vdlyvval__srat__DOT__srat__v54;
        vlSelf->__PVT__srat__DOT__srat[0x17U] = __Vdlyvval__srat__DOT__srat__v55;
        vlSelf->__PVT__srat__DOT__srat[0x18U] = __Vdlyvval__srat__DOT__srat__v56;
        vlSelf->__PVT__srat__DOT__srat[0x19U] = __Vdlyvval__srat__DOT__srat__v57;
        vlSelf->__PVT__srat__DOT__srat[0x1aU] = __Vdlyvval__srat__DOT__srat__v58;
        vlSelf->__PVT__srat__DOT__srat[0x1bU] = __Vdlyvval__srat__DOT__srat__v59;
        vlSelf->__PVT__srat__DOT__srat[0x1cU] = __Vdlyvval__srat__DOT__srat__v60;
        vlSelf->__PVT__srat__DOT__srat[0x1dU] = __Vdlyvval__srat__DOT__srat__v61;
        vlSelf->__PVT__srat__DOT__srat[0x1eU] = __Vdlyvval__srat__DOT__srat__v62;
        vlSelf->__PVT__srat__DOT__srat[0x1fU] = __Vdlyvval__srat__DOT__srat__v63;
    }
    vlSelf->__PVT__MIDCORE_decode_o = (((QData)((IData)(vlSelf->__PVT__decode__DOT__imm_o)) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    (((IData)(vlSelf->__PVT__decode__DOT__dispatch_to) 
                                                                      << 0x19U) 
                                                                     | (((IData)(vlSelf->__PVT__decode__DOT__alu_op) 
                                                                         << 0x15U) 
                                                                        | ((0x1c0000U 
                                                                            & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                                               << 6U)) 
                                                                           | (((IData)(vlSelf->__PVT__decode__DOT__rs1_valid) 
                                                                               << 0x11U) 
                                                                              | ((IData)(vlSelf->__PVT__decode__DOT__rs2_valid) 
                                                                                << 0x10U))))))));
    vlSelf->__PVT__ROB_decode_o[0U] = (IData)((((QData)((IData)(
                                                                (0x63U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)))) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(
                                                                   ((0x6fU 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                                                    | (0x67U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst))))) 
                                                   << 0x2cU) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem
                                                                     [
                                                                     (0xfU 
                                                                      & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__rdPtr))])) 
                                                     << 0x2aU))));
    vlSelf->__PVT__ROB_decode_o[1U] = (IData)(((((QData)((IData)(
                                                                 (0x63U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)))) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(
                                                                    ((0x6fU 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                                                     | (0x67U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst))))) 
                                                    << 0x2cU) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem
                                                                      [
                                                                      (0xfU 
                                                                       & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__rdPtr))])) 
                                                      << 0x2aU))) 
                                               >> 0x20U));
    vlSelf->__PVT__ROB_decode_o[2U] = 0U;
    vlSelf->__PVT__ROB_decode_o[3U] = 0U;
    vlSelf->__PVT__ROB_decode_o[4U] = 0U;
    vlSelf->__PVT__ROB_decode_o[5U] = 0U;
    vlSelf->__PVT__ROB_decode_o[6U] = 0U;
    vlSelf->__PVT__ROB_decode_o[7U] = (0xf0000000U 
                                       & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                          << 8U));
    vlSelf->__PVT__ROB_decode_o[8U] = ((vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                        << 8U) | (((IData)(vlSelf->__PVT__decode__DOT__rs1_valid) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->__PVT__decode__DOT__rs2_valid) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->__PVT__srat_lookup_rs1) 
                                                         << 1U) 
                                                        | (1U 
                                                           & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                              >> 0x18U))))));
    vlSelf->__PVT__ROB_decode_o[9U] = ((vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                        >> 0x18U) | 
                                       ((IData)((((QData)((IData)(
                                                                  vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem
                                                                  [
                                                                  (0xfU 
                                                                   & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__rdPtr))])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem
                                                                   [
                                                                   (0xfU 
                                                                    & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__rdPtr))])))) 
                                        << 8U));
    vlSelf->__PVT__ROB_decode_o[0xaU] = (((IData)((
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem
                                                                    [
                                                                    (0xfU 
                                                                     & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__rdPtr))])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem
                                                                     [
                                                                     (0xfU 
                                                                      & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__rdPtr))])))) 
                                          >> 0x18U) 
                                         | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem
                                                                       [
                                                                       (0xfU 
                                                                        & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__rdPtr))])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem
                                                                        [
                                                                        (0xfU 
                                                                         & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__rdPtr))]))) 
                                                     >> 0x20U)) 
                                            << 8U));
    vlSelf->__PVT__ROB_decode_o[0xbU] = ((0x20000000U 
                                          & ((~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__fetch_empty)) 
                                             << 0x1dU)) 
                                         | (((((IData)(vlSelf->decode__DOT____VdfgTmp_h90d7ced5__0) 
                                               | ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                                  | ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                                     | ((0x67U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                                        | (IData)(vlSelf->decode__DOT____VdfgExtracted_hf4d07035__0))))) 
                                              & (0U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                     >> 7U)))) 
                                             << 0x1bU) 
                                            | ((0x7c00000U 
                                                & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                   << 0xfU)) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem
                                                                             [
                                                                             (0xfU 
                                                                              & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__rdPtr))])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem
                                                                              [
                                                                              (0xfU 
                                                                               & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__rdPtr))]))) 
                                                           >> 0x20U)) 
                                                  >> 0x18U))));
    vlSelf->__PVT__rename_update_ar = ((0x8000000U 
                                        & vlSelf->__PVT__ROB_rename1_reg[0xbU])
                                        ? (0x1fU & 
                                           (vlSelf->__PVT__ROB_rename1_reg[0xbU] 
                                            >> 0x16U))
                                        : 0U);
    vlSelf->__PVT__free_pr = 0U;
    if ((1U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 0U;
    }
    if ((2U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 1U;
    }
    if ((4U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 2U;
    }
    if ((8U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 3U;
    }
    if ((0x10U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 4U;
    }
    if ((0x20U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 5U;
    }
    if ((0x40U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 6U;
    }
    if ((0x80U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 7U;
    }
    if ((0x100U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 8U;
    }
    if ((0x200U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 9U;
    }
    if ((0x400U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 0xaU;
    }
    if ((0x800U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 0xbU;
    }
    if ((0x1000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 0xcU;
    }
    if ((0x2000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 0xdU;
    }
    if ((0x4000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 0xeU;
    }
    if ((0x8000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 0xfU;
    }
    if ((0x10000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 0x10U;
    }
    if ((0x20000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 0x11U;
    }
    if ((0x40000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 0x12U;
    }
    if ((0x80000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 0x13U;
    }
    if ((0x100000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 0x14U;
    }
    if ((0x200000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 0x15U;
    }
    if ((0x400000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 0x16U;
    }
    if ((0x800000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 0x17U;
    }
    if ((0x1000000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 0x18U;
    }
    if ((0x2000000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 0x19U;
    }
    if ((0x4000000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 0x1aU;
    }
    if ((0x8000000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 0x1bU;
    }
    if ((0x10000000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 0x1cU;
    }
    if ((0x20000000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 0x1dU;
    }
    if ((0x40000000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr = 0x1eU;
    }
    if ((vlSelf->__PVT__free_list__DOT__free_list[0U] 
         >> 0x1fU)) {
        vlSelf->__PVT__free_pr = 0x1fU;
    }
    if ((1U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x20U;
    }
    if ((2U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x21U;
    }
    if ((4U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x22U;
    }
    if ((8U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x23U;
    }
    if ((0x10U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x24U;
    }
    if ((0x20U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x25U;
    }
    if ((0x40U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x26U;
    }
    if ((0x80U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x27U;
    }
    if ((0x100U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x28U;
    }
    if ((0x200U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x29U;
    }
    if ((0x400U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x2aU;
    }
    if ((0x800U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x2bU;
    }
    if ((0x1000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x2cU;
    }
    if ((0x2000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x2dU;
    }
    if ((0x4000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x2eU;
    }
    if ((0x8000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x2fU;
    }
    if ((0x10000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x30U;
    }
    if ((0x20000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x31U;
    }
    if ((0x40000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x32U;
    }
    if ((0x80000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x33U;
    }
    if ((0x100000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x34U;
    }
    if ((0x200000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x35U;
    }
    if ((0x400000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x36U;
    }
    if ((0x800000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x37U;
    }
    if ((0x1000000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x38U;
    }
    if ((0x2000000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x39U;
    }
    if ((0x4000000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x3aU;
    }
    if ((0x8000000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x3bU;
    }
    if ((0x10000000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x3cU;
    }
    if ((0x20000000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x3dU;
    }
    if ((0x40000000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr = 0x3eU;
    }
    if ((vlSelf->__PVT__free_list__DOT__free_list[1U] 
         >> 0x1fU)) {
        vlSelf->__PVT__free_pr = 0x3fU;
    }
    if ((1U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x40U;
    }
    if ((2U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x41U;
    }
    if ((4U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x42U;
    }
    if ((8U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x43U;
    }
    if ((0x10U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x44U;
    }
    if ((0x20U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x45U;
    }
    if ((0x40U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x46U;
    }
    if ((0x80U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x47U;
    }
    if ((0x100U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x48U;
    }
    if ((0x200U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x49U;
    }
    if ((0x400U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x4aU;
    }
    if ((0x800U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x4bU;
    }
    if ((0x1000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x4cU;
    }
    if ((0x2000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x4dU;
    }
    if ((0x4000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x4eU;
    }
    if ((0x8000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x4fU;
    }
    if ((0x10000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x50U;
    }
    if ((0x20000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x51U;
    }
    if ((0x40000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x52U;
    }
    if ((0x80000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x53U;
    }
    if ((0x100000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x54U;
    }
    if ((0x200000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x55U;
    }
    if ((0x400000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x56U;
    }
    if ((0x800000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x57U;
    }
    if ((0x1000000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x58U;
    }
    if ((0x2000000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x59U;
    }
    if ((0x4000000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x5aU;
    }
    if ((0x8000000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x5bU;
    }
    if ((0x10000000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x5cU;
    }
    if ((0x20000000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x5dU;
    }
    if ((0x40000000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr = 0x5eU;
    }
    if ((vlSelf->__PVT__free_list__DOT__free_list[2U] 
         >> 0x1fU)) {
        vlSelf->__PVT__free_pr = 0x5fU;
    }
    if ((1U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x60U;
    }
    if ((2U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x61U;
    }
    if ((4U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x62U;
    }
    if ((8U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x63U;
    }
    if ((0x10U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x64U;
    }
    if ((0x20U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x65U;
    }
    if ((0x40U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x66U;
    }
    if ((0x80U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x67U;
    }
    if ((0x100U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x68U;
    }
    if ((0x200U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x69U;
    }
    if ((0x400U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x6aU;
    }
    if ((0x800U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x6bU;
    }
    if ((0x1000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x6cU;
    }
    if ((0x2000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x6dU;
    }
    if ((0x4000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x6eU;
    }
    if ((0x8000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x6fU;
    }
    if ((0x10000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x70U;
    }
    if ((0x20000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x71U;
    }
    if ((0x40000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x72U;
    }
    if ((0x80000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x73U;
    }
    if ((0x100000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x74U;
    }
    if ((0x200000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x75U;
    }
    if ((0x400000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x76U;
    }
    if ((0x800000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x77U;
    }
    if ((0x1000000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x78U;
    }
    if ((0x2000000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x79U;
    }
    if ((0x4000000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x7aU;
    }
    if ((0x8000000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x7bU;
    }
    if ((0x10000000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x7cU;
    }
    if ((0x20000000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x7dU;
    }
    if ((0x40000000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr = 0x7eU;
    }
    vlSelf->__PVT__free_pr_valid = 0U;
    if ((1U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((2U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((4U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((8U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x10U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x20U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x40U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x80U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x100U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x200U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x400U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x800U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x1000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x2000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x4000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x8000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x10000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x20000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x40000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x80000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x100000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x200000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x400000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x800000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x1000000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x2000000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x4000000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x8000000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x10000000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x20000000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x40000000U & vlSelf->__PVT__free_list__DOT__free_list[0U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((vlSelf->__PVT__free_list__DOT__free_list[0U] 
         >> 0x1fU)) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((2U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((4U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((8U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x10U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x20U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x40U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x80U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x100U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x200U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x400U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x800U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x1000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x2000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x4000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x8000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x10000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x20000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x40000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x80000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x100000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x200000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x400000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x800000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x1000000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x2000000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x4000000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x8000000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x10000000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x20000000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x40000000U & vlSelf->__PVT__free_list__DOT__free_list[1U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((vlSelf->__PVT__free_list__DOT__free_list[1U] 
         >> 0x1fU)) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((2U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((4U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((8U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x10U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x20U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x40U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x80U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x100U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x200U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x400U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x800U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x1000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x2000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x4000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x8000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x10000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x20000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x40000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x80000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x100000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x200000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x400000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x800000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x1000000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x2000000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x4000000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x8000000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x10000000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x20000000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x40000000U & vlSelf->__PVT__free_list__DOT__free_list[2U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((vlSelf->__PVT__free_list__DOT__free_list[2U] 
         >> 0x1fU)) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((2U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((4U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((8U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x10U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x20U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x40U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x80U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x100U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x200U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x400U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x800U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x1000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x2000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x4000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x8000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x10000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x20000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x40000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x80000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x100000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x200000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x400000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x800000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x1000000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x2000000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x4000000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x8000000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x10000000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x20000000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((0x40000000U & vlSelf->__PVT__free_list__DOT__free_list[3U])) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((vlSelf->__PVT__free_list__DOT__free_list[3U] 
         >> 0x1fU)) {
        vlSelf->__PVT__free_pr = 0x7fU;
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    vlSelf->__PVT__srat_o[0U] = vlSelf->__PVT__srat__DOT__srat
        [0U];
    vlSelf->__PVT__srat_o[1U] = vlSelf->__PVT__srat__DOT__srat
        [1U];
    vlSelf->__PVT__srat_o[2U] = vlSelf->__PVT__srat__DOT__srat
        [2U];
    vlSelf->__PVT__srat_o[3U] = vlSelf->__PVT__srat__DOT__srat
        [3U];
    vlSelf->__PVT__srat_o[4U] = vlSelf->__PVT__srat__DOT__srat
        [4U];
    vlSelf->__PVT__srat_o[5U] = vlSelf->__PVT__srat__DOT__srat
        [5U];
    vlSelf->__PVT__srat_o[6U] = vlSelf->__PVT__srat__DOT__srat
        [6U];
    vlSelf->__PVT__srat_o[7U] = vlSelf->__PVT__srat__DOT__srat
        [7U];
    vlSelf->__PVT__srat_o[8U] = vlSelf->__PVT__srat__DOT__srat
        [8U];
    vlSelf->__PVT__srat_o[9U] = vlSelf->__PVT__srat__DOT__srat
        [9U];
    vlSelf->__PVT__srat_o[0xaU] = vlSelf->__PVT__srat__DOT__srat
        [0xaU];
    vlSelf->__PVT__srat_o[0xbU] = vlSelf->__PVT__srat__DOT__srat
        [0xbU];
    vlSelf->__PVT__srat_o[0xcU] = vlSelf->__PVT__srat__DOT__srat
        [0xcU];
    vlSelf->__PVT__srat_o[0xdU] = vlSelf->__PVT__srat__DOT__srat
        [0xdU];
    vlSelf->__PVT__srat_o[0xeU] = vlSelf->__PVT__srat__DOT__srat
        [0xeU];
    vlSelf->__PVT__srat_o[0xfU] = vlSelf->__PVT__srat__DOT__srat
        [0xfU];
    vlSelf->__PVT__srat_o[0x10U] = vlSelf->__PVT__srat__DOT__srat
        [0x10U];
    vlSelf->__PVT__srat_o[0x11U] = vlSelf->__PVT__srat__DOT__srat
        [0x11U];
    vlSelf->__PVT__srat_o[0x12U] = vlSelf->__PVT__srat__DOT__srat
        [0x12U];
    vlSelf->__PVT__srat_o[0x13U] = vlSelf->__PVT__srat__DOT__srat
        [0x13U];
    vlSelf->__PVT__srat_o[0x14U] = vlSelf->__PVT__srat__DOT__srat
        [0x14U];
    vlSelf->__PVT__srat_o[0x15U] = vlSelf->__PVT__srat__DOT__srat
        [0x15U];
    vlSelf->__PVT__srat_o[0x16U] = vlSelf->__PVT__srat__DOT__srat
        [0x16U];
    vlSelf->__PVT__srat_o[0x17U] = vlSelf->__PVT__srat__DOT__srat
        [0x17U];
    vlSelf->__PVT__srat_o[0x18U] = vlSelf->__PVT__srat__DOT__srat
        [0x18U];
    vlSelf->__PVT__srat_o[0x19U] = vlSelf->__PVT__srat__DOT__srat
        [0x19U];
    vlSelf->__PVT__srat_o[0x1aU] = vlSelf->__PVT__srat__DOT__srat
        [0x1aU];
    vlSelf->__PVT__srat_o[0x1bU] = vlSelf->__PVT__srat__DOT__srat
        [0x1bU];
    vlSelf->__PVT__srat_o[0x1cU] = vlSelf->__PVT__srat__DOT__srat
        [0x1cU];
    vlSelf->__PVT__srat_o[0x1dU] = vlSelf->__PVT__srat__DOT__srat
        [0x1dU];
    vlSelf->__PVT__srat_o[0x1eU] = vlSelf->__PVT__srat__DOT__srat
        [0x1eU];
    vlSelf->__PVT__srat_o[0x1fU] = vlSelf->__PVT__srat__DOT__srat
        [0x1fU];
    vlSelf->__VdfgTmp_h1b7601cf__0 = ((4U == (7U & (IData)(
                                                           (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                            >> 0x19U)))) 
                                      | (5U == (7U 
                                                & (IData)(
                                                          (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                           >> 0x19U)))));
    vlSelf->stall_lc_checkpoint_full = ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__lc_checkpoint_full) 
                                        & (0x4000000ULL 
                                           == (0xe000000ULL 
                                               & vlSelf->__PVT__MIDCORE_rename2_reg)));
    vlSelf->__PVT__cp_rename_update_pr_o = ((IData)(vlSelf->__PVT__free_pr_valid)
                                             ? (IData)(vlSelf->__PVT__free_pr)
                                             : 0U);
    vlSelf->__PVT__cp_dispatch_srat[0U] = vlSelf->__PVT__srat_o
        [0U];
    vlSelf->__PVT__cp_dispatch_srat[1U] = vlSelf->__PVT__srat_o
        [1U];
    vlSelf->__PVT__cp_dispatch_srat[2U] = vlSelf->__PVT__srat_o
        [2U];
    vlSelf->__PVT__cp_dispatch_srat[3U] = vlSelf->__PVT__srat_o
        [3U];
    vlSelf->__PVT__cp_dispatch_srat[4U] = vlSelf->__PVT__srat_o
        [4U];
    vlSelf->__PVT__cp_dispatch_srat[5U] = vlSelf->__PVT__srat_o
        [5U];
    vlSelf->__PVT__cp_dispatch_srat[6U] = vlSelf->__PVT__srat_o
        [6U];
    vlSelf->__PVT__cp_dispatch_srat[7U] = vlSelf->__PVT__srat_o
        [7U];
    vlSelf->__PVT__cp_dispatch_srat[8U] = vlSelf->__PVT__srat_o
        [8U];
    vlSelf->__PVT__cp_dispatch_srat[9U] = vlSelf->__PVT__srat_o
        [9U];
    vlSelf->__PVT__cp_dispatch_srat[0xaU] = vlSelf->__PVT__srat_o
        [0xaU];
    vlSelf->__PVT__cp_dispatch_srat[0xbU] = vlSelf->__PVT__srat_o
        [0xbU];
    vlSelf->__PVT__cp_dispatch_srat[0xcU] = vlSelf->__PVT__srat_o
        [0xcU];
    vlSelf->__PVT__cp_dispatch_srat[0xdU] = vlSelf->__PVT__srat_o
        [0xdU];
    vlSelf->__PVT__cp_dispatch_srat[0xeU] = vlSelf->__PVT__srat_o
        [0xeU];
    vlSelf->__PVT__cp_dispatch_srat[0xfU] = vlSelf->__PVT__srat_o
        [0xfU];
    vlSelf->__PVT__cp_dispatch_srat[0x10U] = vlSelf->__PVT__srat_o
        [0x10U];
    vlSelf->__PVT__cp_dispatch_srat[0x11U] = vlSelf->__PVT__srat_o
        [0x11U];
    vlSelf->__PVT__cp_dispatch_srat[0x12U] = vlSelf->__PVT__srat_o
        [0x12U];
    vlSelf->__PVT__cp_dispatch_srat[0x13U] = vlSelf->__PVT__srat_o
        [0x13U];
    vlSelf->__PVT__cp_dispatch_srat[0x14U] = vlSelf->__PVT__srat_o
        [0x14U];
    vlSelf->__PVT__cp_dispatch_srat[0x15U] = vlSelf->__PVT__srat_o
        [0x15U];
    vlSelf->__PVT__cp_dispatch_srat[0x16U] = vlSelf->__PVT__srat_o
        [0x16U];
    vlSelf->__PVT__cp_dispatch_srat[0x17U] = vlSelf->__PVT__srat_o
        [0x17U];
    vlSelf->__PVT__cp_dispatch_srat[0x18U] = vlSelf->__PVT__srat_o
        [0x18U];
    vlSelf->__PVT__cp_dispatch_srat[0x19U] = vlSelf->__PVT__srat_o
        [0x19U];
    vlSelf->__PVT__cp_dispatch_srat[0x1aU] = vlSelf->__PVT__srat_o
        [0x1aU];
    vlSelf->__PVT__cp_dispatch_srat[0x1bU] = vlSelf->__PVT__srat_o
        [0x1bU];
    vlSelf->__PVT__cp_dispatch_srat[0x1cU] = vlSelf->__PVT__srat_o
        [0x1cU];
    vlSelf->__PVT__cp_dispatch_srat[0x1dU] = vlSelf->__PVT__srat_o
        [0x1dU];
    vlSelf->__PVT__cp_dispatch_srat[0x1eU] = vlSelf->__PVT__srat_o
        [0x1eU];
    vlSelf->__PVT__cp_dispatch_srat[0x1fU] = vlSelf->__PVT__srat_o
        [0x1fU];
    vlSelf->__PVT__lc_dispatch_srat_o[0U] = vlSelf->__PVT__srat_o
        [0U];
    vlSelf->__PVT__lc_dispatch_srat_o[1U] = vlSelf->__PVT__srat_o
        [1U];
    vlSelf->__PVT__lc_dispatch_srat_o[2U] = vlSelf->__PVT__srat_o
        [2U];
    vlSelf->__PVT__lc_dispatch_srat_o[3U] = vlSelf->__PVT__srat_o
        [3U];
    vlSelf->__PVT__lc_dispatch_srat_o[4U] = vlSelf->__PVT__srat_o
        [4U];
    vlSelf->__PVT__lc_dispatch_srat_o[5U] = vlSelf->__PVT__srat_o
        [5U];
    vlSelf->__PVT__lc_dispatch_srat_o[6U] = vlSelf->__PVT__srat_o
        [6U];
    vlSelf->__PVT__lc_dispatch_srat_o[7U] = vlSelf->__PVT__srat_o
        [7U];
    vlSelf->__PVT__lc_dispatch_srat_o[8U] = vlSelf->__PVT__srat_o
        [8U];
    vlSelf->__PVT__lc_dispatch_srat_o[9U] = vlSelf->__PVT__srat_o
        [9U];
    vlSelf->__PVT__lc_dispatch_srat_o[0xaU] = vlSelf->__PVT__srat_o
        [0xaU];
    vlSelf->__PVT__lc_dispatch_srat_o[0xbU] = vlSelf->__PVT__srat_o
        [0xbU];
    vlSelf->__PVT__lc_dispatch_srat_o[0xcU] = vlSelf->__PVT__srat_o
        [0xcU];
    vlSelf->__PVT__lc_dispatch_srat_o[0xdU] = vlSelf->__PVT__srat_o
        [0xdU];
    vlSelf->__PVT__lc_dispatch_srat_o[0xeU] = vlSelf->__PVT__srat_o
        [0xeU];
    vlSelf->__PVT__lc_dispatch_srat_o[0xfU] = vlSelf->__PVT__srat_o
        [0xfU];
    vlSelf->__PVT__lc_dispatch_srat_o[0x10U] = vlSelf->__PVT__srat_o
        [0x10U];
    vlSelf->__PVT__lc_dispatch_srat_o[0x11U] = vlSelf->__PVT__srat_o
        [0x11U];
    vlSelf->__PVT__lc_dispatch_srat_o[0x12U] = vlSelf->__PVT__srat_o
        [0x12U];
    vlSelf->__PVT__lc_dispatch_srat_o[0x13U] = vlSelf->__PVT__srat_o
        [0x13U];
    vlSelf->__PVT__lc_dispatch_srat_o[0x14U] = vlSelf->__PVT__srat_o
        [0x14U];
    vlSelf->__PVT__lc_dispatch_srat_o[0x15U] = vlSelf->__PVT__srat_o
        [0x15U];
    vlSelf->__PVT__lc_dispatch_srat_o[0x16U] = vlSelf->__PVT__srat_o
        [0x16U];
    vlSelf->__PVT__lc_dispatch_srat_o[0x17U] = vlSelf->__PVT__srat_o
        [0x17U];
    vlSelf->__PVT__lc_dispatch_srat_o[0x18U] = vlSelf->__PVT__srat_o
        [0x18U];
    vlSelf->__PVT__lc_dispatch_srat_o[0x19U] = vlSelf->__PVT__srat_o
        [0x19U];
    vlSelf->__PVT__lc_dispatch_srat_o[0x1aU] = vlSelf->__PVT__srat_o
        [0x1aU];
    vlSelf->__PVT__lc_dispatch_srat_o[0x1bU] = vlSelf->__PVT__srat_o
        [0x1bU];
    vlSelf->__PVT__lc_dispatch_srat_o[0x1cU] = vlSelf->__PVT__srat_o
        [0x1cU];
    vlSelf->__PVT__lc_dispatch_srat_o[0x1dU] = vlSelf->__PVT__srat_o
        [0x1dU];
    vlSelf->__PVT__lc_dispatch_srat_o[0x1eU] = vlSelf->__PVT__srat_o
        [0x1eU];
    vlSelf->__PVT__lc_dispatch_srat_o[0x1fU] = vlSelf->__PVT__srat_o
        [0x1fU];
    vlSelf->__PVT__is_br_or_jump = ((1U == (7U & (IData)(
                                                         (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                          >> 0x19U)))) 
                                    | (IData)(vlSelf->__VdfgTmp_h1b7601cf__0));
    vlSelf->stall_checkpoint_full = ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__checkpoint_full) 
                                     & (IData)(vlSelf->__PVT__is_br_or_jump));
}

VL_INLINE_OPT void Vtop_tb_cpu_midcore___nba_sequent__TOP__top_tb__dut__cpu_midcore__1(Vtop_tb_cpu_midcore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_tb_cpu_midcore___nba_sequent__TOP__top_tb__dut__cpu_midcore__1\n"); );
    // Body
    vlSelf->stall_mul_full = ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mul_full_o) 
                              & (0xc000000ULL == (0xe000000ULL 
                                                  & vlSelf->__PVT__MIDCORE_rename2_reg)));
    vlSelf->stall_alu_full = ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__alu_full_o) 
                              & (0ULL == (0xe000000ULL 
                                          & vlSelf->__PVT__MIDCORE_rename2_reg)));
    vlSelf->stall_jump_full = ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__jump_full_o) 
                               & (IData)(vlSelf->__VdfgTmp_h1b7601cf__0));
    vlSelf->stall_cmp_full = ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__cmp_full_o) 
                              & (0x2000000ULL == (0xe000000ULL 
                                                  & vlSelf->__PVT__MIDCORE_rename2_reg)));
    vlSelf->stall_load_full = ((~ (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_has_free)) 
                               & (0x4000000ULL == (0xe000000ULL 
                                                   & vlSelf->__PVT__MIDCORE_rename2_reg)));
    vlSelf->stall_store_full = ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_full_o) 
                                & (0x6000000ULL == 
                                   (0xe000000ULL & vlSelf->__PVT__MIDCORE_rename2_reg)));
    vlSelf->__PVT__ROB_rename2_o[0U] = vlSelf->__PVT__ROB_rename1_reg[0U];
    vlSelf->__PVT__ROB_rename2_o[1U] = vlSelf->__PVT__ROB_rename1_reg[1U];
    vlSelf->__PVT__ROB_rename2_o[2U] = vlSelf->__PVT__ROB_rename1_reg[2U];
    vlSelf->__PVT__ROB_rename2_o[3U] = vlSelf->__PVT__ROB_rename1_reg[3U];
    vlSelf->__PVT__ROB_rename2_o[4U] = vlSelf->__PVT__ROB_rename1_reg[4U];
    vlSelf->__PVT__ROB_rename2_o[5U] = vlSelf->__PVT__ROB_rename1_reg[5U];
    vlSelf->__PVT__ROB_rename2_o[6U] = vlSelf->__PVT__ROB_rename1_reg[6U];
    vlSelf->__PVT__ROB_rename2_o[7U] = vlSelf->__PVT__ROB_rename1_reg[7U];
    vlSelf->__PVT__ROB_rename2_o[8U] = vlSelf->__PVT__ROB_rename1_reg[8U];
    vlSelf->__PVT__ROB_rename2_o[9U] = vlSelf->__PVT__ROB_rename1_reg[9U];
    vlSelf->__PVT__ROB_rename2_o[0xaU] = vlSelf->__PVT__ROB_rename1_reg[0xaU];
    vlSelf->__PVT__ROB_rename2_o[0xbU] = vlSelf->__PVT__ROB_rename1_reg[0xbU];
    vlSelf->__PVT__ROB_rename2_o[0xbU] = ((0x3fc07fffU 
                                           & vlSelf->__PVT__ROB_rename2_o[0xbU]) 
                                          | (0x3fffffffU 
                                             & ((((vlSelf->__PVT__ROB_rename1_reg[0xbU] 
                                                   >> 0x1bU) 
                                                  & (IData)(vlSelf->__PVT__free_pr_valid))
                                                  ? (IData)(vlSelf->__PVT__free_pr)
                                                  : 0U) 
                                                << 0xfU)));
    vlSelf->__PVT__ROB_rename2_o[1U] = (0x3fffU & vlSelf->__PVT__ROB_rename2_o[1U]);
    vlSelf->__PVT__ROB_rename2_o[2U] = 0U;
    vlSelf->__PVT__ROB_rename2_o[3U] = 0U;
    vlSelf->__PVT__ROB_rename2_o[4U] = 0U;
    vlSelf->__PVT__ROB_rename2_o[5U] = (0xfc00000U 
                                        & ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__wrPtr) 
                                           << 0x16U));
    vlSelf->__PVT__ROB_rename2_o[6U] = 0U;
    vlSelf->__PVT__ROB_rename2_o[7U] = (0xf0000000U 
                                        & vlSelf->__PVT__ROB_rename2_o[7U]);
    vlSelf->__PVT__ROB_rename2_o[1U] = (0xfffff7ffU 
                                        & vlSelf->__PVT__ROB_rename2_o[1U]);
    vlSelf->__PVT__ROB_rename2_o[0U] = (0x1ffU & vlSelf->__PVT__ROB_rename2_o[0U]);
    vlSelf->__PVT__ROB_rename2_o[1U] = (0xfffffc00U 
                                        & vlSelf->__PVT__ROB_rename2_o[1U]);
    vlSelf->__PVT__ROB_rename2_o[0xbU] = (0x2fffffffU 
                                          & vlSelf->__PVT__ROB_rename2_o[0xbU]);
    vlSelf->stall_rob_full = vlSymsp->TOP__top_tb__dut.__PVT__rob_full;
    vlSelf->stall_no_free_pr = (1U & ((~ (IData)(vlSelf->__PVT__free_pr_valid)) 
                                      & (vlSelf->__PVT__ROB_rename2_o[0xbU] 
                                         >> 0x1bU)));
}

VL_INLINE_OPT void Vtop_tb_cpu_midcore___nba_sequent__TOP__top_tb__dut__cpu_midcore__2(Vtop_tb_cpu_midcore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_tb_cpu_midcore___nba_sequent__TOP__top_tb__dut__cpu_midcore__2\n"); );
    // Body
    vlSelf->__PVT__stall = ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__rob_full) 
                            | ((IData)(vlSelf->stall_alu_full) 
                               | ((IData)(vlSelf->stall_cmp_full) 
                                  | ((IData)(vlSelf->stall_load_full) 
                                     | ((IData)(vlSelf->stall_store_full) 
                                        | ((IData)(vlSelf->stall_jump_full) 
                                           | ((IData)(vlSelf->stall_mul_full) 
                                              | ((IData)(vlSelf->stall_no_free_pr) 
                                                 | ((IData)(vlSelf->stall_checkpoint_full) 
                                                    | ((IData)(vlSelf->stall_lc_checkpoint_full) 
                                                       | ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict) 
                                                          | (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_mispredict_o))))))))))));
    vlSelf->__VdfgTmp_hc8d9bbac__0 = ((~ (IData)(vlSelf->__PVT__stall)) 
                                      & (vlSelf->__PVT__ROB_rename2_reg[0xbU] 
                                         >> 0x1dU));
    vlSelf->__PVT__decode_request = (1U & ((~ (IData)(vlSelf->__PVT__stall)) 
                                           & (~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__fetch_empty))));
    vlSelf->__PVT__cp_rename_update_o = ((~ (IData)(vlSelf->__PVT__stall)) 
                                         & (0x28000000U 
                                            == (0x28000000U 
                                                & vlSelf->__PVT__ROB_rename1_reg[0xbU])));
    vlSelf->__PVT__ROB_midcore_o[0U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0U];
    vlSelf->__PVT__ROB_midcore_o[1U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[1U];
    vlSelf->__PVT__ROB_midcore_o[2U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[2U];
    vlSelf->__PVT__ROB_midcore_o[3U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[3U];
    vlSelf->__PVT__ROB_midcore_o[4U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[4U];
    vlSelf->__PVT__ROB_midcore_o[5U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[5U];
    vlSelf->__PVT__ROB_midcore_o[6U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[6U];
    vlSelf->__PVT__ROB_midcore_o[7U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[7U];
    vlSelf->__PVT__ROB_midcore_o[8U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[8U];
    vlSelf->__PVT__ROB_midcore_o[9U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[9U];
    vlSelf->__PVT__ROB_midcore_o[0xaU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xaU];
    vlSelf->__PVT__ROB_midcore_o[0xbU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xbU];
    vlSelf->__PVT__MIDCORE_midcore_o = 0ULL;
    if ((1U & (~ (IData)(vlSelf->__PVT__stall)))) {
        vlSelf->__PVT__ROB_midcore_o[0U] = vlSelf->__PVT__ROB_rename2_reg[0U];
        vlSelf->__PVT__ROB_midcore_o[1U] = vlSelf->__PVT__ROB_rename2_reg[1U];
        vlSelf->__PVT__ROB_midcore_o[2U] = vlSelf->__PVT__ROB_rename2_reg[2U];
        vlSelf->__PVT__ROB_midcore_o[3U] = vlSelf->__PVT__ROB_rename2_reg[3U];
        vlSelf->__PVT__ROB_midcore_o[4U] = vlSelf->__PVT__ROB_rename2_reg[4U];
        vlSelf->__PVT__ROB_midcore_o[5U] = vlSelf->__PVT__ROB_rename2_reg[5U];
        vlSelf->__PVT__ROB_midcore_o[6U] = vlSelf->__PVT__ROB_rename2_reg[6U];
        vlSelf->__PVT__ROB_midcore_o[7U] = vlSelf->__PVT__ROB_rename2_reg[7U];
        vlSelf->__PVT__ROB_midcore_o[8U] = vlSelf->__PVT__ROB_rename2_reg[8U];
        vlSelf->__PVT__ROB_midcore_o[9U] = vlSelf->__PVT__ROB_rename2_reg[9U];
        vlSelf->__PVT__ROB_midcore_o[0xaU] = vlSelf->__PVT__ROB_rename2_reg[0xaU];
        vlSelf->__PVT__ROB_midcore_o[0xbU] = vlSelf->__PVT__ROB_rename2_reg[0xbU];
        if (vlSelf->__PVT__is_br_or_jump) {
            vlSelf->__PVT__ROB_midcore_o[0U] = ((0xfffffe3fU 
                                                 & vlSelf->__PVT__ROB_midcore_o[0U]) 
                                                | ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cp_checkpoint_id) 
                                                   << 6U));
        }
        if ((2U == (7U & (IData)((vlSelf->__PVT__MIDCORE_rename2_reg 
                                  >> 0x19U))))) {
            vlSelf->__PVT__ROB_midcore_o[0U] = ((0xffffffc0U 
                                                 & vlSelf->__PVT__ROB_midcore_o[0U]) 
                                                | (IData)(vlSymsp->TOP__top_tb__dut.__PVT__lc_checkpoint_id));
        }
        vlSelf->__PVT__MIDCORE_midcore_o = vlSelf->__PVT__MIDCORE_rename2_reg;
    }
    vlSelf->__PVT__lc_dispatch_valid_o = ((IData)(vlSelf->__VdfgTmp_hc8d9bbac__0) 
                                          & (0x4000000ULL 
                                             == (0xe000000ULL 
                                                 & vlSelf->__PVT__MIDCORE_rename2_reg)));
    vlSelf->__PVT__srat__DOT__srat_next[0U] = vlSelf->__PVT__srat__DOT__srat
        [0U];
    vlSelf->__PVT__srat__DOT__srat_next[1U] = vlSelf->__PVT__srat__DOT__srat
        [1U];
    vlSelf->__PVT__srat__DOT__srat_next[2U] = vlSelf->__PVT__srat__DOT__srat
        [2U];
    vlSelf->__PVT__srat__DOT__srat_next[3U] = vlSelf->__PVT__srat__DOT__srat
        [3U];
    vlSelf->__PVT__srat__DOT__srat_next[4U] = vlSelf->__PVT__srat__DOT__srat
        [4U];
    vlSelf->__PVT__srat__DOT__srat_next[5U] = vlSelf->__PVT__srat__DOT__srat
        [5U];
    vlSelf->__PVT__srat__DOT__srat_next[6U] = vlSelf->__PVT__srat__DOT__srat
        [6U];
    vlSelf->__PVT__srat__DOT__srat_next[7U] = vlSelf->__PVT__srat__DOT__srat
        [7U];
    vlSelf->__PVT__srat__DOT__srat_next[8U] = vlSelf->__PVT__srat__DOT__srat
        [8U];
    vlSelf->__PVT__srat__DOT__srat_next[9U] = vlSelf->__PVT__srat__DOT__srat
        [9U];
    vlSelf->__PVT__srat__DOT__srat_next[0xaU] = vlSelf->__PVT__srat__DOT__srat
        [0xaU];
    vlSelf->__PVT__srat__DOT__srat_next[0xbU] = vlSelf->__PVT__srat__DOT__srat
        [0xbU];
    vlSelf->__PVT__srat__DOT__srat_next[0xcU] = vlSelf->__PVT__srat__DOT__srat
        [0xcU];
    vlSelf->__PVT__srat__DOT__srat_next[0xdU] = vlSelf->__PVT__srat__DOT__srat
        [0xdU];
    vlSelf->__PVT__srat__DOT__srat_next[0xeU] = vlSelf->__PVT__srat__DOT__srat
        [0xeU];
    vlSelf->__PVT__srat__DOT__srat_next[0xfU] = vlSelf->__PVT__srat__DOT__srat
        [0xfU];
    vlSelf->__PVT__srat__DOT__srat_next[0x10U] = vlSelf->__PVT__srat__DOT__srat
        [0x10U];
    vlSelf->__PVT__srat__DOT__srat_next[0x11U] = vlSelf->__PVT__srat__DOT__srat
        [0x11U];
    vlSelf->__PVT__srat__DOT__srat_next[0x12U] = vlSelf->__PVT__srat__DOT__srat
        [0x12U];
    vlSelf->__PVT__srat__DOT__srat_next[0x13U] = vlSelf->__PVT__srat__DOT__srat
        [0x13U];
    vlSelf->__PVT__srat__DOT__srat_next[0x14U] = vlSelf->__PVT__srat__DOT__srat
        [0x14U];
    vlSelf->__PVT__srat__DOT__srat_next[0x15U] = vlSelf->__PVT__srat__DOT__srat
        [0x15U];
    vlSelf->__PVT__srat__DOT__srat_next[0x16U] = vlSelf->__PVT__srat__DOT__srat
        [0x16U];
    vlSelf->__PVT__srat__DOT__srat_next[0x17U] = vlSelf->__PVT__srat__DOT__srat
        [0x17U];
    vlSelf->__PVT__srat__DOT__srat_next[0x18U] = vlSelf->__PVT__srat__DOT__srat
        [0x18U];
    vlSelf->__PVT__srat__DOT__srat_next[0x19U] = vlSelf->__PVT__srat__DOT__srat
        [0x19U];
    vlSelf->__PVT__srat__DOT__srat_next[0x1aU] = vlSelf->__PVT__srat__DOT__srat
        [0x1aU];
    vlSelf->__PVT__srat__DOT__srat_next[0x1bU] = vlSelf->__PVT__srat__DOT__srat
        [0x1bU];
    vlSelf->__PVT__srat__DOT__srat_next[0x1cU] = vlSelf->__PVT__srat__DOT__srat
        [0x1cU];
    vlSelf->__PVT__srat__DOT__srat_next[0x1dU] = vlSelf->__PVT__srat__DOT__srat
        [0x1dU];
    vlSelf->__PVT__srat__DOT__srat_next[0x1eU] = vlSelf->__PVT__srat__DOT__srat
        [0x1eU];
    vlSelf->__PVT__srat__DOT__srat_next[0x1fU] = vlSelf->__PVT__srat__DOT__srat
        [0x1fU];
    vlSelf->__PVT__free_list__DOT__free_list_next[0U] 
        = vlSelf->__PVT__free_list__DOT__free_list[0U];
    vlSelf->__PVT__free_list__DOT__free_list_next[1U] 
        = vlSelf->__PVT__free_list__DOT__free_list[1U];
    vlSelf->__PVT__free_list__DOT__free_list_next[2U] 
        = vlSelf->__PVT__free_list__DOT__free_list[2U];
    vlSelf->__PVT__free_list__DOT__free_list_next[3U] 
        = vlSelf->__PVT__free_list__DOT__free_list[3U];
    if (vlSelf->__PVT__cp_rename_update_o) {
        vlSelf->__PVT__srat__DOT__srat_next[vlSelf->__PVT__rename_update_ar] 
            = vlSelf->__PVT__cp_rename_update_pr_o;
        vlSelf->__PVT__free_list__DOT__free_list_next[((IData)(vlSelf->__PVT__cp_rename_update_pr_o) 
                                                       >> 5U)] 
            = ((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->__PVT__cp_rename_update_pr_o)))) 
               & vlSelf->__PVT__free_list__DOT__free_list_next[
               ((IData)(vlSelf->__PVT__cp_rename_update_pr_o) 
                >> 5U)]);
    }
    if (vlSymsp->TOP__top_tb__dut.__Vcellinp__cpu_midcore__commit_update) {
        vlSelf->__PVT__free_list__DOT__free_list_next[(3U 
                                                       & (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[0xbU] 
                                                          >> 0xdU))] 
            = (vlSelf->__PVT__free_list__DOT__free_list_next[
               (3U & (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[0xbU] 
                      >> 0xdU))] | ((IData)(1U) << 
                                    (0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[0xbU] 
                                              >> 8U))));
    }
    vlSelf->__PVT__ROB_rename1_o[0U] = vlSelf->__PVT__ROB_decode_o[0U];
    vlSelf->__PVT__ROB_rename1_o[1U] = vlSelf->__PVT__ROB_decode_o[1U];
    vlSelf->__PVT__ROB_rename1_o[2U] = vlSelf->__PVT__ROB_decode_o[2U];
    vlSelf->__PVT__ROB_rename1_o[3U] = vlSelf->__PVT__ROB_decode_o[3U];
    vlSelf->__PVT__ROB_rename1_o[4U] = vlSelf->__PVT__ROB_decode_o[4U];
    vlSelf->__PVT__ROB_rename1_o[5U] = vlSelf->__PVT__ROB_decode_o[5U];
    vlSelf->__PVT__ROB_rename1_o[6U] = vlSelf->__PVT__ROB_decode_o[6U];
    vlSelf->__PVT__ROB_rename1_o[7U] = vlSelf->__PVT__ROB_decode_o[7U];
    vlSelf->__PVT__ROB_rename1_o[8U] = vlSelf->__PVT__ROB_decode_o[8U];
    vlSelf->__PVT__ROB_rename1_o[9U] = vlSelf->__PVT__ROB_decode_o[9U];
    vlSelf->__PVT__ROB_rename1_o[0xaU] = vlSelf->__PVT__ROB_decode_o[0xaU];
    vlSelf->__PVT__ROB_rename1_o[0xbU] = vlSelf->__PVT__ROB_decode_o[0xbU];
    vlSelf->__PVT__ROB_rename1_o[0xbU] = ((0x3fc000ffU 
                                           & vlSelf->__PVT__ROB_rename1_o[0xbU]) 
                                          | (0x3fffffffU 
                                             & (((0x8000000U 
                                                  & vlSelf->__PVT__ROB_decode_o[0xbU])
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__cp_rename_update_o) 
                                                   & ((0x1fU 
                                                       & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                          >> 7U)) 
                                                      == (IData)(vlSelf->__PVT__rename_update_ar)))
                                                   ? (IData)(vlSelf->__PVT__cp_rename_update_pr_o)
                                                   : 
                                                  vlSelf->__PVT__srat__DOT__srat
                                                  [
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                      >> 7U))])
                                                  : 0U) 
                                                << 8U)));
    vlSelf->__PVT__ROB_rename1_o[1U] = (0x3fffU & vlSelf->__PVT__ROB_rename1_o[1U]);
    vlSelf->__PVT__ROB_rename1_o[2U] = 0U;
    vlSelf->__PVT__ROB_rename1_o[3U] = 0U;
    vlSelf->__PVT__ROB_rename1_o[4U] = 0U;
    vlSelf->__PVT__ROB_rename1_o[5U] = 0U;
    vlSelf->__PVT__ROB_rename1_o[6U] = 0U;
    vlSelf->__PVT__ROB_rename1_o[7U] = (0xf0000000U 
                                        & vlSelf->__PVT__ROB_rename1_o[7U]);
    vlSelf->__PVT__ROB_rename1_o[1U] = (0xfffff7ffU 
                                        & vlSelf->__PVT__ROB_rename1_o[1U]);
    vlSelf->__PVT__ROB_rename1_o[0U] = (0x1ffU & vlSelf->__PVT__ROB_rename1_o[0U]);
    vlSelf->__PVT__ROB_rename1_o[1U] = (0xfffffc00U 
                                        & vlSelf->__PVT__ROB_rename1_o[1U]);
    vlSelf->__PVT__ROB_rename1_o[0xbU] = (0x2fffffffU 
                                          & vlSelf->__PVT__ROB_rename1_o[0xbU]);
    vlSelf->__PVT__MIDCORE_rename1_o = vlSelf->__PVT__MIDCORE_decode_o;
    vlSelf->__PVT__MIDCORE_rename1_o = ((0xfffffffffff0003ULL 
                                         & vlSelf->__PVT__MIDCORE_rename1_o) 
                                        | ((QData)((IData)(
                                                           ((((1U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__MIDCORE_decode_o 
                                                                          >> 0x11U)))
                                                               ? 
                                                              (((IData)(vlSelf->__PVT__cp_rename_update_o) 
                                                                & ((IData)(vlSelf->__PVT__rename_update_ar) 
                                                                   == (IData)(vlSelf->__PVT__srat_lookup_rs1)))
                                                                ? (IData)(vlSelf->__PVT__cp_rename_update_pr_o)
                                                                : 
                                                               vlSelf->__PVT__srat__DOT__srat
                                                               [vlSelf->__PVT__srat_lookup_rs1])
                                                               : 0U) 
                                                             << 7U) 
                                                            | ((1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__MIDCORE_decode_o 
                                                                           >> 0x10U)))
                                                                ? 
                                                               (((IData)(vlSelf->__PVT__cp_rename_update_o) 
                                                                 & ((IData)(vlSelf->__PVT__rename_update_ar) 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                                        >> 0x14U))))
                                                                 ? (IData)(vlSelf->__PVT__cp_rename_update_pr_o)
                                                                 : 
                                                                vlSelf->__PVT__srat__DOT__srat
                                                                [
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                                    >> 0x14U))])
                                                                : 0U)))) 
                                           << 2U));
    vlSelf->__PVT__MIDCORE_rename1_o = (0xffffffffffffffcULL 
                                        & vlSelf->__PVT__MIDCORE_rename1_o);
}

VL_INLINE_OPT void Vtop_tb_cpu_midcore___nba_sequent__TOP__top_tb__dut__cpu_midcore__3(Vtop_tb_cpu_midcore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_tb_cpu_midcore___nba_sequent__TOP__top_tb__dut__cpu_midcore__3\n"); );
    // Body
    vlSelf->__PVT__MIDCORE_rename2_wb_updated = vlSelf->__PVT__MIDCORE_rename2_reg;
    if (vlSelf->__PVT__stall) {
        if (((IData)((vlSelf->__PVT__MIDCORE_rename2_reg 
                      >> 0x11U)) & (((((((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_alu) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                        >> 9U))) 
                                            == (0x7fU 
                                                & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__alu_ROB_exec_o[0xbU] 
                                                   >> 0xfU)))) 
                                        | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_load) 
                                           & ((0x7fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                          >> 9U))) 
                                              == (0x7fU 
                                                  & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                     >> 0xfU))))) 
                                       | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_jump) 
                                          & ((0x7fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                         >> 9U))) 
                                             == (0x7fU 
                                                 & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__jump_ROB_exec_o[0xbU] 
                                                    >> 0xfU))))) 
                                      | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_cmp) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                        >> 9U))) 
                                            == (0x7fU 
                                                & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__cmp_ROB_exec_o[0xbU] 
                                                   >> 0xfU))))) 
                                     | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_mul) 
                                        & ((0x7fU & (IData)(
                                                            (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                             >> 9U))) 
                                           == (0x7fU 
                                               & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mul_ROB_exec_o[0xbU] 
                                                  >> 0xfU))))) 
                                    | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                       & ((0x7fU & (IData)(
                                                           (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                            >> 9U))) 
                                          == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
            vlSelf->__PVT__MIDCORE_rename2_wb_updated 
                = (0xffffffffffffffdULL & vlSelf->__PVT__MIDCORE_rename2_wb_updated);
        }
        if (((IData)((vlSelf->__PVT__MIDCORE_rename2_reg 
                      >> 0x10U)) & (((((((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_alu) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                        >> 2U))) 
                                            == (0x7fU 
                                                & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__alu_ROB_exec_o[0xbU] 
                                                   >> 0xfU)))) 
                                        | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_load) 
                                           & ((0x7fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                          >> 2U))) 
                                              == (0x7fU 
                                                  & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                     >> 0xfU))))) 
                                       | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_jump) 
                                          & ((0x7fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                         >> 2U))) 
                                             == (0x7fU 
                                                 & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__jump_ROB_exec_o[0xbU] 
                                                    >> 0xfU))))) 
                                      | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_cmp) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                        >> 2U))) 
                                            == (0x7fU 
                                                & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__cmp_ROB_exec_o[0xbU] 
                                                   >> 0xfU))))) 
                                     | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_mul) 
                                        & ((0x7fU & (IData)(
                                                            (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                             >> 2U))) 
                                           == (0x7fU 
                                               & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mul_ROB_exec_o[0xbU] 
                                                  >> 0xfU))))) 
                                    | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                       & ((0x7fU & (IData)(
                                                           (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                            >> 2U))) 
                                          == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
            vlSelf->__PVT__MIDCORE_rename2_wb_updated 
                = (0xffffffffffffffeULL & vlSelf->__PVT__MIDCORE_rename2_wb_updated);
        }
    }
    vlSelf->__PVT__busy_table__DOT__bt_next[0U] = vlSelf->__PVT__busy_table__DOT__bt[0U];
    vlSelf->__PVT__busy_table__DOT__bt_next[1U] = vlSelf->__PVT__busy_table__DOT__bt[1U];
    vlSelf->__PVT__busy_table__DOT__bt_next[2U] = vlSelf->__PVT__busy_table__DOT__bt[2U];
    vlSelf->__PVT__busy_table__DOT__bt_next[3U] = vlSelf->__PVT__busy_table__DOT__bt[3U];
    if (vlSelf->__PVT__cp_rename_update_o) {
        vlSelf->__PVT__busy_table__DOT__bt_next[((IData)(vlSelf->__PVT__cp_rename_update_pr_o) 
                                                 >> 5U)] 
            = (vlSelf->__PVT__busy_table__DOT__bt_next[
               ((IData)(vlSelf->__PVT__cp_rename_update_pr_o) 
                >> 5U)] | ((IData)(1U) << (0x1fU & (IData)(vlSelf->__PVT__cp_rename_update_pr_o))));
    }
    if (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_alu) {
        vlSelf->__PVT__busy_table__DOT__bt_next[(3U 
                                                 & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__alu_ROB_exec_o[0xbU] 
                                                    >> 0x14U))] 
            = ((~ ((IData)(1U) << (0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__alu_ROB_exec_o[0xbU] 
                                            >> 0xfU)))) 
               & vlSelf->__PVT__busy_table__DOT__bt_next[
               (3U & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__alu_ROB_exec_o[0xbU] 
                      >> 0x14U))]);
    }
    if (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_load) {
        vlSelf->__PVT__busy_table__DOT__bt_next[(3U 
                                                 & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                    >> 0x14U))] 
            = ((~ ((IData)(1U) << (0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[0xbU] 
                                            >> 0xfU)))) 
               & vlSelf->__PVT__busy_table__DOT__bt_next[
               (3U & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[0xbU] 
                      >> 0x14U))]);
    }
    if (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_jump) {
        vlSelf->__PVT__busy_table__DOT__bt_next[(3U 
                                                 & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__jump_ROB_exec_o[0xbU] 
                                                    >> 0x14U))] 
            = ((~ ((IData)(1U) << (0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__jump_ROB_exec_o[0xbU] 
                                            >> 0xfU)))) 
               & vlSelf->__PVT__busy_table__DOT__bt_next[
               (3U & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__jump_ROB_exec_o[0xbU] 
                      >> 0x14U))]);
    }
    if (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_cmp) {
        vlSelf->__PVT__busy_table__DOT__bt_next[(3U 
                                                 & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__cmp_ROB_exec_o[0xbU] 
                                                    >> 0x14U))] 
            = ((~ ((IData)(1U) << (0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__cmp_ROB_exec_o[0xbU] 
                                            >> 0xfU)))) 
               & vlSelf->__PVT__busy_table__DOT__bt_next[
               (3U & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__cmp_ROB_exec_o[0xbU] 
                      >> 0x14U))]);
    }
    if (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_mul) {
        vlSelf->__PVT__busy_table__DOT__bt_next[(3U 
                                                 & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mul_ROB_exec_o[0xbU] 
                                                    >> 0x14U))] 
            = ((~ ((IData)(1U) << (0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mul_ROB_exec_o[0xbU] 
                                            >> 0xfU)))) 
               & vlSelf->__PVT__busy_table__DOT__bt_next[
               (3U & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mul_ROB_exec_o[0xbU] 
                      >> 0x14U))]);
    }
    if (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) {
        vlSelf->__PVT__busy_table__DOT__bt_next[((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o) 
                                                 >> 5U)] 
            = ((~ ((IData)(1U) << (0x1fU & (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))) 
               & vlSelf->__PVT__busy_table__DOT__bt_next[
               ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o) 
                >> 5U)]);
    }
    vlSelf->__PVT__rename2__DOT__pr1_busy_tmp = (1U 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                             >> 0x11U)) 
                                                    & (vlSelf->__PVT__busy_table__DOT__bt[
                                                       (((1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                                     >> 0x11U)))
                                                          ? 
                                                         (0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                                     >> 9U)))
                                                          : 0U) 
                                                        >> 5U)] 
                                                       >> 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                                    >> 0x11U)))
                                                         ? 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                                    >> 9U)))
                                                         : 0U))));
    if (((IData)((vlSelf->__PVT__MIDCORE_rename1_reg 
                  >> 0x11U)) & (((((((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_alu) 
                                     & ((0x7fU & (IData)(
                                                         (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                          >> 9U))) 
                                        == (0x7fU & 
                                            (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__alu_ROB_exec_o[0xbU] 
                                             >> 0xfU)))) 
                                    | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_load) 
                                       & ((0x7fU & (IData)(
                                                           (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                            >> 9U))) 
                                          == (0x7fU 
                                              & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                 >> 0xfU))))) 
                                   | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_jump) 
                                      & ((0x7fU & (IData)(
                                                          (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                           >> 9U))) 
                                         == (0x7fU 
                                             & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__jump_ROB_exec_o[0xbU] 
                                                >> 0xfU))))) 
                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_cmp) 
                                     & ((0x7fU & (IData)(
                                                         (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                          >> 9U))) 
                                        == (0x7fU & 
                                            (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__cmp_ROB_exec_o[0xbU] 
                                             >> 0xfU))))) 
                                 | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_mul) 
                                    & ((0x7fU & (IData)(
                                                        (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                         >> 9U))) 
                                       == (0x7fU & 
                                           (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mul_ROB_exec_o[0xbU] 
                                            >> 0xfU))))) 
                                | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                   & ((0x7fU & (IData)(
                                                       (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                        >> 9U))) 
                                      == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__rename2__DOT__pr1_busy_tmp = 0U;
    }
    vlSelf->__PVT__rename2__DOT__pr2_busy_tmp = (1U 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                             >> 0x10U)) 
                                                    & (vlSelf->__PVT__busy_table__DOT__bt[
                                                       (((1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                                     >> 0x10U)))
                                                          ? 
                                                         (0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                                     >> 2U)))
                                                          : 0U) 
                                                        >> 5U)] 
                                                       >> 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                                    >> 0x10U)))
                                                         ? 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                                    >> 2U)))
                                                         : 0U))));
    if (((IData)((vlSelf->__PVT__MIDCORE_rename1_reg 
                  >> 0x10U)) & (((((((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_alu) 
                                     & ((0x7fU & (IData)(
                                                         (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                          >> 2U))) 
                                        == (0x7fU & 
                                            (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__alu_ROB_exec_o[0xbU] 
                                             >> 0xfU)))) 
                                    | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_load) 
                                       & ((0x7fU & (IData)(
                                                           (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                            >> 2U))) 
                                          == (0x7fU 
                                              & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                 >> 0xfU))))) 
                                   | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_jump) 
                                      & ((0x7fU & (IData)(
                                                          (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                           >> 2U))) 
                                         == (0x7fU 
                                             & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__jump_ROB_exec_o[0xbU] 
                                                >> 0xfU))))) 
                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_cmp) 
                                     & ((0x7fU & (IData)(
                                                         (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                          >> 2U))) 
                                        == (0x7fU & 
                                            (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__cmp_ROB_exec_o[0xbU] 
                                             >> 0xfU))))) 
                                 | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__wb_mul) 
                                    & ((0x7fU & (IData)(
                                                        (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                         >> 2U))) 
                                       == (0x7fU & 
                                           (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mul_ROB_exec_o[0xbU] 
                                            >> 0xfU))))) 
                                | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                   & ((0x7fU & (IData)(
                                                       (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                        >> 2U))) 
                                      == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__rename2__DOT__pr2_busy_tmp = 0U;
    }
    vlSelf->__PVT__MIDCORE_rename2_o = vlSelf->__PVT__MIDCORE_rename1_reg;
    vlSelf->__PVT__MIDCORE_rename2_o = ((0xffffffffffffffcULL 
                                         & vlSelf->__PVT__MIDCORE_rename2_o) 
                                        | (IData)((IData)(
                                                          (((IData)(vlSelf->__PVT__rename2__DOT__pr1_busy_tmp) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->__PVT__rename2__DOT__pr2_busy_tmp)))));
}
