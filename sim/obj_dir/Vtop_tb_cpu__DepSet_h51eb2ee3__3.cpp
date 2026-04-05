// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb_cpu.h"

extern const VlWide<12>/*383:0*/ Vtop_tb__ConstPool__CONST_h3c5fcb02_0;

VL_INLINE_OPT void Vtop_tb_cpu___nba_sequent__TOP__top_tb__dut__2(Vtop_tb_cpu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_tb_cpu___nba_sequent__TOP__top_tb__dut__2\n"); );
    // Init
    IData/*31:0*/ cpu_execute__DOT__cmp__DOT____VdfgTmp_h264d71b2__0;
    cpu_execute__DOT__cmp__DOT____VdfgTmp_h264d71b2__0 = 0;
    CData/*0:0*/ cpu_execute__DOT__mem__DOT____VdfgTmp_h0950ef85__0;
    cpu_execute__DOT__mem__DOT____VdfgTmp_h0950ef85__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_13;
    // Body
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [2U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [2U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 2U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [3U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [3U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 3U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [4U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [4U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 4U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [5U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [5U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 5U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [6U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [6U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 6U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [7U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [7U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 7U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [8U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [8U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 8U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [9U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [9U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 9U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xaU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xaU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0xaU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xbU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xbU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0xbU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xcU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xcU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0xcU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xdU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xdU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0xdU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xeU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xeU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0xeU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xfU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xfU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0xfU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x10U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x10U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x10U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x11U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x11U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x11U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x12U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x12U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x12U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x13U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x13U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x13U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x14U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x14U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x14U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x15U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x15U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x15U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x16U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x16U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x16U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x17U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x17U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x17U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x18U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x18U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x18U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x19U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x19U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x19U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x1aU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x1bU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x1cU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x1dU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x1eU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x1fU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x20U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x20U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x20U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x21U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x21U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x21U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x22U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x22U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x22U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x23U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x23U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x23U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x24U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x24U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x24U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x25U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x25U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x25U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x26U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x26U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x26U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x27U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x27U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x27U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x28U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x28U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x28U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x29U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x29U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x29U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x2aU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x2bU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x2cU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x2dU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x2eU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x2fU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x30U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x30U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x30U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x31U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x31U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x31U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x32U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x32U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x32U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x33U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x33U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x33U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x34U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x34U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x34U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x35U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x35U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x35U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x36U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x36U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x36U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x37U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x37U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x37U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x38U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x38U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x38U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x39U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x39U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x39U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x3aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x3aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x3aU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x3bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x3bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x3bU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x3cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x3cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x3cU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x3dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x3dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x3dU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x3eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x3eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x3eU;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 0U;
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [1U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [2U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [3U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [4U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [5U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [6U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [7U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [8U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [9U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0xaU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0xbU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0xcU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0xdU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0xeU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0xfU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x10U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x11U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x12U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x13U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x14U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x15U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x16U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x17U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x18U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x19U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x1aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x1bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x1cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x1dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x1eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x1fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x20U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x21U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x22U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x23U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x24U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x25U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x26U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x27U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x28U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x29U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x2aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x2bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x2cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x2dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x2eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x2fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x30U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x31U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x32U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x33U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x34U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x35U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x36U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x37U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x38U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x39U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x3aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x3bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x3cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
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
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x3fU;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_hc4999392__0 
        = ((0xfU & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtr)) 
           == (0xfU & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr)));
    if (vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx_valid) {
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0U] 
            = vlSelf->__VdfgTmp_h9e6fb4d7__0[0U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[1U] 
            = vlSelf->__VdfgTmp_h9e6fb4d7__0[1U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[2U] 
            = vlSelf->__VdfgTmp_h9e6fb4d7__0[2U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[3U] 
            = vlSelf->__VdfgTmp_h9e6fb4d7__0[3U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[4U] 
            = vlSelf->__VdfgTmp_h9e6fb4d7__0[4U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[5U] 
            = vlSelf->__VdfgTmp_h9e6fb4d7__0[5U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[6U] 
            = vlSelf->__VdfgTmp_h9e6fb4d7__0[6U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[7U] 
            = vlSelf->__VdfgTmp_h9e6fb4d7__0[7U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[8U] 
            = vlSelf->__VdfgTmp_h9e6fb4d7__0[8U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[9U] 
            = vlSelf->__VdfgTmp_h9e6fb4d7__0[9U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0xaU] 
            = vlSelf->__VdfgTmp_h9e6fb4d7__0[0xaU];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0xbU] 
            = vlSelf->__VdfgTmp_h9e6fb4d7__0[0xbU];
        vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
            = vlSelf->__VdfgTmp_h83d90f8b__0;
    } else {
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[0U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[1U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[1U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[2U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[2U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[3U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[3U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[4U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[4U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[5U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[5U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[6U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[6U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[7U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[7U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[8U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[8U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[9U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[9U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0xaU] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[0xaU];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0xbU] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[0xbU];
        vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i = 0ULL;
    }
    vlSelf->__PVT__cpu_execute__DOT__mul_valid = ((~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mul_empty_i)) 
                                                  & ((IData)(vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx_valid) 
                                                     & (vlSelf->__VdfgTmp_h9e6fb4d7__0[0xbU] 
                                                        >> 0x12U)));
    vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val 
        = (((IData)(vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx_valid) 
            & (IData)((vlSelf->__VdfgTmp_h83d90f8b__0 
                       >> 0xfU))) ? vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf
           [((IData)(vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx_valid)
              ? (0x3fU & (IData)((vlSelf->__VdfgTmp_h83d90f8b__0 
                                  >> 8U))) : 0U)] : 0U);
    vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val 
        = (((IData)(vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx_valid) 
            & (IData)((vlSelf->__VdfgTmp_h83d90f8b__0 
                       >> 0xeU))) ? vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf
           [((IData)(vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx_valid)
              ? (0x3fU & (IData)((vlSelf->__VdfgTmp_h83d90f8b__0 
                                  >> 2U))) : 0U)] : 0U);
    if (vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx_valid) {
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0U] 
            = vlSelf->__VdfgTmp_h21fa4430__0[0U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[1U] 
            = vlSelf->__VdfgTmp_h21fa4430__0[1U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[2U] 
            = vlSelf->__VdfgTmp_h21fa4430__0[2U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[3U] 
            = vlSelf->__VdfgTmp_h21fa4430__0[3U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[4U] 
            = vlSelf->__VdfgTmp_h21fa4430__0[4U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[5U] 
            = vlSelf->__VdfgTmp_h21fa4430__0[5U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[6U] 
            = vlSelf->__VdfgTmp_h21fa4430__0[6U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[7U] 
            = vlSelf->__VdfgTmp_h21fa4430__0[7U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[8U] 
            = vlSelf->__VdfgTmp_h21fa4430__0[8U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[9U] 
            = vlSelf->__VdfgTmp_h21fa4430__0[9U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0xaU] 
            = vlSelf->__VdfgTmp_h21fa4430__0[0xaU];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0xbU] 
            = vlSelf->__VdfgTmp_h21fa4430__0[0xbU];
        vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
            = vlSelf->__VdfgTmp_hfd0da316__0;
    } else {
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[0U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[1U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[1U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[2U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[2U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[3U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[3U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[4U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[4U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[5U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[5U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[6U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[6U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[7U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[7U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[8U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[8U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[9U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[9U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0xaU] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[0xaU];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0xbU] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[0xbU];
        vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i = 0ULL;
    }
    vlSelf->__PVT__cpu_execute__DOT__alu_valid = ((~ (IData)(vlSelf->__PVT__cpu_execute__DOT__alu_empty_i)) 
                                                  & ((IData)(vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx_valid) 
                                                     & (vlSelf->__VdfgTmp_h21fa4430__0[0xbU] 
                                                        >> 0x12U)));
    vlSelf->cpu_execute__DOT____Vcellinp__PRF__lookup_alu_pr1_valid 
        = ((IData)(vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx_valid) 
           & (IData)((vlSelf->__VdfgTmp_hfd0da316__0 
                      >> 0xfU)));
    vlSelf->cpu_execute__DOT____Vcellinp__PRF__lookup_alu_pr2_valid 
        = ((IData)(vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx_valid) 
           & (IData)((vlSelf->__VdfgTmp_hfd0da316__0 
                      >> 0xeU)));
    if (vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx_valid) {
        vlSelf->__PVT__cpu_execute__DOT__jump_MIDCORE_data_i 
            = vlSelf->__VdfgTmp_h730d8d3f__0;
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0U] 
            = vlSelf->__VdfgTmp_h4b518085__0[0U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[1U] 
            = vlSelf->__VdfgTmp_h4b518085__0[1U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[2U] 
            = vlSelf->__VdfgTmp_h4b518085__0[2U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[3U] 
            = vlSelf->__VdfgTmp_h4b518085__0[3U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[4U] 
            = vlSelf->__VdfgTmp_h4b518085__0[4U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[5U] 
            = vlSelf->__VdfgTmp_h4b518085__0[5U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[6U] 
            = vlSelf->__VdfgTmp_h4b518085__0[6U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[7U] 
            = vlSelf->__VdfgTmp_h4b518085__0[7U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[8U] 
            = vlSelf->__VdfgTmp_h4b518085__0[8U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
            = vlSelf->__VdfgTmp_h4b518085__0[9U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU] 
            = vlSelf->__VdfgTmp_h4b518085__0[0xaU];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xbU] 
            = vlSelf->__VdfgTmp_h4b518085__0[0xbU];
    } else {
        vlSelf->__PVT__cpu_execute__DOT__jump_MIDCORE_data_i = 0ULL;
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[0U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[1U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[1U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[2U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[2U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[3U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[3U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[4U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[4U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[5U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[5U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[6U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[6U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[7U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[7U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[8U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[8U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[9U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[0xaU];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xbU] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[0xbU];
    }
    vlSelf->__PVT__cpu_execute__DOT__lookup_jump_pr1_val 
        = (((IData)(vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx_valid) 
            & (IData)((vlSelf->__VdfgTmp_h730d8d3f__0 
                       >> 0xfU))) ? vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf
           [((IData)(vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx_valid)
              ? (0x3fU & (IData)((vlSelf->__VdfgTmp_h730d8d3f__0 
                                  >> 8U))) : 0U)] : 0U);
    vlSelf->__PVT__jump_valid = ((~ (IData)(vlSelf->__PVT__cpu_execute__DOT__jump_empty_i)) 
                                 & ((IData)(vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx_valid) 
                                    & (vlSelf->__VdfgTmp_h4b518085__0[0xbU] 
                                       >> 0x12U)));
    if (vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid) {
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[0U] 
            = vlSelf->__VdfgTmp_h4d6ddaf4__0[0U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[1U] 
            = vlSelf->__VdfgTmp_h4d6ddaf4__0[1U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[2U] 
            = vlSelf->__VdfgTmp_h4d6ddaf4__0[2U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[3U] 
            = vlSelf->__VdfgTmp_h4d6ddaf4__0[3U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[4U] 
            = vlSelf->__VdfgTmp_h4d6ddaf4__0[4U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[5U] 
            = vlSelf->__VdfgTmp_h4d6ddaf4__0[5U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[6U] 
            = vlSelf->__VdfgTmp_h4d6ddaf4__0[6U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[7U] 
            = vlSelf->__VdfgTmp_h4d6ddaf4__0[7U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[8U] 
            = vlSelf->__VdfgTmp_h4d6ddaf4__0[8U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[9U] 
            = vlSelf->__VdfgTmp_h4d6ddaf4__0[9U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[0xaU] 
            = vlSelf->__VdfgTmp_h4d6ddaf4__0[0xaU];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[0xbU] 
            = vlSelf->__VdfgTmp_h4d6ddaf4__0[0xbU];
        cpu_execute__DOT__cmp__DOT____VdfgTmp_h264d71b2__0 
            = ((vlSelf->__VdfgTmp_h4d6ddaf4__0[0xaU] 
                << 1U) | (vlSelf->__VdfgTmp_h4d6ddaf4__0[9U] 
                          >> 0x1fU));
        vlSelf->__PVT__cpu_execute__DOT__cmp_MIDCORE_data_i 
            = vlSelf->__VdfgTmp_he47ebcff__0;
    } else {
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[0U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[0U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[1U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[1U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[2U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[2U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[3U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[3U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[4U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[4U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[5U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[5U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[6U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[6U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[7U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[7U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[8U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[8U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[9U] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[9U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[0xaU] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[0xaU];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[0xbU] 
            = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[0xbU];
        cpu_execute__DOT__cmp__DOT____VdfgTmp_h264d71b2__0 = 0U;
        vlSelf->__PVT__cpu_execute__DOT__cmp_MIDCORE_data_i = 0ULL;
    }
    vlSelf->__PVT__cmp_valid = ((~ (IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_empty_i)) 
                                & ((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid) 
                                   & (vlSelf->__VdfgTmp_h4d6ddaf4__0[0xbU] 
                                      >> 0x12U)));
    vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a = 
        (((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid) 
          & (IData)((vlSelf->__VdfgTmp_he47ebcff__0 
                     >> 0xfU))) ? vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf
         [((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid)
            ? (0x3fU & (IData)((vlSelf->__VdfgTmp_he47ebcff__0 
                                >> 8U))) : 0U)] : 0U);
    vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b = 
        (((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid) 
          & (IData)((vlSelf->__VdfgTmp_he47ebcff__0 
                     >> 0xeU))) ? vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf
         [((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid)
            ? (0x3fU & (IData)((vlSelf->__VdfgTmp_he47ebcff__0 
                                >> 2U))) : 0U)] : 0U);
    vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h3beb847a__0 
        = ((IData)(vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h7334ccba__0) 
           | (2U == (7U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U] 
                           >> 6U))));
    vlSelf->__PVT__cpu_execute__DOT__mem_empty_i = 
        ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr) 
         == (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr));
    vlSelf->__PVT__load_full = (((1U & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr) 
                                        >> 4U)) != 
                                 (1U & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr) 
                                        >> 4U))) & 
                                ((0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr)) 
                                 == (0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))));
    vlSelf->__PVT__cpu_execute__DOT__READY_i = (vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready
                                                [(0xfU 
                                                  & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))] 
                                                & vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready
                                                [(0xfU 
                                                  & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))]);
    vlSelf->__PVT__cpu_execute__DOT__LDorST_i = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__LDorST
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0U] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][0U];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[1U] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][1U];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[2U] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][2U];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[3U] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][3U];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[4U] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][4U];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[5U] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][5U];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[6U] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][6U];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[7U] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][7U];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[8U] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][8U];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[9U] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][9U];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xaU] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][0xaU];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xbU] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][0xbU];
    vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))];
    vlSelf->__PVT__cpu_frontend__DOT__fetchq_full = 
        ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_full) 
         | ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_full) 
            | ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_full) 
               | (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_full))));
    vlSelf->__PVT__fetch_empty = ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_empty) 
                                  | ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_empty) 
                                     | ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_empty) 
                                        | (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_empty))));
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
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__full 
        = (((1U & ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtr) 
                   >> 4U)) != (1U & ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr) 
                                     >> 4U))) & (IData)(vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_hc4999392__0));
    vlSelf->__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val), 
                      VL_EXTENDS_QI(64,32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val));
    vlSelf->cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0 
        = ((0x80000000U == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val) 
           & (0xffffffffU == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val));
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
                ? ((vlSelf->__VdfgTmp_h21fa4430__0[0xaU] 
                    << 1U) | (vlSelf->__VdfgTmp_h21fa4430__0[9U] 
                              >> 0x1fU)) : 0U);
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
    vlSelf->__PVT__cpu_execute__DOT__jump__DOT__br_target 
        = ((4U == (7U & (IData)((vlSelf->__PVT__cpu_execute__DOT__jump_MIDCORE_data_i 
                                 >> 0x17U)))) ? (((
                                                   vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU] 
                                                   << 1U) 
                                                  | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                                                     >> 0x1fU)) 
                                                 + (IData)(
                                                           (vlSelf->__PVT__cpu_execute__DOT__jump_MIDCORE_data_i 
                                                            >> 0x1aU)))
            : ((5U == (7U & (IData)((vlSelf->__PVT__cpu_execute__DOT__jump_MIDCORE_data_i 
                                     >> 0x17U)))) ? 
               (0xfffffffeU & (vlSelf->__PVT__cpu_execute__DOT__lookup_jump_pr1_val 
                               + (IData)((vlSelf->__PVT__cpu_execute__DOT__jump_MIDCORE_data_i 
                                          >> 0x1aU))))
                : (((vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU] 
                     << 1U) | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                               >> 0x1fU)) + (IData)(
                                                    (vlSelf->__PVT__cpu_execute__DOT__jump_MIDCORE_data_i 
                                                     >> 0x1aU)))));
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
    vlSelf->cpu_execute__DOT__mem__DOT____VdfgTmp_h7b9661f3__0 
        = ((IData)(vlSelf->__PVT__cpu_execute__DOT__READY_i) 
           & (IData)(vlSymsp->TOP.dmem_resp));
    cpu_execute__DOT__mem__DOT____VdfgTmp_h0950ef85__0 
        = ((vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xbU] 
            >> 0x12U) & (IData)(vlSelf->__PVT__cpu_execute__DOT__READY_i));
    vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr2_val 
        = ((1U & (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                          >> 0xeU))) ? vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf
           [(0x3fU & (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                              >> 2U)))] : 0U);
    vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr1_val 
        = ((1U & (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                          >> 0xfU))) ? vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf
           [(0x3fU & (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                              >> 8U)))] : 0U);
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
    vlSelf->__PVT__mul_ROB_exec_o[5U] = ((0x7ffffU 
                                          & vlSelf->__PVT__mul_ROB_exec_o[5U]) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)))) 
                                            << 0x13U));
    vlSelf->__PVT__mul_ROB_exec_o[6U] = (((IData)((
                                                   ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)))) 
                                          >> 0xdU) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))) 
                                                     >> 0x20U)) 
                                            << 0x13U));
    vlSelf->__PVT__mul_ROB_exec_o[7U] = ((0xfff80000U 
                                          & vlSelf->__PVT__mul_ROB_exec_o[7U]) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))) 
                                                     >> 0x20U)) 
                                            >> 0xdU));
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
    vlSelf->__PVT__mul_ROB_exec_o[1U] = (0x7fU & vlSelf->__PVT__mul_ROB_exec_o[1U]);
    vlSelf->__PVT__mul_ROB_exec_o[2U] = 0U;
    vlSelf->__PVT__mul_ROB_exec_o[3U] = (__Vtemp_11[2U] 
                                         << 7U);
    vlSelf->__PVT__mul_ROB_exec_o[4U] = ((__Vtemp_11[2U] 
                                          >> 0x19U) 
                                         | (__Vtemp_11[3U] 
                                            << 7U));
    vlSelf->__PVT__mul_ROB_exec_o[5U] = ((0xffff8000U 
                                          & vlSelf->__PVT__mul_ROB_exec_o[5U]) 
                                         | ((__Vtemp_11[3U] 
                                             >> 0x19U) 
                                            | (__Vtemp_11[4U] 
                                               << 7U)));
    vlSelf->__PVT__mul_ROB_exec_o[1U] = ((0xffffffefU 
                                          & vlSelf->__PVT__mul_ROB_exec_o[1U]) 
                                         | (0x10U & 
                                            ((0xfffffff0U 
                                              & (vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[1U] 
                                                 << 1U)) 
                                             | ((((vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[9U] 
                                                   << 1U) 
                                                  | (vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[8U] 
                                                     >> 0x1fU)) 
                                                 != 
                                                 ((IData)(4U) 
                                                  + 
                                                  ((vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0xaU] 
                                                    << 1U) 
                                                   | (vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[9U] 
                                                      >> 0x1fU)))) 
                                                << 4U))));
    vlSelf->__PVT__mul_ROB_exec_o[0U] = ((3U & vlSelf->__PVT__mul_ROB_exec_o[0U]) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     ((IData)(4U) 
                                                                      + 
                                                                      ((vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0xaU] 
                                                                        << 1U) 
                                                                       | (vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[9U] 
                                                                          >> 0x1fU))))) 
                                                     << 1U)) 
                                            << 2U));
    vlSelf->__PVT__mul_ROB_exec_o[1U] = ((0xfffffff8U 
                                          & vlSelf->__PVT__mul_ROB_exec_o[1U]) 
                                         | (((IData)(
                                                     ((QData)((IData)(
                                                                      ((IData)(4U) 
                                                                       + 
                                                                       ((vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0xaU] 
                                                                         << 1U) 
                                                                        | (vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[9U] 
                                                                           >> 0x1fU))))) 
                                                      << 1U)) 
                                             >> 0x1eU) 
                                            | ((IData)(
                                                       (((QData)((IData)(
                                                                         ((IData)(4U) 
                                                                          + 
                                                                          ((vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0xaU] 
                                                                            << 1U) 
                                                                           | (vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[9U] 
                                                                              >> 0x1fU))))) 
                                                         << 1U) 
                                                        >> 0x20U)) 
                                               << 2U)));
    vlSelf->__PVT__mul_ROB_exec_o[0xbU] = ((0x5ffffU 
                                            & vlSelf->__PVT__mul_ROB_exec_o[0xbU]) 
                                           | (0x7ffffU 
                                              & ((IData)(vlSelf->__PVT__cpu_execute__DOT__mul_valid) 
                                                 << 0x11U)));
    vlSelf->__PVT__cpu_execute__DOT__jump__DOT__mispredict 
        = (1U & (~ ((IData)(vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx_valid) 
                    & ((vlSelf->__VdfgTmp_h4b518085__0[1U] 
                        >> 3U) & (((IData)(vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx_valid)
                                    ? ((vlSelf->__VdfgTmp_h4b518085__0[9U] 
                                        << 1U) | (vlSelf->__VdfgTmp_h4b518085__0[8U] 
                                                  >> 0x1fU))
                                    : 0U) == vlSelf->__PVT__cpu_execute__DOT__jump__DOT__br_target)))));
    vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_target 
        = ((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_en)
            ? (cpu_execute__DOT__cmp__DOT____VdfgTmp_h264d71b2__0 
               + ((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid)
                   ? (IData)((vlSelf->__VdfgTmp_he47ebcff__0 
                              >> 0x1aU)) : 0U)) : ((IData)(4U) 
                                                   + cpu_execute__DOT__cmp__DOT____VdfgTmp_h264d71b2__0));
    vlSelf->__PVT__cpu_execute__DOT__load_valid = (
                                                   (~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem_empty_i)) 
                                                   & ((~ (IData)(vlSelf->__PVT__cpu_execute__DOT__LDorST_i)) 
                                                      & (IData)(vlSelf->cpu_execute__DOT__mem__DOT____VdfgTmp_h7b9661f3__0)));
    if (cpu_execute__DOT__mem__DOT____VdfgTmp_h0950ef85__0) {
        vlSelf->cpu_execute__DOT__mem__DOT____VdfgTmp_he05e7ede__0 
            = (1U & (~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem_empty_i)));
        vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr 
            = (vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr1_val 
               + (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                          >> 0x1aU)));
    } else {
        vlSelf->cpu_execute__DOT__mem__DOT____VdfgTmp_he05e7ede__0 = 0U;
        vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr = 0U;
    }
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
    vlSelf->__PVT__alu_ROB_exec_o[5U] = ((0x7ffffU 
                                          & vlSelf->__PVT__alu_ROB_exec_o[5U]) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr1_val)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr2_val)))) 
                                            << 0x13U));
    vlSelf->__PVT__alu_ROB_exec_o[6U] = (((IData)((
                                                   ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr1_val)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr2_val)))) 
                                          >> 0xdU) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr1_val)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr2_val))) 
                                                     >> 0x20U)) 
                                            << 0x13U));
    vlSelf->__PVT__alu_ROB_exec_o[7U] = ((0xfff80000U 
                                          & vlSelf->__PVT__alu_ROB_exec_o[7U]) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr1_val)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr2_val))) 
                                                     >> 0x20U)) 
                                            >> 0xdU));
    __Vtemp_13[2U] = ((IData)(((QData)((IData)(((1U 
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
    __Vtemp_13[3U] = (((IData)(((QData)((IData)(((1U 
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
    __Vtemp_13[4U] = ((IData)((((QData)((IData)(((1U 
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
    vlSelf->__PVT__alu_ROB_exec_o[1U] = (0x7fU & vlSelf->__PVT__alu_ROB_exec_o[1U]);
    vlSelf->__PVT__alu_ROB_exec_o[2U] = 0U;
    vlSelf->__PVT__alu_ROB_exec_o[3U] = (__Vtemp_13[2U] 
                                         << 7U);
    vlSelf->__PVT__alu_ROB_exec_o[4U] = ((__Vtemp_13[2U] 
                                          >> 0x19U) 
                                         | (__Vtemp_13[3U] 
                                            << 7U));
    vlSelf->__PVT__alu_ROB_exec_o[5U] = ((0xffff8000U 
                                          & vlSelf->__PVT__alu_ROB_exec_o[5U]) 
                                         | ((__Vtemp_13[3U] 
                                             >> 0x19U) 
                                            | (__Vtemp_13[4U] 
                                               << 7U)));
    vlSelf->__PVT__alu_ROB_exec_o[1U] = ((0xffffffefU 
                                          & vlSelf->__PVT__alu_ROB_exec_o[1U]) 
                                         | (0x10U & 
                                            ((0xfffffff0U 
                                              & (vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[1U] 
                                                 << 1U)) 
                                             | ((((vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[9U] 
                                                   << 1U) 
                                                  | (vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[8U] 
                                                     >> 0x1fU)) 
                                                 != 
                                                 ((IData)(4U) 
                                                  + 
                                                  ((vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0xaU] 
                                                    << 1U) 
                                                   | (vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[9U] 
                                                      >> 0x1fU)))) 
                                                << 4U))));
    vlSelf->__PVT__alu_ROB_exec_o[0U] = ((3U & vlSelf->__PVT__alu_ROB_exec_o[0U]) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     ((IData)(4U) 
                                                                      + 
                                                                      ((vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0xaU] 
                                                                        << 1U) 
                                                                       | (vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[9U] 
                                                                          >> 0x1fU))))) 
                                                     << 1U)) 
                                            << 2U));
    vlSelf->__PVT__alu_ROB_exec_o[1U] = ((0xfffffff8U 
                                          & vlSelf->__PVT__alu_ROB_exec_o[1U]) 
                                         | (((IData)(
                                                     ((QData)((IData)(
                                                                      ((IData)(4U) 
                                                                       + 
                                                                       ((vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0xaU] 
                                                                         << 1U) 
                                                                        | (vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[9U] 
                                                                           >> 0x1fU))))) 
                                                      << 1U)) 
                                             >> 0x1eU) 
                                            | ((IData)(
                                                       (((QData)((IData)(
                                                                         ((IData)(4U) 
                                                                          + 
                                                                          ((vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0xaU] 
                                                                            << 1U) 
                                                                           | (vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[9U] 
                                                                              >> 0x1fU))))) 
                                                         << 1U) 
                                                        >> 0x20U)) 
                                               << 2U)));
    vlSelf->__PVT__alu_ROB_exec_o[0xbU] = ((0x5ffffU 
                                            & vlSelf->__PVT__alu_ROB_exec_o[0xbU]) 
                                           | (0x7ffffU 
                                              & ((IData)(vlSelf->__PVT__cpu_execute__DOT__alu_valid) 
                                                 << 0x11U)));
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
    vlSelf->__PVT__jump_ROB_exec_o[8U] = ((0x7fffffffU 
                                           & vlSelf->__PVT__jump_ROB_exec_o[8U]) 
                                          | (((IData)(vlSelf->__PVT__cpu_execute__DOT__jump__DOT__mispredict)
                                               ? vlSelf->__PVT__cpu_execute__DOT__jump__DOT__br_target
                                               : ((
                                                   vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                                                   << 1U) 
                                                  | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[8U] 
                                                     >> 0x1fU))) 
                                             << 0x1fU));
    vlSelf->__PVT__jump_ROB_exec_o[9U] = ((0x80000000U 
                                           & vlSelf->__PVT__jump_ROB_exec_o[9U]) 
                                          | (((IData)(vlSelf->__PVT__cpu_execute__DOT__jump__DOT__mispredict)
                                               ? vlSelf->__PVT__cpu_execute__DOT__jump__DOT__br_target
                                               : ((
                                                   vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                                                   << 1U) 
                                                  | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[8U] 
                                                     >> 0x1fU))) 
                                             >> 1U));
    vlSelf->__PVT__jump_ROB_exec_o[5U] = ((0x7ffffU 
                                           & vlSelf->__PVT__jump_ROB_exec_o[5U]) 
                                          | ((IData)(
                                                     ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_jump_pr1_val)) 
                                                      << 0x20U)) 
                                             << 0x13U));
    vlSelf->__PVT__jump_ROB_exec_o[6U] = (((IData)(
                                                   ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_jump_pr1_val)) 
                                                    << 0x20U)) 
                                           >> 0xdU) 
                                          | ((IData)(
                                                     (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_jump_pr1_val)) 
                                                       << 0x20U) 
                                                      >> 0x20U)) 
                                             << 0x13U));
    vlSelf->__PVT__jump_ROB_exec_o[7U] = ((0xfff80000U 
                                           & vlSelf->__PVT__jump_ROB_exec_o[7U]) 
                                          | ((IData)(
                                                     (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_jump_pr1_val)) 
                                                       << 0x20U) 
                                                      >> 0x20U)) 
                                             >> 0xdU));
    vlSelf->__PVT__jump_ROB_exec_o[3U] = ((0x7fffU 
                                           & vlSelf->__PVT__jump_ROB_exec_o[3U]) 
                                          | ((IData)(
                                                     ((QData)((IData)(
                                                                      ((IData)(4U) 
                                                                       + 
                                                                       ((vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU] 
                                                                         << 1U) 
                                                                        | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                                                                           >> 0x1fU))))) 
                                                      << 0x20U)) 
                                             << 0xfU));
    vlSelf->__PVT__jump_ROB_exec_o[4U] = (((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(4U) 
                                                                     + 
                                                                     ((vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU] 
                                                                       << 1U) 
                                                                      | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x20U)) 
                                           >> 0x11U) 
                                          | ((IData)(
                                                     (((QData)((IData)(
                                                                       ((IData)(4U) 
                                                                        + 
                                                                        ((vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU] 
                                                                          << 1U) 
                                                                         | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                                                                            >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      >> 0x20U)) 
                                             << 0xfU));
    vlSelf->__PVT__jump_ROB_exec_o[5U] = ((0xffff8000U 
                                           & vlSelf->__PVT__jump_ROB_exec_o[5U]) 
                                          | ((IData)(
                                                     (((QData)((IData)(
                                                                       ((IData)(4U) 
                                                                        + 
                                                                        ((vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU] 
                                                                          << 1U) 
                                                                         | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                                                                            >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      >> 0x20U)) 
                                             >> 0x11U));
    vlSelf->__PVT__jump_ROB_exec_o[1U] = (0x7fU & vlSelf->__PVT__jump_ROB_exec_o[1U]);
    vlSelf->__PVT__jump_ROB_exec_o[2U] = 0U;
    vlSelf->__PVT__jump_ROB_exec_o[3U] = (0xffff8000U 
                                          & vlSelf->__PVT__jump_ROB_exec_o[3U]);
    vlSelf->__PVT__jump_ROB_exec_o[1U] = ((0xffffffefU 
                                           & vlSelf->__PVT__jump_ROB_exec_o[1U]) 
                                          | ((IData)(vlSelf->__PVT__cpu_execute__DOT__jump__DOT__mispredict) 
                                             << 4U));
    vlSelf->__PVT__jump_ROB_exec_o[0U] = ((3U & vlSelf->__PVT__jump_ROB_exec_o[0U]) 
                                          | ((IData)(
                                                     (1ULL 
                                                      | ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__jump__DOT__br_target)) 
                                                         << 1U))) 
                                             << 2U));
    vlSelf->__PVT__jump_ROB_exec_o[1U] = ((0xfffffff8U 
                                           & vlSelf->__PVT__jump_ROB_exec_o[1U]) 
                                          | (((IData)(
                                                      (1ULL 
                                                       | ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__jump__DOT__br_target)) 
                                                          << 1U))) 
                                              >> 0x1eU) 
                                             | ((IData)(
                                                        ((1ULL 
                                                          | ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__jump__DOT__br_target)) 
                                                             << 1U)) 
                                                         >> 0x20U)) 
                                                << 2U)));
    vlSelf->__PVT__jump_ROB_exec_o[0xbU] = ((0x5ffffU 
                                             & vlSelf->__PVT__jump_ROB_exec_o[0xbU]) 
                                            | (0x7ffffU 
                                               & ((IData)(vlSelf->__PVT__jump_valid) 
                                                  << 0x11U)));
    vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__mispredict 
        = ((((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid) 
             & (vlSelf->__VdfgTmp_h4d6ddaf4__0[1U] 
                >> 3U)) != (IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_en)) 
           | (((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid)
                ? ((vlSelf->__VdfgTmp_h4d6ddaf4__0[9U] 
                    << 1U) | (vlSelf->__VdfgTmp_h4d6ddaf4__0[8U] 
                              >> 0x1fU)) : 0U) != vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_target));
    vlSelf->cpu_execute__DOT____Vcellinp__lsq__rd_en 
        = ((IData)(vlSelf->__PVT__cpu_execute__DOT__load_valid) 
           | ((~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem_empty_i)) 
              & ((IData)(vlSelf->__PVT__cpu_execute__DOT__LDorST_i) 
                 & (IData)(vlSelf->cpu_execute__DOT__mem__DOT____VdfgTmp_h7b9661f3__0))));
    vlSelf->__PVT__cpu_commit__DOT__branch_recovery__DOT__jump_mp 
        = ((IData)(vlSelf->__PVT__jump_valid) & (vlSelf->__PVT__jump_ROB_exec_o[1U] 
                                                 >> 4U));
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
    vlSelf->__PVT__cmp_ROB_exec_o[8U] = ((0x7fffffffU 
                                          & vlSelf->__PVT__cmp_ROB_exec_o[8U]) 
                                         | (((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__mispredict)
                                              ? vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_target
                                              : ((vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[9U] 
                                                  << 1U) 
                                                 | (vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[8U] 
                                                    >> 0x1fU))) 
                                            << 0x1fU));
    vlSelf->__PVT__cmp_ROB_exec_o[9U] = ((0x80000000U 
                                          & vlSelf->__PVT__cmp_ROB_exec_o[9U]) 
                                         | (((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__mispredict)
                                              ? vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_target
                                              : ((vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[9U] 
                                                  << 1U) 
                                                 | (vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[8U] 
                                                    >> 0x1fU))) 
                                            >> 1U));
    vlSelf->__PVT__cmp_ROB_exec_o[5U] = ((0x7ffffU 
                                          & vlSelf->__PVT__cmp_ROB_exec_o[5U]) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b)))) 
                                            << 0x13U));
    vlSelf->__PVT__cmp_ROB_exec_o[6U] = (((IData)((
                                                   ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b)))) 
                                          >> 0xdU) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b))) 
                                                     >> 0x20U)) 
                                            << 0x13U));
    vlSelf->__PVT__cmp_ROB_exec_o[7U] = ((0xfff80000U 
                                          & vlSelf->__PVT__cmp_ROB_exec_o[7U]) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b))) 
                                                     >> 0x20U)) 
                                            >> 0xdU));
    vlSelf->__PVT__cmp_ROB_exec_o[1U] = (0x7fU & vlSelf->__PVT__cmp_ROB_exec_o[1U]);
    vlSelf->__PVT__cmp_ROB_exec_o[2U] = 0U;
    vlSelf->__PVT__cmp_ROB_exec_o[3U] = 0U;
    vlSelf->__PVT__cmp_ROB_exec_o[4U] = 0U;
    vlSelf->__PVT__cmp_ROB_exec_o[5U] = (0xffff8000U 
                                         & vlSelf->__PVT__cmp_ROB_exec_o[5U]);
    vlSelf->__PVT__cmp_ROB_exec_o[1U] = ((0xffffffefU 
                                          & vlSelf->__PVT__cmp_ROB_exec_o[1U]) 
                                         | ((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__mispredict) 
                                            << 4U));
    vlSelf->__PVT__cmp_ROB_exec_o[0U] = ((3U & vlSelf->__PVT__cmp_ROB_exec_o[0U]) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_target)) 
                                                      << 1U) 
                                                     | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_en)))) 
                                            << 2U));
    vlSelf->__PVT__cmp_ROB_exec_o[1U] = ((0xfffffff8U 
                                          & vlSelf->__PVT__cmp_ROB_exec_o[1U]) 
                                         | (((IData)(
                                                     (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_target)) 
                                                       << 1U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_en)))) 
                                             >> 0x1eU) 
                                            | ((IData)(
                                                       ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_target)) 
                                                          << 1U) 
                                                         | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_en))) 
                                                        >> 0x20U)) 
                                               << 2U)));
    vlSelf->__PVT__cmp_ROB_exec_o[0xbU] = ((0x5ffffU 
                                            & vlSelf->__PVT__cmp_ROB_exec_o[0xbU]) 
                                           | (0x7ffffU 
                                              & ((IData)(vlSelf->__PVT__cmp_valid) 
                                                 << 0x11U)));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr;
    if (((IData)(vlSelf->cpu_execute__DOT____Vcellinp__lsq__rd_en) 
         & (~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem_empty_i)))) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr)));
    }
    vlSelf->__PVT__cpu_commit__DOT__branch_recovery__DOT__cmp_mp 
        = ((IData)(vlSelf->__PVT__cmp_valid) & (vlSelf->__PVT__cmp_ROB_exec_o[1U] 
                                                >> 4U));
}

VL_INLINE_OPT void Vtop_tb_cpu___nba_sequent__TOP__top_tb__dut__3(Vtop_tb_cpu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_tb_cpu___nba_sequent__TOP__top_tb__dut__3\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->__PVT__wb_alu = ((IData)(vlSelf->__PVT__cpu_execute__DOT__alu_valid) 
                             & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                >> 0x10U));
    vlSelf->__PVT__wb_jump = ((IData)(vlSelf->__PVT__jump_valid) 
                              & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                 >> 0x10U));
    vlSelf->__PVT__wb_cmp = ((IData)(vlSelf->__PVT__cmp_valid) 
                             & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                >> 0x10U));
    vlSelf->__PVT__wb_mul = ((IData)(vlSelf->__PVT__cpu_execute__DOT__mul_valid) 
                             & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                >> 0x10U));
    if (vlSelf->__Vdlyvset__checkpoint__DOT__cp_valid__v0) {
        vlSelf->__PVT__checkpoint__DOT__cp_alloc_list[0U] = 0ULL;
        vlSelf->__PVT__checkpoint__DOT__cp_alloc_list[1U] = 0ULL;
        vlSelf->__PVT__checkpoint__DOT__cp_alloc_list[2U] = 0ULL;
        vlSelf->__PVT__checkpoint__DOT__cp_alloc_list[3U] = 0ULL;
    }
    if (vlSelf->__Vdlyvset__checkpoint__DOT__cp_alloc_list__v4) {
        vlSelf->__PVT__checkpoint__DOT__cp_alloc_list[0U] 
            = (vlSelf->__PVT__checkpoint__DOT__cp_alloc_list
               [0U] | ((QData)((IData)(1U)) << (IData)(vlSelf->__Vdlyvlsb__checkpoint__DOT__cp_alloc_list__v4)));
    }
    if (vlSelf->__Vdlyvset__checkpoint__DOT__cp_alloc_list__v5) {
        vlSelf->__PVT__checkpoint__DOT__cp_alloc_list[1U] 
            = (vlSelf->__PVT__checkpoint__DOT__cp_alloc_list
               [1U] | ((QData)((IData)(1U)) << (IData)(vlSelf->__Vdlyvlsb__checkpoint__DOT__cp_alloc_list__v5)));
    }
    if (vlSelf->__Vdlyvset__checkpoint__DOT__cp_alloc_list__v6) {
        vlSelf->__PVT__checkpoint__DOT__cp_alloc_list[2U] 
            = (vlSelf->__PVT__checkpoint__DOT__cp_alloc_list
               [2U] | ((QData)((IData)(1U)) << (IData)(vlSelf->__Vdlyvlsb__checkpoint__DOT__cp_alloc_list__v6)));
    }
    if (vlSelf->__Vdlyvset__checkpoint__DOT__cp_alloc_list__v7) {
        vlSelf->__PVT__checkpoint__DOT__cp_alloc_list[3U] 
            = (vlSelf->__PVT__checkpoint__DOT__cp_alloc_list
               [3U] | ((QData)((IData)(1U)) << (IData)(vlSelf->__Vdlyvlsb__checkpoint__DOT__cp_alloc_list__v7)));
    }
    if (vlSelf->__Vdlyvset__checkpoint__DOT__cp_valid__v10) {
        vlSelf->__PVT__checkpoint__DOT__cp_alloc_list[vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_alloc_list__v8] 
            = vlSelf->__Vdlyvval__checkpoint__DOT__cp_alloc_list__v8;
    }
    vlSelf->__PVT__cp_dispatch_srat[0U] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0U];
    vlSelf->__PVT__cp_dispatch_srat[1U] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [1U];
    vlSelf->__PVT__cp_dispatch_srat[2U] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [2U];
    vlSelf->__PVT__cp_dispatch_srat[3U] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [3U];
    vlSelf->__PVT__cp_dispatch_srat[4U] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [4U];
    vlSelf->__PVT__cp_dispatch_srat[5U] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [5U];
    vlSelf->__PVT__cp_dispatch_srat[6U] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [6U];
    vlSelf->__PVT__cp_dispatch_srat[7U] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [7U];
    vlSelf->__PVT__cp_dispatch_srat[8U] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [8U];
    vlSelf->__PVT__cp_dispatch_srat[9U] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [9U];
    vlSelf->__PVT__cp_dispatch_srat[0xaU] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0xaU];
    vlSelf->__PVT__cp_dispatch_srat[0xbU] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0xbU];
    vlSelf->__PVT__cp_dispatch_srat[0xcU] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0xcU];
    vlSelf->__PVT__cp_dispatch_srat[0xdU] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0xdU];
    vlSelf->__PVT__cp_dispatch_srat[0xeU] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0xeU];
    vlSelf->__PVT__cp_dispatch_srat[0xfU] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0xfU];
    vlSelf->__PVT__cp_dispatch_srat[0x10U] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0x10U];
    vlSelf->__PVT__cp_dispatch_srat[0x11U] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0x11U];
    vlSelf->__PVT__cp_dispatch_srat[0x12U] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0x12U];
    vlSelf->__PVT__cp_dispatch_srat[0x13U] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0x13U];
    vlSelf->__PVT__cp_dispatch_srat[0x14U] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0x14U];
    vlSelf->__PVT__cp_dispatch_srat[0x15U] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0x15U];
    vlSelf->__PVT__cp_dispatch_srat[0x16U] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0x16U];
    vlSelf->__PVT__cp_dispatch_srat[0x17U] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0x17U];
    vlSelf->__PVT__cp_dispatch_srat[0x18U] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0x18U];
    vlSelf->__PVT__cp_dispatch_srat[0x19U] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0x19U];
    vlSelf->__PVT__cp_dispatch_srat[0x1aU] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0x1aU];
    vlSelf->__PVT__cp_dispatch_srat[0x1bU] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0x1bU];
    vlSelf->__PVT__cp_dispatch_srat[0x1cU] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0x1cU];
    vlSelf->__PVT__cp_dispatch_srat[0x1dU] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0x1dU];
    vlSelf->__PVT__cp_dispatch_srat[0x1eU] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0x1eU];
    vlSelf->__PVT__cp_dispatch_srat[0x1fU] = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat
        [0x1fU];
    if (vlSymsp->TOP__top_tb.__Vcellinp__dut__rst) {
        vlSelf->__PVT__cpu_commit__DOT__rob__DOT__wrPtr = 0U;
        vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr = 0U;
    } else {
        vlSelf->__PVT__cpu_commit__DOT__rob__DOT__wrPtr 
            = (0x1fU & ((IData)(vlSelf->__PVT__exec_mispredict)
                         ? ((IData)(1U) + ((IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr) 
                                           + (0xfU 
                                              & ((IData)(vlSelf->__PVT__exec_mispredict_rob_idx) 
                                                 - (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)))))
                         : (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__wrPtrNext)));
        vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr 
            = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtrNext;
    }
    vlSelf->__PVT__exec_mispredict = ((IData)(vlSelf->__PVT__cpu_commit__DOT__branch_recovery__DOT__cmp_mp) 
                                      | (IData)(vlSelf->__PVT__cpu_commit__DOT__branch_recovery__DOT__jump_mp));
    vlSelf->__PVT__cpu_frontend__DOT__valid_fetch = 
        ((~ ((IData)(vlSelf->__PVT__exec_mispredict) 
             | (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__stale_in_flight))) 
         & (IData)(vlSymsp->TOP.imem_resp));
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
    vlSelf->__PVT__rob_full = (((1U & ((IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__wrPtr) 
                                       >> 4U)) != (1U 
                                                   & ((IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr) 
                                                      >> 4U))) 
                               & ((0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__wrPtr)) 
                                  == (0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))));
    vlSelf->__PVT__commit_rob_o[0U] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][0U];
    vlSelf->__PVT__commit_rob_o[1U] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][1U];
    vlSelf->__PVT__commit_rob_o[2U] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][2U];
    vlSelf->__PVT__commit_rob_o[3U] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][3U];
    vlSelf->__PVT__commit_rob_o[4U] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][4U];
    vlSelf->__PVT__commit_rob_o[5U] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][5U];
    vlSelf->__PVT__commit_rob_o[6U] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][6U];
    vlSelf->__PVT__commit_rob_o[7U] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][7U];
    vlSelf->__PVT__commit_rob_o[8U] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][8U];
    vlSelf->__PVT__commit_rob_o[9U] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][9U];
    vlSelf->__PVT__commit_rob_o[0xaU] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][0xaU];
    vlSelf->__PVT__commit_rob_o[0xbU] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][0xbU];
    vlSelf->__PVT__cpu_commit__DOT__branch_recovery__DOT__pick_cmp 
        = ((IData)(vlSelf->__PVT__cpu_commit__DOT__branch_recovery__DOT__cmp_mp) 
           & ((~ (IData)(vlSelf->__PVT__cpu_commit__DOT__branch_recovery__DOT__jump_mp)) 
              | ((0xfU & (((vlSelf->__PVT__cmp_ROB_exec_o[5U] 
                            << 0x11U) | (vlSelf->__PVT__cmp_ROB_exec_o[5U] 
                                         >> 0xfU)) 
                          - (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))) 
                 < (0xfU & (((vlSelf->__PVT__jump_ROB_exec_o[5U] 
                              << 0x11U) | (vlSelf->__PVT__jump_ROB_exec_o[5U] 
                                           >> 0xfU)) 
                            - (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))))));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_bp_idx 
        = (0x7fU & (((vlSelf->__PVT__commit_rob_o[0xaU] 
                      << 8U) | (vlSelf->__PVT__commit_rob_o[0xaU] 
                                >> 0x18U)) ^ (((vlSelf->__PVT__commit_rob_o[0xaU] 
                                                << 0x1cU) 
                                               | (vlSelf->__PVT__commit_rob_o[0xaU] 
                                                  >> 4U)) 
                                              ^ ((vlSelf->__PVT__commit_rob_o[0xaU] 
                                                  << 0x14U) 
                                                 | (vlSelf->__PVT__commit_rob_o[0xaU] 
                                                    >> 0xcU)))));
    vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h9247e85f__0 
        = (0x1ffU & (((vlSelf->__PVT__commit_rob_o[0xaU] 
                       << 0xaU) | (vlSelf->__PVT__commit_rob_o[0xaU] 
                                   >> 0x16U)) ^ (((
                                                   vlSelf->__PVT__commit_rob_o[0xaU] 
                                                   << 0x14U) 
                                                  | (vlSelf->__PVT__commit_rob_o[0xaU] 
                                                     >> 0xcU)) 
                                                 ^ 
                                                 ((vlSelf->__PVT__commit_rob_o[0xaU] 
                                                   << 0x1eU) 
                                                  | (vlSelf->__PVT__commit_rob_o[0xaU] 
                                                     >> 2U)))));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_way = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_found = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_way = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_found = 0U;
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & (vlSelf->__PVT__commit_rob_o[0xaU] 
                   >> 1U))][0U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                   [(0xfU & (vlSelf->__PVT__commit_rob_o[0xaU] 
                                             >> 1U))]
                                   [0U] == ((vlSelf->__PVT__commit_rob_o[0xaU] 
                                             << 1U) 
                                            | (vlSelf->__PVT__commit_rob_o[9U] 
                                               >> 0x1fU))))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_way = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_found = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & (vlSelf->__PVT__commit_rob_o[0xaU] 
                   >> 1U))][1U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                   [(0xfU & (vlSelf->__PVT__commit_rob_o[0xaU] 
                                             >> 1U))]
                                   [1U] == ((vlSelf->__PVT__commit_rob_o[0xaU] 
                                             << 1U) 
                                            | (vlSelf->__PVT__commit_rob_o[9U] 
                                               >> 0x1fU))))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_way = 1U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_found = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & (vlSelf->__PVT__commit_rob_o[0xaU] 
                   >> 1U))][2U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                   [(0xfU & (vlSelf->__PVT__commit_rob_o[0xaU] 
                                             >> 1U))]
                                   [2U] == ((vlSelf->__PVT__commit_rob_o[0xaU] 
                                             << 1U) 
                                            | (vlSelf->__PVT__commit_rob_o[9U] 
                                               >> 0x1fU))))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_way = 2U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_found = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & (vlSelf->__PVT__commit_rob_o[0xaU] 
                   >> 1U))][3U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                   [(0xfU & (vlSelf->__PVT__commit_rob_o[0xaU] 
                                             >> 1U))]
                                   [3U] == ((vlSelf->__PVT__commit_rob_o[0xaU] 
                                             << 1U) 
                                            | (vlSelf->__PVT__commit_rob_o[9U] 
                                               >> 0x1fU))))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_way = 3U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_found = 1U;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk2__DOT__w = 4U;
    if ((1U & (~ vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
               [(0xfU & (vlSelf->__PVT__commit_rob_o[0xaU] 
                         >> 1U))][3U]))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_way = 3U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_found = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
               [(0xfU & (vlSelf->__PVT__commit_rob_o[0xaU] 
                         >> 1U))][2U]))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_way = 2U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_found = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
               [(0xfU & (vlSelf->__PVT__commit_rob_o[0xaU] 
                         >> 1U))][1U]))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_way = 1U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_found = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
               [(0xfU & (vlSelf->__PVT__commit_rob_o[0xaU] 
                         >> 1U))][0U]))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_way = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_found = 1U;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk3__DOT__w = 0xffffffffU;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_install_way 
        = ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_found)
            ? (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_way)
            : ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_found)
                ? (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_way)
                : ([&]() {
                    vlSelf->__Vfunc_cpu_frontend__DOT__branch_predict__DOT__btb__DOT__plru_victim__0__p 
                        = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru
                        [(0xfU & (vlSelf->__PVT__commit_rob_o[0xaU] 
                                  >> 1U))];
                    {
                        if ((1U & (IData)(vlSelf->__Vfunc_cpu_frontend__DOT__branch_predict__DOT__btb__DOT__plru_victim__0__p))) {
                            vlSelf->__Vfunc_cpu_frontend__DOT__branch_predict__DOT__btb__DOT__plru_victim__0__Vfuncout 
                                = ((4U & (IData)(vlSelf->__Vfunc_cpu_frontend__DOT__branch_predict__DOT__btb__DOT__plru_victim__0__p))
                                    ? 3U : 2U);
                            goto __Vlabel5;
                        } else {
                            vlSelf->__Vfunc_cpu_frontend__DOT__branch_predict__DOT__btb__DOT__plru_victim__0__Vfuncout 
                                = ((2U & (IData)(vlSelf->__Vfunc_cpu_frontend__DOT__branch_predict__DOT__btb__DOT__plru_victim__0__p))
                                    ? 1U : 0U);
                            goto __Vlabel5;
                        }
                        __Vlabel5: ;
                    }
                }(), (IData)(vlSelf->__Vfunc_cpu_frontend__DOT__branch_predict__DOT__btb__DOT__plru_victim__0__Vfuncout))));
    vlSelf->__PVT__monitor_rd_addr = ((0x10000U & vlSelf->__PVT__commit_rob_o[0xbU])
                                       ? (0x1fU & (
                                                   vlSelf->__PVT__commit_rob_o[0xbU] 
                                                   >> 0xbU))
                                       : 0U);
    vlSelf->__PVT__monitor_valid = (((IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr) 
                                     != (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__wrPtr)) 
                                    & (IData)((0x60000U 
                                               == (0x60000U 
                                                   & vlSelf->__PVT__commit_rob_o[0xbU]))));
    if (vlSelf->__PVT__cpu_commit__DOT__branch_recovery__DOT__pick_cmp) {
        vlSelf->__PVT__exec_recover_pc = ((vlSelf->__PVT__cmp_ROB_exec_o[1U] 
                                           << 0x1dU) 
                                          | (vlSelf->__PVT__cmp_ROB_exec_o[0U] 
                                             >> 3U));
        vlSelf->__PVT__exec_mispredict_rob_idx = (0xfU 
                                                  & ((vlSelf->__PVT__cmp_ROB_exec_o[5U] 
                                                      << 0x11U) 
                                                     | (vlSelf->__PVT__cmp_ROB_exec_o[5U] 
                                                        >> 0xfU)));
        vlSelf->__PVT__exec_checkpoint_id = (3U & vlSelf->__PVT__cmp_ROB_exec_o[0U]);
    } else {
        vlSelf->__PVT__exec_recover_pc = ((vlSelf->__PVT__jump_ROB_exec_o[1U] 
                                           << 0x1dU) 
                                          | (vlSelf->__PVT__jump_ROB_exec_o[0U] 
                                             >> 3U));
        vlSelf->__PVT__exec_mispredict_rob_idx = (0xfU 
                                                  & ((vlSelf->__PVT__jump_ROB_exec_o[5U] 
                                                      << 0x11U) 
                                                     | (vlSelf->__PVT__jump_ROB_exec_o[5U] 
                                                        >> 0xfU)));
        vlSelf->__PVT__exec_checkpoint_id = (3U & vlSelf->__PVT__jump_ROB_exec_o[0U]);
    }
    vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtrNext 
        = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr;
    if (vlSelf->__PVT__monitor_valid) {
        vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtrNext 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
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
                                                  >> 0x10U))) {
        vlSelf->__PVT__arat_o[(0x1fU & (vlSelf->__PVT__commit_rob_o[0xbU] 
                                        >> 0xbU))] 
            = (0x3fU & (vlSelf->__PVT__commit_rob_o[0xbU] 
                        >> 5U));
    }
    vlSelf->__PVT__commit_mispredict = ((IData)(vlSelf->__PVT__monitor_valid) 
                                        & (vlSelf->__PVT__commit_rob_o[1U] 
                                           >> 4U));
    vlSelf->__PVT__commit_branch_actual_taken = ((IData)(vlSelf->__PVT__monitor_valid) 
                                                 & (vlSelf->__PVT__commit_rob_o[0U] 
                                                    >> 2U));
    vlSelf->__Vcellinp__cpu_midcore__commit_update 
        = ((IData)(vlSelf->__PVT__monitor_valid) & 
           (vlSelf->__PVT__commit_rob_o[0xbU] >> 0x10U));
    vlSelf->cpu_frontend__DOT__branch_predict__DOT____Vcellinp__tage_predictor__update_valid 
        = ((IData)(vlSelf->__PVT__monitor_valid) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0x60U 
                                                             & vlSelf->__PVT__commit_rob_o[1U]))));
    vlSelf->__PVT__cpu_execute__DOT__mem__DOT__store_match 
        = ((IData)(vlSelf->__PVT__cpu_execute__DOT__LDorST_i) 
           & ((IData)(vlSelf->__PVT__monitor_valid) 
              & ((((vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xaU] 
                    << 1U) | (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[9U] 
                              >> 0x1fU)) == ((vlSelf->__PVT__commit_rob_o[0xaU] 
                                              << 1U) 
                                             | (vlSelf->__PVT__commit_rob_o[9U] 
                                                >> 0x1fU))) 
                 & ((((vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[8U] 
                       << 1U) | (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[7U] 
                                 >> 0x1fU)) == ((vlSelf->__PVT__commit_rob_o[8U] 
                                                 << 1U) 
                                                | (vlSelf->__PVT__commit_rob_o[7U] 
                                                   >> 0x1fU))) 
                    & ((0xfU & (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[5U] 
                                >> 0xfU)) == (0xfU 
                                              & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)))))));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_mispredict_age 
        = (0xfU & ((IData)(vlSelf->__PVT__exec_mispredict_rob_idx) 
                   - (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age[0U] 
        = (0xfU & (((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                     [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext))][5U] 
                     << 0x11U) | (vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext))][5U] 
                                  >> 0xfU)) - (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied 
        = ((0xfffeU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied)) 
           | (0U < (0x1fU & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr) 
                             - (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough 
        = ((0xfffeU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough)) 
           | (1U & (((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__committed) 
                     >> (0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext))) 
                    | (vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age
                       [0U] <= (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_mispredict_age)))));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor 
        = ((0xfffeU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor)) 
           | (1U & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied) 
                    & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough))));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age[1U] 
        = (0xfU & (((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                     [(0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                     << 0x11U) | (vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [(0xfU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                                  >> 0xfU)) - (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied 
        = ((0xfffdU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied)) 
           | ((1U < (0x1fU & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr) 
                              - (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))) 
              << 1U));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough 
        = ((0xfffdU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough)) 
           | ((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age
               [1U] <= (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_mispredict_age)) 
              << 1U));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor 
        = ((0xfffdU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor)) 
           | (2U & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied) 
                    & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough))));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age[2U] 
        = (0xfU & (((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                     [(0xfU & ((IData)(2U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                     << 0x11U) | (vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [(0xfU & ((IData)(2U) 
                                            + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                                  >> 0xfU)) - (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied 
        = ((0xfffbU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied)) 
           | ((2U < (0x1fU & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr) 
                              - (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))) 
              << 2U));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough 
        = ((0xfffbU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough)) 
           | ((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age
               [2U] <= (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_mispredict_age)) 
              << 2U));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor 
        = ((0xfffbU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor)) 
           | (4U & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied) 
                    & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough))));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age[3U] 
        = (0xfU & (((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                     [(0xfU & ((IData)(3U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                     << 0x11U) | (vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [(0xfU & ((IData)(3U) 
                                            + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                                  >> 0xfU)) - (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied 
        = ((0xfff7U & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied)) 
           | ((3U < (0x1fU & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr) 
                              - (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))) 
              << 3U));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough 
        = ((0xfff7U & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough)) 
           | ((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age
               [3U] <= (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_mispredict_age)) 
              << 3U));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor 
        = ((0xfff7U & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor)) 
           | (8U & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied) 
                    & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough))));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age[4U] 
        = (0xfU & (((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                     [(0xfU & ((IData)(4U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                     << 0x11U) | (vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [(0xfU & ((IData)(4U) 
                                            + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                                  >> 0xfU)) - (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied 
        = ((0xffefU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied)) 
           | ((4U < (0x1fU & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr) 
                              - (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))) 
              << 4U));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough 
        = ((0xffefU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough)) 
           | ((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age
               [4U] <= (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_mispredict_age)) 
              << 4U));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor 
        = ((0xffefU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor)) 
           | (0x10U & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied) 
                       & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough))));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age[5U] 
        = (0xfU & (((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                     [(0xfU & ((IData)(5U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                     << 0x11U) | (vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [(0xfU & ((IData)(5U) 
                                            + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                                  >> 0xfU)) - (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied 
        = ((0xffdfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied)) 
           | ((5U < (0x1fU & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr) 
                              - (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))) 
              << 5U));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough 
        = ((0xffdfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough)) 
           | ((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age
               [5U] <= (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_mispredict_age)) 
              << 5U));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor 
        = ((0xffdfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor)) 
           | (0x20U & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied) 
                       & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough))));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age[6U] 
        = (0xfU & (((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                     [(0xfU & ((IData)(6U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                     << 0x11U) | (vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [(0xfU & ((IData)(6U) 
                                            + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                                  >> 0xfU)) - (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied 
        = ((0xffbfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied)) 
           | ((6U < (0x1fU & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr) 
                              - (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))) 
              << 6U));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough 
        = ((0xffbfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough)) 
           | ((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age
               [6U] <= (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_mispredict_age)) 
              << 6U));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor 
        = ((0xffbfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor)) 
           | (0x40U & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied) 
                       & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough))));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age[7U] 
        = (0xfU & (((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                     [(0xfU & ((IData)(7U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                     << 0x11U) | (vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [(0xfU & ((IData)(7U) 
                                            + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                                  >> 0xfU)) - (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied 
        = ((0xff7fU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied)) 
           | ((7U < (0x1fU & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr) 
                              - (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))) 
              << 7U));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough 
        = ((0xff7fU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough)) 
           | ((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age
               [7U] <= (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_mispredict_age)) 
              << 7U));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor 
        = ((0xff7fU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor)) 
           | (0x80U & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied) 
                       & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough))));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age[8U] 
        = (0xfU & (((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                     [(0xfU & ((IData)(8U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                     << 0x11U) | (vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [(0xfU & ((IData)(8U) 
                                            + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                                  >> 0xfU)) - (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied 
        = ((0xfeffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied)) 
           | ((8U < (0x1fU & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr) 
                              - (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))) 
              << 8U));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough 
        = ((0xfeffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough)) 
           | ((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age
               [8U] <= (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_mispredict_age)) 
              << 8U));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor 
        = ((0xfeffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor)) 
           | (0x100U & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied) 
                        & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough))));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age[9U] 
        = (0xfU & (((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                     [(0xfU & ((IData)(9U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                     << 0x11U) | (vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [(0xfU & ((IData)(9U) 
                                            + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                                  >> 0xfU)) - (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied 
        = ((0xfdffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied)) 
           | ((9U < (0x1fU & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr) 
                              - (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))) 
              << 9U));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough 
        = ((0xfdffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough)) 
           | ((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age
               [9U] <= (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_mispredict_age)) 
              << 9U));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor 
        = ((0xfdffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor)) 
           | (0x200U & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied) 
                        & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough))));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age[0xaU] 
        = (0xfU & (((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                     [(0xfU & ((IData)(0xaU) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                     << 0x11U) | (vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [(0xfU & ((IData)(0xaU) 
                                            + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                                  >> 0xfU)) - (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied 
        = ((0xfbffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied)) 
           | ((0xaU < (0x1fU & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr) 
                                - (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))) 
              << 0xaU));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough 
        = ((0xfbffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough)) 
           | ((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age
               [0xaU] <= (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_mispredict_age)) 
              << 0xaU));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor 
        = ((0xfbffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor)) 
           | (0x400U & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied) 
                        & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough))));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age[0xbU] 
        = (0xfU & (((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                     [(0xfU & ((IData)(0xbU) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                     << 0x11U) | (vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [(0xfU & ((IData)(0xbU) 
                                            + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                                  >> 0xfU)) - (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied)) 
           | ((0xbU < (0x1fU & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr) 
                                - (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))) 
              << 0xbU));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough)) 
           | ((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age
               [0xbU] <= (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_mispredict_age)) 
              << 0xbU));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor)) 
           | (0x800U & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied) 
                        & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough))));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age[0xcU] 
        = (0xfU & (((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                     [(0xfU & ((IData)(0xcU) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                     << 0x11U) | (vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [(0xfU & ((IData)(0xcU) 
                                            + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                                  >> 0xfU)) - (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied 
        = ((0xefffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied)) 
           | ((0xcU < (0x1fU & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr) 
                                - (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))) 
              << 0xcU));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough 
        = ((0xefffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough)) 
           | ((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age
               [0xcU] <= (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_mispredict_age)) 
              << 0xcU));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor 
        = ((0xefffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor)) 
           | (0x1000U & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied) 
                         & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough))));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age[0xdU] 
        = (0xfU & (((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                     [(0xfU & ((IData)(0xdU) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                     << 0x11U) | (vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [(0xfU & ((IData)(0xdU) 
                                            + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                                  >> 0xfU)) - (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied 
        = ((0xdfffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied)) 
           | ((0xdU < (0x1fU & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr) 
                                - (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))) 
              << 0xdU));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough 
        = ((0xdfffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough)) 
           | ((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age
               [0xdU] <= (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_mispredict_age)) 
              << 0xdU));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor 
        = ((0xdfffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor)) 
           | (0x2000U & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied) 
                         & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough))));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age[0xeU] 
        = (0xfU & (((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                     [(0xfU & ((IData)(0xeU) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                     << 0x11U) | (vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [(0xfU & ((IData)(0xeU) 
                                            + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                                  >> 0xfU)) - (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied 
        = ((0xbfffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied)) 
           | ((0xeU < (0x1fU & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr) 
                                - (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))) 
              << 0xeU));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough 
        = ((0xbfffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough)) 
           | ((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age
               [0xeU] <= (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_mispredict_age)) 
              << 0xeU));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor 
        = ((0xbfffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor)) 
           | (0x4000U & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied) 
                         & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough))));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age[0xfU] 
        = (0xfU & (((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                     [(0xfU & ((IData)(0xfU) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                     << 0x11U) | (vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [(0xfU & ((IData)(0xfU) 
                                            + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))][5U] 
                                  >> 0xfU)) - (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied 
        = ((0x7fffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied)) 
           | ((0xfU < (0x1fU & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr) 
                                - (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext)))) 
              << 0xfU));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough 
        = ((0x7fffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough)) 
           | ((vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age
               [0xfU] <= (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_mispredict_age)) 
              << 0xfU));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor 
        = ((0x7fffU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor)) 
           | (0x8000U & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied) 
                         & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough))));
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext;
    if ((1U & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor))) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr)));
    }
    if ((2U & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor))) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr)));
    }
    if ((4U & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor))) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr)));
    }
    if ((8U & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor))) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr)));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor))) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr)));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor))) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr)));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor))) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr)));
    }
    if ((0x80U & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor))) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr)));
    }
    if ((0x100U & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor))) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr)));
    }
    if ((0x200U & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor))) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr)));
    }
    if ((0x400U & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor))) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr)));
    }
    if ((0x800U & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor))) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr)));
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor))) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr)));
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor))) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr)));
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor))) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr)));
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor))) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr)));
    }
    vlSelf->__PVT__recover_srat[0U] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0U];
    vlSelf->__PVT__recover_srat[1U] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][1U];
    vlSelf->__PVT__recover_srat[2U] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][2U];
    vlSelf->__PVT__recover_srat[3U] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][3U];
    vlSelf->__PVT__recover_srat[4U] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][4U];
    vlSelf->__PVT__recover_srat[5U] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][5U];
    vlSelf->__PVT__recover_srat[6U] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][6U];
    vlSelf->__PVT__recover_srat[7U] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][7U];
    vlSelf->__PVT__recover_srat[8U] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][8U];
    vlSelf->__PVT__recover_srat[9U] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][9U];
    vlSelf->__PVT__recover_srat[0xaU] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0xaU];
    vlSelf->__PVT__recover_srat[0xbU] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0xbU];
    vlSelf->__PVT__recover_srat[0xcU] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0xcU];
    vlSelf->__PVT__recover_srat[0xdU] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0xdU];
    vlSelf->__PVT__recover_srat[0xeU] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0xeU];
    vlSelf->__PVT__recover_srat[0xfU] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0xfU];
    vlSelf->__PVT__recover_srat[0x10U] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0x10U];
    vlSelf->__PVT__recover_srat[0x11U] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0x11U];
    vlSelf->__PVT__recover_srat[0x12U] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0x12U];
    vlSelf->__PVT__recover_srat[0x13U] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0x13U];
    vlSelf->__PVT__recover_srat[0x14U] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0x14U];
    vlSelf->__PVT__recover_srat[0x15U] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0x15U];
    vlSelf->__PVT__recover_srat[0x16U] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0x16U];
    vlSelf->__PVT__recover_srat[0x17U] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0x17U];
    vlSelf->__PVT__recover_srat[0x18U] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0x18U];
    vlSelf->__PVT__recover_srat[0x19U] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0x19U];
    vlSelf->__PVT__recover_srat[0x1aU] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0x1aU];
    vlSelf->__PVT__recover_srat[0x1bU] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0x1bU];
    vlSelf->__PVT__recover_srat[0x1cU] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0x1cU];
    vlSelf->__PVT__recover_srat[0x1dU] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0x1dU];
    vlSelf->__PVT__recover_srat[0x1eU] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0x1eU];
    vlSelf->__PVT__recover_srat[0x1fU] = vlSelf->__PVT__checkpoint__DOT__cp_srat_snap
        [vlSelf->__PVT__exec_checkpoint_id][0x1fU];
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__commit_pred_taken 
        = ((IData)(vlSelf->__PVT__commit_branch_actual_taken) 
           ^ (IData)(vlSelf->__PVT__commit_mispredict));
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
         & (((vlSelf->__PVT__commit_rob_o[0xaU] << 1U) 
             | (vlSelf->__PVT__commit_rob_o[9U] >> 0x1fU)) 
            == vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_target 
            = ((vlSelf->__PVT__commit_rob_o[1U] << 0x1dU) 
               | (vlSelf->__PVT__commit_rob_o[0U] >> 3U));
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
                                             << 1U) 
                                            | (vlSelf->__PVT__commit_rob_o[9U] 
                                               >> 0x1fU)))));
    vlSelf->__PVT__dmem_wdata = 0U;
    vlSelf->__PVT__dmem_addr = ((IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__store_match)
                                 ? ((vlSelf->__PVT__commit_rob_o[4U] 
                                     << 0x11U) | (vlSelf->__PVT__commit_rob_o[3U] 
                                                  >> 0xfU))
                                 : vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr);
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0U] 
        = vlSelf->__PVT__recover_srat[0U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[1U] 
        = vlSelf->__PVT__recover_srat[1U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[2U] 
        = vlSelf->__PVT__recover_srat[2U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[3U] 
        = vlSelf->__PVT__recover_srat[3U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[4U] 
        = vlSelf->__PVT__recover_srat[4U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[5U] 
        = vlSelf->__PVT__recover_srat[5U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[6U] 
        = vlSelf->__PVT__recover_srat[6U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[7U] 
        = vlSelf->__PVT__recover_srat[7U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[8U] 
        = vlSelf->__PVT__recover_srat[8U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[9U] 
        = vlSelf->__PVT__recover_srat[9U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0xaU] 
        = vlSelf->__PVT__recover_srat[0xaU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0xbU] 
        = vlSelf->__PVT__recover_srat[0xbU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0xcU] 
        = vlSelf->__PVT__recover_srat[0xcU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0xdU] 
        = vlSelf->__PVT__recover_srat[0xdU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0xeU] 
        = vlSelf->__PVT__recover_srat[0xeU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0xfU] 
        = vlSelf->__PVT__recover_srat[0xfU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0x10U] 
        = vlSelf->__PVT__recover_srat[0x10U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0x11U] 
        = vlSelf->__PVT__recover_srat[0x11U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0x12U] 
        = vlSelf->__PVT__recover_srat[0x12U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0x13U] 
        = vlSelf->__PVT__recover_srat[0x13U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0x14U] 
        = vlSelf->__PVT__recover_srat[0x14U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0x15U] 
        = vlSelf->__PVT__recover_srat[0x15U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0x16U] 
        = vlSelf->__PVT__recover_srat[0x16U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0x17U] 
        = vlSelf->__PVT__recover_srat[0x17U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0x18U] 
        = vlSelf->__PVT__recover_srat[0x18U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0x19U] 
        = vlSelf->__PVT__recover_srat[0x19U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0x1aU] 
        = vlSelf->__PVT__recover_srat[0x1aU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0x1bU] 
        = vlSelf->__PVT__recover_srat[0x1bU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0x1cU] 
        = vlSelf->__PVT__recover_srat[0x1cU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0x1dU] 
        = vlSelf->__PVT__recover_srat[0x1dU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0x1eU] 
        = vlSelf->__PVT__recover_srat[0x1eU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0x1fU] 
        = vlSelf->__PVT__recover_srat[0x1fU];
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
                                          << 0x19U) 
                                         | (vlSelf->__PVT__commit_rob_o[1U] 
                                            >> 7U))
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
    vlSelf->__PVT__mem_ROB_exec_o[5U] = ((0x7ffffU 
                                          & vlSelf->__PVT__mem_ROB_exec_o[5U]) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr1_val)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr2_val)))) 
                                            << 0x13U));
    vlSelf->__PVT__mem_ROB_exec_o[6U] = (((IData)((
                                                   ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr1_val)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr2_val)))) 
                                          >> 0xdU) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr1_val)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr2_val))) 
                                                     >> 0x20U)) 
                                            << 0x13U));
    vlSelf->__PVT__mem_ROB_exec_o[7U] = ((0xfff80000U 
                                          & vlSelf->__PVT__mem_ROB_exec_o[7U]) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr1_val)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr2_val))) 
                                                     >> 0x20U)) 
                                            >> 0xdU));
    vlSelf->__PVT__mem_ROB_exec_o[2U] = ((0x7fU & vlSelf->__PVT__mem_ROB_exec_o[2U]) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask)) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(vlSelf->__PVT__dmem_wmask)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP.dmem_rdata))))) 
                                            << 7U));
    vlSelf->__PVT__mem_ROB_exec_o[3U] = (((IData)((
                                                   ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->__PVT__dmem_wmask)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSymsp->TOP.dmem_rdata))))) 
                                          >> 0x19U) 
                                         | ((vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr 
                                             << 0xfU) 
                                            | ((IData)(
                                                       ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask)) 
                                                          << 0x24U) 
                                                         | (((QData)((IData)(vlSelf->__PVT__dmem_wmask)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSymsp->TOP.dmem_rdata)))) 
                                                        >> 0x20U)) 
                                               << 7U)));
    vlSelf->__PVT__mem_ROB_exec_o[4U] = ((0xffff8000U 
                                          & vlSelf->__PVT__mem_ROB_exec_o[4U]) 
                                         | (((0x7fU 
                                              & (vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr 
                                                 >> 0x11U)) 
                                             | ((IData)(
                                                        ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask)) 
                                                           << 0x24U) 
                                                          | (((QData)((IData)(vlSelf->__PVT__dmem_wmask)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSymsp->TOP.dmem_rdata)))) 
                                                         >> 0x20U)) 
                                                >> 0x19U)) 
                                            | (0x7f80U 
                                               & (vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr 
                                                  >> 0x11U))));
    vlSelf->__PVT__mem_ROB_exec_o[1U] = ((0x7fU & vlSelf->__PVT__mem_ROB_exec_o[1U]) 
                                         | (vlSelf->__PVT__dmem_wdata 
                                            << 7U));
    vlSelf->__PVT__mem_ROB_exec_o[2U] = ((0xffffff80U 
                                          & vlSelf->__PVT__mem_ROB_exec_o[2U]) 
                                         | (vlSelf->__PVT__dmem_wdata 
                                            >> 0x19U));
    vlSelf->__PVT__mem_ROB_exec_o[1U] = ((0xffffffefU 
                                          & vlSelf->__PVT__mem_ROB_exec_o[1U]) 
                                         | (0x10U & 
                                            ((0xfffffff0U 
                                              & (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[1U] 
                                                 << 1U)) 
                                             | ((((vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[9U] 
                                                   << 1U) 
                                                  | (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[8U] 
                                                     >> 0x1fU)) 
                                                 != 
                                                 ((IData)(4U) 
                                                  + 
                                                  ((vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xaU] 
                                                    << 1U) 
                                                   | (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[9U] 
                                                      >> 0x1fU)))) 
                                                << 4U))));
    vlSelf->__PVT__mem_ROB_exec_o[0U] = ((3U & vlSelf->__PVT__mem_ROB_exec_o[0U]) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     ((IData)(4U) 
                                                                      + 
                                                                      ((vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xaU] 
                                                                        << 1U) 
                                                                       | (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[9U] 
                                                                          >> 0x1fU))))) 
                                                     << 1U)) 
                                            << 2U));
    vlSelf->__PVT__mem_ROB_exec_o[1U] = ((0xfffffff8U 
                                          & vlSelf->__PVT__mem_ROB_exec_o[1U]) 
                                         | (((IData)(
                                                     ((QData)((IData)(
                                                                      ((IData)(4U) 
                                                                       + 
                                                                       ((vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xaU] 
                                                                         << 1U) 
                                                                        | (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[9U] 
                                                                           >> 0x1fU))))) 
                                                      << 1U)) 
                                             >> 0x1eU) 
                                            | ((IData)(
                                                       (((QData)((IData)(
                                                                         ((IData)(4U) 
                                                                          + 
                                                                          ((vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xaU] 
                                                                            << 1U) 
                                                                           | (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[9U] 
                                                                              >> 0x1fU))))) 
                                                         << 1U) 
                                                        >> 0x20U)) 
                                               << 2U)));
    vlSelf->__PVT__mem_ROB_exec_o[4U] = ((0x7fffU & 
                                          vlSelf->__PVT__mem_ROB_exec_o[4U]) 
                                         | (vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v 
                                            << 0xfU));
    vlSelf->__PVT__mem_ROB_exec_o[5U] = ((0xffff8000U 
                                          & vlSelf->__PVT__mem_ROB_exec_o[5U]) 
                                         | (vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v 
                                            >> 0x11U));
    vlSelf->__PVT__mem_ROB_exec_o[0xbU] = ((0x5ffffU 
                                            & vlSelf->__PVT__mem_ROB_exec_o[0xbU]) 
                                           | (0x7ffffU 
                                              & (((IData)(vlSelf->__PVT__cpu_execute__DOT__LDorST_i)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__cpu_execute__DOT__LDorST_i) 
                                                   && (((((~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem_empty_i)) 
                                                          & (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xbU] 
                                                             >> 0x12U)) 
                                                         & (IData)(vlSelf->__PVT__cpu_execute__DOT__READY_i)) 
                                                        & (~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__store_committed))) 
                                                       & (~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__store_match))))
                                                   : 
                                                  ((((~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem_empty_i)) 
                                                     & (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xbU] 
                                                        >> 0x12U)) 
                                                    & (IData)(vlSelf->__PVT__cpu_execute__DOT__READY_i)) 
                                                   & (IData)(vlSymsp->TOP.dmem_resp))) 
                                                 << 0x11U)));
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
                 >> 0x11U));
    vlSelf->__PVT__wb_load = ((IData)(vlSelf->__PVT__cpu_execute__DOT__load_valid) 
                              & (vlSelf->__PVT__mem_ROB_exec_o[0xbU] 
                                 >> 0x10U));
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
                                                                >> 5U))] 
            = ((vlSelf->__PVT__alu_ROB_exec_o[5U] << 0x11U) 
               | (vlSelf->__PVT__alu_ROB_exec_o[4U] 
                  >> 0xfU));
    }
    if (vlSelf->__PVT__wb_cmp) {
        vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf_next[(0x3fU 
                                                             & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                                >> 5U))] 
            = ((vlSelf->__PVT__cmp_ROB_exec_o[5U] << 0x11U) 
               | (vlSelf->__PVT__cmp_ROB_exec_o[4U] 
                  >> 0xfU));
    }
    if (vlSelf->__PVT__wb_load) {
        vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf_next[(0x3fU 
                                                             & (vlSelf->__PVT__mem_ROB_exec_o[0xbU] 
                                                                >> 5U))] 
            = ((vlSelf->__PVT__mem_ROB_exec_o[5U] << 0x11U) 
               | (vlSelf->__PVT__mem_ROB_exec_o[4U] 
                  >> 0xfU));
    }
    if (vlSelf->__PVT__wb_jump) {
        vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf_next[(0x3fU 
                                                             & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                                >> 5U))] 
            = ((vlSelf->__PVT__jump_ROB_exec_o[5U] 
                << 0x11U) | (vlSelf->__PVT__jump_ROB_exec_o[4U] 
                             >> 0xfU));
    }
    if (vlSelf->__PVT__wb_mul) {
        vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf_next[(0x3fU 
                                                             & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                                >> 5U))] 
            = ((vlSelf->__PVT__mul_ROB_exec_o[5U] << 0x11U) 
               | (vlSelf->__PVT__mul_ROB_exec_o[4U] 
                  >> 0xfU));
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
            ? 0x60000000U : ((IData)(vlSelf->__PVT__exec_mispredict)
                              ? vlSelf->__PVT__exec_recover_pc
                              : ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetchq_full)
                                  ? vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc
                                  : (((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_valid) 
                                      & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp))
                                      ? vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_target
                                      : ((IData)(4U) 
                                         + vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc)))));
}
