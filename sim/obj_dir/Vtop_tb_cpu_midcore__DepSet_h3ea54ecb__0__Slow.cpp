// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb_cpu_midcore.h"

extern const VlUnpacked<CData/*2:0*/, 256> Vtop_tb__ConstPool__TABLE_he9283809_0;

VL_ATTR_COLD void Vtop_tb_cpu_midcore___stl_sequent__TOP__top_tb__dut__cpu_midcore__0(Vtop_tb_cpu_midcore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_tb_cpu_midcore___stl_sequent__TOP__top_tb__dut__cpu_midcore__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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
    vlSelf->__VdfgTmp_h1b7601cf__0 = ((4U == (7U & (IData)(
                                                           (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                            >> 0x19U)))) 
                                      | (5U == (7U 
                                                & (IData)(
                                                          (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                           >> 0x19U)))));
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
    vlSelf->stall_load_full = ((~ (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_has_free)) 
                               & (0x4000000ULL == (0xe000000ULL 
                                                   & vlSelf->__PVT__MIDCORE_rename2_reg)));
    vlSelf->stall_store_full = ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_full_o) 
                                & (0x6000000ULL == 
                                   (0xe000000ULL & vlSelf->__PVT__MIDCORE_rename2_reg)));
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
    vlSelf->stall_lc_checkpoint_full = ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__lc_checkpoint_full) 
                                        & (0x4000000ULL 
                                           == (0xe000000ULL 
                                               & vlSelf->__PVT__MIDCORE_rename2_reg)));
    vlSelf->stall_rob_full = vlSymsp->TOP__top_tb__dut.__PVT__rob_full;
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
    vlSelf->__PVT__is_br_or_jump = ((1U == (7U & (IData)(
                                                         (vlSelf->__PVT__MIDCORE_rename2_reg 
                                                          >> 0x19U)))) 
                                    | (IData)(vlSelf->__VdfgTmp_h1b7601cf__0));
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
    vlSelf->stall_no_free_pr = (1U & ((~ (IData)(vlSelf->__PVT__free_pr_valid)) 
                                      & (vlSelf->__PVT__ROB_rename2_o[0xbU] 
                                         >> 0x1bU)));
    vlSelf->stall_checkpoint_full = ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__checkpoint_full) 
                                     & (IData)(vlSelf->__PVT__is_br_or_jump));
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
}

VL_ATTR_COLD void Vtop_tb_cpu_midcore___stl_sequent__TOP__top_tb__dut__cpu_midcore__1(Vtop_tb_cpu_midcore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_tb_cpu_midcore___stl_sequent__TOP__top_tb__dut__cpu_midcore__1\n"); );
    // Body
    vlSelf->stall_alu_full = ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__alu_full_o) 
                              & (0ULL == (0xe000000ULL 
                                          & vlSelf->__PVT__MIDCORE_rename2_reg)));
    vlSelf->stall_cmp_full = ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__cmp_full_o) 
                              & (0x2000000ULL == (0xe000000ULL 
                                                  & vlSelf->__PVT__MIDCORE_rename2_reg)));
    vlSelf->stall_jump_full = ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__jump_full_o) 
                               & (IData)(vlSelf->__VdfgTmp_h1b7601cf__0));
    vlSelf->stall_mul_full = ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute.__PVT__mul_full_o) 
                              & (0xc000000ULL == (0xe000000ULL 
                                                  & vlSelf->__PVT__MIDCORE_rename2_reg)));
}
