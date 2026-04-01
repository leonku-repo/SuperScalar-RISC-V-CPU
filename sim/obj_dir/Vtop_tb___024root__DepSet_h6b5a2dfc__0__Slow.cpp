// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_settle(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../tb/top_tb.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root___eval_triggers__stl(Vtop_tb___024root* vlSelf);
VL_ATTR_COLD void Vtop_tb___024root___eval_stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__ico(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__nba(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root___ctor_var_reset(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->dut_rst = VL_RAND_RESET_I(1);
    vlSelf->imem_rdata = VL_RAND_RESET_I(32);
    vlSelf->imem_resp = VL_RAND_RESET_I(1);
    vlSelf->imem_addr = VL_RAND_RESET_I(32);
    vlSelf->imem_read = VL_RAND_RESET_I(1);
    vlSelf->dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->dmem_resp = VL_RAND_RESET_I(1);
    vlSelf->dmem_addr = VL_RAND_RESET_I(32);
    vlSelf->dmem_read = VL_RAND_RESET_I(1);
    vlSelf->dmem_write = VL_RAND_RESET_I(1);
    vlSelf->dmem_wmask = VL_RAND_RESET_I(4);
    vlSelf->dmem_wdata = VL_RAND_RESET_I(32);
    vlSelf->golden_imem_rdata = VL_RAND_RESET_I(32);
    vlSelf->golden_imem_resp = VL_RAND_RESET_I(1);
    vlSelf->golden_imem_addr = VL_RAND_RESET_I(32);
    vlSelf->golden_imem_read = VL_RAND_RESET_I(1);
    vlSelf->golden_dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->golden_dmem_resp = VL_RAND_RESET_I(1);
    vlSelf->golden_dmem_addr = VL_RAND_RESET_I(32);
    vlSelf->golden_dmem_read = VL_RAND_RESET_I(1);
    vlSelf->golden_dmem_write = VL_RAND_RESET_I(1);
    vlSelf->golden_dmem_wmask = VL_RAND_RESET_I(4);
    vlSelf->golden_dmem_wdata = VL_RAND_RESET_I(32);
    vlSelf->halt = VL_RAND_RESET_I(1);
    vlSelf->error = VL_RAND_RESET_I(1);
    vlSelf->any_commit = VL_RAND_RESET_I(1);
    vlSelf->mispredict_o = VL_RAND_RESET_I(1);
    vlSelf->eoc_enable = VL_RAND_RESET_I(1);
    vlSelf->dut_order = VL_RAND_RESET_Q(64);
    vlSelf->dut_pc = VL_RAND_RESET_I(32);
    vlSelf->dut_inst = VL_RAND_RESET_I(32);
    vlSelf->dut_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->dut_rd_wdata = VL_RAND_RESET_I(32);
    vlSelf->dut_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->dut_mem_rmask = VL_RAND_RESET_I(4);
    vlSelf->dut_mem_wmask = VL_RAND_RESET_I(4);
    vlSelf->dut_mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->dut_mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->golden_commit = VL_RAND_RESET_I(1);
    vlSelf->golden_order = VL_RAND_RESET_Q(64);
    vlSelf->golden_pc = VL_RAND_RESET_I(32);
    vlSelf->golden_inst = VL_RAND_RESET_I(32);
    vlSelf->golden_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->golden_rd_wdata = VL_RAND_RESET_I(32);
    vlSelf->golden_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->golden_mem_rmask = VL_RAND_RESET_I(4);
    vlSelf->golden_mem_wmask = VL_RAND_RESET_I(4);
    vlSelf->golden_mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->golden_mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
