// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_2(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0_sub_2\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+7379,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_rob_full));
    bufp->fullBit(oldp+7380,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_alu_full));
    bufp->fullBit(oldp+7381,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_cmp_full));
    bufp->fullBit(oldp+7382,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_load_full));
    bufp->fullBit(oldp+7383,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_store_full));
    bufp->fullBit(oldp+7384,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_jump_full));
    bufp->fullBit(oldp+7385,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_mul_full));
    bufp->fullBit(oldp+7386,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_no_free_pr));
    bufp->fullBit(oldp+7387,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_checkpoint_full));
}
