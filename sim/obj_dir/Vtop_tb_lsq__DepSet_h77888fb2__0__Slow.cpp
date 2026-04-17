// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb_lsq.h"

extern const VlWide<12>/*383:0*/ Vtop_tb__ConstPool__CONST_h7e30f2cb_0;
extern const VlWide<12>/*383:0*/ Vtop_tb__ConstPool__CONST_h5ba48564_0;

VL_ATTR_COLD void Vtop_tb_lsq___stl_sequent__TOP__top_tb__dut__cpu_execute__lsq__0(Vtop_tb_lsq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_tb_lsq___stl_sequent__TOP__top_tb__dut__cpu_execute__lsq__0\n"); );
    // Body
    vlSelf->__PVT__lq_free_idx = 0U;
    if ((1U & (~ (vlSelf->__PVT__lq[0x3fU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x3fU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x3eU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x3eU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x3dU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x3dU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x3cU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x3cU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x3bU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x3bU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x3aU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x3aU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x39U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x39U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x38U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x38U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x37U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x37U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x36U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x36U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x35U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x35U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x34U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x34U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x33U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x33U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x32U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x32U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x31U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x31U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x30U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x30U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x2fU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x2fU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x2eU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x2eU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x2dU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x2dU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x2cU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x2cU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x2bU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x2bU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x2aU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x2aU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x29U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x29U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x28U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x28U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x27U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x27U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x26U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x26U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x25U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x25U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x24U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x24U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x23U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x23U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x22U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x22U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x21U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x21U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x20U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x20U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x1fU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x1fU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x1eU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x1eU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x1dU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x1dU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x1cU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x1cU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x1bU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x1bU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x1aU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x1aU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x19U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x19U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x18U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x18U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x17U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x17U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x16U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x16U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x15U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x15U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x14U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x14U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x13U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x13U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x12U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x12U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x11U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x11U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x10U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0x10U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0xfU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0xfU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0xeU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0xeU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0xdU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0xdU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0xcU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0xcU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0xbU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0xbU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0xaU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0xaU;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[9U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 9U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[8U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 8U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[7U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 7U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[6U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 6U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[5U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 5U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[4U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 4U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[3U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 3U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[2U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 2U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[1U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 1U;
    }
    vlSelf->__PVT__store_issue_wmask_o = (0xfU & (vlSelf->__PVT__sq
                                                  [
                                                  (0x3fU 
                                                   & (IData)(vlSelf->__PVT__sq_rdPtr))][0xeU] 
                                                  >> 9U));
    vlSelf->__PVT__store_issue_wdata_o = ((vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & (IData)(vlSelf->__PVT__sq_rdPtr))][0xcU] 
                                           << 2U) | 
                                          (vlSelf->__PVT__sq
                                           [(0x3fU 
                                             & (IData)(vlSelf->__PVT__sq_rdPtr))][0xbU] 
                                           >> 0x1eU));
    vlSelf->__PVT__store_issue_addr_o = ((vlSelf->__PVT__sq
                                          [(0x3fU & (IData)(vlSelf->__PVT__sq_rdPtr))][0xfU] 
                                          << 0x13U) 
                                         | (vlSelf->__PVT__sq
                                            [(0x3fU 
                                              & (IData)(vlSelf->__PVT__sq_rdPtr))][0xeU] 
                                            >> 0xdU));
    vlSelf->__PVT__lq_has_free = 0U;
    if ((1U & (~ (vlSelf->__PVT__lq[0x3fU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x3eU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x3dU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x3cU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x3bU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x3aU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x39U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x38U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x37U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x36U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x35U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x34U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x33U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x32U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x31U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x30U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x2fU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x2eU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x2dU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x2cU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x2bU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x2aU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x29U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x28U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x27U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x26U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x25U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x24U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x23U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x22U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x21U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x20U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x1fU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x1eU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x1dU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x1cU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x1bU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x1aU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x19U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x18U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x17U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x16U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x15U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x14U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x13U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x12U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x11U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0x10U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0xfU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0xeU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0xdU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0xcU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0xbU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0xaU][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[9U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[8U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[7U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[6U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[5U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[4U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[3U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[2U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[1U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_has_free = 1U;
    }
    if ((1U & (~ (vlSelf->__PVT__lq[0U][0xfU] >> 0x12U)))) {
        vlSelf->__PVT__lq_free_idx = 0U;
        vlSelf->__PVT__lq_has_free = 1U;
    }
    vlSelf->__PVT__sq_full_o = (((1U & ((IData)(vlSelf->__PVT__sq_wrPtr) 
                                        >> 6U)) != 
                                 (1U & ((IData)(vlSelf->__PVT__sq_rdPtr) 
                                        >> 6U))) & 
                                ((0x3fU & (IData)(vlSelf->__PVT__sq_wrPtr)) 
                                 == (0x3fU & (IData)(vlSelf->__PVT__sq_rdPtr))));
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
    vlSelf->__PVT__sq_empty = ((IData)(vlSelf->__PVT__sq_rdPtr) 
                               == (IData)(vlSelf->__PVT__sq_wrPtr));
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
    vlSelf->__PVT__swb_h = (0x3fU & (IData)(vlSelf->__PVT__sq_rdPtr));
    vlSelf->__PVT__store_wb_valid_o = (1U & ((((~ (IData)(vlSelf->__PVT__sq_empty)) 
                                               & (vlSelf->__PVT__sq
                                                  [vlSelf->__PVT__swb_h][0x11U] 
                                                  >> 0x16U)) 
                                              & (vlSelf->__PVT__sq
                                                 [vlSelf->__PVT__swb_h][0x11U] 
                                                 >> 0x15U)) 
                                             & (~ (
                                                   vlSelf->__PVT__sq
                                                   [vlSelf->__PVT__swb_h][0x11U] 
                                                   >> 0x17U))));
    vlSelf->__PVT__store_wb_rob_data_o[0U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0U];
    vlSelf->__PVT__store_wb_rob_data_o[1U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[1U];
    vlSelf->__PVT__store_wb_rob_data_o[2U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[2U];
    vlSelf->__PVT__store_wb_rob_data_o[3U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[3U];
    vlSelf->__PVT__store_wb_rob_data_o[4U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[4U];
    vlSelf->__PVT__store_wb_rob_data_o[5U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[5U];
    vlSelf->__PVT__store_wb_rob_data_o[6U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[6U];
    vlSelf->__PVT__store_wb_rob_data_o[7U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[7U];
    vlSelf->__PVT__store_wb_rob_data_o[8U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[8U];
    vlSelf->__PVT__store_wb_rob_data_o[9U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[9U];
    vlSelf->__PVT__store_wb_rob_data_o[0xaU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xaU];
    vlSelf->__PVT__store_wb_rob_data_o[0xbU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xbU];
    if (vlSelf->__PVT__store_wb_valid_o) {
        vlSelf->__PVT__store_wb_rob_data_o[0U] = (Vtop_tb__ConstPool__CONST_h5ba48564_0[0U] 
                                                  & vlSelf->__PVT__sq
                                                  [vlSelf->__PVT__swb_h][0U]);
        vlSelf->__PVT__store_wb_rob_data_o[1U] = (Vtop_tb__ConstPool__CONST_h5ba48564_0[1U] 
                                                  & vlSelf->__PVT__sq
                                                  [vlSelf->__PVT__swb_h][1U]);
        vlSelf->__PVT__store_wb_rob_data_o[2U] = (Vtop_tb__ConstPool__CONST_h5ba48564_0[2U] 
                                                  & vlSelf->__PVT__sq
                                                  [vlSelf->__PVT__swb_h][2U]);
        vlSelf->__PVT__store_wb_rob_data_o[3U] = (Vtop_tb__ConstPool__CONST_h5ba48564_0[3U] 
                                                  & vlSelf->__PVT__sq
                                                  [vlSelf->__PVT__swb_h][3U]);
        vlSelf->__PVT__store_wb_rob_data_o[4U] = (Vtop_tb__ConstPool__CONST_h5ba48564_0[4U] 
                                                  & vlSelf->__PVT__sq
                                                  [vlSelf->__PVT__swb_h][4U]);
        vlSelf->__PVT__store_wb_rob_data_o[5U] = (Vtop_tb__ConstPool__CONST_h5ba48564_0[5U] 
                                                  & vlSelf->__PVT__sq
                                                  [vlSelf->__PVT__swb_h][5U]);
        vlSelf->__PVT__store_wb_rob_data_o[6U] = (Vtop_tb__ConstPool__CONST_h5ba48564_0[6U] 
                                                  & vlSelf->__PVT__sq
                                                  [vlSelf->__PVT__swb_h][6U]);
        vlSelf->__PVT__store_wb_rob_data_o[7U] = (Vtop_tb__ConstPool__CONST_h5ba48564_0[7U] 
                                                  & vlSelf->__PVT__sq
                                                  [vlSelf->__PVT__swb_h][7U]);
        vlSelf->__PVT__store_wb_rob_data_o[8U] = (Vtop_tb__ConstPool__CONST_h5ba48564_0[8U] 
                                                  & vlSelf->__PVT__sq
                                                  [vlSelf->__PVT__swb_h][8U]);
        vlSelf->__PVT__store_wb_rob_data_o[9U] = (Vtop_tb__ConstPool__CONST_h5ba48564_0[9U] 
                                                  & vlSelf->__PVT__sq
                                                  [vlSelf->__PVT__swb_h][9U]);
        vlSelf->__PVT__store_wb_rob_data_o[0xaU] = 
            (Vtop_tb__ConstPool__CONST_h5ba48564_0[0xaU] 
             & vlSelf->__PVT__sq[vlSelf->__PVT__swb_h][0xaU]);
        vlSelf->__PVT__store_wb_rob_data_o[0xbU] = 
            (Vtop_tb__ConstPool__CONST_h5ba48564_0[0xbU] 
             & vlSelf->__PVT__sq[vlSelf->__PVT__swb_h][0xbU]);
        vlSelf->__PVT__store_wb_rob_data_o[5U] = ((0xfffffffU 
                                                   & vlSelf->__PVT__store_wb_rob_data_o[5U]) 
                                                  | ((IData)(
                                                             (((QData)((IData)(
                                                                               ((vlSelf->__PVT__sq
                                                                                [vlSelf->__PVT__swb_h][0x11U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__sq
                                                                                [vlSelf->__PVT__swb_h][0x10U] 
                                                                                >> 0xdU)))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                ((vlSelf->__PVT__sq
                                                                                [vlSelf->__PVT__swb_h][0xeU] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->__PVT__sq
                                                                                [vlSelf->__PVT__swb_h][0xdU] 
                                                                                >> 1U)))))) 
                                                     << 0x1cU));
        vlSelf->__PVT__store_wb_rob_data_o[6U] = (((IData)(
                                                           (((QData)((IData)(
                                                                             ((vlSelf->__PVT__sq
                                                                               [vlSelf->__PVT__swb_h][0x11U] 
                                                                               << 0x13U) 
                                                                              | (vlSelf->__PVT__sq
                                                                                [vlSelf->__PVT__swb_h][0x10U] 
                                                                                >> 0xdU)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((vlSelf->__PVT__sq
                                                                                [vlSelf->__PVT__swb_h][0xeU] 
                                                                                << 0x1fU) 
                                                                               | (vlSelf->__PVT__sq
                                                                                [vlSelf->__PVT__swb_h][0xdU] 
                                                                                >> 1U)))))) 
                                                   >> 4U) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(
                                                                                ((vlSelf->__PVT__sq
                                                                                [vlSelf->__PVT__swb_h][0x11U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__sq
                                                                                [vlSelf->__PVT__swb_h][0x10U] 
                                                                                >> 0xdU)))) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                ((vlSelf->__PVT__sq
                                                                                [vlSelf->__PVT__swb_h][0xeU] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->__PVT__sq
                                                                                [vlSelf->__PVT__swb_h][0xdU] 
                                                                                >> 1U))))) 
                                                              >> 0x20U)) 
                                                     << 0x1cU));
        vlSelf->__PVT__store_wb_rob_data_o[7U] = ((0xf0000000U 
                                                   & vlSelf->__PVT__store_wb_rob_data_o[7U]) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(
                                                                                ((vlSelf->__PVT__sq
                                                                                [vlSelf->__PVT__swb_h][0x11U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__sq
                                                                                [vlSelf->__PVT__swb_h][0x10U] 
                                                                                >> 0xdU)))) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                ((vlSelf->__PVT__sq
                                                                                [vlSelf->__PVT__swb_h][0xeU] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->__PVT__sq
                                                                                [vlSelf->__PVT__swb_h][0xdU] 
                                                                                >> 1U))))) 
                                                              >> 0x20U)) 
                                                     >> 4U));
        vlSelf->__PVT__store_wb_rob_data_o[3U] = ((0x3fffffU 
                                                   & vlSelf->__PVT__store_wb_rob_data_o[3U]) 
                                                  | (0xffc00000U 
                                                     & (vlSelf->__PVT__sq
                                                        [vlSelf->__PVT__swb_h][0xeU] 
                                                        << 9U)));
        vlSelf->__PVT__store_wb_rob_data_o[4U] = ((0xffc00000U 
                                                   & vlSelf->__PVT__store_wb_rob_data_o[4U]) 
                                                  | (0x3fffffU 
                                                     & ((0x3ffe00U 
                                                         & (vlSelf->__PVT__sq
                                                            [vlSelf->__PVT__swb_h][0xfU] 
                                                            << 9U)) 
                                                        | (vlSelf->__PVT__sq
                                                           [vlSelf->__PVT__swb_h][0xeU] 
                                                           >> 0x17U))));
        vlSelf->__PVT__store_wb_rob_data_o[3U] = ((0xfffc3fffU 
                                                   & vlSelf->__PVT__store_wb_rob_data_o[3U]) 
                                                  | (0x3c000U 
                                                     & (vlSelf->__PVT__sq
                                                        [vlSelf->__PVT__swb_h][0xeU] 
                                                        << 5U)));
        vlSelf->__PVT__store_wb_rob_data_o[1U] = ((0x3fffU 
                                                   & vlSelf->__PVT__store_wb_rob_data_o[1U]) 
                                                  | (0xffffc000U 
                                                     & ((vlSelf->__PVT__sq
                                                         [vlSelf->__PVT__swb_h][0xcU] 
                                                         << 0x10U) 
                                                        | (0xc000U 
                                                           & (vlSelf->__PVT__sq
                                                              [vlSelf->__PVT__swb_h][0xbU] 
                                                              >> 0x10U)))));
        vlSelf->__PVT__store_wb_rob_data_o[2U] = ((0xffffc000U 
                                                   & vlSelf->__PVT__store_wb_rob_data_o[2U]) 
                                                  | (0x3fffU 
                                                     & (vlSelf->__PVT__sq
                                                        [vlSelf->__PVT__swb_h][0xcU] 
                                                        >> 0x10U)));
        vlSelf->__PVT__store_wb_rob_data_o[3U] = (0xffc3ffffU 
                                                  & vlSelf->__PVT__store_wb_rob_data_o[3U]);
        vlSelf->__PVT__store_wb_rob_data_o[2U] = (0x3fffU 
                                                  & vlSelf->__PVT__store_wb_rob_data_o[2U]);
        vlSelf->__PVT__store_wb_rob_data_o[3U] = (0xffffc000U 
                                                  & vlSelf->__PVT__store_wb_rob_data_o[3U]);
        vlSelf->__PVT__store_wb_rob_data_o[1U] = (0xfffff7ffU 
                                                  & vlSelf->__PVT__store_wb_rob_data_o[1U]);
        vlSelf->__PVT__store_wb_rob_data_o[0U] = ((0x3ffU 
                                                   & vlSelf->__PVT__store_wb_rob_data_o[0U]) 
                                                  | (((IData)(4U) 
                                                      + 
                                                      ((vlSelf->__PVT__sq
                                                        [vlSelf->__PVT__swb_h][0xbU] 
                                                        << 0x18U) 
                                                       | (vlSelf->__PVT__sq
                                                          [vlSelf->__PVT__swb_h][0xaU] 
                                                          >> 8U))) 
                                                     << 0xaU));
        vlSelf->__PVT__store_wb_rob_data_o[1U] = ((0xfffffc00U 
                                                   & vlSelf->__PVT__store_wb_rob_data_o[1U]) 
                                                  | (((IData)(4U) 
                                                      + 
                                                      ((vlSelf->__PVT__sq
                                                        [vlSelf->__PVT__swb_h][0xbU] 
                                                        << 0x18U) 
                                                       | (vlSelf->__PVT__sq
                                                          [vlSelf->__PVT__swb_h][0xaU] 
                                                          >> 8U))) 
                                                     >> 0x16U));
        vlSelf->__PVT__store_wb_rob_data_o[0U] = (0xfffffdffU 
                                                  & vlSelf->__PVT__store_wb_rob_data_o[0U]);
        vlSelf->__PVT__store_wb_rob_data_o[4U] = (0x3fffffU 
                                                  & vlSelf->__PVT__store_wb_rob_data_o[4U]);
        vlSelf->__PVT__store_wb_rob_data_o[5U] = (0xffc00000U 
                                                  & vlSelf->__PVT__store_wb_rob_data_o[5U]);
        vlSelf->__PVT__store_wb_rob_data_o[0xbU] = 
            (0x10000000U | vlSelf->__PVT__store_wb_rob_data_o[0xbU]);
    }
    vlSelf->__PVT__store_issue_valid_o = (1U & ((~ (IData)(vlSelf->__PVT__sq_empty)) 
                                                & (vlSelf->__PVT__sq
                                                   [
                                                   (0x3fU 
                                                    & (IData)(vlSelf->__PVT__sq_rdPtr))][0x11U] 
                                                   >> 0x18U)));
}
