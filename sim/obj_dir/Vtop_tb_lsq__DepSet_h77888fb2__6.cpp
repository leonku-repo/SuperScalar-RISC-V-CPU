// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb_lsq.h"

extern const VlWide<12>/*383:0*/ Vtop_tb__ConstPool__CONST_h7e30f2cb_0;
extern const VlWide<12>/*383:0*/ Vtop_tb__ConstPool__CONST_h5ba48564_0;

VL_INLINE_OPT void Vtop_tb_lsq___nba_sequent__TOP__top_tb__dut__cpu_execute__lsq__3(Vtop_tb_lsq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_tb_lsq___nba_sequent__TOP__top_tb__dut__cpu_execute__lsq__3\n"); );
    // Init
    CData/*2:0*/ __VdfgTmp_h0e91f96d__0;
    __VdfgTmp_h0e91f96d__0 = 0;
    // Body
    vlSelf->__PVT__sq_age[0U] = (0x3fU & (((vlSelf->__PVT__sq
                                            [0U][5U] 
                                            << 0xaU) 
                                           | (vlSelf->__PVT__sq
                                              [0U][5U] 
                                              >> 0x16U)) 
                                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[1U] = (0x3fU & (((vlSelf->__PVT__sq
                                            [1U][5U] 
                                            << 0xaU) 
                                           | (vlSelf->__PVT__sq
                                              [1U][5U] 
                                              >> 0x16U)) 
                                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[2U] = (0x3fU & (((vlSelf->__PVT__sq
                                            [2U][5U] 
                                            << 0xaU) 
                                           | (vlSelf->__PVT__sq
                                              [2U][5U] 
                                              >> 0x16U)) 
                                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[3U] = (0x3fU & (((vlSelf->__PVT__sq
                                            [3U][5U] 
                                            << 0xaU) 
                                           | (vlSelf->__PVT__sq
                                              [3U][5U] 
                                              >> 0x16U)) 
                                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[4U] = (0x3fU & (((vlSelf->__PVT__sq
                                            [4U][5U] 
                                            << 0xaU) 
                                           | (vlSelf->__PVT__sq
                                              [4U][5U] 
                                              >> 0x16U)) 
                                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[5U] = (0x3fU & (((vlSelf->__PVT__sq
                                            [5U][5U] 
                                            << 0xaU) 
                                           | (vlSelf->__PVT__sq
                                              [5U][5U] 
                                              >> 0x16U)) 
                                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[6U] = (0x3fU & (((vlSelf->__PVT__sq
                                            [6U][5U] 
                                            << 0xaU) 
                                           | (vlSelf->__PVT__sq
                                              [6U][5U] 
                                              >> 0x16U)) 
                                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[7U] = (0x3fU & (((vlSelf->__PVT__sq
                                            [7U][5U] 
                                            << 0xaU) 
                                           | (vlSelf->__PVT__sq
                                              [7U][5U] 
                                              >> 0x16U)) 
                                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[8U] = (0x3fU & (((vlSelf->__PVT__sq
                                            [8U][5U] 
                                            << 0xaU) 
                                           | (vlSelf->__PVT__sq
                                              [8U][5U] 
                                              >> 0x16U)) 
                                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[9U] = (0x3fU & (((vlSelf->__PVT__sq
                                            [9U][5U] 
                                            << 0xaU) 
                                           | (vlSelf->__PVT__sq
                                              [9U][5U] 
                                              >> 0x16U)) 
                                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0xaU] = (0x3fU & (((vlSelf->__PVT__sq
                                              [0xaU][5U] 
                                              << 0xaU) 
                                             | (vlSelf->__PVT__sq
                                                [0xaU][5U] 
                                                >> 0x16U)) 
                                            - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0xbU] = (0x3fU & (((vlSelf->__PVT__sq
                                              [0xbU][5U] 
                                              << 0xaU) 
                                             | (vlSelf->__PVT__sq
                                                [0xbU][5U] 
                                                >> 0x16U)) 
                                            - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0xcU] = (0x3fU & (((vlSelf->__PVT__sq
                                              [0xcU][5U] 
                                              << 0xaU) 
                                             | (vlSelf->__PVT__sq
                                                [0xcU][5U] 
                                                >> 0x16U)) 
                                            - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0xdU] = (0x3fU & (((vlSelf->__PVT__sq
                                              [0xdU][5U] 
                                              << 0xaU) 
                                             | (vlSelf->__PVT__sq
                                                [0xdU][5U] 
                                                >> 0x16U)) 
                                            - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0xeU] = (0x3fU & (((vlSelf->__PVT__sq
                                              [0xeU][5U] 
                                              << 0xaU) 
                                             | (vlSelf->__PVT__sq
                                                [0xeU][5U] 
                                                >> 0x16U)) 
                                            - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0xfU] = (0x3fU & (((vlSelf->__PVT__sq
                                              [0xfU][5U] 
                                              << 0xaU) 
                                             | (vlSelf->__PVT__sq
                                                [0xfU][5U] 
                                                >> 0x16U)) 
                                            - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x10U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x10U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x10U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x11U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x11U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x11U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x12U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x12U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x12U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x13U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x13U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x13U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x14U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x14U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x14U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x15U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x15U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x15U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x16U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x16U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x16U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x17U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x17U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x17U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x18U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x18U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x18U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x19U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x19U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x19U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x1aU] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x1aU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x1aU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x1bU] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x1bU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x1bU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x1cU] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x1cU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x1cU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x1dU] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x1dU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x1dU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x1eU] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x1eU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x1eU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x1fU] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x1fU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x1fU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x20U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x20U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x20U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x21U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x21U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x21U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x22U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x22U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x22U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x23U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x23U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x23U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x24U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x24U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x24U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x25U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x25U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x25U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x26U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x26U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x26U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x27U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x27U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x27U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x28U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x28U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x28U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x29U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x29U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x29U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x2aU] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x2aU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x2aU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x2bU] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x2bU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x2bU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x2cU] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x2cU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x2cU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x2dU] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x2dU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x2dU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x2eU] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x2eU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x2eU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x2fU] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x2fU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x2fU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x30U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x30U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x30U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x31U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x31U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x31U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x32U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x32U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x32U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x33U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x33U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x33U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x34U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x34U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x34U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x35U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x35U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x35U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x36U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x36U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x36U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x37U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x37U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x37U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x38U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x38U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x38U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x39U] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x39U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x39U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x3aU] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x3aU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x3aU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x3bU] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x3bU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x3bU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x3cU] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x3cU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x3cU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x3dU] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x3dU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x3dU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x3eU] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x3eU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x3eU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_age[0x3fU] = (0x3fU & (((vlSelf->__PVT__sq
                                               [0x3fU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__sq
                                                 [0x3fU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0U] = (0x3fU & (((vlSelf->__PVT__lq
                                            [0U][5U] 
                                            << 0xaU) 
                                           | (vlSelf->__PVT__lq
                                              [0U][5U] 
                                              >> 0x16U)) 
                                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[1U] = (0x3fU & (((vlSelf->__PVT__lq
                                            [1U][5U] 
                                            << 0xaU) 
                                           | (vlSelf->__PVT__lq
                                              [1U][5U] 
                                              >> 0x16U)) 
                                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[2U] = (0x3fU & (((vlSelf->__PVT__lq
                                            [2U][5U] 
                                            << 0xaU) 
                                           | (vlSelf->__PVT__lq
                                              [2U][5U] 
                                              >> 0x16U)) 
                                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[3U] = (0x3fU & (((vlSelf->__PVT__lq
                                            [3U][5U] 
                                            << 0xaU) 
                                           | (vlSelf->__PVT__lq
                                              [3U][5U] 
                                              >> 0x16U)) 
                                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[4U] = (0x3fU & (((vlSelf->__PVT__lq
                                            [4U][5U] 
                                            << 0xaU) 
                                           | (vlSelf->__PVT__lq
                                              [4U][5U] 
                                              >> 0x16U)) 
                                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[5U] = (0x3fU & (((vlSelf->__PVT__lq
                                            [5U][5U] 
                                            << 0xaU) 
                                           | (vlSelf->__PVT__lq
                                              [5U][5U] 
                                              >> 0x16U)) 
                                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[6U] = (0x3fU & (((vlSelf->__PVT__lq
                                            [6U][5U] 
                                            << 0xaU) 
                                           | (vlSelf->__PVT__lq
                                              [6U][5U] 
                                              >> 0x16U)) 
                                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[7U] = (0x3fU & (((vlSelf->__PVT__lq
                                            [7U][5U] 
                                            << 0xaU) 
                                           | (vlSelf->__PVT__lq
                                              [7U][5U] 
                                              >> 0x16U)) 
                                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[8U] = (0x3fU & (((vlSelf->__PVT__lq
                                            [8U][5U] 
                                            << 0xaU) 
                                           | (vlSelf->__PVT__lq
                                              [8U][5U] 
                                              >> 0x16U)) 
                                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[9U] = (0x3fU & (((vlSelf->__PVT__lq
                                            [9U][5U] 
                                            << 0xaU) 
                                           | (vlSelf->__PVT__lq
                                              [9U][5U] 
                                              >> 0x16U)) 
                                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0xaU] = (0x3fU & (((vlSelf->__PVT__lq
                                              [0xaU][5U] 
                                              << 0xaU) 
                                             | (vlSelf->__PVT__lq
                                                [0xaU][5U] 
                                                >> 0x16U)) 
                                            - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0xbU] = (0x3fU & (((vlSelf->__PVT__lq
                                              [0xbU][5U] 
                                              << 0xaU) 
                                             | (vlSelf->__PVT__lq
                                                [0xbU][5U] 
                                                >> 0x16U)) 
                                            - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0xcU] = (0x3fU & (((vlSelf->__PVT__lq
                                              [0xcU][5U] 
                                              << 0xaU) 
                                             | (vlSelf->__PVT__lq
                                                [0xcU][5U] 
                                                >> 0x16U)) 
                                            - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0xdU] = (0x3fU & (((vlSelf->__PVT__lq
                                              [0xdU][5U] 
                                              << 0xaU) 
                                             | (vlSelf->__PVT__lq
                                                [0xdU][5U] 
                                                >> 0x16U)) 
                                            - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0xeU] = (0x3fU & (((vlSelf->__PVT__lq
                                              [0xeU][5U] 
                                              << 0xaU) 
                                             | (vlSelf->__PVT__lq
                                                [0xeU][5U] 
                                                >> 0x16U)) 
                                            - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0xfU] = (0x3fU & (((vlSelf->__PVT__lq
                                              [0xfU][5U] 
                                              << 0xaU) 
                                             | (vlSelf->__PVT__lq
                                                [0xfU][5U] 
                                                >> 0x16U)) 
                                            - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x10U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x10U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x10U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x11U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x11U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x11U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x12U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x12U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x12U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x13U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x13U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x13U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x14U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x14U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x14U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x15U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x15U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x15U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x16U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x16U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x16U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x17U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x17U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x17U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x18U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x18U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x18U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x19U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x19U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x19U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x1aU] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x1aU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x1aU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x1bU] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x1bU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x1bU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x1cU] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x1cU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x1cU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x1dU] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x1dU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x1dU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x1eU] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x1eU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x1eU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x1fU] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x1fU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x1fU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x20U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x20U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x20U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x21U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x21U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x21U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x22U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x22U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x22U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x23U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x23U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x23U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x24U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x24U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x24U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x25U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x25U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x25U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x26U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x26U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x26U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x27U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x27U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x27U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x28U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x28U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x28U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x29U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x29U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x29U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x2aU] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x2aU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x2aU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x2bU] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x2bU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x2bU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x2cU] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x2cU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x2cU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x2dU] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x2dU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x2dU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x2eU] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x2eU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x2eU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x2fU] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x2fU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x2fU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x30U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x30U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x30U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x31U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x31U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x31U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x32U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x32U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x32U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x33U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x33U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x33U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x34U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x34U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x34U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x35U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x35U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x35U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x36U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x36U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x36U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x37U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x37U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x37U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x38U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x38U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x38U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x39U] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x39U][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x39U][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x3aU] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x3aU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x3aU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x3bU] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x3bU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x3bU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x3cU] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x3cU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x3cU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x3dU] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x3dU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x3dU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x3eU] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x3eU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x3eU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__lq_age[0x3fU] = (0x3fU & (((vlSelf->__PVT__lq
                                               [0x3fU][5U] 
                                               << 0xaU) 
                                              | (vlSelf->__PVT__lq
                                                 [0x3fU][5U] 
                                                 >> 0x16U)) 
                                             - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__sq_rdPtr_next = vlSelf->__PVT__sq_rdPtr;
    if (((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__store_done) 
         & (~ (IData)(vlSelf->__PVT__sq_empty)))) {
        vlSelf->__PVT__sq_rdPtr_next = (0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__sq_rdPtr)));
    }
    vlSelf->__PVT__sq_slot_occ[0U] = ((0x3fU & (- (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                      < (0x7fU & ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                                  - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[1U] = ((0x3fU & ((IData)(1U) 
                                                - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                      < (0x7fU & ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                                  - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[2U] = ((0x3fU & ((IData)(2U) 
                                                - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                      < (0x7fU & ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                                  - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[3U] = ((0x3fU & ((IData)(3U) 
                                                - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                      < (0x7fU & ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                                  - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[4U] = ((0x3fU & ((IData)(4U) 
                                                - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                      < (0x7fU & ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                                  - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[5U] = ((0x3fU & ((IData)(5U) 
                                                - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                      < (0x7fU & ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                                  - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[6U] = ((0x3fU & ((IData)(6U) 
                                                - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                      < (0x7fU & ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                                  - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[7U] = ((0x3fU & ((IData)(7U) 
                                                - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                      < (0x7fU & ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                                  - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[8U] = ((0x3fU & ((IData)(8U) 
                                                - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                      < (0x7fU & ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                                  - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[9U] = ((0x3fU & ((IData)(9U) 
                                                - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                      < (0x7fU & ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                                  - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0xaU] = ((0x3fU & ((IData)(0xaU) 
                                                  - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                        < (0x7fU & 
                                           ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                            - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0xbU] = ((0x3fU & ((IData)(0xbU) 
                                                  - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                        < (0x7fU & 
                                           ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                            - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0xcU] = ((0x3fU & ((IData)(0xcU) 
                                                  - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                        < (0x7fU & 
                                           ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                            - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0xdU] = ((0x3fU & ((IData)(0xdU) 
                                                  - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                        < (0x7fU & 
                                           ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                            - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0xeU] = ((0x3fU & ((IData)(0xeU) 
                                                  - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                        < (0x7fU & 
                                           ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                            - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0xfU] = ((0x3fU & ((IData)(0xfU) 
                                                  - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                        < (0x7fU & 
                                           ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                            - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x10U] = ((0x3fU & ((IData)(0x10U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x11U] = ((0x3fU & ((IData)(0x11U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x12U] = ((0x3fU & ((IData)(0x12U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x13U] = ((0x3fU & ((IData)(0x13U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x14U] = ((0x3fU & ((IData)(0x14U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x15U] = ((0x3fU & ((IData)(0x15U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x16U] = ((0x3fU & ((IData)(0x16U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x17U] = ((0x3fU & ((IData)(0x17U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x18U] = ((0x3fU & ((IData)(0x18U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x19U] = ((0x3fU & ((IData)(0x19U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x1aU] = ((0x3fU & ((IData)(0x1aU) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x1bU] = ((0x3fU & ((IData)(0x1bU) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x1cU] = ((0x3fU & ((IData)(0x1cU) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x1dU] = ((0x3fU & ((IData)(0x1dU) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x1eU] = ((0x3fU & ((IData)(0x1eU) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x1fU] = ((0x3fU & ((IData)(0x1fU) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x20U] = ((0x3fU & ((IData)(0x20U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x21U] = ((0x3fU & ((IData)(0x21U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x22U] = ((0x3fU & ((IData)(0x22U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x23U] = ((0x3fU & ((IData)(0x23U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x24U] = ((0x3fU & ((IData)(0x24U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x25U] = ((0x3fU & ((IData)(0x25U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x26U] = ((0x3fU & ((IData)(0x26U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x27U] = ((0x3fU & ((IData)(0x27U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x28U] = ((0x3fU & ((IData)(0x28U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x29U] = ((0x3fU & ((IData)(0x29U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x2aU] = ((0x3fU & ((IData)(0x2aU) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x2bU] = ((0x3fU & ((IData)(0x2bU) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x2cU] = ((0x3fU & ((IData)(0x2cU) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x2dU] = ((0x3fU & ((IData)(0x2dU) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x2eU] = ((0x3fU & ((IData)(0x2eU) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x2fU] = ((0x3fU & ((IData)(0x2fU) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x30U] = ((0x3fU & ((IData)(0x30U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x31U] = ((0x3fU & ((IData)(0x31U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x32U] = ((0x3fU & ((IData)(0x32U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x33U] = ((0x3fU & ((IData)(0x33U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x34U] = ((0x3fU & ((IData)(0x34U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x35U] = ((0x3fU & ((IData)(0x35U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x36U] = ((0x3fU & ((IData)(0x36U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x37U] = ((0x3fU & ((IData)(0x37U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x38U] = ((0x3fU & ((IData)(0x38U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x39U] = ((0x3fU & ((IData)(0x39U) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x3aU] = ((0x3fU & ((IData)(0x3aU) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x3bU] = ((0x3fU & ((IData)(0x3bU) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x3cU] = ((0x3fU & ((IData)(0x3cU) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x3dU] = ((0x3fU & ((IData)(0x3dU) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x3eU] = ((0x3fU & ((IData)(0x3eU) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__sq_slot_occ[0x3fU] = ((0x3fU & ((IData)(0x3fU) 
                                                   - (IData)(vlSelf->__PVT__sq_rdPtr_next))) 
                                         < (0x7fU & 
                                            ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                             - (IData)(vlSelf->__PVT__sq_rdPtr_next))));
    vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i = 0U;
    while ((0x40U > vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)) {
        vlSelf->__PVT__raw_state_next[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0U;
        vlSelf->__PVT__raw_fwd_src[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0U;
        vlSelf->__PVT__raw_found_match[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0U;
        vlSelf->__PVT__raw_best_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0U;
        vlSelf->__PVT__raw_best_j[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0U;
        vlSelf->__PVT__raw_any_unresolved[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0U;
        if ((1U & ((vlSelf->__PVT__lq[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xfU] 
                    >> 0x12U) & (vlSelf->__PVT__lq[
                                 (0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                 >> 5U)))) {
            if ((vlSelf->__PVT__sq_slot_occ[0U] & (
                                                   vlSelf->__PVT__sq_age
                                                   [0U] 
                                                   < 
                                                   vlSelf->__PVT__lq_age
                                                   [
                                                   (0x3fU 
                                                    & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0U] > vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0x40U;
            if ((vlSelf->__PVT__sq_slot_occ[1U] & (
                                                   vlSelf->__PVT__sq_age
                                                   [1U] 
                                                   < 
                                                   vlSelf->__PVT__lq_age
                                                   [
                                                   (0x3fU 
                                                    & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[1U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [1U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [1U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [1U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [1U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [1U] > vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [1U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[2U] & (
                                                   vlSelf->__PVT__sq_age
                                                   [2U] 
                                                   < 
                                                   vlSelf->__PVT__lq_age
                                                   [
                                                   (0x3fU 
                                                    & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[2U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [2U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [2U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [2U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [2U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [2U] > vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [2U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 2U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[3U] & (
                                                   vlSelf->__PVT__sq_age
                                                   [3U] 
                                                   < 
                                                   vlSelf->__PVT__lq_age
                                                   [
                                                   (0x3fU 
                                                    & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[3U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [3U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [3U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [3U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [3U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [3U] > vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [3U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 3U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[4U] & (
                                                   vlSelf->__PVT__sq_age
                                                   [4U] 
                                                   < 
                                                   vlSelf->__PVT__lq_age
                                                   [
                                                   (0x3fU 
                                                    & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[4U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [4U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [4U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [4U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [4U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [4U] > vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [4U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 4U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[5U] & (
                                                   vlSelf->__PVT__sq_age
                                                   [5U] 
                                                   < 
                                                   vlSelf->__PVT__lq_age
                                                   [
                                                   (0x3fU 
                                                    & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[5U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [5U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [5U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [5U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [5U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [5U] > vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [5U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 5U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[6U] & (
                                                   vlSelf->__PVT__sq_age
                                                   [6U] 
                                                   < 
                                                   vlSelf->__PVT__lq_age
                                                   [
                                                   (0x3fU 
                                                    & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[6U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [6U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [6U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [6U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [6U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [6U] > vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [6U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 6U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[7U] & (
                                                   vlSelf->__PVT__sq_age
                                                   [7U] 
                                                   < 
                                                   vlSelf->__PVT__lq_age
                                                   [
                                                   (0x3fU 
                                                    & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[7U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [7U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [7U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [7U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [7U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [7U] > vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [7U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 7U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[8U] & (
                                                   vlSelf->__PVT__sq_age
                                                   [8U] 
                                                   < 
                                                   vlSelf->__PVT__lq_age
                                                   [
                                                   (0x3fU 
                                                    & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[8U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [8U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [8U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [8U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [8U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [8U] > vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [8U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 8U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[9U] & (
                                                   vlSelf->__PVT__sq_age
                                                   [9U] 
                                                   < 
                                                   vlSelf->__PVT__lq_age
                                                   [
                                                   (0x3fU 
                                                    & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[9U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [9U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [9U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [9U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [9U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [9U] > vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [9U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 9U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0xaU] & 
                 (vlSelf->__PVT__sq_age[0xaU] < vlSelf->__PVT__lq_age
                  [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0xaU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0xaU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0xaU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0xaU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0xaU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0xaU] > vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0xaU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0xaU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0xbU] & 
                 (vlSelf->__PVT__sq_age[0xbU] < vlSelf->__PVT__lq_age
                  [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0xbU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0xbU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0xbU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0xbU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0xbU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0xbU] > vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0xbU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0xbU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0xcU] & 
                 (vlSelf->__PVT__sq_age[0xcU] < vlSelf->__PVT__lq_age
                  [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0xcU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0xcU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0xcU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0xcU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0xcU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0xcU] > vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0xcU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0xcU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0xdU] & 
                 (vlSelf->__PVT__sq_age[0xdU] < vlSelf->__PVT__lq_age
                  [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0xdU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0xdU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0xdU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0xdU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0xdU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0xdU] > vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0xdU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0xdU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0xeU] & 
                 (vlSelf->__PVT__sq_age[0xeU] < vlSelf->__PVT__lq_age
                  [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0xeU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0xeU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0xeU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0xeU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0xeU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0xeU] > vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0xeU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0xeU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0xfU] & 
                 (vlSelf->__PVT__sq_age[0xfU] < vlSelf->__PVT__lq_age
                  [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0xfU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0xfU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0xfU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0xfU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0xfU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0xfU] > vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0xfU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0xfU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x10U] 
                 & (vlSelf->__PVT__sq_age[0x10U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x10U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x10U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x10U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x10U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x10U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x10U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x10U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x10U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x11U] 
                 & (vlSelf->__PVT__sq_age[0x11U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x11U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x11U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x11U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x11U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x11U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x11U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x11U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x11U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x12U] 
                 & (vlSelf->__PVT__sq_age[0x12U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x12U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x12U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x12U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x12U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x12U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x12U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x12U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x12U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x13U] 
                 & (vlSelf->__PVT__sq_age[0x13U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x13U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x13U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x13U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x13U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x13U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x13U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x13U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x13U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x14U] 
                 & (vlSelf->__PVT__sq_age[0x14U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x14U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x14U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x14U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x14U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x14U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x14U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x14U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x14U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x15U] 
                 & (vlSelf->__PVT__sq_age[0x15U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x15U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x15U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x15U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x15U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x15U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x15U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x15U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x15U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x16U] 
                 & (vlSelf->__PVT__sq_age[0x16U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x16U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x16U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x16U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x16U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x16U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x16U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x16U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x16U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x17U] 
                 & (vlSelf->__PVT__sq_age[0x17U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x17U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x17U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x17U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x17U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x17U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x17U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x17U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x17U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x18U] 
                 & (vlSelf->__PVT__sq_age[0x18U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x18U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x18U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x18U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x18U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x18U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x18U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x18U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x18U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x19U] 
                 & (vlSelf->__PVT__sq_age[0x19U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x19U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x19U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x19U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x19U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x19U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x19U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x19U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x19U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x1aU] 
                 & (vlSelf->__PVT__sq_age[0x1aU] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x1aU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x1aU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x1aU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x1aU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x1aU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x1aU] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x1aU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x1aU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x1bU] 
                 & (vlSelf->__PVT__sq_age[0x1bU] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x1bU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x1bU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x1bU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x1bU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x1bU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x1bU] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x1bU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x1bU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x1cU] 
                 & (vlSelf->__PVT__sq_age[0x1cU] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x1cU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x1cU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x1cU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x1cU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x1cU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x1cU] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x1cU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x1cU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x1dU] 
                 & (vlSelf->__PVT__sq_age[0x1dU] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x1dU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x1dU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x1dU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x1dU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x1dU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x1dU] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x1dU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x1dU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x1eU] 
                 & (vlSelf->__PVT__sq_age[0x1eU] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x1eU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x1eU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x1eU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x1eU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x1eU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x1eU] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x1eU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x1eU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x1fU] 
                 & (vlSelf->__PVT__sq_age[0x1fU] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x1fU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x1fU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x1fU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x1fU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x1fU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x1fU] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x1fU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x1fU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x20U] 
                 & (vlSelf->__PVT__sq_age[0x20U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x20U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x20U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x20U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x20U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x20U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x20U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x20U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x20U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x21U] 
                 & (vlSelf->__PVT__sq_age[0x21U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x21U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x21U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x21U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x21U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x21U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x21U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x21U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x21U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x22U] 
                 & (vlSelf->__PVT__sq_age[0x22U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x22U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x22U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x22U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x22U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x22U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x22U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x22U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x22U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x23U] 
                 & (vlSelf->__PVT__sq_age[0x23U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x23U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x23U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x23U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x23U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x23U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x23U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x23U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x23U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x24U] 
                 & (vlSelf->__PVT__sq_age[0x24U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x24U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x24U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x24U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x24U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x24U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x24U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x24U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x24U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x25U] 
                 & (vlSelf->__PVT__sq_age[0x25U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x25U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x25U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x25U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x25U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x25U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x25U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x25U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x25U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x26U] 
                 & (vlSelf->__PVT__sq_age[0x26U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x26U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x26U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x26U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x26U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x26U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x26U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x26U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x26U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x27U] 
                 & (vlSelf->__PVT__sq_age[0x27U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x27U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x27U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x27U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x27U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x27U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x27U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x27U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x27U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x28U] 
                 & (vlSelf->__PVT__sq_age[0x28U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x28U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x28U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x28U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x28U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x28U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x28U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x28U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x28U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x29U] 
                 & (vlSelf->__PVT__sq_age[0x29U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x29U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x29U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x29U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x29U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x29U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x29U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x29U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x29U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x2aU] 
                 & (vlSelf->__PVT__sq_age[0x2aU] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x2aU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x2aU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x2aU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x2aU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x2aU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x2aU] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x2aU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x2aU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x2bU] 
                 & (vlSelf->__PVT__sq_age[0x2bU] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x2bU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x2bU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x2bU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x2bU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x2bU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x2bU] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x2bU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x2bU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x2cU] 
                 & (vlSelf->__PVT__sq_age[0x2cU] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x2cU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x2cU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x2cU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x2cU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x2cU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x2cU] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x2cU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x2cU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x2dU] 
                 & (vlSelf->__PVT__sq_age[0x2dU] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x2dU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x2dU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x2dU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x2dU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x2dU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x2dU] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x2dU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x2dU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x2eU] 
                 & (vlSelf->__PVT__sq_age[0x2eU] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x2eU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x2eU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x2eU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x2eU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x2eU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x2eU] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x2eU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x2eU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x2fU] 
                 & (vlSelf->__PVT__sq_age[0x2fU] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x2fU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x2fU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x2fU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x2fU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x2fU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x2fU] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x2fU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x2fU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x30U] 
                 & (vlSelf->__PVT__sq_age[0x30U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x30U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x30U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x30U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x30U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x30U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x30U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x30U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x30U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x31U] 
                 & (vlSelf->__PVT__sq_age[0x31U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x31U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x31U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x31U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x31U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x31U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x31U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x31U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x31U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x32U] 
                 & (vlSelf->__PVT__sq_age[0x32U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x32U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x32U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x32U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x32U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x32U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x32U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x32U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x32U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x33U] 
                 & (vlSelf->__PVT__sq_age[0x33U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x33U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x33U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x33U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x33U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x33U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x33U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x33U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x33U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x34U] 
                 & (vlSelf->__PVT__sq_age[0x34U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x34U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x34U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x34U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x34U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x34U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x34U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x34U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x34U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x35U] 
                 & (vlSelf->__PVT__sq_age[0x35U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x35U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x35U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x35U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x35U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x35U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x35U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x35U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x35U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x36U] 
                 & (vlSelf->__PVT__sq_age[0x36U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x36U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x36U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x36U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x36U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x36U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x36U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x36U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x36U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x37U] 
                 & (vlSelf->__PVT__sq_age[0x37U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x37U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x37U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x37U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x37U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x37U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x37U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x37U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x37U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x38U] 
                 & (vlSelf->__PVT__sq_age[0x38U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x38U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x38U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x38U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x38U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x38U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x38U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x38U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x38U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x39U] 
                 & (vlSelf->__PVT__sq_age[0x39U] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x39U][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x39U][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x39U][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x39U][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x39U][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x39U] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x39U];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x39U;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x3aU] 
                 & (vlSelf->__PVT__sq_age[0x3aU] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x3aU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x3aU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x3aU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x3aU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x3aU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x3aU] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x3aU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x3aU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x3bU] 
                 & (vlSelf->__PVT__sq_age[0x3bU] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x3bU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x3bU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x3bU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x3bU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x3bU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x3bU] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x3bU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x3bU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x3cU] 
                 & (vlSelf->__PVT__sq_age[0x3cU] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x3cU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x3cU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x3cU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x3cU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x3cU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x3cU] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x3cU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x3cU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x3dU] 
                 & (vlSelf->__PVT__sq_age[0x3dU] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x3dU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x3dU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x3dU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x3dU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x3dU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x3dU] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x3dU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x3dU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x3eU] 
                 & (vlSelf->__PVT__sq_age[0x3eU] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x3eU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x3eU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x3eU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x3eU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x3eU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x3eU] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x3eU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x3eU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if ((vlSelf->__PVT__sq_slot_occ[0x3fU] 
                 & (vlSelf->__PVT__sq_age[0x3fU] < 
                    vlSelf->__PVT__lq_age[(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))) {
                if ((0x400000U & vlSelf->__PVT__sq[0x3fU][0x11U])) {
                    if (((0x3fffffffU & ((vlSelf->__PVT__sq
                                          [0x3fU][0xfU] 
                                          << 0x11U) 
                                         | (vlSelf->__PVT__sq
                                            [0x3fU][0xeU] 
                                            >> 0xfU))) 
                         == (0x3fffffffU & ((vlSelf->__PVT__lq
                                             [(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xdU] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__lq
                                               [(0x3fU 
                                                 & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                               >> 8U))))) {
                        if ((1U & (((~ vlSelf->__PVT__raw_found_match
                                     [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) 
                                    | ((~ (vlSelf->__PVT__sq
                                           [0x3fU][0x11U] 
                                           >> 0x18U)) 
                                       & (vlSelf->__PVT__sq
                                          [vlSelf->__PVT__raw_best_j
                                          [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                          >> 0x18U))) 
                                   | ((~ (vlSelf->__PVT__sq
                                          [0x3fU][0x11U] 
                                          >> 0x18U)) 
                                      & (vlSelf->__PVT__sq_age
                                         [0x3fU] > 
                                         vlSelf->__PVT__raw_best_age
                                         [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]))))) {
                            vlSelf->__PVT__raw_found_match[(0x3fU 
                                                            & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                            vlSelf->__PVT__raw_best_age[(0x3fU 
                                                         & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                                = vlSelf->__PVT__sq_age
                                [0x3fU];
                            vlSelf->__PVT__raw_best_j[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 0x3fU;
                        }
                    }
                } else {
                    vlSelf->__PVT__raw_any_unresolved[(0x3fU 
                                                       & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                }
            }
            if (vlSelf->__PVT__raw_found_match[(0x3fU 
                                                & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]) {
                if ((((0xfU & (((vlSelf->__PVT__sq[
                                 vlSelf->__PVT__raw_best_j
                                 [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0xeU] 
                                 << 0x17U) | (vlSelf->__PVT__sq
                                              [vlSelf->__PVT__raw_best_j
                                              [(0x3fU 
                                                & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0xeU] 
                                              >> 9U)) 
                               & ((vlSelf->__PVT__lq
                                   [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                   << 0x1fU) | (vlSelf->__PVT__lq
                                                [(0x3fU 
                                                  & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                                >> 1U)))) 
                      == (0xfU & (vlSelf->__PVT__lq
                                  [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)][0xcU] 
                                  >> 1U))) & (vlSelf->__PVT__sq
                                              [vlSelf->__PVT__raw_best_j
                                              [(0x3fU 
                                                & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]][0x11U] 
                                              >> 0x15U))) {
                    vlSelf->__PVT__raw_state_next[(0x3fU 
                                                   & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 1U;
                    vlSelf->__PVT__raw_fwd_src[(0x3fU 
                                                & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                        = vlSelf->__PVT__raw_best_j
                        [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)];
                } else {
                    vlSelf->__PVT__raw_state_next[(0x3fU 
                                                   & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] = 4U;
                }
            } else {
                vlSelf->__PVT__raw_state_next[(0x3fU 
                                               & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)] 
                    = (vlSelf->__PVT__raw_any_unresolved
                       [(0x3fU & vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i)]
                        ? 3U : 2U);
            }
        }
        vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i 
            = ((IData)(1U) + vlSelf->__PVT__raw_state_comp__DOT__unnamedblk7__DOT__i);
    }
    vlSelf->__PVT__issue_sel_valid = 0U;
    vlSelf->__PVT__issue_sel_idx = 0U;
    vlSelf->__PVT__issue_oldest_t = 0x3fU;
    if (((vlSelf->__PVT__lq[0U][0xfU] >> 0x12U) & (5U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->__PVT__lq
                                                       [0U][0xfU] 
                                                       >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[1U][0xfU] >> 0x12U) & (5U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->__PVT__lq
                                                       [1U][0xfU] 
                                                       >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[1U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [1U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[1U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 1U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [1U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[2U][0xfU] >> 0x12U) & (5U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->__PVT__lq
                                                       [2U][0xfU] 
                                                       >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[2U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [2U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[2U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 2U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [2U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[3U][0xfU] >> 0x12U) & (5U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->__PVT__lq
                                                       [3U][0xfU] 
                                                       >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[3U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [3U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[3U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 3U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [3U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[4U][0xfU] >> 0x12U) & (5U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->__PVT__lq
                                                       [4U][0xfU] 
                                                       >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[4U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [4U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[4U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 4U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [4U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[5U][0xfU] >> 0x12U) & (5U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->__PVT__lq
                                                       [5U][0xfU] 
                                                       >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[5U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [5U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[5U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 5U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [5U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[6U][0xfU] >> 0x12U) & (5U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->__PVT__lq
                                                       [6U][0xfU] 
                                                       >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[6U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [6U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[6U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 6U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [6U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[7U][0xfU] >> 0x12U) & (5U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->__PVT__lq
                                                       [7U][0xfU] 
                                                       >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[7U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [7U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[7U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 7U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [7U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[8U][0xfU] >> 0x12U) & (5U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->__PVT__lq
                                                       [8U][0xfU] 
                                                       >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[8U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [8U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[8U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 8U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [8U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[9U][0xfU] >> 0x12U) & (5U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->__PVT__lq
                                                       [9U][0xfU] 
                                                       >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[9U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [9U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[9U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 9U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [9U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0xaU][0xfU] >> 0x12U) & 
         (5U != (7U & (vlSelf->__PVT__lq[0xaU][0xfU] 
                       >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0xaU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0xaU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0xaU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0xaU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0xaU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0xbU][0xfU] >> 0x12U) & 
         (5U != (7U & (vlSelf->__PVT__lq[0xbU][0xfU] 
                       >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0xbU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0xbU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0xbU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0xbU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0xbU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0xcU][0xfU] >> 0x12U) & 
         (5U != (7U & (vlSelf->__PVT__lq[0xcU][0xfU] 
                       >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0xcU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0xcU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0xcU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0xcU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0xcU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0xdU][0xfU] >> 0x12U) & 
         (5U != (7U & (vlSelf->__PVT__lq[0xdU][0xfU] 
                       >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0xdU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0xdU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0xdU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0xdU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0xdU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0xeU][0xfU] >> 0x12U) & 
         (5U != (7U & (vlSelf->__PVT__lq[0xeU][0xfU] 
                       >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0xeU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0xeU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0xeU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0xeU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0xeU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0xfU][0xfU] >> 0x12U) & 
         (5U != (7U & (vlSelf->__PVT__lq[0xfU][0xfU] 
                       >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0xfU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0xfU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0xfU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0xfU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0xfU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x10U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x10U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x10U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x10U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x10U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x10U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x10U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x11U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x11U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x11U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x11U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x11U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x11U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x11U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x12U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x12U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x12U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x12U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x12U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x12U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x12U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x13U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x13U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x13U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x13U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x13U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x13U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x13U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x14U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x14U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x14U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x14U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x14U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x14U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x14U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x15U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x15U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x15U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x15U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x15U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x15U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x15U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x16U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x16U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x16U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x16U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x16U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x16U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x16U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x17U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x17U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x17U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x17U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x17U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x17U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x17U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x18U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x18U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x18U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x18U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x18U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x18U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x18U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x19U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x19U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x19U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x19U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x19U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x19U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x19U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x1aU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x1aU][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x1aU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x1aU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x1aU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x1aU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x1aU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x1bU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x1bU][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x1bU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x1bU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x1bU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x1bU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x1bU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x1cU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x1cU][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x1cU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x1cU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x1cU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x1cU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x1cU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x1dU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x1dU][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x1dU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x1dU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x1dU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x1dU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x1dU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x1eU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x1eU][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x1eU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x1eU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x1eU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x1eU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x1eU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x1fU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x1fU][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x1fU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x1fU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x1fU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x1fU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x1fU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x20U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x20U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x20U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x20U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x20U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x20U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x20U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x21U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x21U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x21U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x21U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x21U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x21U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x21U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x22U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x22U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x22U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x22U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x22U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x22U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x22U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x23U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x23U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x23U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x23U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x23U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x23U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x23U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x24U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x24U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x24U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x24U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x24U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x24U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x24U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x25U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x25U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x25U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x25U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x25U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x25U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x25U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x26U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x26U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x26U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x26U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x26U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x26U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x26U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x27U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x27U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x27U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x27U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x27U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x27U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x27U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x28U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x28U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x28U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x28U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x28U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x28U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x28U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x29U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x29U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x29U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x29U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x29U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x29U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x29U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x2aU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x2aU][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x2aU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x2aU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x2aU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x2aU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x2aU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x2bU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x2bU][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x2bU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x2bU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x2bU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x2bU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x2bU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x2cU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x2cU][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x2cU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x2cU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x2cU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x2cU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x2cU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x2dU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x2dU][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x2dU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x2dU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x2dU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x2dU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x2dU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x2eU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x2eU][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x2eU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x2eU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x2eU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x2eU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x2eU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x2fU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x2fU][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x2fU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x2fU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x2fU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x2fU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x2fU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x30U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x30U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x30U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x30U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x30U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x30U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x30U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x31U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x31U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x31U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x31U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x31U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x31U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x31U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x32U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x32U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x32U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x32U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x32U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x32U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x32U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x33U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x33U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x33U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x33U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x33U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x33U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x33U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x34U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x34U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x34U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x34U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x34U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x34U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x34U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x35U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x35U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x35U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x35U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x35U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x35U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x35U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x36U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x36U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x36U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x36U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x36U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x36U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x36U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x37U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x37U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x37U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x37U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x37U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x37U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x37U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x38U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x38U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x38U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x38U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x38U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x38U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x38U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x39U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x39U][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x39U]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x39U]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x39U] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x39U;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x39U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x3aU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x3aU][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x3aU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x3aU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x3aU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x3aU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x3aU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x3bU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x3bU][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x3bU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x3bU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x3bU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x3bU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x3bU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x3cU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x3cU][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x3cU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x3cU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x3cU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x3cU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x3cU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x3dU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x3dU][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x3dU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x3dU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x3dU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x3dU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x3dU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x3eU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x3eU][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x3eU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x3eU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x3eU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x3eU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x3eU];
            }
        }
    }
    vlSelf->__PVT__fwd_sel_valid = 0U;
    vlSelf->__PVT__fwd_sel_idx = 0U;
    vlSelf->__PVT__fwd_oldest_t = 0x3fU;
    if (((vlSelf->__PVT__lq[0U][0xfU] >> 0x12U) & (5U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->__PVT__lq
                                                       [0U][0xfU] 
                                                       >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[1U][0xfU] >> 0x12U) & (5U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->__PVT__lq
                                                       [1U][0xfU] 
                                                       >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[1U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[1U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 1U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [1U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[2U][0xfU] >> 0x12U) & (5U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->__PVT__lq
                                                       [2U][0xfU] 
                                                       >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[2U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[2U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 2U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [2U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[3U][0xfU] >> 0x12U) & (5U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->__PVT__lq
                                                       [3U][0xfU] 
                                                       >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[3U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[3U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 3U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [3U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[4U][0xfU] >> 0x12U) & (5U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->__PVT__lq
                                                       [4U][0xfU] 
                                                       >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[4U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[4U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 4U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [4U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[5U][0xfU] >> 0x12U) & (5U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->__PVT__lq
                                                       [5U][0xfU] 
                                                       >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[5U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[5U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 5U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [5U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[6U][0xfU] >> 0x12U) & (5U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->__PVT__lq
                                                       [6U][0xfU] 
                                                       >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[6U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[6U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 6U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [6U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[7U][0xfU] >> 0x12U) & (5U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->__PVT__lq
                                                       [7U][0xfU] 
                                                       >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[7U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[7U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 7U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [7U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[8U][0xfU] >> 0x12U) & (5U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->__PVT__lq
                                                       [8U][0xfU] 
                                                       >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[8U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[8U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 8U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [8U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[9U][0xfU] >> 0x12U) & (5U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->__PVT__lq
                                                       [9U][0xfU] 
                                                       >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[9U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[9U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 9U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [9U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0xaU][0xfU] >> 0x12U) & 
         (5U != (7U & (vlSelf->__PVT__lq[0xaU][0xfU] 
                       >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0xaU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0xaU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0xaU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0xaU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0xbU][0xfU] >> 0x12U) & 
         (5U != (7U & (vlSelf->__PVT__lq[0xbU][0xfU] 
                       >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0xbU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0xbU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0xbU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0xbU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0xcU][0xfU] >> 0x12U) & 
         (5U != (7U & (vlSelf->__PVT__lq[0xcU][0xfU] 
                       >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0xcU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0xcU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0xcU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0xcU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0xdU][0xfU] >> 0x12U) & 
         (5U != (7U & (vlSelf->__PVT__lq[0xdU][0xfU] 
                       >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0xdU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0xdU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0xdU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0xdU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0xeU][0xfU] >> 0x12U) & 
         (5U != (7U & (vlSelf->__PVT__lq[0xeU][0xfU] 
                       >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0xeU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0xeU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0xeU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0xeU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0xfU][0xfU] >> 0x12U) & 
         (5U != (7U & (vlSelf->__PVT__lq[0xfU][0xfU] 
                       >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0xfU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0xfU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0xfU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0xfU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x10U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x10U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x10U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x10U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x10U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x10U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x11U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x11U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x11U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x11U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x11U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x11U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x12U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x12U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x12U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x12U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x12U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x12U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x13U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x13U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x13U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x13U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x13U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x13U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x14U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x14U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x14U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x14U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x14U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x14U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x15U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x15U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x15U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x15U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x15U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x15U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x16U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x16U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x16U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x16U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x16U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x16U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x17U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x17U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x17U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x17U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x17U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x17U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x18U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x18U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x18U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x18U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x18U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x18U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x19U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x19U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x19U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x19U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x19U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x19U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x1aU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x1aU][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x1aU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x1aU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x1aU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x1aU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x1bU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x1bU][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x1bU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x1bU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x1bU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x1bU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x1cU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x1cU][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x1cU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x1cU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x1cU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x1cU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x1dU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x1dU][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x1dU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x1dU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x1dU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x1dU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x1eU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x1eU][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x1eU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x1eU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x1eU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x1eU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x1fU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x1fU][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x1fU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x1fU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x1fU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x1fU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x20U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x20U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x20U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x20U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x20U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x20U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x21U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x21U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x21U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x21U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x21U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x21U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x22U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x22U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x22U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x22U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x22U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x22U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x23U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x23U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x23U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x23U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x23U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x23U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x24U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x24U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x24U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x24U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x24U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x24U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x25U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x25U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x25U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x25U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x25U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x25U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x26U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x26U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x26U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x26U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x26U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x26U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x27U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x27U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x27U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x27U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x27U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x27U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x28U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x28U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x28U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x28U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x28U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x28U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x29U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x29U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x29U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x29U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x29U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x29U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x2aU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x2aU][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x2aU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x2aU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x2aU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x2aU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x2bU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x2bU][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x2bU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x2bU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x2bU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x2bU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x2cU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x2cU][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x2cU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x2cU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x2cU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x2cU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x2dU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x2dU][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x2dU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x2dU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x2dU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x2dU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x2eU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x2eU][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x2eU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x2eU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x2eU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x2eU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x2fU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x2fU][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x2fU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x2fU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x2fU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x2fU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x30U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x30U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x30U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x30U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x30U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x30U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x31U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x31U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x31U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x31U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x31U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x31U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x32U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x32U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x32U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x32U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x32U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x32U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x33U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x33U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x33U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x33U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x33U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x33U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x34U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x34U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x34U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x34U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x34U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x34U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x35U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x35U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x35U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x35U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x35U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x35U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x36U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x36U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x36U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x36U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x36U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x36U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x37U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x37U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x37U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x37U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x37U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x37U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x38U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x38U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x38U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x38U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x38U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x38U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x39U][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x39U][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x39U])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x39U] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x39U;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x39U];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x3aU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x3aU][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x3aU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x3aU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x3aU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x3aU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x3bU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x3bU][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x3bU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x3bU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x3bU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x3bU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x3cU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x3cU][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x3cU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x3cU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x3cU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x3cU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x3dU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x3dU][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x3dU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x3dU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x3dU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x3dU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x3eU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x3eU][0xfU] 
                         >> 0xfU))))) {
        if ((1U == vlSelf->__PVT__raw_state_next[0x3eU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x3eU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x3eU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x3eU];
            }
        }
    }
    if (((vlSelf->__PVT__lq[0x3fU][0xfU] >> 0x12U) 
         & (5U != (7U & (vlSelf->__PVT__lq[0x3fU][0xfU] 
                         >> 0xfU))))) {
        if (((2U == vlSelf->__PVT__raw_state_next[0x3fU]) 
             | (3U == vlSelf->__PVT__raw_state_next
                [0x3fU]))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__issue_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x3fU] 
                          < (IData)(vlSelf->__PVT__issue_oldest_t))))) {
                vlSelf->__PVT__issue_sel_valid = 1U;
                vlSelf->__PVT__issue_sel_idx = 0x3fU;
                vlSelf->__PVT__issue_oldest_t = vlSelf->__PVT__lq_age
                    [0x3fU];
            }
        }
        if ((1U == vlSelf->__PVT__raw_state_next[0x3fU])) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__fwd_sel_valid)) 
                       | (vlSelf->__PVT__lq_age[0x3fU] 
                          < (IData)(vlSelf->__PVT__fwd_oldest_t))))) {
                vlSelf->__PVT__fwd_sel_valid = 1U;
                vlSelf->__PVT__fwd_sel_idx = 0x3fU;
                vlSelf->__PVT__fwd_oldest_t = vlSelf->__PVT__lq_age
                    [0x3fU];
            }
        }
    }
    __VdfgTmp_h0e91f96d__0 = vlSelf->__PVT__raw_state_next
        [vlSelf->__PVT__issue_sel_idx];
    vlSelf->__PVT__load_issue_new_p_o = 0U;
    vlSelf->__PVT__load_issue_funct3_o = 0U;
    vlSelf->__PVT__load_issue_rmask_o = 0U;
    vlSelf->__PVT__load_issue_addr_o = 0U;
    vlSelf->__PVT__load_issue_rob_data_o[0U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0U];
    vlSelf->__PVT__load_issue_rob_data_o[1U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[1U];
    vlSelf->__PVT__load_issue_rob_data_o[2U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[2U];
    vlSelf->__PVT__load_issue_rob_data_o[3U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[3U];
    vlSelf->__PVT__load_issue_rob_data_o[4U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[4U];
    vlSelf->__PVT__load_issue_rob_data_o[5U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[5U];
    vlSelf->__PVT__load_issue_rob_data_o[6U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[6U];
    vlSelf->__PVT__load_issue_rob_data_o[7U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[7U];
    vlSelf->__PVT__load_issue_rob_data_o[8U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[8U];
    vlSelf->__PVT__load_issue_rob_data_o[9U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[9U];
    vlSelf->__PVT__load_issue_rob_data_o[0xaU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xaU];
    vlSelf->__PVT__load_issue_rob_data_o[0xbU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xbU];
    if (vlSelf->__PVT__issue_sel_valid) {
        vlSelf->__PVT__load_issue_new_p_o = (0x7fU 
                                             & (vlSelf->__PVT__lq
                                                [vlSelf->__PVT__issue_sel_idx][0xbU] 
                                                >> 0xfU));
        vlSelf->__PVT__load_issue_funct3_o = (7U & 
                                              ((vlSelf->__PVT__lq
                                                [vlSelf->__PVT__issue_sel_idx][0xcU] 
                                                << 2U) 
                                               | (vlSelf->__PVT__lq
                                                  [vlSelf->__PVT__issue_sel_idx][0xbU] 
                                                  >> 0x1eU)));
        vlSelf->__PVT__load_issue_rmask_o = (0xfU & 
                                             (vlSelf->__PVT__lq
                                              [vlSelf->__PVT__issue_sel_idx][0xcU] 
                                              >> 1U));
        vlSelf->__PVT__load_issue_addr_o = ((vlSelf->__PVT__lq
                                             [vlSelf->__PVT__issue_sel_idx][0xdU] 
                                             << 0x1aU) 
                                            | (vlSelf->__PVT__lq
                                               [vlSelf->__PVT__issue_sel_idx][0xcU] 
                                               >> 6U));
        vlSelf->__PVT__load_issue_rob_data_o[0U] = 
            (Vtop_tb__ConstPool__CONST_h5ba48564_0[0U] 
             & vlSelf->__PVT__lq[vlSelf->__PVT__issue_sel_idx][0U]);
        vlSelf->__PVT__load_issue_rob_data_o[1U] = 
            (Vtop_tb__ConstPool__CONST_h5ba48564_0[1U] 
             & vlSelf->__PVT__lq[vlSelf->__PVT__issue_sel_idx][1U]);
        vlSelf->__PVT__load_issue_rob_data_o[2U] = 
            (Vtop_tb__ConstPool__CONST_h5ba48564_0[2U] 
             & vlSelf->__PVT__lq[vlSelf->__PVT__issue_sel_idx][2U]);
        vlSelf->__PVT__load_issue_rob_data_o[3U] = 
            (Vtop_tb__ConstPool__CONST_h5ba48564_0[3U] 
             & vlSelf->__PVT__lq[vlSelf->__PVT__issue_sel_idx][3U]);
        vlSelf->__PVT__load_issue_rob_data_o[4U] = 
            (Vtop_tb__ConstPool__CONST_h5ba48564_0[4U] 
             & vlSelf->__PVT__lq[vlSelf->__PVT__issue_sel_idx][4U]);
        vlSelf->__PVT__load_issue_rob_data_o[5U] = 
            (Vtop_tb__ConstPool__CONST_h5ba48564_0[5U] 
             & vlSelf->__PVT__lq[vlSelf->__PVT__issue_sel_idx][5U]);
        vlSelf->__PVT__load_issue_rob_data_o[6U] = 
            (Vtop_tb__ConstPool__CONST_h5ba48564_0[6U] 
             & vlSelf->__PVT__lq[vlSelf->__PVT__issue_sel_idx][6U]);
        vlSelf->__PVT__load_issue_rob_data_o[7U] = 
            (Vtop_tb__ConstPool__CONST_h5ba48564_0[7U] 
             & vlSelf->__PVT__lq[vlSelf->__PVT__issue_sel_idx][7U]);
        vlSelf->__PVT__load_issue_rob_data_o[8U] = 
            (Vtop_tb__ConstPool__CONST_h5ba48564_0[8U] 
             & vlSelf->__PVT__lq[vlSelf->__PVT__issue_sel_idx][8U]);
        vlSelf->__PVT__load_issue_rob_data_o[9U] = 
            (Vtop_tb__ConstPool__CONST_h5ba48564_0[9U] 
             & vlSelf->__PVT__lq[vlSelf->__PVT__issue_sel_idx][9U]);
        vlSelf->__PVT__load_issue_rob_data_o[0xaU] 
            = (Vtop_tb__ConstPool__CONST_h5ba48564_0[0xaU] 
               & vlSelf->__PVT__lq[vlSelf->__PVT__issue_sel_idx][0xaU]);
        vlSelf->__PVT__load_issue_rob_data_o[0xbU] 
            = (Vtop_tb__ConstPool__CONST_h5ba48564_0[0xbU] 
               & vlSelf->__PVT__lq[vlSelf->__PVT__issue_sel_idx][0xbU]);
        vlSelf->__PVT__load_issue_rob_data_o[6U] = 
            ((0xfffffffU & vlSelf->__PVT__load_issue_rob_data_o[6U]) 
             | (0xf0000000U & (vlSelf->__PVT__lq[vlSelf->__PVT__issue_sel_idx][0xeU] 
                               << 0x16U)));
        vlSelf->__PVT__load_issue_rob_data_o[7U] = 
            ((0xf0000000U & vlSelf->__PVT__load_issue_rob_data_o[7U]) 
             | (0xfffffffU & ((0xfc00000U & (vlSelf->__PVT__lq
                                             [vlSelf->__PVT__issue_sel_idx][0xfU] 
                                             << 0x16U)) 
                              | (vlSelf->__PVT__lq[vlSelf->__PVT__issue_sel_idx][0xeU] 
                                 >> 0xaU))));
    }
    if (vlSelf->__PVT__fwd_sel_valid) {
        vlSelf->mon_fwd_fire = 1U;
        vlSelf->__PVT__fwd_src_t = 0U;
        vlSelf->__PVT__fwd_w_t = 0U;
        vlSelf->__PVT__fwd_alo_t = 0U;
        vlSelf->__PVT__wb_fwd_rob_data_o[0U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0U];
        vlSelf->__PVT__wb_fwd_rob_data_o[1U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[1U];
        vlSelf->__PVT__wb_fwd_rob_data_o[2U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[2U];
        vlSelf->__PVT__wb_fwd_rob_data_o[3U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[3U];
        vlSelf->__PVT__wb_fwd_rob_data_o[4U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[4U];
        vlSelf->__PVT__wb_fwd_rob_data_o[5U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[5U];
        vlSelf->__PVT__wb_fwd_rob_data_o[6U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[6U];
        vlSelf->__PVT__wb_fwd_rob_data_o[7U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[7U];
        vlSelf->__PVT__wb_fwd_rob_data_o[8U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[8U];
        vlSelf->__PVT__wb_fwd_rob_data_o[9U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[9U];
        vlSelf->__PVT__wb_fwd_rob_data_o[0xaU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xaU];
        vlSelf->__PVT__wb_fwd_rob_data_o[0xbU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xbU];
        vlSelf->__PVT__wb_fwd_val_o = 0U;
        vlSelf->__PVT__wb_fwd_pr_o = 0U;
        vlSelf->__PVT__fwd_src_t = vlSelf->__PVT__raw_fwd_src
            [vlSelf->__PVT__fwd_sel_idx];
        vlSelf->__PVT__fwd_w_t = ((vlSelf->__PVT__sq
                                   [vlSelf->__PVT__fwd_src_t][0xcU] 
                                   << 2U) | (vlSelf->__PVT__sq
                                             [vlSelf->__PVT__fwd_src_t][0xbU] 
                                             >> 0x1eU));
        vlSelf->__PVT__fwd_alo_t = (3U & (vlSelf->__PVT__lq
                                          [vlSelf->__PVT__fwd_sel_idx][0xcU] 
                                          >> 6U));
        vlSelf->__PVT__wb_fwd_val_o = ((1U & vlSelf->__PVT__lq
                                        [vlSelf->__PVT__fwd_sel_idx][0xcU])
                                        ? ((vlSelf->__PVT__lq
                                            [vlSelf->__PVT__fwd_sel_idx][0xbU] 
                                            >> 0x1fU)
                                            ? 0U : 
                                           ((0x40000000U 
                                             & vlSelf->__PVT__lq
                                             [vlSelf->__PVT__fwd_sel_idx][0xbU])
                                             ? (0xffffU 
                                                & (vlSelf->__PVT__fwd_w_t 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(5,32,32, 
                                                                    (1U 
                                                                     & ((IData)(vlSelf->__PVT__fwd_alo_t) 
                                                                        >> 1U)), 4U))))
                                             : (0xffU 
                                                & (vlSelf->__PVT__fwd_w_t 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__fwd_alo_t), 3U))))))
                                        : ((vlSelf->__PVT__lq
                                            [vlSelf->__PVT__fwd_sel_idx][0xbU] 
                                            >> 0x1fU)
                                            ? ((0x40000000U 
                                                & vlSelf->__PVT__lq
                                                [vlSelf->__PVT__fwd_sel_idx][0xbU])
                                                ? 0U
                                                : vlSelf->__PVT__fwd_w_t)
                                            : ((0x40000000U 
                                                & vlSelf->__PVT__lq
                                                [vlSelf->__PVT__fwd_sel_idx][0xbU])
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->__PVT__fwd_w_t 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & ((IData)(0xfU) 
                                                                       + 
                                                                       VL_SHIFTL_III(5,32,32, 
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__fwd_alo_t) 
                                                                                >> 1U)), 4U))))))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & (vlSelf->__PVT__fwd_w_t 
                                                         >> 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(5,32,32, 
                                                                          (1U 
                                                                           & ((IData)(vlSelf->__PVT__fwd_alo_t) 
                                                                              >> 1U)), 4U)))))
                                                : (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->__PVT__fwd_w_t 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__fwd_alo_t), 3U))))))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & (vlSelf->__PVT__fwd_w_t 
                                                         >> 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__fwd_alo_t), 3U))))))));
        vlSelf->__PVT__wb_fwd_rob_data_o[0U] = (Vtop_tb__ConstPool__CONST_h5ba48564_0[0U] 
                                                & vlSelf->__PVT__lq
                                                [vlSelf->__PVT__fwd_sel_idx][0U]);
        vlSelf->__PVT__wb_fwd_rob_data_o[1U] = (Vtop_tb__ConstPool__CONST_h5ba48564_0[1U] 
                                                & vlSelf->__PVT__lq
                                                [vlSelf->__PVT__fwd_sel_idx][1U]);
        vlSelf->__PVT__wb_fwd_rob_data_o[2U] = (Vtop_tb__ConstPool__CONST_h5ba48564_0[2U] 
                                                & vlSelf->__PVT__lq
                                                [vlSelf->__PVT__fwd_sel_idx][2U]);
        vlSelf->__PVT__wb_fwd_rob_data_o[3U] = (Vtop_tb__ConstPool__CONST_h5ba48564_0[3U] 
                                                & vlSelf->__PVT__lq
                                                [vlSelf->__PVT__fwd_sel_idx][3U]);
        vlSelf->__PVT__wb_fwd_rob_data_o[4U] = (Vtop_tb__ConstPool__CONST_h5ba48564_0[4U] 
                                                & vlSelf->__PVT__lq
                                                [vlSelf->__PVT__fwd_sel_idx][4U]);
        vlSelf->__PVT__wb_fwd_rob_data_o[5U] = (Vtop_tb__ConstPool__CONST_h5ba48564_0[5U] 
                                                & vlSelf->__PVT__lq
                                                [vlSelf->__PVT__fwd_sel_idx][5U]);
        vlSelf->__PVT__wb_fwd_rob_data_o[6U] = (Vtop_tb__ConstPool__CONST_h5ba48564_0[6U] 
                                                & vlSelf->__PVT__lq
                                                [vlSelf->__PVT__fwd_sel_idx][6U]);
        vlSelf->__PVT__wb_fwd_rob_data_o[7U] = (Vtop_tb__ConstPool__CONST_h5ba48564_0[7U] 
                                                & vlSelf->__PVT__lq
                                                [vlSelf->__PVT__fwd_sel_idx][7U]);
        vlSelf->__PVT__wb_fwd_rob_data_o[8U] = (Vtop_tb__ConstPool__CONST_h5ba48564_0[8U] 
                                                & vlSelf->__PVT__lq
                                                [vlSelf->__PVT__fwd_sel_idx][8U]);
        vlSelf->__PVT__wb_fwd_rob_data_o[9U] = (Vtop_tb__ConstPool__CONST_h5ba48564_0[9U] 
                                                & vlSelf->__PVT__lq
                                                [vlSelf->__PVT__fwd_sel_idx][9U]);
        vlSelf->__PVT__wb_fwd_rob_data_o[0xaU] = (Vtop_tb__ConstPool__CONST_h5ba48564_0[0xaU] 
                                                  & vlSelf->__PVT__lq
                                                  [vlSelf->__PVT__fwd_sel_idx][0xaU]);
        vlSelf->__PVT__wb_fwd_rob_data_o[0xbU] = (Vtop_tb__ConstPool__CONST_h5ba48564_0[0xbU] 
                                                  & vlSelf->__PVT__lq
                                                  [vlSelf->__PVT__fwd_sel_idx][0xbU]);
        vlSelf->__PVT__wb_fwd_rob_data_o[5U] = ((0xfffffffU 
                                                 & vlSelf->__PVT__wb_fwd_rob_data_o[5U]) 
                                                | ((IData)(
                                                           ((QData)((IData)(
                                                                            ((vlSelf->__PVT__lq
                                                                              [vlSelf->__PVT__fwd_sel_idx][0xfU] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->__PVT__lq
                                                                                [vlSelf->__PVT__fwd_sel_idx][0xeU] 
                                                                                >> 6U)))) 
                                                            << 0x20U)) 
                                                   << 0x1cU));
        vlSelf->__PVT__wb_fwd_rob_data_o[6U] = (((IData)(
                                                         ((QData)((IData)(
                                                                          ((vlSelf->__PVT__lq
                                                                            [vlSelf->__PVT__fwd_sel_idx][0xfU] 
                                                                            << 0x1aU) 
                                                                           | (vlSelf->__PVT__lq
                                                                              [vlSelf->__PVT__fwd_sel_idx][0xeU] 
                                                                              >> 6U)))) 
                                                          << 0x20U)) 
                                                 >> 4U) 
                                                | ((IData)(
                                                           (((QData)((IData)(
                                                                             ((vlSelf->__PVT__lq
                                                                               [vlSelf->__PVT__fwd_sel_idx][0xfU] 
                                                                               << 0x1aU) 
                                                                              | (vlSelf->__PVT__lq
                                                                                [vlSelf->__PVT__fwd_sel_idx][0xeU] 
                                                                                >> 6U)))) 
                                                             << 0x20U) 
                                                            >> 0x20U)) 
                                                   << 0x1cU));
        vlSelf->__PVT__wb_fwd_rob_data_o[7U] = ((0xf0000000U 
                                                 & vlSelf->__PVT__wb_fwd_rob_data_o[7U]) 
                                                | ((IData)(
                                                           (((QData)((IData)(
                                                                             ((vlSelf->__PVT__lq
                                                                               [vlSelf->__PVT__fwd_sel_idx][0xfU] 
                                                                               << 0x1aU) 
                                                                              | (vlSelf->__PVT__lq
                                                                                [vlSelf->__PVT__fwd_sel_idx][0xeU] 
                                                                                >> 6U)))) 
                                                             << 0x20U) 
                                                            >> 0x20U)) 
                                                   >> 4U));
        vlSelf->__PVT__wb_fwd_rob_data_o[3U] = ((0x3ffffU 
                                                 & vlSelf->__PVT__wb_fwd_rob_data_o[3U]) 
                                                | ((IData)(
                                                           (((QData)((IData)(
                                                                             ((vlSelf->__PVT__lq
                                                                               [vlSelf->__PVT__fwd_sel_idx][0xdU] 
                                                                               << 0x1aU) 
                                                                              | (vlSelf->__PVT__lq
                                                                                [vlSelf->__PVT__fwd_sel_idx][0xcU] 
                                                                                >> 6U)))) 
                                                             << 4U) 
                                                            | (QData)((IData)(
                                                                              (0xfU 
                                                                               & (vlSelf->__PVT__lq
                                                                                [vlSelf->__PVT__fwd_sel_idx][0xcU] 
                                                                                >> 1U)))))) 
                                                   << 0x12U));
        vlSelf->__PVT__wb_fwd_rob_data_o[4U] = ((0xffc00000U 
                                                 & vlSelf->__PVT__wb_fwd_rob_data_o[4U]) 
                                                | (((IData)(
                                                            (((QData)((IData)(
                                                                              ((vlSelf->__PVT__lq
                                                                                [vlSelf->__PVT__fwd_sel_idx][0xdU] 
                                                                                << 0x1aU) 
                                                                               | (vlSelf->__PVT__lq
                                                                                [vlSelf->__PVT__fwd_sel_idx][0xcU] 
                                                                                >> 6U)))) 
                                                              << 4U) 
                                                             | (QData)((IData)(
                                                                               (0xfU 
                                                                                & (vlSelf->__PVT__lq
                                                                                [vlSelf->__PVT__fwd_sel_idx][0xcU] 
                                                                                >> 1U)))))) 
                                                    >> 0xeU) 
                                                   | ((IData)(
                                                              ((((QData)((IData)(
                                                                                ((vlSelf->__PVT__lq
                                                                                [vlSelf->__PVT__fwd_sel_idx][0xdU] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->__PVT__lq
                                                                                [vlSelf->__PVT__fwd_sel_idx][0xcU] 
                                                                                >> 6U)))) 
                                                                 << 4U) 
                                                                | (QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->__PVT__lq
                                                                                [vlSelf->__PVT__fwd_sel_idx][0xcU] 
                                                                                >> 1U))))) 
                                                               >> 0x20U)) 
                                                      << 0x12U)));
        vlSelf->__PVT__wb_fwd_rob_data_o[1U] = (0x3fffU 
                                                & vlSelf->__PVT__wb_fwd_rob_data_o[1U]);
        vlSelf->__PVT__wb_fwd_rob_data_o[2U] = ((IData)((QData)((IData)(vlSelf->__PVT__fwd_w_t))) 
                                                << 0xeU);
        vlSelf->__PVT__wb_fwd_rob_data_o[3U] = ((0xfffc0000U 
                                                 & vlSelf->__PVT__wb_fwd_rob_data_o[3U]) 
                                                | (((IData)((QData)((IData)(vlSelf->__PVT__fwd_w_t))) 
                                                    >> 0x12U) 
                                                   | ((IData)(
                                                              ((QData)((IData)(vlSelf->__PVT__fwd_w_t)) 
                                                               >> 0x20U)) 
                                                      << 0xeU)));
        vlSelf->__PVT__wb_fwd_rob_data_o[1U] = (0xfffff7ffU 
                                                & vlSelf->__PVT__wb_fwd_rob_data_o[1U]);
        vlSelf->__PVT__wb_fwd_rob_data_o[0U] = ((0x3ffU 
                                                 & vlSelf->__PVT__wb_fwd_rob_data_o[0U]) 
                                                | (((IData)(4U) 
                                                    + 
                                                    ((vlSelf->__PVT__lq
                                                      [vlSelf->__PVT__fwd_sel_idx][0xbU] 
                                                      << 0x18U) 
                                                     | (vlSelf->__PVT__lq
                                                        [vlSelf->__PVT__fwd_sel_idx][0xaU] 
                                                        >> 8U))) 
                                                   << 0xaU));
        vlSelf->__PVT__wb_fwd_rob_data_o[1U] = ((0xfffffc00U 
                                                 & vlSelf->__PVT__wb_fwd_rob_data_o[1U]) 
                                                | (((IData)(4U) 
                                                    + 
                                                    ((vlSelf->__PVT__lq
                                                      [vlSelf->__PVT__fwd_sel_idx][0xbU] 
                                                      << 0x18U) 
                                                     | (vlSelf->__PVT__lq
                                                        [vlSelf->__PVT__fwd_sel_idx][0xaU] 
                                                        >> 8U))) 
                                                   >> 0x16U));
        vlSelf->__PVT__wb_fwd_rob_data_o[0U] = (0xfffffdffU 
                                                & vlSelf->__PVT__wb_fwd_rob_data_o[0U]);
        vlSelf->__PVT__wb_fwd_rob_data_o[4U] = ((0x3fffffU 
                                                 & vlSelf->__PVT__wb_fwd_rob_data_o[4U]) 
                                                | (vlSelf->__PVT__wb_fwd_val_o 
                                                   << 0x16U));
        vlSelf->__PVT__wb_fwd_rob_data_o[5U] = ((0xffc00000U 
                                                 & vlSelf->__PVT__wb_fwd_rob_data_o[5U]) 
                                                | (vlSelf->__PVT__wb_fwd_val_o 
                                                   >> 0xaU));
        vlSelf->__PVT__wb_fwd_rob_data_o[0xbU] = (0x10000000U 
                                                  | vlSelf->__PVT__wb_fwd_rob_data_o[0xbU]);
        vlSelf->__PVT__wb_fwd_pr_o = (0x7fU & (vlSelf->__PVT__lq
                                               [vlSelf->__PVT__fwd_sel_idx][0xbU] 
                                               >> 0xfU));
    } else {
        vlSelf->mon_fwd_fire = 0U;
        vlSelf->__PVT__fwd_src_t = 0U;
        vlSelf->__PVT__fwd_w_t = 0U;
        vlSelf->__PVT__fwd_alo_t = 0U;
        vlSelf->__PVT__wb_fwd_rob_data_o[0U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0U];
        vlSelf->__PVT__wb_fwd_rob_data_o[1U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[1U];
        vlSelf->__PVT__wb_fwd_rob_data_o[2U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[2U];
        vlSelf->__PVT__wb_fwd_rob_data_o[3U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[3U];
        vlSelf->__PVT__wb_fwd_rob_data_o[4U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[4U];
        vlSelf->__PVT__wb_fwd_rob_data_o[5U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[5U];
        vlSelf->__PVT__wb_fwd_rob_data_o[6U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[6U];
        vlSelf->__PVT__wb_fwd_rob_data_o[7U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[7U];
        vlSelf->__PVT__wb_fwd_rob_data_o[8U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[8U];
        vlSelf->__PVT__wb_fwd_rob_data_o[9U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[9U];
        vlSelf->__PVT__wb_fwd_rob_data_o[0xaU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xaU];
        vlSelf->__PVT__wb_fwd_rob_data_o[0xbU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xbU];
        vlSelf->__PVT__wb_fwd_val_o = 0U;
        vlSelf->__PVT__wb_fwd_pr_o = 0U;
    }
    vlSelf->__PVT__pre_final_state[0U] = ((5U == (7U 
                                                  & (vlSelf->__PVT__lq
                                                     [0U][0xfU] 
                                                     >> 0xfU)))
                                           ? 5U : (
                                                   (((2U 
                                                      == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                     & ((0x3fU 
                                                         & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                            >> 0x16U)) 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__lq
                                                            [0U][5U] 
                                                            >> 0x16U)))) 
                                                    | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                       & (0U 
                                                          == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                                    ? 5U
                                                    : 
                                                   vlSelf->__PVT__raw_state_next
                                                   [0U]));
    vlSelf->__PVT__pre_final_state[1U] = ((5U == (7U 
                                                  & (vlSelf->__PVT__lq
                                                     [1U][0xfU] 
                                                     >> 0xfU)))
                                           ? 5U : (
                                                   (((2U 
                                                      == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                     & ((0x3fU 
                                                         & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                            >> 0x16U)) 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__lq
                                                            [1U][5U] 
                                                            >> 0x16U)))) 
                                                    | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                       & (1U 
                                                          == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                                    ? 5U
                                                    : 
                                                   vlSelf->__PVT__raw_state_next
                                                   [1U]));
    vlSelf->__PVT__pre_final_state[2U] = ((5U == (7U 
                                                  & (vlSelf->__PVT__lq
                                                     [2U][0xfU] 
                                                     >> 0xfU)))
                                           ? 5U : (
                                                   (((2U 
                                                      == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                     & ((0x3fU 
                                                         & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                            >> 0x16U)) 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__lq
                                                            [2U][5U] 
                                                            >> 0x16U)))) 
                                                    | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                       & (2U 
                                                          == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                                    ? 5U
                                                    : 
                                                   vlSelf->__PVT__raw_state_next
                                                   [2U]));
    vlSelf->__PVT__pre_final_state[3U] = ((5U == (7U 
                                                  & (vlSelf->__PVT__lq
                                                     [3U][0xfU] 
                                                     >> 0xfU)))
                                           ? 5U : (
                                                   (((2U 
                                                      == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                     & ((0x3fU 
                                                         & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                            >> 0x16U)) 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__lq
                                                            [3U][5U] 
                                                            >> 0x16U)))) 
                                                    | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                       & (3U 
                                                          == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                                    ? 5U
                                                    : 
                                                   vlSelf->__PVT__raw_state_next
                                                   [3U]));
    vlSelf->__PVT__pre_final_state[4U] = ((5U == (7U 
                                                  & (vlSelf->__PVT__lq
                                                     [4U][0xfU] 
                                                     >> 0xfU)))
                                           ? 5U : (
                                                   (((2U 
                                                      == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                     & ((0x3fU 
                                                         & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                            >> 0x16U)) 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__lq
                                                            [4U][5U] 
                                                            >> 0x16U)))) 
                                                    | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                       & (4U 
                                                          == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                                    ? 5U
                                                    : 
                                                   vlSelf->__PVT__raw_state_next
                                                   [4U]));
    vlSelf->__PVT__pre_final_state[5U] = ((5U == (7U 
                                                  & (vlSelf->__PVT__lq
                                                     [5U][0xfU] 
                                                     >> 0xfU)))
                                           ? 5U : (
                                                   (((2U 
                                                      == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                     & ((0x3fU 
                                                         & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                            >> 0x16U)) 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__lq
                                                            [5U][5U] 
                                                            >> 0x16U)))) 
                                                    | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                       & (5U 
                                                          == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                                    ? 5U
                                                    : 
                                                   vlSelf->__PVT__raw_state_next
                                                   [5U]));
    vlSelf->__PVT__pre_final_state[6U] = ((5U == (7U 
                                                  & (vlSelf->__PVT__lq
                                                     [6U][0xfU] 
                                                     >> 0xfU)))
                                           ? 5U : (
                                                   (((2U 
                                                      == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                     & ((0x3fU 
                                                         & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                            >> 0x16U)) 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__lq
                                                            [6U][5U] 
                                                            >> 0x16U)))) 
                                                    | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                       & (6U 
                                                          == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                                    ? 5U
                                                    : 
                                                   vlSelf->__PVT__raw_state_next
                                                   [6U]));
    vlSelf->__PVT__pre_final_state[7U] = ((5U == (7U 
                                                  & (vlSelf->__PVT__lq
                                                     [7U][0xfU] 
                                                     >> 0xfU)))
                                           ? 5U : (
                                                   (((2U 
                                                      == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                     & ((0x3fU 
                                                         & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                            >> 0x16U)) 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__lq
                                                            [7U][5U] 
                                                            >> 0x16U)))) 
                                                    | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                       & (7U 
                                                          == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                                    ? 5U
                                                    : 
                                                   vlSelf->__PVT__raw_state_next
                                                   [7U]));
    vlSelf->__PVT__pre_final_state[8U] = ((5U == (7U 
                                                  & (vlSelf->__PVT__lq
                                                     [8U][0xfU] 
                                                     >> 0xfU)))
                                           ? 5U : (
                                                   (((2U 
                                                      == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                     & ((0x3fU 
                                                         & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                            >> 0x16U)) 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__lq
                                                            [8U][5U] 
                                                            >> 0x16U)))) 
                                                    | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                       & (8U 
                                                          == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                                    ? 5U
                                                    : 
                                                   vlSelf->__PVT__raw_state_next
                                                   [8U]));
    vlSelf->__PVT__pre_final_state[9U] = ((5U == (7U 
                                                  & (vlSelf->__PVT__lq
                                                     [9U][0xfU] 
                                                     >> 0xfU)))
                                           ? 5U : (
                                                   (((2U 
                                                      == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                     & ((0x3fU 
                                                         & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                            >> 0x16U)) 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__lq
                                                            [9U][5U] 
                                                            >> 0x16U)))) 
                                                    | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                       & (9U 
                                                          == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                                    ? 5U
                                                    : 
                                                   vlSelf->__PVT__raw_state_next
                                                   [9U]));
    vlSelf->__PVT__pre_final_state[0xaU] = ((5U == 
                                             (7U & 
                                              (vlSelf->__PVT__lq
                                               [0xaU][0xfU] 
                                               >> 0xfU)))
                                             ? 5U : 
                                            ((((2U 
                                                == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                               & ((0x3fU 
                                                   & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                      >> 0x16U)) 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->__PVT__lq
                                                      [0xaU][5U] 
                                                      >> 0x16U)))) 
                                              | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                 & (0xaU 
                                                    == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                              ? 5U : 
                                             vlSelf->__PVT__raw_state_next
                                             [0xaU]));
    vlSelf->__PVT__pre_final_state[0xbU] = ((5U == 
                                             (7U & 
                                              (vlSelf->__PVT__lq
                                               [0xbU][0xfU] 
                                               >> 0xfU)))
                                             ? 5U : 
                                            ((((2U 
                                                == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                               & ((0x3fU 
                                                   & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                      >> 0x16U)) 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->__PVT__lq
                                                      [0xbU][5U] 
                                                      >> 0x16U)))) 
                                              | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                 & (0xbU 
                                                    == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                              ? 5U : 
                                             vlSelf->__PVT__raw_state_next
                                             [0xbU]));
    vlSelf->__PVT__pre_final_state[0xcU] = ((5U == 
                                             (7U & 
                                              (vlSelf->__PVT__lq
                                               [0xcU][0xfU] 
                                               >> 0xfU)))
                                             ? 5U : 
                                            ((((2U 
                                                == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                               & ((0x3fU 
                                                   & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                      >> 0x16U)) 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->__PVT__lq
                                                      [0xcU][5U] 
                                                      >> 0x16U)))) 
                                              | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                 & (0xcU 
                                                    == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                              ? 5U : 
                                             vlSelf->__PVT__raw_state_next
                                             [0xcU]));
    vlSelf->__PVT__pre_final_state[0xdU] = ((5U == 
                                             (7U & 
                                              (vlSelf->__PVT__lq
                                               [0xdU][0xfU] 
                                               >> 0xfU)))
                                             ? 5U : 
                                            ((((2U 
                                                == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                               & ((0x3fU 
                                                   & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                      >> 0x16U)) 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->__PVT__lq
                                                      [0xdU][5U] 
                                                      >> 0x16U)))) 
                                              | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                 & (0xdU 
                                                    == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                              ? 5U : 
                                             vlSelf->__PVT__raw_state_next
                                             [0xdU]));
    vlSelf->__PVT__pre_final_state[0xeU] = ((5U == 
                                             (7U & 
                                              (vlSelf->__PVT__lq
                                               [0xeU][0xfU] 
                                               >> 0xfU)))
                                             ? 5U : 
                                            ((((2U 
                                                == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                               & ((0x3fU 
                                                   & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                      >> 0x16U)) 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->__PVT__lq
                                                      [0xeU][5U] 
                                                      >> 0x16U)))) 
                                              | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                 & (0xeU 
                                                    == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                              ? 5U : 
                                             vlSelf->__PVT__raw_state_next
                                             [0xeU]));
    vlSelf->__PVT__pre_final_state[0xfU] = ((5U == 
                                             (7U & 
                                              (vlSelf->__PVT__lq
                                               [0xfU][0xfU] 
                                               >> 0xfU)))
                                             ? 5U : 
                                            ((((2U 
                                                == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                               & ((0x3fU 
                                                   & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                      >> 0x16U)) 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->__PVT__lq
                                                      [0xfU][5U] 
                                                      >> 0x16U)))) 
                                              | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                 & (0xfU 
                                                    == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                              ? 5U : 
                                             vlSelf->__PVT__raw_state_next
                                             [0xfU]));
    vlSelf->__PVT__pre_final_state[0x10U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x10U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x10U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x10U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x10U]));
    vlSelf->__PVT__pre_final_state[0x11U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x11U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x11U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x11U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x11U]));
    vlSelf->__PVT__pre_final_state[0x12U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x12U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x12U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x12U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x12U]));
    vlSelf->__PVT__pre_final_state[0x13U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x13U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x13U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x13U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x13U]));
    vlSelf->__PVT__pre_final_state[0x14U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x14U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x14U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x14U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x14U]));
    vlSelf->__PVT__pre_final_state[0x15U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x15U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x15U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x15U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x15U]));
    vlSelf->__PVT__pre_final_state[0x16U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x16U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x16U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x16U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x16U]));
    vlSelf->__PVT__pre_final_state[0x17U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x17U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x17U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x17U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x17U]));
    vlSelf->__PVT__pre_final_state[0x18U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x18U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x18U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x18U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x18U]));
    vlSelf->__PVT__pre_final_state[0x19U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x19U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x19U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x19U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x19U]));
    vlSelf->__PVT__pre_final_state[0x1aU] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x1aU][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x1aU][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x1aU 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x1aU]));
    vlSelf->__PVT__pre_final_state[0x1bU] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x1bU][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x1bU][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x1bU 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x1bU]));
    vlSelf->__PVT__pre_final_state[0x1cU] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x1cU][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x1cU][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x1cU 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x1cU]));
    vlSelf->__PVT__pre_final_state[0x1dU] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x1dU][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x1dU][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x1dU 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x1dU]));
    vlSelf->__PVT__pre_final_state[0x1eU] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x1eU][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x1eU][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x1eU 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x1eU]));
    vlSelf->__PVT__pre_final_state[0x1fU] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x1fU][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x1fU][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x1fU 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x1fU]));
    vlSelf->__PVT__pre_final_state[0x20U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x20U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x20U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x20U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x20U]));
    vlSelf->__PVT__pre_final_state[0x21U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x21U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x21U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x21U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x21U]));
    vlSelf->__PVT__pre_final_state[0x22U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x22U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x22U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x22U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x22U]));
    vlSelf->__PVT__pre_final_state[0x23U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x23U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x23U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x23U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x23U]));
    vlSelf->__PVT__pre_final_state[0x24U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x24U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x24U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x24U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x24U]));
    vlSelf->__PVT__pre_final_state[0x25U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x25U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x25U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x25U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x25U]));
    vlSelf->__PVT__pre_final_state[0x26U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x26U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x26U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x26U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x26U]));
    vlSelf->__PVT__pre_final_state[0x27U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x27U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x27U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x27U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x27U]));
    vlSelf->__PVT__pre_final_state[0x28U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x28U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x28U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x28U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x28U]));
    vlSelf->__PVT__pre_final_state[0x29U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x29U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x29U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x29U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x29U]));
    vlSelf->__PVT__pre_final_state[0x2aU] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x2aU][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x2aU][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x2aU 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x2aU]));
    vlSelf->__PVT__pre_final_state[0x2bU] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x2bU][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x2bU][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x2bU 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x2bU]));
    vlSelf->__PVT__pre_final_state[0x2cU] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x2cU][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x2cU][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x2cU 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x2cU]));
    vlSelf->__PVT__pre_final_state[0x2dU] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x2dU][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x2dU][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x2dU 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x2dU]));
    vlSelf->__PVT__pre_final_state[0x2eU] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x2eU][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x2eU][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x2eU 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x2eU]));
    vlSelf->__PVT__pre_final_state[0x2fU] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x2fU][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x2fU][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x2fU 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x2fU]));
    vlSelf->__PVT__pre_final_state[0x30U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x30U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x30U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x30U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x30U]));
    vlSelf->__PVT__pre_final_state[0x31U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x31U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x31U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x31U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x31U]));
    vlSelf->__PVT__pre_final_state[0x32U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x32U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x32U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x32U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x32U]));
    vlSelf->__PVT__pre_final_state[0x33U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x33U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x33U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x33U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x33U]));
    vlSelf->__PVT__pre_final_state[0x34U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x34U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x34U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x34U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x34U]));
    vlSelf->__PVT__pre_final_state[0x35U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x35U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x35U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x35U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x35U]));
    vlSelf->__PVT__pre_final_state[0x36U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x36U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x36U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x36U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x36U]));
    vlSelf->__PVT__pre_final_state[0x37U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x37U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x37U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x37U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x37U]));
    vlSelf->__PVT__pre_final_state[0x38U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x38U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x38U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x38U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x38U]));
    vlSelf->__PVT__pre_final_state[0x39U] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x39U][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x39U][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x39U 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x39U]));
    vlSelf->__PVT__pre_final_state[0x3aU] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x3aU][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x3aU][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x3aU 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x3aU]));
    vlSelf->__PVT__pre_final_state[0x3bU] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x3bU][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x3bU][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x3bU 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x3bU]));
    vlSelf->__PVT__pre_final_state[0x3cU] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x3cU][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x3cU][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x3cU 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x3cU]));
    vlSelf->__PVT__pre_final_state[0x3dU] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x3dU][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x3dU][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x3dU 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x3dU]));
    vlSelf->__PVT__pre_final_state[0x3eU] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x3eU][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x3eU][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x3eU 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x3eU]));
    vlSelf->__PVT__pre_final_state[0x3fU] = ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__lq
                                                [0x3fU][0xfU] 
                                                >> 0xfU)))
                                              ? 5U : 
                                             ((((2U 
                                                 == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__state)) 
                                                & ((0x3fU 
                                                    & (vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mem__DOT__lat_rob_data[5U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__lq
                                                       [0x3fU][5U] 
                                                       >> 0x16U)))) 
                                               | ((IData)(vlSelf->__PVT__fwd_sel_valid) 
                                                  & (0x3fU 
                                                     == (IData)(vlSelf->__PVT__fwd_sel_idx))))
                                               ? 5U
                                               : vlSelf->__PVT__raw_state_next
                                              [0x3fU]));
    vlSelf->mon_load_issued_safe = ((IData)(vlSelf->__PVT__issue_sel_valid) 
                                    & (2U == (IData)(__VdfgTmp_h0e91f96d__0)));
    vlSelf->mon_load_issued_spec = ((IData)(vlSelf->__PVT__issue_sel_valid) 
                                    & (3U == (IData)(__VdfgTmp_h0e91f96d__0)));
    vlSelf->__PVT__spec_load_mispredict_o = 0U;
    vlSelf->__PVT__spec_load_recover_pc_o = 0U;
    vlSelf->__PVT__spec_load_rob_idx_o = 0U;
    vlSelf->__PVT__spec_load_checkpoint_id_o = 0U;
    vlSelf->__PVT__ie_oldest_victim = 0x3fU;
    vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j = 0U;
    while ((0x40U > vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)) {
        if (((vlSelf->__PVT__sq_slot_occ[(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)] 
              & (~ vlSelf->__PVT__sq_addr_valid_prev
                 [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
             & (vlSelf->__PVT__sq[(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0x11U] 
                >> 0x16U))) {
            if (((((((vlSelf->__PVT__lq[0U][0xfU] >> 0x12U) 
                     & (5U == vlSelf->__PVT__pre_final_state
                        [0U])) & (vlSelf->__PVT__lq
                                  [0U][0xcU] >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0U] > vlSelf->__PVT__sq_age
                      [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0U][0xdU] << 0x18U) 
                                     | (vlSelf->__PVT__lq
                                        [0U][0xcU] 
                                        >> 8U))) == 
                     (0x3fffffffU & ((vlSelf->__PVT__sq
                                      [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                      << 0x11U) | (
                                                   vlSelf->__PVT__sq
                                                   [
                                                   (0x3fU 
                                                    & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                                   >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0U][9U] >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0U][0U]);
                }
            }
            vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__unnamedblk14__DOT__i = 0x40U;
            if (((((((vlSelf->__PVT__lq[1U][0xfU] >> 0x12U) 
                     & (5U == vlSelf->__PVT__pre_final_state
                        [1U])) & (vlSelf->__PVT__lq
                                  [1U][0xcU] >> 5U)) 
                   & (vlSelf->__PVT__lq_age[1U] > vlSelf->__PVT__sq_age
                      [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [1U][0xdU] << 0x18U) 
                                     | (vlSelf->__PVT__lq
                                        [1U][0xcU] 
                                        >> 8U))) == 
                     (0x3fffffffU & ((vlSelf->__PVT__sq
                                      [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                      << 0x11U) | (
                                                   vlSelf->__PVT__sq
                                                   [
                                                   (0x3fU 
                                                    & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                                   >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[1U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [1U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[1U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [1U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[1U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[1U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [1U][9U] >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [1U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [1U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[2U][0xfU] >> 0x12U) 
                     & (5U == vlSelf->__PVT__pre_final_state
                        [2U])) & (vlSelf->__PVT__lq
                                  [2U][0xcU] >> 5U)) 
                   & (vlSelf->__PVT__lq_age[2U] > vlSelf->__PVT__sq_age
                      [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [2U][0xdU] << 0x18U) 
                                     | (vlSelf->__PVT__lq
                                        [2U][0xcU] 
                                        >> 8U))) == 
                     (0x3fffffffU & ((vlSelf->__PVT__sq
                                      [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                      << 0x11U) | (
                                                   vlSelf->__PVT__sq
                                                   [
                                                   (0x3fU 
                                                    & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                                   >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[2U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [2U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[2U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [2U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[2U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[2U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [2U][9U] >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [2U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [2U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[3U][0xfU] >> 0x12U) 
                     & (5U == vlSelf->__PVT__pre_final_state
                        [3U])) & (vlSelf->__PVT__lq
                                  [3U][0xcU] >> 5U)) 
                   & (vlSelf->__PVT__lq_age[3U] > vlSelf->__PVT__sq_age
                      [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [3U][0xdU] << 0x18U) 
                                     | (vlSelf->__PVT__lq
                                        [3U][0xcU] 
                                        >> 8U))) == 
                     (0x3fffffffU & ((vlSelf->__PVT__sq
                                      [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                      << 0x11U) | (
                                                   vlSelf->__PVT__sq
                                                   [
                                                   (0x3fU 
                                                    & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                                   >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[3U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [3U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[3U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [3U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[3U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[3U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [3U][9U] >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [3U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [3U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[4U][0xfU] >> 0x12U) 
                     & (5U == vlSelf->__PVT__pre_final_state
                        [4U])) & (vlSelf->__PVT__lq
                                  [4U][0xcU] >> 5U)) 
                   & (vlSelf->__PVT__lq_age[4U] > vlSelf->__PVT__sq_age
                      [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [4U][0xdU] << 0x18U) 
                                     | (vlSelf->__PVT__lq
                                        [4U][0xcU] 
                                        >> 8U))) == 
                     (0x3fffffffU & ((vlSelf->__PVT__sq
                                      [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                      << 0x11U) | (
                                                   vlSelf->__PVT__sq
                                                   [
                                                   (0x3fU 
                                                    & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                                   >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[4U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [4U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[4U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [4U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[4U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[4U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [4U][9U] >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [4U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [4U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[5U][0xfU] >> 0x12U) 
                     & (5U == vlSelf->__PVT__pre_final_state
                        [5U])) & (vlSelf->__PVT__lq
                                  [5U][0xcU] >> 5U)) 
                   & (vlSelf->__PVT__lq_age[5U] > vlSelf->__PVT__sq_age
                      [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [5U][0xdU] << 0x18U) 
                                     | (vlSelf->__PVT__lq
                                        [5U][0xcU] 
                                        >> 8U))) == 
                     (0x3fffffffU & ((vlSelf->__PVT__sq
                                      [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                      << 0x11U) | (
                                                   vlSelf->__PVT__sq
                                                   [
                                                   (0x3fU 
                                                    & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                                   >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[5U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [5U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[5U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [5U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[5U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[5U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [5U][9U] >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [5U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [5U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[6U][0xfU] >> 0x12U) 
                     & (5U == vlSelf->__PVT__pre_final_state
                        [6U])) & (vlSelf->__PVT__lq
                                  [6U][0xcU] >> 5U)) 
                   & (vlSelf->__PVT__lq_age[6U] > vlSelf->__PVT__sq_age
                      [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [6U][0xdU] << 0x18U) 
                                     | (vlSelf->__PVT__lq
                                        [6U][0xcU] 
                                        >> 8U))) == 
                     (0x3fffffffU & ((vlSelf->__PVT__sq
                                      [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                      << 0x11U) | (
                                                   vlSelf->__PVT__sq
                                                   [
                                                   (0x3fU 
                                                    & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                                   >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[6U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [6U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[6U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [6U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[6U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[6U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [6U][9U] >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [6U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [6U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[7U][0xfU] >> 0x12U) 
                     & (5U == vlSelf->__PVT__pre_final_state
                        [7U])) & (vlSelf->__PVT__lq
                                  [7U][0xcU] >> 5U)) 
                   & (vlSelf->__PVT__lq_age[7U] > vlSelf->__PVT__sq_age
                      [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [7U][0xdU] << 0x18U) 
                                     | (vlSelf->__PVT__lq
                                        [7U][0xcU] 
                                        >> 8U))) == 
                     (0x3fffffffU & ((vlSelf->__PVT__sq
                                      [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                      << 0x11U) | (
                                                   vlSelf->__PVT__sq
                                                   [
                                                   (0x3fU 
                                                    & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                                   >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[7U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [7U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[7U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [7U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[7U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[7U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [7U][9U] >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [7U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [7U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[8U][0xfU] >> 0x12U) 
                     & (5U == vlSelf->__PVT__pre_final_state
                        [8U])) & (vlSelf->__PVT__lq
                                  [8U][0xcU] >> 5U)) 
                   & (vlSelf->__PVT__lq_age[8U] > vlSelf->__PVT__sq_age
                      [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [8U][0xdU] << 0x18U) 
                                     | (vlSelf->__PVT__lq
                                        [8U][0xcU] 
                                        >> 8U))) == 
                     (0x3fffffffU & ((vlSelf->__PVT__sq
                                      [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                      << 0x11U) | (
                                                   vlSelf->__PVT__sq
                                                   [
                                                   (0x3fU 
                                                    & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                                   >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[8U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [8U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[8U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [8U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[8U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[8U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [8U][9U] >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [8U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [8U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[9U][0xfU] >> 0x12U) 
                     & (5U == vlSelf->__PVT__pre_final_state
                        [9U])) & (vlSelf->__PVT__lq
                                  [9U][0xcU] >> 5U)) 
                   & (vlSelf->__PVT__lq_age[9U] > vlSelf->__PVT__sq_age
                      [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [9U][0xdU] << 0x18U) 
                                     | (vlSelf->__PVT__lq
                                        [9U][0xcU] 
                                        >> 8U))) == 
                     (0x3fffffffU & ((vlSelf->__PVT__sq
                                      [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                      << 0x11U) | (
                                                   vlSelf->__PVT__sq
                                                   [
                                                   (0x3fU 
                                                    & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                                   >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[9U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [9U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[9U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [9U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[9U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[9U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [9U][9U] >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [9U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [9U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0xaU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0xaU])) & (vlSelf->__PVT__lq
                                               [0xaU][0xcU] 
                                               >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0xaU] > 
                      vlSelf->__PVT__sq_age[(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0xaU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0xaU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0xaU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0xaU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0xaU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0xaU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0xaU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0xaU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0xaU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0xaU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0xaU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0xbU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0xbU])) & (vlSelf->__PVT__lq
                                               [0xbU][0xcU] 
                                               >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0xbU] > 
                      vlSelf->__PVT__sq_age[(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0xbU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0xbU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0xbU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0xbU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0xbU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0xbU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0xbU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0xbU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0xbU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0xbU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0xbU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0xcU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0xcU])) & (vlSelf->__PVT__lq
                                               [0xcU][0xcU] 
                                               >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0xcU] > 
                      vlSelf->__PVT__sq_age[(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0xcU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0xcU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0xcU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0xcU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0xcU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0xcU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0xcU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0xcU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0xcU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0xcU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0xcU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0xdU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0xdU])) & (vlSelf->__PVT__lq
                                               [0xdU][0xcU] 
                                               >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0xdU] > 
                      vlSelf->__PVT__sq_age[(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0xdU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0xdU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0xdU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0xdU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0xdU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0xdU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0xdU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0xdU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0xdU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0xdU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0xdU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0xeU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0xeU])) & (vlSelf->__PVT__lq
                                               [0xeU][0xcU] 
                                               >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0xeU] > 
                      vlSelf->__PVT__sq_age[(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0xeU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0xeU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0xeU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0xeU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0xeU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0xeU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0xeU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0xeU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0xeU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0xeU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0xeU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0xfU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0xfU])) & (vlSelf->__PVT__lq
                                               [0xfU][0xcU] 
                                               >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0xfU] > 
                      vlSelf->__PVT__sq_age[(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0xfU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0xfU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0xfU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0xfU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0xfU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0xfU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0xfU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0xfU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0xfU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0xfU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0xfU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x10U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x10U])) & (vlSelf->__PVT__lq
                                                [0x10U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x10U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x10U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x10U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x10U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x10U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x10U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x10U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x10U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x10U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x10U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x10U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x10U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x11U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x11U])) & (vlSelf->__PVT__lq
                                                [0x11U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x11U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x11U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x11U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x11U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x11U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x11U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x11U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x11U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x11U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x11U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x11U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x11U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x12U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x12U])) & (vlSelf->__PVT__lq
                                                [0x12U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x12U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x12U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x12U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x12U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x12U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x12U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x12U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x12U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x12U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x12U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x12U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x12U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x13U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x13U])) & (vlSelf->__PVT__lq
                                                [0x13U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x13U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x13U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x13U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x13U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x13U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x13U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x13U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x13U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x13U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x13U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x13U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x13U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x14U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x14U])) & (vlSelf->__PVT__lq
                                                [0x14U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x14U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x14U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x14U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x14U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x14U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x14U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x14U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x14U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x14U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x14U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x14U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x14U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x15U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x15U])) & (vlSelf->__PVT__lq
                                                [0x15U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x15U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x15U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x15U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x15U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x15U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x15U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x15U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x15U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x15U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x15U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x15U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x15U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x16U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x16U])) & (vlSelf->__PVT__lq
                                                [0x16U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x16U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x16U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x16U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x16U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x16U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x16U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x16U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x16U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x16U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x16U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x16U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x16U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x17U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x17U])) & (vlSelf->__PVT__lq
                                                [0x17U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x17U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x17U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x17U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x17U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x17U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x17U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x17U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x17U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x17U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x17U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x17U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x17U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x18U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x18U])) & (vlSelf->__PVT__lq
                                                [0x18U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x18U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x18U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x18U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x18U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x18U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x18U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x18U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x18U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x18U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x18U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x18U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x18U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x19U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x19U])) & (vlSelf->__PVT__lq
                                                [0x19U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x19U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x19U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x19U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x19U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x19U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x19U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x19U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x19U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x19U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x19U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x19U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x19U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x1aU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x1aU])) & (vlSelf->__PVT__lq
                                                [0x1aU][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x1aU] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x1aU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x1aU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x1aU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x1aU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x1aU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x1aU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x1aU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x1aU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x1aU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x1aU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x1aU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x1bU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x1bU])) & (vlSelf->__PVT__lq
                                                [0x1bU][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x1bU] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x1bU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x1bU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x1bU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x1bU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x1bU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x1bU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x1bU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x1bU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x1bU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x1bU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x1bU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x1cU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x1cU])) & (vlSelf->__PVT__lq
                                                [0x1cU][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x1cU] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x1cU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x1cU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x1cU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x1cU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x1cU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x1cU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x1cU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x1cU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x1cU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x1cU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x1cU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x1dU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x1dU])) & (vlSelf->__PVT__lq
                                                [0x1dU][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x1dU] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x1dU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x1dU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x1dU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x1dU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x1dU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x1dU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x1dU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x1dU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x1dU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x1dU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x1dU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x1eU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x1eU])) & (vlSelf->__PVT__lq
                                                [0x1eU][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x1eU] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x1eU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x1eU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x1eU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x1eU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x1eU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x1eU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x1eU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x1eU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x1eU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x1eU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x1eU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x1fU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x1fU])) & (vlSelf->__PVT__lq
                                                [0x1fU][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x1fU] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x1fU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x1fU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x1fU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x1fU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x1fU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x1fU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x1fU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x1fU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x1fU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x1fU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x1fU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x20U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x20U])) & (vlSelf->__PVT__lq
                                                [0x20U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x20U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x20U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x20U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x20U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x20U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x20U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x20U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x20U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x20U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x20U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x20U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x20U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x21U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x21U])) & (vlSelf->__PVT__lq
                                                [0x21U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x21U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x21U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x21U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x21U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x21U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x21U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x21U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x21U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x21U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x21U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x21U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x21U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x22U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x22U])) & (vlSelf->__PVT__lq
                                                [0x22U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x22U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x22U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x22U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x22U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x22U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x22U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x22U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x22U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x22U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x22U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x22U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x22U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x23U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x23U])) & (vlSelf->__PVT__lq
                                                [0x23U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x23U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x23U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x23U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x23U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x23U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x23U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x23U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x23U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x23U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x23U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x23U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x23U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x24U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x24U])) & (vlSelf->__PVT__lq
                                                [0x24U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x24U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x24U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x24U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x24U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x24U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x24U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x24U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x24U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x24U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x24U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x24U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x24U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x25U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x25U])) & (vlSelf->__PVT__lq
                                                [0x25U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x25U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x25U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x25U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x25U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x25U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x25U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x25U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x25U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x25U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x25U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x25U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x25U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x26U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x26U])) & (vlSelf->__PVT__lq
                                                [0x26U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x26U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x26U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x26U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x26U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x26U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x26U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x26U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x26U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x26U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x26U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x26U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x26U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x27U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x27U])) & (vlSelf->__PVT__lq
                                                [0x27U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x27U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x27U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x27U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x27U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x27U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x27U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x27U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x27U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x27U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x27U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x27U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x27U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x28U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x28U])) & (vlSelf->__PVT__lq
                                                [0x28U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x28U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x28U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x28U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x28U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x28U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x28U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x28U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x28U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x28U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x28U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x28U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x28U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x29U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x29U])) & (vlSelf->__PVT__lq
                                                [0x29U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x29U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x29U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x29U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x29U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x29U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x29U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x29U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x29U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x29U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x29U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x29U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x29U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x2aU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x2aU])) & (vlSelf->__PVT__lq
                                                [0x2aU][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x2aU] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x2aU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x2aU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x2aU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x2aU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x2aU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x2aU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x2aU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x2aU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x2aU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x2aU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x2aU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x2bU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x2bU])) & (vlSelf->__PVT__lq
                                                [0x2bU][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x2bU] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x2bU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x2bU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x2bU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x2bU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x2bU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x2bU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x2bU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x2bU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x2bU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x2bU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x2bU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x2cU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x2cU])) & (vlSelf->__PVT__lq
                                                [0x2cU][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x2cU] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x2cU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x2cU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x2cU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x2cU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x2cU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x2cU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x2cU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x2cU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x2cU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x2cU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x2cU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x2dU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x2dU])) & (vlSelf->__PVT__lq
                                                [0x2dU][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x2dU] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x2dU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x2dU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x2dU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x2dU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x2dU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x2dU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x2dU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x2dU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x2dU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x2dU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x2dU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x2eU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x2eU])) & (vlSelf->__PVT__lq
                                                [0x2eU][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x2eU] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x2eU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x2eU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x2eU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x2eU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x2eU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x2eU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x2eU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x2eU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x2eU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x2eU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x2eU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x2fU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x2fU])) & (vlSelf->__PVT__lq
                                                [0x2fU][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x2fU] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x2fU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x2fU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x2fU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x2fU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x2fU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x2fU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x2fU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x2fU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x2fU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x2fU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x2fU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x30U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x30U])) & (vlSelf->__PVT__lq
                                                [0x30U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x30U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x30U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x30U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x30U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x30U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x30U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x30U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x30U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x30U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x30U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x30U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x30U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x31U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x31U])) & (vlSelf->__PVT__lq
                                                [0x31U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x31U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x31U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x31U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x31U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x31U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x31U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x31U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x31U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x31U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x31U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x31U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x31U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x32U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x32U])) & (vlSelf->__PVT__lq
                                                [0x32U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x32U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x32U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x32U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x32U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x32U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x32U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x32U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x32U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x32U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x32U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x32U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x32U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x33U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x33U])) & (vlSelf->__PVT__lq
                                                [0x33U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x33U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x33U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x33U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x33U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x33U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x33U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x33U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x33U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x33U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x33U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x33U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x33U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x34U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x34U])) & (vlSelf->__PVT__lq
                                                [0x34U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x34U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x34U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x34U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x34U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x34U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x34U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x34U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x34U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x34U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x34U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x34U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x34U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x35U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x35U])) & (vlSelf->__PVT__lq
                                                [0x35U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x35U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x35U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x35U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x35U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x35U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x35U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x35U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x35U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x35U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x35U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x35U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x35U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x36U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x36U])) & (vlSelf->__PVT__lq
                                                [0x36U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x36U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x36U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x36U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x36U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x36U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x36U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x36U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x36U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x36U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x36U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x36U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x36U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x37U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x37U])) & (vlSelf->__PVT__lq
                                                [0x37U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x37U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x37U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x37U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x37U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x37U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x37U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x37U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x37U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x37U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x37U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x37U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x37U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x38U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x38U])) & (vlSelf->__PVT__lq
                                                [0x38U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x38U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x38U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x38U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x38U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x38U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x38U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x38U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x38U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x38U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x38U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x38U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x38U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x39U][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x39U])) & (vlSelf->__PVT__lq
                                                [0x39U][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x39U] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x39U][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x39U][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x39U][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x39U][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x39U][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x39U] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x39U];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x39U][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x39U][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x39U][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x39U][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x3aU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x3aU])) & (vlSelf->__PVT__lq
                                                [0x3aU][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x3aU] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x3aU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x3aU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x3aU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x3aU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x3aU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x3aU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x3aU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x3aU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x3aU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x3aU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x3aU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x3bU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x3bU])) & (vlSelf->__PVT__lq
                                                [0x3bU][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x3bU] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x3bU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x3bU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x3bU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x3bU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x3bU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x3bU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x3bU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x3bU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x3bU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x3bU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x3bU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x3cU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x3cU])) & (vlSelf->__PVT__lq
                                                [0x3cU][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x3cU] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x3cU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x3cU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x3cU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x3cU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x3cU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x3cU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x3cU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x3cU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x3cU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x3cU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x3cU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x3dU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x3dU])) & (vlSelf->__PVT__lq
                                                [0x3dU][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x3dU] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x3dU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x3dU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x3dU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x3dU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x3dU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x3dU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x3dU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x3dU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x3dU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x3dU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x3dU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x3eU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x3eU])) & (vlSelf->__PVT__lq
                                                [0x3eU][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x3eU] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x3eU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x3eU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x3eU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x3eU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x3eU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x3eU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x3eU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x3eU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x3eU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x3eU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x3eU][0U]);
                }
            }
            if (((((((vlSelf->__PVT__lq[0x3fU][0xfU] 
                      >> 0x12U) & (5U == vlSelf->__PVT__pre_final_state
                                   [0x3fU])) & (vlSelf->__PVT__lq
                                                [0x3fU][0xcU] 
                                                >> 5U)) 
                   & (vlSelf->__PVT__lq_age[0x3fU] 
                      > vlSelf->__PVT__sq_age[(0x3fU 
                                               & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)])) 
                  & ((0x3fffffffU & ((vlSelf->__PVT__lq
                                      [0x3fU][0xdU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__lq
                                                   [0x3fU][0xcU] 
                                                   >> 8U))) 
                     == (0x3fffffffU & ((vlSelf->__PVT__sq
                                         [(0x3fU & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xfU] 
                                         << 0x11U) 
                                        | (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                           >> 0xfU))))) 
                 & ((0xfU & (((vlSelf->__PVT__sq[(0x3fU 
                                                  & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                               << 0x17U) | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j)][0xeU] 
                                            >> 9U)) 
                             & ((vlSelf->__PVT__lq[0x3fU][0xcU] 
                                 << 0x1fU) | (vlSelf->__PVT__lq
                                              [0x3fU][0xcU] 
                                              >> 1U)))) 
                    == (0xfU & (vlSelf->__PVT__lq[0x3fU][0xcU] 
                                >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->__PVT__spec_load_mispredict_o)) 
                           | (vlSelf->__PVT__lq_age
                              [0x3fU] < (IData)(vlSelf->__PVT__ie_oldest_victim))))) {
                    vlSelf->__PVT__spec_load_mispredict_o = 1U;
                    vlSelf->__PVT__ie_oldest_victim 
                        = vlSelf->__PVT__lq_age[0x3fU];
                    vlSelf->__PVT__spec_load_recover_pc_o 
                        = ((vlSelf->__PVT__lq[0x3fU][0xaU] 
                            << 0x18U) | (vlSelf->__PVT__lq
                                         [0x3fU][9U] 
                                         >> 8U));
                    vlSelf->__PVT__spec_load_rob_idx_o 
                        = (0x3fU & (vlSelf->__PVT__lq
                                    [0x3fU][5U] >> 0x16U));
                    vlSelf->__PVT__spec_load_checkpoint_id_o 
                        = (0x3fU & vlSelf->__PVT__lq
                           [0x3fU][0U]);
                }
            }
        }
        vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j 
            = ((IData)(1U) + vlSelf->__PVT__identify_error__DOT__unnamedblk13__DOT__j);
    }
}
