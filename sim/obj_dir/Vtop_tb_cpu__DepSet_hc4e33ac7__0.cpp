// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb_cpu.h"

VL_INLINE_OPT void Vtop_tb_cpu___nba_sequent__TOP__top_tb__dut__2(Vtop_tb_cpu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_tb_cpu___nba_sequent__TOP__top_tb__dut__2\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_14;
    // Body
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x3dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x3eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x3fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 0U;
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [1U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [1U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [2U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [2U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [3U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [3U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [4U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [4U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [5U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [5U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [6U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [6U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [7U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [7U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [8U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [8U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [9U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [9U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xaU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xaU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xbU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xbU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xcU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xcU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xdU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xdU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xeU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xeU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xfU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xfU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x10U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x10U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x11U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x11U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x12U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x12U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x13U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x13U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x14U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x14U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x15U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x15U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x16U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x16U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x17U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x17U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x18U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x18U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x19U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x19U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x20U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x20U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x21U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x21U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x22U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x22U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x23U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x23U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x24U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x24U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x25U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x25U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x26U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x26U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x27U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x27U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x28U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x28U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x29U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x29U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x30U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x30U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x31U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x31U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x32U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x32U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x33U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x33U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x34U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x34U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x35U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x35U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x36U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x36U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x37U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x37U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x38U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x38U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x39U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x39U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x3aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x3aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x3bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x3bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x3cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x3cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x3dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x3dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x3eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x3eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x3fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x3fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h3beb847a__0 
        = ((IData)(vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h7334ccba__0) 
           | (2U == (7U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U] 
                           >> 6U))));
    vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr 
        = ((IData)(vlSelf->cpu_execute__DOT__mem__DOT____VdfgTmp_h037763e4__0)
            ? (vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr1_val 
               + (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                          >> 0x1aU))) : 0U);
    vlSelf->__PVT__cpu_frontend__DOT__fetchq_full = 
        ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_full) 
         | ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_full) 
            | ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_full) 
               | (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_full))));
    vlSelf->__PVT__fetch_empty = ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_empty) 
                                  | ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_empty) 
                                     | ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_empty) 
                                        | (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_empty))));
    vlSelf->__PVT__cpu_execute__DOT__jump__DOT__br_target 
        = ((4U == (7U & (IData)((vlSelf->__PVT__cpu_execute__DOT__jump_MIDCORE_data_i 
                                 >> 0x17U)))) ? (((
                                                   vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU] 
                                                   << 3U) 
                                                  | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                                                     >> 0x1dU)) 
                                                 + (IData)(
                                                           (vlSelf->__PVT__cpu_execute__DOT__jump_MIDCORE_data_i 
                                                            >> 0x1aU)))
            : ((5U == (7U & (IData)((vlSelf->__PVT__cpu_execute__DOT__jump_MIDCORE_data_i 
                                     >> 0x17U)))) ? 
               (0xfffffffeU & (vlSelf->__PVT__cpu_execute__DOT__lookup_jump_pr1_val 
                               + (IData)((vlSelf->__PVT__cpu_execute__DOT__jump_MIDCORE_data_i 
                                          >> 0x1aU))))
                : (((vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU] 
                     << 3U) | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                               >> 0x1dU)) + (IData)(
                                                    (vlSelf->__PVT__cpu_execute__DOT__jump_MIDCORE_data_i 
                                                     >> 0x1aU)))));
    vlSelf->cpu_execute__DOT__mem__DOT____VdfgTmp_hfe74eb39__0 
        = ((~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem_empty_i)) 
           & (IData)(vlSelf->cpu_execute__DOT__mem__DOT____VdfgTmp_h037763e4__0));
    vlSelf->__PVT__cpu_execute__DOT__load_valid = (
                                                   (~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem_empty_i)) 
                                                   & ((~ (IData)(vlSelf->__PVT__cpu_execute__DOT__LDorST_i)) 
                                                      & (IData)(vlSelf->cpu_execute__DOT__mem__DOT____VdfgTmp_h7b9661f3__0)));
    vlSelf->__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val), 
                      VL_EXTENDS_QI(64,32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val));
    vlSelf->cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0 
        = ((0x80000000U == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val) 
           & (0xffffffffU == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__full 
        = (((1U & ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtr) 
                   >> 4U)) != (1U & ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr) 
                                     >> 4U))) & (IData)(vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_hc4999392__0));
    vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_en 
        = ((1U & (IData)((vlSelf->__PVT__cpu_execute__DOT__cmp_MIDCORE_data_i 
                          >> 0x12U))) ? ((1U & (IData)(
                                                       (vlSelf->__PVT__cpu_execute__DOT__cmp_MIDCORE_data_i 
                                                        >> 0x11U)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__cpu_execute__DOT__cmp_MIDCORE_data_i 
                                                            >> 0x10U)))
                                              ? (vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a 
                                                 >= vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b)
                                              : (vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a 
                                                 < vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b))
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__cpu_execute__DOT__cmp_MIDCORE_data_i 
                                                            >> 0x10U)))
                                              ? VL_GTES_III(32, vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a, vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b)
                                              : VL_LTS_III(32, vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a, vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b)))
            : ((1U & (~ (IData)((vlSelf->__PVT__cpu_execute__DOT__cmp_MIDCORE_data_i 
                                 >> 0x11U)))) && ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__cmp_MIDCORE_data_i 
                                                              >> 0x10U)))
                                                   ? 
                                                  (vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a 
                                                   != vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b)
                                                   : 
                                                  (vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a 
                                                   == vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b))));
    if (vlSelf->cpu_execute__DOT____Vcellinp__PRF__lookup_alu_pr1_valid) {
        vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr1_val 
            = vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf
            [((IData)(vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx_valid)
               ? (0x3fU & (IData)((vlSelf->__VdfgTmp_hfd0da316__0 
                                   >> 8U))) : 0U)];
        vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
            = vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr1_val;
    } else {
        vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr1_val = 0U;
        vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
            = ((IData)(vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx_valid)
                ? ((vlSelf->__VdfgTmp_h21fae592__0[0xaU] 
                    << 3U) | (vlSelf->__VdfgTmp_h21fae592__0[9U] 
                              >> 0x1dU)) : 0U);
    }
    if (vlSelf->cpu_execute__DOT____Vcellinp__PRF__lookup_alu_pr2_valid) {
        vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr2_val 
            = vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf
            [((IData)(vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx_valid)
               ? (0x3fU & (IData)((vlSelf->__VdfgTmp_hfd0da316__0 
                                   >> 2U))) : 0U)];
        vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b 
            = vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr2_val;
    } else {
        vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr2_val = 0U;
        vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b 
            = ((IData)(vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx_valid)
                ? (IData)((vlSelf->__VdfgTmp_hfd0da316__0 
                           >> 0x1aU)) : 0U);
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp 
        = (1U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__bp_table
                 [(0x7fU & ((vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                             >> 0x19U) ^ ((vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                           >> 5U) ^ 
                                          (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                           >> 0xdU))))] 
                 >> 1U));
    if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp = 4U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp 
            = (1U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_table
                     [(0x3fU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u)] 
                     >> 1U));
    } else if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp = 3U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp 
            = (1U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table
                     [(0x3fU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u)] 
                     >> 1U));
    } else if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp = 4U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp 
            = (1U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_table
                     [(0x3fU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag)] 
                     >> 1U));
    } else if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp = 2U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp 
            = (1U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table
                     [(0x3fU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u)] 
                     >> 1U));
    } else if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp = 3U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp 
            = (1U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table
                     [(0x3fU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag)] 
                     >> 1U));
    } else if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp = 1U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp 
            = (1U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table
                     [(0x3fU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u)] 
                     >> 1U));
    } else if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp = 2U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp 
            = (1U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table
                     [(0x3fU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag)] 
                     >> 1U));
    } else if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp = 1U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp 
            = (1U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table
                     [(0x3fU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag)] 
                     >> 1U));
    }
    vlSelf->__PVT__cpu_execute__DOT__jump__DOT__mispredict 
        = (1U & (~ ((IData)(vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx_valid) 
                    & ((vlSelf->__VdfgTmp_h4b50ee27__0[1U] 
                        >> 1U) & (((IData)(vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx_valid)
                                    ? ((vlSelf->__VdfgTmp_h4b50ee27__0[9U] 
                                        << 3U) | (vlSelf->__VdfgTmp_h4b50ee27__0[8U] 
                                                  >> 0x1dU))
                                    : 0U) == vlSelf->__PVT__cpu_execute__DOT__jump__DOT__br_target)))));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr;
    if ((((IData)(vlSelf->__PVT__cpu_execute__DOT__load_valid) 
          | ((~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem_empty_i)) 
             & ((IData)(vlSelf->__PVT__cpu_execute__DOT__LDorST_i) 
                & (IData)(vlSelf->cpu_execute__DOT__mem__DOT____VdfgTmp_h7b9661f3__0)))) 
         & (~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem_empty_i)))) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr)));
    }
    vlSelf->__PVT__mul_ROB_exec_o[0U] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0U];
    vlSelf->__PVT__mul_ROB_exec_o[1U] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[1U];
    vlSelf->__PVT__mul_ROB_exec_o[2U] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[2U];
    vlSelf->__PVT__mul_ROB_exec_o[3U] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[3U];
    vlSelf->__PVT__mul_ROB_exec_o[4U] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[4U];
    vlSelf->__PVT__mul_ROB_exec_o[5U] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[5U];
    vlSelf->__PVT__mul_ROB_exec_o[6U] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[6U];
    vlSelf->__PVT__mul_ROB_exec_o[7U] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[7U];
    vlSelf->__PVT__mul_ROB_exec_o[8U] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[8U];
    vlSelf->__PVT__mul_ROB_exec_o[9U] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[9U];
    vlSelf->__PVT__mul_ROB_exec_o[0xaU] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0xaU];
    vlSelf->__PVT__mul_ROB_exec_o[0xbU] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0xbU];
    vlSelf->__PVT__mul_ROB_exec_o[5U] = ((0x1ffffU 
                                          & vlSelf->__PVT__mul_ROB_exec_o[5U]) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)))) 
                                            << 0x11U));
    vlSelf->__PVT__mul_ROB_exec_o[6U] = (((IData)((
                                                   ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)))) 
                                          >> 0xfU) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))) 
                                                     >> 0x20U)) 
                                            << 0x11U));
    vlSelf->__PVT__mul_ROB_exec_o[7U] = ((0xfffe0000U 
                                          & vlSelf->__PVT__mul_ROB_exec_o[7U]) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))) 
                                                     >> 0x20U)) 
                                            >> 0xfU));
    VL_EXTENDS_WI(65,32, __Vtemp_3, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val);
    __Vtemp_4[0U] = __Vtemp_3[0U];
    __Vtemp_4[1U] = __Vtemp_3[1U];
    __Vtemp_4[2U] = (1U & __Vtemp_3[2U]);
    VL_EXTENDS_WQ(65,33, __Vtemp_6, (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)));
    __Vtemp_7[0U] = __Vtemp_6[0U];
    __Vtemp_7[1U] = __Vtemp_6[1U];
    __Vtemp_7[2U] = (1U & __Vtemp_6[2U]);
    VL_MULS_WWW(65, __Vtemp_8, __Vtemp_4, __Vtemp_7);
    __Vtemp_11[2U] = ((IData)(((QData)((IData)(((1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                            >> 0x12U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                             >> 0x11U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                              >> 0x10U)))
                                                   ? 
                                                  ((0U 
                                                    == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                    ? vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val
                                                    : 
                                                   VL_MODDIV_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))
                                                   : 
                                                  ((0U 
                                                    == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                    ? vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val
                                                    : 
                                                   ((IData)(vlSelf->cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                     ? 0U
                                                     : 
                                                    VL_MODDIVS_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                              >> 0x10U)))
                                                   ? 
                                                  ((0U 
                                                    == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                    ? 0xffffffffU
                                                    : 
                                                   VL_DIV_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))
                                                   : 
                                                  ((0U 
                                                    == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                    ? 0xffffffffU
                                                    : 
                                                   ((IData)(vlSelf->cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                     ? 0x80000000U
                                                     : 
                                                    VL_DIVS_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)))))
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                             >> 0x11U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                              >> 0x10U)))
                                                   ? (IData)(
                                                             (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
                                                               * (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))) 
                                                              >> 0x20U))
                                                   : 
                                                  __Vtemp_8[1U])
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                              >> 0x10U)))
                                                   ? (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss 
                                                              >> 0x20U))
                                                   : (IData)(vlSelf->__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss)))))) 
                               << 0x20U)) << 8U);
    __Vtemp_11[3U] = (((IData)(((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                             >> 0x12U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                              >> 0x11U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                               >> 0x10U)))
                                                    ? 
                                                   ((0U 
                                                     == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                     ? vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val
                                                     : 
                                                    VL_MODDIV_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))
                                                    : 
                                                   ((0U 
                                                     == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                     ? vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val
                                                     : 
                                                    ((IData)(vlSelf->cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                      ? 0U
                                                      : 
                                                     VL_MODDIVS_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                               >> 0x10U)))
                                                    ? 
                                                   ((0U 
                                                     == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                     ? 0xffffffffU
                                                     : 
                                                    VL_DIV_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))
                                                    : 
                                                   ((0U 
                                                     == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                     ? 0xffffffffU
                                                     : 
                                                    ((IData)(vlSelf->cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                      ? 0x80000000U
                                                      : 
                                                     VL_DIVS_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                              >> 0x11U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                               >> 0x10U)))
                                                    ? (IData)(
                                                              (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
                                                                * (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))) 
                                                               >> 0x20U))
                                                    : 
                                                   __Vtemp_8[1U])
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                               >> 0x10U)))
                                                    ? (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss 
                                                               >> 0x20U))
                                                    : (IData)(vlSelf->__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss)))))) 
                                << 0x20U)) >> 0x18U) 
                      | ((IData)((((QData)((IData)(
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                                >> 0x12U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                                 >> 0x11U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                                  >> 0x10U)))
                                                       ? 
                                                      ((0U 
                                                        == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                        ? vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val
                                                        : 
                                                       VL_MODDIV_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))
                                                       : 
                                                      ((0U 
                                                        == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                        ? vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val
                                                        : 
                                                       ((IData)(vlSelf->cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                         ? 0U
                                                         : 
                                                        VL_MODDIVS_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                                  >> 0x10U)))
                                                       ? 
                                                      ((0U 
                                                        == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                        ? 0xffffffffU
                                                        : 
                                                       VL_DIV_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))
                                                       : 
                                                      ((0U 
                                                        == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                        ? 0xffffffffU
                                                        : 
                                                       ((IData)(vlSelf->cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                         ? 0x80000000U
                                                         : 
                                                        VL_DIVS_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                                 >> 0x11U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                                  >> 0x10U)))
                                                       ? (IData)(
                                                                 (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
                                                                   * (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))) 
                                                                  >> 0x20U))
                                                       : 
                                                      __Vtemp_8[1U])
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                                  >> 0x10U)))
                                                       ? (IData)(
                                                                 (vlSelf->__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss 
                                                                  >> 0x20U))
                                                       : (IData)(vlSelf->__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss)))))) 
                                   << 0x20U) >> 0x20U)) 
                         << 8U));
    __Vtemp_11[4U] = ((IData)((((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                             >> 0x12U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                              >> 0x11U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                               >> 0x10U)))
                                                    ? 
                                                   ((0U 
                                                     == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                     ? vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val
                                                     : 
                                                    VL_MODDIV_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))
                                                    : 
                                                   ((0U 
                                                     == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                     ? vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val
                                                     : 
                                                    ((IData)(vlSelf->cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                      ? 0U
                                                      : 
                                                     VL_MODDIVS_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                               >> 0x10U)))
                                                    ? 
                                                   ((0U 
                                                     == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                     ? 0xffffffffU
                                                     : 
                                                    VL_DIV_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))
                                                    : 
                                                   ((0U 
                                                     == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                     ? 0xffffffffU
                                                     : 
                                                    ((IData)(vlSelf->cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                      ? 0x80000000U
                                                      : 
                                                     VL_DIVS_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                              >> 0x11U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                               >> 0x10U)))
                                                    ? (IData)(
                                                              (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
                                                                * (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))) 
                                                               >> 0x20U))
                                                    : 
                                                   __Vtemp_8[1U])
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                               >> 0x10U)))
                                                    ? (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss 
                                                               >> 0x20U))
                                                    : (IData)(vlSelf->__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss)))))) 
                                << 0x20U) >> 0x20U)) 
                      >> 0x18U);
    vlSelf->__PVT__mul_ROB_exec_o[1U] = (0x1fU & vlSelf->__PVT__mul_ROB_exec_o[1U]);
    vlSelf->__PVT__mul_ROB_exec_o[2U] = 0U;
    vlSelf->__PVT__mul_ROB_exec_o[3U] = (__Vtemp_11[2U] 
                                         << 5U);
    vlSelf->__PVT__mul_ROB_exec_o[4U] = ((__Vtemp_11[2U] 
                                          >> 0x1bU) 
                                         | (__Vtemp_11[3U] 
                                            << 5U));
    vlSelf->__PVT__mul_ROB_exec_o[5U] = ((0xffffe000U 
                                          & vlSelf->__PVT__mul_ROB_exec_o[5U]) 
                                         | ((__Vtemp_11[3U] 
                                             >> 0x1bU) 
                                            | (__Vtemp_11[4U] 
                                               << 5U)));
    vlSelf->__PVT__mul_ROB_exec_o[1U] = ((0xfffffffbU 
                                          & vlSelf->__PVT__mul_ROB_exec_o[1U]) 
                                         | (4U & ((0xfffffffcU 
                                                   & (vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[1U] 
                                                      << 1U)) 
                                                  | ((((vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[9U] 
                                                        << 3U) 
                                                       | (vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[8U] 
                                                          >> 0x1dU)) 
                                                      != 
                                                      ((IData)(4U) 
                                                       + 
                                                       ((vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0xaU] 
                                                         << 3U) 
                                                        | (vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[9U] 
                                                           >> 0x1dU)))) 
                                                     << 2U))));
    vlSelf->__PVT__mul_ROB_exec_o[0U] = (IData)(((QData)((IData)(
                                                                 ((IData)(4U) 
                                                                  + 
                                                                  ((vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0xaU] 
                                                                    << 3U) 
                                                                   | (vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[9U] 
                                                                      >> 0x1dU))))) 
                                                 << 1U));
    vlSelf->__PVT__mul_ROB_exec_o[1U] = ((0xfffffffeU 
                                          & vlSelf->__PVT__mul_ROB_exec_o[1U]) 
                                         | (IData)(
                                                   (((QData)((IData)(
                                                                     ((IData)(4U) 
                                                                      + 
                                                                      ((vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0xaU] 
                                                                        << 3U) 
                                                                       | (vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[9U] 
                                                                          >> 0x1dU))))) 
                                                     << 1U) 
                                                    >> 0x20U)));
    vlSelf->__PVT__mul_ROB_exec_o[0xbU] = ((0x17fffU 
                                            & vlSelf->__PVT__mul_ROB_exec_o[0xbU]) 
                                           | (0x1ffffU 
                                              & ((IData)(vlSelf->__PVT__cpu_execute__DOT__mul_valid) 
                                                 << 0xfU)));
    vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_target 
        = ((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_en)
            ? (vlSelf->cpu_execute__DOT__cmp__DOT____VdfgTmp_h2a77b1e8__0 
               + ((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid)
                   ? (IData)((vlSelf->__VdfgTmp_he47ebcff__0 
                              >> 0x1aU)) : 0U)) : ((IData)(4U) 
                                                   + vlSelf->cpu_execute__DOT__cmp__DOT____VdfgTmp_h2a77b1e8__0));
    vlSelf->__PVT__jump_ROB_exec_o[0U] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0U];
    vlSelf->__PVT__jump_ROB_exec_o[1U] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[1U];
    vlSelf->__PVT__jump_ROB_exec_o[2U] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[2U];
    vlSelf->__PVT__jump_ROB_exec_o[3U] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[3U];
    vlSelf->__PVT__jump_ROB_exec_o[4U] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[4U];
    vlSelf->__PVT__jump_ROB_exec_o[5U] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[5U];
    vlSelf->__PVT__jump_ROB_exec_o[6U] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[6U];
    vlSelf->__PVT__jump_ROB_exec_o[7U] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[7U];
    vlSelf->__PVT__jump_ROB_exec_o[8U] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[8U];
    vlSelf->__PVT__jump_ROB_exec_o[9U] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U];
    vlSelf->__PVT__jump_ROB_exec_o[0xaU] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU];
    vlSelf->__PVT__jump_ROB_exec_o[0xbU] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xbU];
    vlSelf->__PVT__jump_ROB_exec_o[8U] = ((0x1fffffffU 
                                           & vlSelf->__PVT__jump_ROB_exec_o[8U]) 
                                          | (((IData)(vlSelf->__PVT__cpu_execute__DOT__jump__DOT__mispredict)
                                               ? vlSelf->__PVT__cpu_execute__DOT__jump__DOT__br_target
                                               : ((
                                                   vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                                                   << 3U) 
                                                  | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[8U] 
                                                     >> 0x1dU))) 
                                             << 0x1dU));
    vlSelf->__PVT__jump_ROB_exec_o[9U] = ((0xe0000000U 
                                           & vlSelf->__PVT__jump_ROB_exec_o[9U]) 
                                          | (((IData)(vlSelf->__PVT__cpu_execute__DOT__jump__DOT__mispredict)
                                               ? vlSelf->__PVT__cpu_execute__DOT__jump__DOT__br_target
                                               : ((
                                                   vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                                                   << 3U) 
                                                  | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[8U] 
                                                     >> 0x1dU))) 
                                             >> 3U));
    vlSelf->__PVT__jump_ROB_exec_o[5U] = ((0x1ffffU 
                                           & vlSelf->__PVT__jump_ROB_exec_o[5U]) 
                                          | ((IData)(
                                                     ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_jump_pr1_val)) 
                                                      << 0x20U)) 
                                             << 0x11U));
    vlSelf->__PVT__jump_ROB_exec_o[6U] = (((IData)(
                                                   ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_jump_pr1_val)) 
                                                    << 0x20U)) 
                                           >> 0xfU) 
                                          | ((IData)(
                                                     (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_jump_pr1_val)) 
                                                       << 0x20U) 
                                                      >> 0x20U)) 
                                             << 0x11U));
    vlSelf->__PVT__jump_ROB_exec_o[7U] = ((0xfffe0000U 
                                           & vlSelf->__PVT__jump_ROB_exec_o[7U]) 
                                          | ((IData)(
                                                     (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_jump_pr1_val)) 
                                                       << 0x20U) 
                                                      >> 0x20U)) 
                                             >> 0xfU));
    vlSelf->__PVT__jump_ROB_exec_o[3U] = ((0x1fffU 
                                           & vlSelf->__PVT__jump_ROB_exec_o[3U]) 
                                          | ((IData)(
                                                     ((QData)((IData)(
                                                                      ((IData)(4U) 
                                                                       + 
                                                                       ((vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU] 
                                                                         << 3U) 
                                                                        | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                                                                           >> 0x1dU))))) 
                                                      << 0x20U)) 
                                             << 0xdU));
    vlSelf->__PVT__jump_ROB_exec_o[4U] = (((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(4U) 
                                                                     + 
                                                                     ((vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU] 
                                                                       << 3U) 
                                                                      | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                                                                         >> 0x1dU))))) 
                                                    << 0x20U)) 
                                           >> 0x13U) 
                                          | ((IData)(
                                                     (((QData)((IData)(
                                                                       ((IData)(4U) 
                                                                        + 
                                                                        ((vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU] 
                                                                          << 3U) 
                                                                         | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                                                                            >> 0x1dU))))) 
                                                       << 0x20U) 
                                                      >> 0x20U)) 
                                             << 0xdU));
    vlSelf->__PVT__jump_ROB_exec_o[5U] = ((0xffffe000U 
                                           & vlSelf->__PVT__jump_ROB_exec_o[5U]) 
                                          | ((IData)(
                                                     (((QData)((IData)(
                                                                       ((IData)(4U) 
                                                                        + 
                                                                        ((vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU] 
                                                                          << 3U) 
                                                                         | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                                                                            >> 0x1dU))))) 
                                                       << 0x20U) 
                                                      >> 0x20U)) 
                                             >> 0x13U));
    vlSelf->__PVT__jump_ROB_exec_o[1U] = (0x1fU & vlSelf->__PVT__jump_ROB_exec_o[1U]);
    vlSelf->__PVT__jump_ROB_exec_o[2U] = 0U;
    vlSelf->__PVT__jump_ROB_exec_o[3U] = (0xffffe000U 
                                          & vlSelf->__PVT__jump_ROB_exec_o[3U]);
    vlSelf->__PVT__jump_ROB_exec_o[1U] = ((0xfffffffbU 
                                           & vlSelf->__PVT__jump_ROB_exec_o[1U]) 
                                          | ((IData)(vlSelf->__PVT__cpu_execute__DOT__jump__DOT__mispredict) 
                                             << 2U));
    vlSelf->__PVT__jump_ROB_exec_o[0U] = (IData)((1ULL 
                                                  | ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__jump__DOT__br_target)) 
                                                     << 1U)));
    vlSelf->__PVT__jump_ROB_exec_o[1U] = ((0xfffffffeU 
                                           & vlSelf->__PVT__jump_ROB_exec_o[1U]) 
                                          | (IData)(
                                                    ((1ULL 
                                                      | ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__jump__DOT__br_target)) 
                                                         << 1U)) 
                                                     >> 0x20U)));
    vlSelf->__PVT__jump_ROB_exec_o[0xbU] = ((0x17fffU 
                                             & vlSelf->__PVT__jump_ROB_exec_o[0xbU]) 
                                            | (0x1ffffU 
                                               & ((IData)(vlSelf->__PVT__cpu_execute__DOT__jump_valid) 
                                                  << 0xfU)));
    vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__mispredict 
        = ((((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid) 
             & (vlSelf->__VdfgTmp_h4d6db996__0[1U] 
                >> 1U)) != (IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_en)) 
           | (((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid)
                ? ((vlSelf->__VdfgTmp_h4d6db996__0[9U] 
                    << 3U) | (vlSelf->__VdfgTmp_h4d6db996__0[8U] 
                              >> 0x1dU)) : 0U) != vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_target));
    vlSelf->__PVT__alu_ROB_exec_o[0U] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0U];
    vlSelf->__PVT__alu_ROB_exec_o[1U] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[1U];
    vlSelf->__PVT__alu_ROB_exec_o[2U] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[2U];
    vlSelf->__PVT__alu_ROB_exec_o[3U] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[3U];
    vlSelf->__PVT__alu_ROB_exec_o[4U] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[4U];
    vlSelf->__PVT__alu_ROB_exec_o[5U] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[5U];
    vlSelf->__PVT__alu_ROB_exec_o[6U] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[6U];
    vlSelf->__PVT__alu_ROB_exec_o[7U] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[7U];
    vlSelf->__PVT__alu_ROB_exec_o[8U] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[8U];
    vlSelf->__PVT__alu_ROB_exec_o[9U] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[9U];
    vlSelf->__PVT__alu_ROB_exec_o[0xaU] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0xaU];
    vlSelf->__PVT__alu_ROB_exec_o[0xbU] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0xbU];
    vlSelf->__PVT__alu_ROB_exec_o[5U] = ((0x1ffffU 
                                          & vlSelf->__PVT__alu_ROB_exec_o[5U]) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr1_val)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr2_val)))) 
                                            << 0x11U));
    vlSelf->__PVT__alu_ROB_exec_o[6U] = (((IData)((
                                                   ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr1_val)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr2_val)))) 
                                          >> 0xfU) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr1_val)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr2_val))) 
                                                     >> 0x20U)) 
                                            << 0x11U));
    vlSelf->__PVT__alu_ROB_exec_o[7U] = ((0xfffe0000U 
                                          & vlSelf->__PVT__alu_ROB_exec_o[7U]) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr1_val)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr2_val))) 
                                                     >> 0x20U)) 
                                            >> 0xfU));
    __Vtemp_14[2U] = ((IData)(((QData)((IData)(((1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                            >> 0x16U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                             >> 0x15U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                              >> 0x14U)))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x13U)))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a, 
                                                                  (0x1fU 
                                                                   & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                    : 0U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                              >> 0x14U)))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x13U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                    - vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))))
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                             >> 0x15U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                              >> 0x14U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x13U)))
                                                    ? 
                                                   (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                    & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)
                                                    : 
                                                   (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                    | vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x13U)))
                                                    ? 
                                                   (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                    : 
                                                   (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                    ^ vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                              >> 0x14U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x13U)))
                                                    ? 
                                                   (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                    < vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)
                                                    : 
                                                   VL_LTS_III(32, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x13U)))
                                                    ? 
                                                   (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                    : 
                                                   (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                    + vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))))))) 
                               << 0x20U)) << 8U);
    __Vtemp_14[3U] = (((IData)(((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                             >> 0x16U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                              >> 0x15U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x14U)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a, 
                                                                   (0x1fU 
                                                                    & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                     : 0U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x14U)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     - vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                              >> 0x15U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x14U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)
                                                     : 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     | vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                     : 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     ^ vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x14U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     < vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)
                                                     : 
                                                    VL_LTS_III(32, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                     : 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     + vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))))))) 
                                << 0x20U)) >> 0x18U) 
                      | ((IData)((((QData)((IData)(
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x16U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                 >> 0x15U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                  >> 0x14U)))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                   >> 0x13U)))
                                                        ? 
                                                       VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a, 
                                                                      (0x1fU 
                                                                       & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                        : 0U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                  >> 0x14U)))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                   >> 0x13U)))
                                                        ? 0U
                                                        : 
                                                       (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                        - vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                 >> 0x15U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                  >> 0x14U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                   >> 0x13U)))
                                                        ? 
                                                       (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                        & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)
                                                        : 
                                                       (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                        | vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                   >> 0x13U)))
                                                        ? 
                                                       (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                        : 
                                                       (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                        ^ vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                  >> 0x14U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                   >> 0x13U)))
                                                        ? 
                                                       (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                        < vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)
                                                        : 
                                                       VL_LTS_III(32, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                   >> 0x13U)))
                                                        ? 
                                                       (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                        << 
                                                        (0x1fU 
                                                         & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                        : 
                                                       (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                        + vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))))))) 
                                   << 0x20U) >> 0x20U)) 
                         << 8U));
    __Vtemp_14[4U] = ((IData)((((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                             >> 0x16U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                              >> 0x15U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x14U)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a, 
                                                                   (0x1fU 
                                                                    & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                     : 0U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x14U)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     - vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                              >> 0x15U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x14U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)
                                                     : 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     | vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                     : 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     ^ vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x14U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     < vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)
                                                     : 
                                                    VL_LTS_III(32, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                     : 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     + vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))))))) 
                                << 0x20U) >> 0x20U)) 
                      >> 0x18U);
    vlSelf->__PVT__alu_ROB_exec_o[1U] = (0x1fU & vlSelf->__PVT__alu_ROB_exec_o[1U]);
    vlSelf->__PVT__alu_ROB_exec_o[2U] = 0U;
    vlSelf->__PVT__alu_ROB_exec_o[3U] = (__Vtemp_14[2U] 
                                         << 5U);
    vlSelf->__PVT__alu_ROB_exec_o[4U] = ((__Vtemp_14[2U] 
                                          >> 0x1bU) 
                                         | (__Vtemp_14[3U] 
                                            << 5U));
    vlSelf->__PVT__alu_ROB_exec_o[5U] = ((0xffffe000U 
                                          & vlSelf->__PVT__alu_ROB_exec_o[5U]) 
                                         | ((__Vtemp_14[3U] 
                                             >> 0x1bU) 
                                            | (__Vtemp_14[4U] 
                                               << 5U)));
    vlSelf->__PVT__alu_ROB_exec_o[1U] = ((0xfffffffbU 
                                          & vlSelf->__PVT__alu_ROB_exec_o[1U]) 
                                         | (4U & ((0xfffffffcU 
                                                   & (vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[1U] 
                                                      << 1U)) 
                                                  | ((((vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[9U] 
                                                        << 3U) 
                                                       | (vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[8U] 
                                                          >> 0x1dU)) 
                                                      != 
                                                      ((IData)(4U) 
                                                       + 
                                                       ((vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0xaU] 
                                                         << 3U) 
                                                        | (vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[9U] 
                                                           >> 0x1dU)))) 
                                                     << 2U))));
    vlSelf->__PVT__alu_ROB_exec_o[0U] = (IData)(((QData)((IData)(
                                                                 ((IData)(4U) 
                                                                  + 
                                                                  ((vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0xaU] 
                                                                    << 3U) 
                                                                   | (vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[9U] 
                                                                      >> 0x1dU))))) 
                                                 << 1U));
    vlSelf->__PVT__alu_ROB_exec_o[1U] = ((0xfffffffeU 
                                          & vlSelf->__PVT__alu_ROB_exec_o[1U]) 
                                         | (IData)(
                                                   (((QData)((IData)(
                                                                     ((IData)(4U) 
                                                                      + 
                                                                      ((vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0xaU] 
                                                                        << 3U) 
                                                                       | (vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[9U] 
                                                                          >> 0x1dU))))) 
                                                     << 1U) 
                                                    >> 0x20U)));
    vlSelf->__PVT__alu_ROB_exec_o[0xbU] = ((0x17fffU 
                                            & vlSelf->__PVT__alu_ROB_exec_o[0xbU]) 
                                           | (0x1ffffU 
                                              & ((IData)(vlSelf->__PVT__cpu_execute__DOT__alu_valid) 
                                                 << 0xfU)));
    vlSelf->__PVT__cmp_ROB_exec_o[0U] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[0U];
    vlSelf->__PVT__cmp_ROB_exec_o[1U] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[1U];
    vlSelf->__PVT__cmp_ROB_exec_o[2U] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[2U];
    vlSelf->__PVT__cmp_ROB_exec_o[3U] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[3U];
    vlSelf->__PVT__cmp_ROB_exec_o[4U] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[4U];
    vlSelf->__PVT__cmp_ROB_exec_o[5U] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[5U];
    vlSelf->__PVT__cmp_ROB_exec_o[6U] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[6U];
    vlSelf->__PVT__cmp_ROB_exec_o[7U] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[7U];
    vlSelf->__PVT__cmp_ROB_exec_o[8U] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[8U];
    vlSelf->__PVT__cmp_ROB_exec_o[9U] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[9U];
    vlSelf->__PVT__cmp_ROB_exec_o[0xaU] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[0xaU];
    vlSelf->__PVT__cmp_ROB_exec_o[0xbU] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[0xbU];
    vlSelf->__PVT__cmp_ROB_exec_o[8U] = ((0x1fffffffU 
                                          & vlSelf->__PVT__cmp_ROB_exec_o[8U]) 
                                         | (((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__mispredict)
                                              ? vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_target
                                              : ((vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[9U] 
                                                  << 3U) 
                                                 | (vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[8U] 
                                                    >> 0x1dU))) 
                                            << 0x1dU));
    vlSelf->__PVT__cmp_ROB_exec_o[9U] = ((0xe0000000U 
                                          & vlSelf->__PVT__cmp_ROB_exec_o[9U]) 
                                         | (((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__mispredict)
                                              ? vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_target
                                              : ((vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[9U] 
                                                  << 3U) 
                                                 | (vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[8U] 
                                                    >> 0x1dU))) 
                                            >> 3U));
    vlSelf->__PVT__cmp_ROB_exec_o[5U] = ((0x1ffffU 
                                          & vlSelf->__PVT__cmp_ROB_exec_o[5U]) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b)))) 
                                            << 0x11U));
    vlSelf->__PVT__cmp_ROB_exec_o[6U] = (((IData)((
                                                   ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b)))) 
                                          >> 0xfU) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b))) 
                                                     >> 0x20U)) 
                                            << 0x11U));
    vlSelf->__PVT__cmp_ROB_exec_o[7U] = ((0xfffe0000U 
                                          & vlSelf->__PVT__cmp_ROB_exec_o[7U]) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b))) 
                                                     >> 0x20U)) 
                                            >> 0xfU));
    vlSelf->__PVT__cmp_ROB_exec_o[1U] = (0x1fU & vlSelf->__PVT__cmp_ROB_exec_o[1U]);
    vlSelf->__PVT__cmp_ROB_exec_o[2U] = 0U;
    vlSelf->__PVT__cmp_ROB_exec_o[3U] = 0U;
    vlSelf->__PVT__cmp_ROB_exec_o[4U] = 0U;
    vlSelf->__PVT__cmp_ROB_exec_o[5U] = (0xffffe000U 
                                         & vlSelf->__PVT__cmp_ROB_exec_o[5U]);
    vlSelf->__PVT__cmp_ROB_exec_o[1U] = ((0xfffffffbU 
                                          & vlSelf->__PVT__cmp_ROB_exec_o[1U]) 
                                         | ((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__mispredict) 
                                            << 2U));
    vlSelf->__PVT__cmp_ROB_exec_o[0U] = (IData)((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_target)) 
                                                  << 1U) 
                                                 | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_en))));
    vlSelf->__PVT__cmp_ROB_exec_o[1U] = ((0xfffffffeU 
                                          & vlSelf->__PVT__cmp_ROB_exec_o[1U]) 
                                         | (IData)(
                                                   ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_target)) 
                                                      << 1U) 
                                                     | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_en))) 
                                                    >> 0x20U)));
    vlSelf->__PVT__cmp_ROB_exec_o[0xbU] = ((0x17fffU 
                                            & vlSelf->__PVT__cmp_ROB_exec_o[0xbU]) 
                                           | (0x1ffffU 
                                              & ((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_valid) 
                                                 << 0xfU)));
}
