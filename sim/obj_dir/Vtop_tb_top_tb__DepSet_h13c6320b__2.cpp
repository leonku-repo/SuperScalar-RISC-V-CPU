// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb_top_tb.h"

VL_INLINE_OPT void Vtop_tb_top_tb___nba_sequent__TOP__top_tb__3(Vtop_tb_top_tb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_tb_top_tb___nba_sequent__TOP__top_tb__3\n"); );
    // Body
    vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[0U] 
        = vlSymsp->TOP__top_tb__dut.__PVT__monitor_valid;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[1U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[2U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[3U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[4U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[5U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[6U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[7U] = 0U;
    vlSelf->__PVT__monitor__DOT__rvfi_valid = ((0xf8U 
                                                & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)) 
                                               | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                                                   [2U] 
                                                   << 2U) 
                                                  | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                                                      [1U] 
                                                      << 1U) 
                                                     | vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                                                     [0U])));
    vlSelf->__PVT__monitor__DOT__rvfi_valid = ((0xc7U 
                                                & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)) 
                                               | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                                                   [5U] 
                                                   << 5U) 
                                                  | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                                                      [4U] 
                                                      << 4U) 
                                                     | (vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                                                        [3U] 
                                                        << 3U))));
    vlSelf->__PVT__monitor__DOT__rvfi_valid = ((0x3fU 
                                                & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)) 
                                               | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                                                   [7U] 
                                                   << 7U) 
                                                  | (vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                                                     [6U] 
                                                     << 6U)));
}
