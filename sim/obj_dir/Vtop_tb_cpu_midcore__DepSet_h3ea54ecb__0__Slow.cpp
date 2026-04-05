// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb_cpu_midcore.h"

extern const VlUnpacked<CData/*2:0*/, 256> Vtop_tb__ConstPool__TABLE_he9283809_0;
extern const VlWide<12>/*383:0*/ Vtop_tb__ConstPool__CONST_h3c5fcb02_0;

VL_ATTR_COLD void Vtop_tb_cpu_midcore___stl_sequent__TOP__top_tb__dut__cpu_midcore__0(Vtop_tb_cpu_midcore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_tb_cpu_midcore___stl_sequent__TOP__top_tb__dut__cpu_midcore__0\n"); );
    // Init
    CData/*0:0*/ __VdfgTmp_h18e5b6a6__0;
    __VdfgTmp_h18e5b6a6__0 = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->__PVT__rename_update_ar = ((0x10000U & 
                                        vlSelf->__PVT__ROB_rename1_reg[0xbU])
                                        ? (0x1fU & 
                                           (vlSelf->__PVT__ROB_rename1_reg[0xbU] 
                                            >> 0xbU))
                                        : 0U);
    vlSelf->__PVT__free_pr = 0U;
    if ((1U & (IData)(vlSelf->__PVT__free_list__DOT__free_list))) {
        vlSelf->__PVT__free_pr = 0U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 1U)))) {
        vlSelf->__PVT__free_pr = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 2U)))) {
        vlSelf->__PVT__free_pr = 2U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 3U)))) {
        vlSelf->__PVT__free_pr = 3U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 4U)))) {
        vlSelf->__PVT__free_pr = 4U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 5U)))) {
        vlSelf->__PVT__free_pr = 5U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 6U)))) {
        vlSelf->__PVT__free_pr = 6U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 7U)))) {
        vlSelf->__PVT__free_pr = 7U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 8U)))) {
        vlSelf->__PVT__free_pr = 8U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 9U)))) {
        vlSelf->__PVT__free_pr = 9U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0xaU)))) {
        vlSelf->__PVT__free_pr = 0xaU;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0xbU)))) {
        vlSelf->__PVT__free_pr = 0xbU;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0xcU)))) {
        vlSelf->__PVT__free_pr = 0xcU;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0xdU)))) {
        vlSelf->__PVT__free_pr = 0xdU;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0xeU)))) {
        vlSelf->__PVT__free_pr = 0xeU;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0xfU)))) {
        vlSelf->__PVT__free_pr = 0xfU;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x10U)))) {
        vlSelf->__PVT__free_pr = 0x10U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x11U)))) {
        vlSelf->__PVT__free_pr = 0x11U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x12U)))) {
        vlSelf->__PVT__free_pr = 0x12U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x13U)))) {
        vlSelf->__PVT__free_pr = 0x13U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x14U)))) {
        vlSelf->__PVT__free_pr = 0x14U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x15U)))) {
        vlSelf->__PVT__free_pr = 0x15U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x16U)))) {
        vlSelf->__PVT__free_pr = 0x16U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x17U)))) {
        vlSelf->__PVT__free_pr = 0x17U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x18U)))) {
        vlSelf->__PVT__free_pr = 0x18U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x19U)))) {
        vlSelf->__PVT__free_pr = 0x19U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x1aU)))) {
        vlSelf->__PVT__free_pr = 0x1aU;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x1bU)))) {
        vlSelf->__PVT__free_pr = 0x1bU;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x1cU)))) {
        vlSelf->__PVT__free_pr = 0x1cU;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x1dU)))) {
        vlSelf->__PVT__free_pr = 0x1dU;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x1eU)))) {
        vlSelf->__PVT__free_pr = 0x1eU;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x1fU)))) {
        vlSelf->__PVT__free_pr = 0x1fU;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x20U)))) {
        vlSelf->__PVT__free_pr = 0x20U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x21U)))) {
        vlSelf->__PVT__free_pr = 0x21U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x22U)))) {
        vlSelf->__PVT__free_pr = 0x22U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x23U)))) {
        vlSelf->__PVT__free_pr = 0x23U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x24U)))) {
        vlSelf->__PVT__free_pr = 0x24U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x25U)))) {
        vlSelf->__PVT__free_pr = 0x25U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x26U)))) {
        vlSelf->__PVT__free_pr = 0x26U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x27U)))) {
        vlSelf->__PVT__free_pr = 0x27U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x28U)))) {
        vlSelf->__PVT__free_pr = 0x28U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x29U)))) {
        vlSelf->__PVT__free_pr = 0x29U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x2aU)))) {
        vlSelf->__PVT__free_pr = 0x2aU;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x2bU)))) {
        vlSelf->__PVT__free_pr = 0x2bU;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x2cU)))) {
        vlSelf->__PVT__free_pr = 0x2cU;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x2dU)))) {
        vlSelf->__PVT__free_pr = 0x2dU;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x2eU)))) {
        vlSelf->__PVT__free_pr = 0x2eU;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x2fU)))) {
        vlSelf->__PVT__free_pr = 0x2fU;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x30U)))) {
        vlSelf->__PVT__free_pr = 0x30U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x31U)))) {
        vlSelf->__PVT__free_pr = 0x31U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x32U)))) {
        vlSelf->__PVT__free_pr = 0x32U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x33U)))) {
        vlSelf->__PVT__free_pr = 0x33U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x34U)))) {
        vlSelf->__PVT__free_pr = 0x34U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x35U)))) {
        vlSelf->__PVT__free_pr = 0x35U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x36U)))) {
        vlSelf->__PVT__free_pr = 0x36U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x37U)))) {
        vlSelf->__PVT__free_pr = 0x37U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x38U)))) {
        vlSelf->__PVT__free_pr = 0x38U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x39U)))) {
        vlSelf->__PVT__free_pr = 0x39U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x3aU)))) {
        vlSelf->__PVT__free_pr = 0x3aU;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x3bU)))) {
        vlSelf->__PVT__free_pr = 0x3bU;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x3cU)))) {
        vlSelf->__PVT__free_pr = 0x3cU;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x3dU)))) {
        vlSelf->__PVT__free_pr = 0x3dU;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x3eU)))) {
        vlSelf->__PVT__free_pr = 0x3eU;
    }
    vlSelf->__PVT__free_pr_valid = 0U;
    if ((1U & (IData)(vlSelf->__PVT__free_list__DOT__free_list))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 1U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 2U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 3U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 4U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 5U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 6U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 7U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 8U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 9U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0xaU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0xbU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0xcU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0xdU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0xeU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0xfU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x10U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x11U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x12U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x13U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x14U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x15U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x16U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x17U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x18U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x19U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x1aU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x1bU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x1cU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x1dU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x1eU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x1fU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x20U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x21U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x22U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x23U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x24U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x25U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x26U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x27U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x28U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x29U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x2aU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x2bU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x2cU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x2dU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x2eU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x2fU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x30U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x31U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x32U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x33U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x34U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x35U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x36U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x37U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x38U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x39U)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x3aU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x3bU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x3cU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x3dU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x3eU)))) {
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    if ((1U & (IData)((vlSelf->__PVT__free_list__DOT__free_list 
                       >> 0x3fU)))) {
        vlSelf->__PVT__free_pr = 0x3fU;
        vlSelf->__PVT__free_pr_valid = 1U;
    }
    __VdfgTmp_h18e5b6a6__0 = ((4U == (7U & (IData)(
                                                   (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                    >> 0x17U)))) 
                              | (5U == (7U & (IData)(
                                                     (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                      >> 0x17U)))));
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
    vlSelf->stall_rob_full = vlSymsp->TOP__top_tb__dut.__PVT__rob_full;
    vlSelf->stall_alu_full = ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__alu_full) 
                              & (0ULL == (0x3800000ULL 
                                          & vlSelf->__PVT__MIDCORE_rename2_reg)));
    vlSelf->stall_cmp_full = ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cmp_full) 
                              & (0x800000ULL == (0x3800000ULL 
                                                 & vlSelf->__PVT__MIDCORE_rename2_reg)));
    vlSelf->stall_mul_full = ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__mul_full) 
                              & (0x3000000ULL == (0x3800000ULL 
                                                  & vlSelf->__PVT__MIDCORE_rename2_reg)));
    vlSelf->stall_load_full = ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__load_full) 
                               & (0x1000000ULL == (0x3800000ULL 
                                                   & vlSelf->__PVT__MIDCORE_rename2_reg)));
    vlSelf->stall_store_full = ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__load_full) 
                                & (0x1800000ULL == 
                                   (0x3800000ULL & vlSelf->__PVT__MIDCORE_rename2_reg)));
    vlSelf->__PVT__rename2__DOT__pr1_busy_tmp = (1U 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                             >> 0xfU)) 
                                                    & (IData)(
                                                              (vlSelf->__PVT__busy_table__DOT__bt 
                                                               >> 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                                            >> 0xfU)))
                                                                 ? 
                                                                (0x3fU 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                                            >> 8U)))
                                                                 : 0U)))));
    if (((IData)((vlSelf->__PVT__MIDCORE_rename1_reg 
                  >> 0xfU)) & ((((((IData)(vlSymsp->TOP__top_tb__dut.__PVT__wb_alu) 
                                   & ((0x3fU & (IData)(
                                                       (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                        >> 8U))) 
                                      == (0x3fU & (
                                                   vlSymsp->TOP__top_tb__dut.__PVT__alu_ROB_exec_o[0xbU] 
                                                   >> 5U)))) 
                                  | ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__wb_load) 
                                     & ((0x3fU & (IData)(
                                                         (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                          >> 8U))) 
                                        == (0x3fU & 
                                            (vlSymsp->TOP__top_tb__dut.__PVT__mem_ROB_exec_o[0xbU] 
                                             >> 5U))))) 
                                 | ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__wb_jump) 
                                    & ((0x3fU & (IData)(
                                                        (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                         >> 8U))) 
                                       == (0x3fU & 
                                           (vlSymsp->TOP__top_tb__dut.__PVT__jump_ROB_exec_o[0xbU] 
                                            >> 5U))))) 
                                | ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__wb_cmp) 
                                   & ((0x3fU & (IData)(
                                                       (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                        >> 8U))) 
                                      == (0x3fU & (
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cmp_ROB_exec_o[0xbU] 
                                                   >> 5U))))) 
                               | ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__wb_mul) 
                                  & ((0x3fU & (IData)(
                                                      (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                       >> 8U))) 
                                     == (0x3fU & (vlSymsp->TOP__top_tb__dut.__PVT__mul_ROB_exec_o[0xbU] 
                                                  >> 5U))))))) {
        vlSelf->__PVT__rename2__DOT__pr1_busy_tmp = 0U;
    }
    vlSelf->__PVT__rename2__DOT__pr2_busy_tmp = (1U 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                             >> 0xeU)) 
                                                    & (IData)(
                                                              (vlSelf->__PVT__busy_table__DOT__bt 
                                                               >> 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                                            >> 0xeU)))
                                                                 ? 
                                                                (0x3fU 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                                            >> 2U)))
                                                                 : 0U)))));
    if (((IData)((vlSelf->__PVT__MIDCORE_rename1_reg 
                  >> 0xeU)) & ((((((IData)(vlSymsp->TOP__top_tb__dut.__PVT__wb_alu) 
                                   & ((0x3fU & (IData)(
                                                       (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                        >> 2U))) 
                                      == (0x3fU & (
                                                   vlSymsp->TOP__top_tb__dut.__PVT__alu_ROB_exec_o[0xbU] 
                                                   >> 5U)))) 
                                  | ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__wb_load) 
                                     & ((0x3fU & (IData)(
                                                         (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                          >> 2U))) 
                                        == (0x3fU & 
                                            (vlSymsp->TOP__top_tb__dut.__PVT__mem_ROB_exec_o[0xbU] 
                                             >> 5U))))) 
                                 | ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__wb_jump) 
                                    & ((0x3fU & (IData)(
                                                        (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                         >> 2U))) 
                                       == (0x3fU & 
                                           (vlSymsp->TOP__top_tb__dut.__PVT__jump_ROB_exec_o[0xbU] 
                                            >> 5U))))) 
                                | ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__wb_cmp) 
                                   & ((0x3fU & (IData)(
                                                       (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                        >> 2U))) 
                                      == (0x3fU & (
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cmp_ROB_exec_o[0xbU] 
                                                   >> 5U))))) 
                               | ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__wb_mul) 
                                  & ((0x3fU & (IData)(
                                                      (vlSelf->__PVT__MIDCORE_rename1_reg 
                                                       >> 2U))) 
                                     == (0x3fU & (vlSymsp->TOP__top_tb__dut.__PVT__mul_ROB_exec_o[0xbU] 
                                                  >> 5U))))))) {
        vlSelf->__PVT__rename2__DOT__pr2_busy_tmp = 0U;
    }
    vlSelf->__PVT__cp_rename_update_pr_o = ((IData)(vlSelf->__PVT__free_pr_valid)
                                             ? (IData)(vlSelf->__PVT__free_pr)
                                             : 0U);
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
    vlSelf->__PVT__ROB_rename2_o[0xbU] = ((0x7f81fU 
                                           & vlSelf->__PVT__ROB_rename2_o[0xbU]) 
                                          | (0x7ffffU 
                                             & ((((vlSelf->__PVT__ROB_rename1_reg[0xbU] 
                                                   >> 0x10U) 
                                                  & (IData)(vlSelf->__PVT__free_pr_valid))
                                                  ? (IData)(vlSelf->__PVT__free_pr)
                                                  : 0U) 
                                                << 5U)));
    vlSelf->__PVT__ROB_rename2_o[1U] = (0x7fU & vlSelf->__PVT__ROB_rename2_o[1U]);
    vlSelf->__PVT__ROB_rename2_o[2U] = 0U;
    vlSelf->__PVT__ROB_rename2_o[3U] = 0U;
    vlSelf->__PVT__ROB_rename2_o[4U] = 0U;
    vlSelf->__PVT__ROB_rename2_o[5U] = (0x78000U & 
                                        ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__wrPtr) 
                                         << 0xfU));
    vlSelf->__PVT__ROB_rename2_o[6U] = 0U;
    vlSelf->__PVT__ROB_rename2_o[7U] = (0xfff80000U 
                                        & vlSelf->__PVT__ROB_rename2_o[7U]);
    vlSelf->__PVT__ROB_rename2_o[1U] = (0xffffffefU 
                                        & vlSelf->__PVT__ROB_rename2_o[1U]);
    vlSelf->__PVT__ROB_rename2_o[0U] = (3U & vlSelf->__PVT__ROB_rename2_o[0U]);
    vlSelf->__PVT__ROB_rename2_o[1U] = (0xfffffff8U 
                                        & vlSelf->__PVT__ROB_rename2_o[1U]);
    vlSelf->__PVT__ROB_rename2_o[0xbU] = (0x5ffffU 
                                          & vlSelf->__PVT__ROB_rename2_o[0xbU]);
    vlSelf->stall_jump_full = ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__jump_full) 
                               & (IData)(__VdfgTmp_h18e5b6a6__0));
    vlSelf->__PVT__is_br_or_jump = ((1U == (7U & (IData)(
                                                         (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                          >> 0x17U)))) 
                                    | (IData)(__VdfgTmp_h18e5b6a6__0));
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
    vlSelf->__PVT__MIDCORE_rename2_o = vlSelf->__PVT__MIDCORE_rename1_reg;
    vlSelf->__PVT__MIDCORE_rename2_o = ((0x3fffffffffffffcULL 
                                         & vlSelf->__PVT__MIDCORE_rename2_o) 
                                        | (IData)((IData)(
                                                          (((IData)(vlSelf->__PVT__rename2__DOT__pr1_busy_tmp) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->__PVT__rename2__DOT__pr2_busy_tmp)))));
    vlSelf->stall_no_free_pr = (1U & ((~ (IData)(vlSelf->__PVT__free_pr_valid)) 
                                      & (vlSelf->__PVT__ROB_rename2_o[0xbU] 
                                         >> 0x10U)));
    vlSelf->stall_checkpoint_full = ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__checkpoint_full) 
                                     & (IData)(vlSelf->__PVT__is_br_or_jump));
    vlSelf->__PVT__MIDCORE_decode_o = (((QData)((IData)(vlSelf->__PVT__decode__DOT__imm_o)) 
                                        << 0x1aU) | (QData)((IData)(
                                                                    (((IData)(vlSelf->__PVT__decode__DOT__dispatch_to) 
                                                                      << 0x17U) 
                                                                     | (((IData)(vlSelf->__PVT__decode__DOT__alu_op) 
                                                                         << 0x13U) 
                                                                        | ((0x70000U 
                                                                            & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                                               << 4U)) 
                                                                           | (((IData)(vlSelf->__PVT__decode__DOT__rs1_valid) 
                                                                               << 0xfU) 
                                                                              | ((IData)(vlSelf->__PVT__decode__DOT__rs2_valid) 
                                                                                << 0xeU))))))));
    vlSelf->__PVT__ROB_decode_o[0U] = (IData)((((QData)((IData)(
                                                                (0x63U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)))) 
                                                << 0x26U) 
                                               | (((QData)((IData)(
                                                                   ((0x6fU 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                                                    | (0x67U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst))))) 
                                                   << 0x25U) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem
                                                                     [
                                                                     (7U 
                                                                      & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__rdPtr))])) 
                                                     << 0x23U))));
    vlSelf->__PVT__ROB_decode_o[1U] = (IData)(((((QData)((IData)(
                                                                 (0x63U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)))) 
                                                 << 0x26U) 
                                                | (((QData)((IData)(
                                                                    ((0x6fU 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                                                     | (0x67U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst))))) 
                                                    << 0x25U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem
                                                                      [
                                                                      (7U 
                                                                       & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__rdPtr))])) 
                                                      << 0x23U))) 
                                               >> 0x20U));
    vlSelf->__PVT__ROB_decode_o[2U] = 0U;
    vlSelf->__PVT__ROB_decode_o[3U] = 0U;
    vlSelf->__PVT__ROB_decode_o[4U] = 0U;
    vlSelf->__PVT__ROB_decode_o[5U] = 0U;
    vlSelf->__PVT__ROB_decode_o[6U] = 0U;
    vlSelf->__PVT__ROB_decode_o[7U] = ((vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                        << 0x1fU) | 
                                       (((IData)(vlSelf->__PVT__decode__DOT__rs1_valid) 
                                         << 0x1eU) 
                                        | (((IData)(vlSelf->__PVT__decode__DOT__rs2_valid) 
                                            << 0x1dU) 
                                           | (((IData)(vlSelf->__PVT__srat_lookup_rs1) 
                                               << 0x18U) 
                                              | (0xf80000U 
                                                 & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                    >> 1U))))));
    vlSelf->__PVT__ROB_decode_o[8U] = ((vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                        >> 1U) | ((IData)(
                                                          (((QData)((IData)(
                                                                            vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem
                                                                            [
                                                                            (7U 
                                                                             & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__rdPtr))])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem
                                                                             [
                                                                             (7U 
                                                                              & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__rdPtr))])))) 
                                                  << 0x1fU));
    vlSelf->__PVT__ROB_decode_o[9U] = (((IData)((((QData)((IData)(
                                                                  vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem
                                                                  [
                                                                  (7U 
                                                                   & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__rdPtr))])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem
                                                                   [
                                                                   (7U 
                                                                    & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__rdPtr))])))) 
                                        >> 1U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem
                                                                             [
                                                                             (7U 
                                                                              & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__rdPtr))])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem
                                                                              [
                                                                              (7U 
                                                                               & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__rdPtr))]))) 
                                                           >> 0x20U)) 
                                                  << 0x1fU));
    vlSelf->__PVT__ROB_decode_o[0xaU] = ((IData)(((
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem
                                                                    [
                                                                    (7U 
                                                                     & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__rdPtr))])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem
                                                                     [
                                                                     (7U 
                                                                      & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__rdPtr))]))) 
                                                  >> 0x20U)) 
                                         >> 1U);
    vlSelf->__PVT__ROB_decode_o[0xbU] = ((0x40000U 
                                          & ((~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__fetch_empty)) 
                                             << 0x12U)) 
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
                                             << 0x10U) 
                                            | (0xf800U 
                                               & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                  << 4U))));
    vlSelf->__PVT__stall = ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__rob_full) 
                            | ((IData)(vlSelf->stall_alu_full) 
                               | ((IData)(vlSelf->stall_cmp_full) 
                                  | ((IData)(vlSelf->stall_load_full) 
                                     | ((IData)(vlSelf->stall_store_full) 
                                        | ((IData)(vlSelf->stall_jump_full) 
                                           | ((IData)(vlSelf->stall_mul_full) 
                                              | ((IData)(vlSelf->stall_no_free_pr) 
                                                 | ((IData)(vlSelf->stall_checkpoint_full) 
                                                    | (IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict))))))))));
    vlSelf->__PVT__MIDCORE_rename2_wb_updated = vlSelf->__PVT__MIDCORE_rename2_reg;
    if (vlSelf->__PVT__stall) {
        if (((IData)((vlSelf->__PVT__MIDCORE_rename2_reg 
                      >> 0xfU)) & ((((((IData)(vlSymsp->TOP__top_tb__dut.__PVT__wb_alu) 
                                       & ((0x3fU & (IData)(
                                                           (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                            >> 8U))) 
                                          == (0x3fU 
                                              & (vlSymsp->TOP__top_tb__dut.__PVT__alu_ROB_exec_o[0xbU] 
                                                 >> 5U)))) 
                                      | ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__wb_load) 
                                         & ((0x3fU 
                                             & (IData)(
                                                       (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                        >> 8U))) 
                                            == (0x3fU 
                                                & (vlSymsp->TOP__top_tb__dut.__PVT__mem_ROB_exec_o[0xbU] 
                                                   >> 5U))))) 
                                     | ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__wb_jump) 
                                        & ((0x3fU & (IData)(
                                                            (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                             >> 8U))) 
                                           == (0x3fU 
                                               & (vlSymsp->TOP__top_tb__dut.__PVT__jump_ROB_exec_o[0xbU] 
                                                  >> 5U))))) 
                                    | ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__wb_cmp) 
                                       & ((0x3fU & (IData)(
                                                           (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                            >> 8U))) 
                                          == (0x3fU 
                                              & (vlSymsp->TOP__top_tb__dut.__PVT__cmp_ROB_exec_o[0xbU] 
                                                 >> 5U))))) 
                                   | ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__wb_mul) 
                                      & ((0x3fU & (IData)(
                                                          (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                           >> 8U))) 
                                         == (0x3fU 
                                             & (vlSymsp->TOP__top_tb__dut.__PVT__mul_ROB_exec_o[0xbU] 
                                                >> 5U))))))) {
            vlSelf->__PVT__MIDCORE_rename2_wb_updated 
                = (0x3fffffffffffffdULL & vlSelf->__PVT__MIDCORE_rename2_wb_updated);
        }
        if (((IData)((vlSelf->__PVT__MIDCORE_rename2_reg 
                      >> 0xeU)) & ((((((IData)(vlSymsp->TOP__top_tb__dut.__PVT__wb_alu) 
                                       & ((0x3fU & (IData)(
                                                           (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                            >> 2U))) 
                                          == (0x3fU 
                                              & (vlSymsp->TOP__top_tb__dut.__PVT__alu_ROB_exec_o[0xbU] 
                                                 >> 5U)))) 
                                      | ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__wb_load) 
                                         & ((0x3fU 
                                             & (IData)(
                                                       (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                        >> 2U))) 
                                            == (0x3fU 
                                                & (vlSymsp->TOP__top_tb__dut.__PVT__mem_ROB_exec_o[0xbU] 
                                                   >> 5U))))) 
                                     | ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__wb_jump) 
                                        & ((0x3fU & (IData)(
                                                            (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                             >> 2U))) 
                                           == (0x3fU 
                                               & (vlSymsp->TOP__top_tb__dut.__PVT__jump_ROB_exec_o[0xbU] 
                                                  >> 5U))))) 
                                    | ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__wb_cmp) 
                                       & ((0x3fU & (IData)(
                                                           (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                            >> 2U))) 
                                          == (0x3fU 
                                              & (vlSymsp->TOP__top_tb__dut.__PVT__cmp_ROB_exec_o[0xbU] 
                                                 >> 5U))))) 
                                   | ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__wb_mul) 
                                      & ((0x3fU & (IData)(
                                                          (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                           >> 2U))) 
                                         == (0x3fU 
                                             & (vlSymsp->TOP__top_tb__dut.__PVT__mul_ROB_exec_o[0xbU] 
                                                >> 5U))))))) {
            vlSelf->__PVT__MIDCORE_rename2_wb_updated 
                = (0x3fffffffffffffeULL & vlSelf->__PVT__MIDCORE_rename2_wb_updated);
        }
    }
    vlSelf->__PVT__decode_request = (1U & ((~ (IData)(vlSelf->__PVT__stall)) 
                                           & (~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__fetch_empty))));
    vlSelf->__PVT__cp_rename_update_o = ((~ (IData)(vlSelf->__PVT__stall)) 
                                         & (0x50000U 
                                            == (0x50000U 
                                                & vlSelf->__PVT__ROB_rename1_reg[0xbU])));
    vlSelf->__PVT__ROB_midcore_o[0U] = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[0U];
    vlSelf->__PVT__ROB_midcore_o[1U] = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[1U];
    vlSelf->__PVT__ROB_midcore_o[2U] = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[2U];
    vlSelf->__PVT__ROB_midcore_o[3U] = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[3U];
    vlSelf->__PVT__ROB_midcore_o[4U] = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[4U];
    vlSelf->__PVT__ROB_midcore_o[5U] = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[5U];
    vlSelf->__PVT__ROB_midcore_o[6U] = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[6U];
    vlSelf->__PVT__ROB_midcore_o[7U] = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[7U];
    vlSelf->__PVT__ROB_midcore_o[8U] = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[8U];
    vlSelf->__PVT__ROB_midcore_o[9U] = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[9U];
    vlSelf->__PVT__ROB_midcore_o[0xaU] = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[0xaU];
    vlSelf->__PVT__ROB_midcore_o[0xbU] = Vtop_tb__ConstPool__CONST_h3c5fcb02_0[0xbU];
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
            vlSelf->__PVT__ROB_midcore_o[0U] = ((0xfffffffcU 
                                                 & vlSelf->__PVT__ROB_midcore_o[0U]) 
                                                | (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cp_checkpoint_id));
        }
        vlSelf->__PVT__MIDCORE_midcore_o = vlSelf->__PVT__MIDCORE_rename2_reg;
    }
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
    vlSelf->__PVT__free_list__DOT__free_list_next = vlSelf->__PVT__free_list__DOT__free_list;
    if (vlSelf->__PVT__cp_rename_update_o) {
        vlSelf->__PVT__srat__DOT__srat_next[vlSelf->__PVT__rename_update_ar] 
            = vlSelf->__PVT__cp_rename_update_pr_o;
        vlSelf->__PVT__free_list__DOT__free_list_next 
            = ((~ (1ULL << (IData)(vlSelf->__PVT__cp_rename_update_pr_o))) 
               & vlSelf->__PVT__free_list__DOT__free_list_next);
    }
    if (vlSymsp->TOP__top_tb__dut.__Vcellinp__cpu_midcore__commit_update) {
        vlSelf->__PVT__free_list__DOT__free_list_next 
            = (vlSelf->__PVT__free_list__DOT__free_list_next 
               | ((QData)((IData)(1U)) << (0x3fU & 
                                           ((vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[0xbU] 
                                             << 1U) 
                                            | (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[0xaU] 
                                               >> 0x1fU)))));
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
    vlSelf->__PVT__ROB_rename1_o[0xaU] = ((0x7fffffffU 
                                           & vlSelf->__PVT__ROB_rename1_o[0xaU]) 
                                          | (((0x10000U 
                                               & vlSelf->__PVT__ROB_decode_o[0xbU])
                                               ? (((IData)(vlSelf->__PVT__cp_rename_update_o) 
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
                                             << 0x1fU));
    vlSelf->__PVT__ROB_rename1_o[0xbU] = ((0x7f800U 
                                           & vlSelf->__PVT__ROB_rename1_o[0xbU]) 
                                          | (0x7ffffU 
                                             & (((0x10000U 
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
                                                >> 1U)));
    vlSelf->__PVT__ROB_rename1_o[1U] = (0x7fU & vlSelf->__PVT__ROB_rename1_o[1U]);
    vlSelf->__PVT__ROB_rename1_o[2U] = 0U;
    vlSelf->__PVT__ROB_rename1_o[3U] = 0U;
    vlSelf->__PVT__ROB_rename1_o[4U] = 0U;
    vlSelf->__PVT__ROB_rename1_o[5U] = 0U;
    vlSelf->__PVT__ROB_rename1_o[6U] = 0U;
    vlSelf->__PVT__ROB_rename1_o[7U] = (0xfff80000U 
                                        & vlSelf->__PVT__ROB_rename1_o[7U]);
    vlSelf->__PVT__ROB_rename1_o[1U] = (0xffffffefU 
                                        & vlSelf->__PVT__ROB_rename1_o[1U]);
    vlSelf->__PVT__ROB_rename1_o[0U] = (3U & vlSelf->__PVT__ROB_rename1_o[0U]);
    vlSelf->__PVT__ROB_rename1_o[1U] = (0xfffffff8U 
                                        & vlSelf->__PVT__ROB_rename1_o[1U]);
    vlSelf->__PVT__ROB_rename1_o[0xbU] = (0x5ffffU 
                                          & vlSelf->__PVT__ROB_rename1_o[0xbU]);
    vlSelf->__PVT__MIDCORE_rename1_o = vlSelf->__PVT__MIDCORE_decode_o;
    vlSelf->__PVT__MIDCORE_rename1_o = ((0x3ffffffffffc003ULL 
                                         & vlSelf->__PVT__MIDCORE_rename1_o) 
                                        | ((QData)((IData)(
                                                           ((((1U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__MIDCORE_decode_o 
                                                                          >> 0xfU)))
                                                               ? 
                                                              (((IData)(vlSelf->__PVT__cp_rename_update_o) 
                                                                & ((IData)(vlSelf->__PVT__rename_update_ar) 
                                                                   == (IData)(vlSelf->__PVT__srat_lookup_rs1)))
                                                                ? (IData)(vlSelf->__PVT__cp_rename_update_pr_o)
                                                                : 
                                                               vlSelf->__PVT__srat__DOT__srat
                                                               [vlSelf->__PVT__srat_lookup_rs1])
                                                               : 0U) 
                                                             << 6U) 
                                                            | ((1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__MIDCORE_decode_o 
                                                                           >> 0xeU)))
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
    vlSelf->__PVT__MIDCORE_rename1_o = (0x3fffffffffffffcULL 
                                        & vlSelf->__PVT__MIDCORE_rename1_o);
    vlSelf->__PVT__busy_table__DOT__bt_next = vlSelf->__PVT__busy_table__DOT__bt;
    if (vlSelf->__PVT__cp_rename_update_o) {
        vlSelf->__PVT__busy_table__DOT__bt_next = (vlSelf->__PVT__busy_table__DOT__bt_next 
                                                   | ((QData)((IData)(1U)) 
                                                      << (IData)(vlSelf->__PVT__cp_rename_update_pr_o)));
    }
    if (vlSymsp->TOP__top_tb__dut.__PVT__wb_alu) {
        vlSelf->__PVT__busy_table__DOT__bt_next = (
                                                   (~ 
                                                    (1ULL 
                                                     << 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb__dut.__PVT__alu_ROB_exec_o[0xbU] 
                                                         >> 5U)))) 
                                                   & vlSelf->__PVT__busy_table__DOT__bt_next);
    }
    if (vlSymsp->TOP__top_tb__dut.__PVT__wb_load) {
        vlSelf->__PVT__busy_table__DOT__bt_next = (
                                                   (~ 
                                                    (1ULL 
                                                     << 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb__dut.__PVT__mem_ROB_exec_o[0xbU] 
                                                         >> 5U)))) 
                                                   & vlSelf->__PVT__busy_table__DOT__bt_next);
    }
    if (vlSymsp->TOP__top_tb__dut.__PVT__wb_jump) {
        vlSelf->__PVT__busy_table__DOT__bt_next = (
                                                   (~ 
                                                    (1ULL 
                                                     << 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb__dut.__PVT__jump_ROB_exec_o[0xbU] 
                                                         >> 5U)))) 
                                                   & vlSelf->__PVT__busy_table__DOT__bt_next);
    }
    if (vlSymsp->TOP__top_tb__dut.__PVT__wb_cmp) {
        vlSelf->__PVT__busy_table__DOT__bt_next = (
                                                   (~ 
                                                    (1ULL 
                                                     << 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb__dut.__PVT__cmp_ROB_exec_o[0xbU] 
                                                         >> 5U)))) 
                                                   & vlSelf->__PVT__busy_table__DOT__bt_next);
    }
    if (vlSymsp->TOP__top_tb__dut.__PVT__wb_mul) {
        vlSelf->__PVT__busy_table__DOT__bt_next = (
                                                   (~ 
                                                    (1ULL 
                                                     << 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb__dut.__PVT__mul_ROB_exec_o[0xbU] 
                                                         >> 5U)))) 
                                                   & vlSelf->__PVT__busy_table__DOT__bt_next);
    }
}
