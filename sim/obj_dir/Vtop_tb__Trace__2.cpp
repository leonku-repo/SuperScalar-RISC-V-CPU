// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


void Vtop_tb___024root__trace_chg_0_sub_2(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0_sub_2\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 7379);
    // Body
    bufp->chgBit(oldp+0,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_rob_full));
    bufp->chgBit(oldp+1,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_alu_full));
    bufp->chgBit(oldp+2,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_cmp_full));
    bufp->chgBit(oldp+3,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_load_full));
    bufp->chgBit(oldp+4,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_store_full));
    bufp->chgBit(oldp+5,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_jump_full));
    bufp->chgBit(oldp+6,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_mul_full));
    bufp->chgBit(oldp+7,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_no_free_pr));
    bufp->chgBit(oldp+8,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_checkpoint_full));
}

void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_cleanup\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
