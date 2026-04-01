// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__ico(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_tb___024root___eval_triggers__ico(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_tb___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop_tb___024root___ico_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->golden_mem_rdata = vlSelf->golden_dmem_rdata;
    vlSelf->imem_read = (1U & (~ ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetchq_full) 
                                  & (IData)(vlSelf->imem_resp))));
}

VL_INLINE_OPT void Vtop_tb___024root___ico_sequent__TOP__1(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___ico_sequent__TOP__1\n"); );
    // Body
    vlSelf->golden_commit = vlSymsp->TOP__top_tb.__PVT__golden__DOT__commit;
    vlSelf->golden_rd_addr = ((IData)(vlSymsp->TOP__top_tb.__PVT__golden__DOT__regf_we)
                               ? (0x1fU & (vlSymsp->TOP__top_tb.__PVT__golden__DOT__ir__DOT__data 
                                           >> 7U)) : 0U);
    vlSelf->golden_mem_rmask = vlSymsp->TOP__top_tb.__PVT__golden__DOT__dmem_rmask;
    vlSelf->golden_rd_wdata = vlSymsp->TOP__top_tb.__PVT__golden__DOT__rd_v;
    vlSelf->golden_mem_addr = vlSymsp->TOP__top_tb.golden_dmem_addr;
    vlSelf->golden_dmem_addr = vlSymsp->TOP__top_tb.golden_dmem_addr;
    vlSelf->golden_mem_wmask = vlSymsp->TOP__top_tb.golden_dmem_wmask;
    vlSelf->golden_dmem_wmask = vlSymsp->TOP__top_tb.golden_dmem_wmask;
    vlSelf->golden_mem_wdata = vlSymsp->TOP__top_tb.golden_dmem_wdata;
    vlSelf->golden_dmem_wdata = vlSymsp->TOP__top_tb.golden_dmem_wdata;
}

void Vtop_tb_top_tb___ico_sequent__TOP__top_tb__0(Vtop_tb_top_tb* vlSelf);
void Vtop_tb_cpu___ico_sequent__TOP__top_tb__dut__0(Vtop_tb_cpu* vlSelf);
void Vtop_tb_cpu_midcore___ico_sequent__TOP__top_tb__dut__cpu_midcore__0(Vtop_tb_cpu_midcore* vlSelf);
void Vtop_tb_cpu___ico_sequent__TOP__top_tb__dut__1(Vtop_tb_cpu* vlSelf);

void Vtop_tb___024root___eval_ico(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop_tb___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtop_tb_top_tb___ico_sequent__TOP__top_tb__0((&vlSymsp->TOP__top_tb));
        Vtop_tb_cpu___ico_sequent__TOP__top_tb__dut__0((&vlSymsp->TOP__top_tb__dut));
        Vtop_tb_cpu_midcore___ico_sequent__TOP__top_tb__dut__cpu_midcore__0((&vlSymsp->TOP__top_tb__dut__cpu_midcore));
        Vtop_tb___024root___ico_sequent__TOP__1(vlSelf);
        Vtop_tb_cpu___ico_sequent__TOP__top_tb__dut__1((&vlSymsp->TOP__top_tb__dut));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_tb___024root___eval_triggers__act(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->golden_order = vlSymsp->TOP__top_tb.__PVT__golden__DOT__order;
    vlSelf->golden_pc = vlSymsp->TOP__top_tb.__PVT__golden__DOT__pc;
    vlSelf->golden_inst = vlSymsp->TOP__top_tb.__PVT__golden__DOT__ir__DOT__data;
    vlSelf->error = vlSymsp->TOP__top_tb__mon_itf.__PVT__error;
    vlSelf->halt = vlSymsp->TOP__top_tb.halt;
    vlSelf->golden_dmem_write = vlSymsp->TOP__top_tb.golden_dmem_write;
    vlSelf->golden_imem_read = vlSymsp->TOP__top_tb.golden_imem_read;
    vlSelf->golden_dmem_read = vlSymsp->TOP__top_tb.golden_dmem_read;
    vlSelf->golden_commit = vlSymsp->TOP__top_tb.__PVT__golden__DOT__commit;
    vlSelf->golden_imem_addr = vlSymsp->TOP__top_tb.golden_imem_addr;
    vlSelf->golden_rd_addr = ((IData)(vlSymsp->TOP__top_tb.__PVT__golden__DOT__regf_we)
                               ? (0x1fU & (vlSymsp->TOP__top_tb.__PVT__golden__DOT__ir__DOT__data 
                                           >> 7U)) : 0U);
    vlSelf->golden_mem_rmask = vlSymsp->TOP__top_tb.__PVT__golden__DOT__dmem_rmask;
    vlSelf->golden_rd_wdata = vlSymsp->TOP__top_tb.__PVT__golden__DOT__rd_v;
    vlSelf->golden_mem_addr = vlSymsp->TOP__top_tb.golden_dmem_addr;
    vlSelf->golden_dmem_addr = vlSymsp->TOP__top_tb.golden_dmem_addr;
    vlSelf->golden_mem_wmask = vlSymsp->TOP__top_tb.golden_dmem_wmask;
    vlSelf->golden_dmem_wmask = vlSymsp->TOP__top_tb.golden_dmem_wmask;
    vlSelf->golden_mem_wdata = vlSymsp->TOP__top_tb.golden_dmem_wdata;
    vlSelf->golden_dmem_wdata = vlSymsp->TOP__top_tb.golden_dmem_wdata;
    vlSelf->dut_order = vlSymsp->TOP__top_tb__dut.__PVT__order;
    vlSelf->imem_addr = vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc;
    vlSelf->dut_mem_wdata = ((vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[2U] 
                              << 0x1bU) | (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[1U] 
                                           >> 5U));
    vlSelf->dut_mem_rdata = ((vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[3U] 
                              << 0x1bU) | (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[2U] 
                                           >> 5U));
    vlSelf->dut_mem_wmask = (0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[3U] 
                                     >> 5U));
    vlSelf->dut_mem_rmask = (0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[3U] 
                                     >> 9U));
    vlSelf->dut_mem_addr = ((vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[4U] 
                             << 0x13U) | (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[3U] 
                                          >> 0xdU));
    vlSelf->dut_rd_wdata = ((vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[5U] 
                             << 0x13U) | (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[4U] 
                                          >> 0xdU));
    vlSelf->dut_inst = ((vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[8U] 
                         << 3U) | (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[7U] 
                                   >> 0x1dU));
    vlSelf->dut_pc = ((vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[0xaU] 
                       << 3U) | (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[9U] 
                                 >> 0x1dU));
    vlSelf->dut_rd_addr = vlSymsp->TOP__top_tb__dut.__PVT__monitor_rd_addr;
    vlSelf->imem_read = (1U & (~ ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetchq_full) 
                                  & (IData)(vlSelf->imem_resp))));
    vlSelf->dmem_read = ((~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__LDorST_i)) 
                         & (IData)(vlSymsp->TOP__top_tb__dut.cpu_execute__DOT__mem__DOT____VdfgTmp_hfe74eb39__0));
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__1(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->any_commit = vlSymsp->TOP__top_tb__dut.__PVT__monitor_valid;
    vlSelf->mispredict_o = vlSymsp->TOP__top_tb__dut.__PVT__mispredict;
    vlSelf->dmem_write = ((IData)(vlSymsp->TOP__top_tb__dut.cpu_execute__DOT__mem__DOT____VdfgTmp_hfe74eb39__0) 
                          & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__store_match));
    vlSelf->dmem_wdata = vlSymsp->TOP__top_tb__dut.__PVT__dmem_wdata;
    vlSelf->dmem_addr = vlSymsp->TOP__top_tb__dut.__PVT__dmem_addr;
    vlSelf->dmem_wmask = vlSymsp->TOP__top_tb__dut.__PVT__dmem_wmask;
}

void Vtop_tb_top_tb___nba_sequent__TOP__top_tb__0(Vtop_tb_top_tb* vlSelf);
void Vtop_tb_top_tb___nba_sequent__TOP__top_tb__1(Vtop_tb_top_tb* vlSelf);
void Vtop_tb_cpu___nba_sequent__TOP__top_tb__dut__0(Vtop_tb_cpu* vlSelf);
void Vtop_tb_cpu___nba_sequent__TOP__top_tb__dut__1(Vtop_tb_cpu* vlSelf);
void Vtop_tb_cpu___nba_sequent__TOP__top_tb__dut__2(Vtop_tb_cpu* vlSelf);
void Vtop_tb_cpu_midcore___nba_sequent__TOP__top_tb__dut__cpu_midcore__0(Vtop_tb_cpu_midcore* vlSelf);
void Vtop_tb_top_tb___nba_sequent__TOP__top_tb__2(Vtop_tb_top_tb* vlSelf);
void Vtop_tb_cpu___nba_sequent__TOP__top_tb__dut__3(Vtop_tb_cpu* vlSelf);
void Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec__0(Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec* vlSelf);
void Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec__0(Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec* vlSelf);
void Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec__0(Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec* vlSelf);
void Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec__0(Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec* vlSelf);
void Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec__0(Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec* vlSelf);
void Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec__0(Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec* vlSelf);
void Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec__0(Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec* vlSelf);
void Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec__0(Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec* vlSelf);
void Vtop_tb_cpu_midcore___nba_sequent__TOP__top_tb__dut__cpu_midcore__1(Vtop_tb_cpu_midcore* vlSelf);
void Vtop_tb_top_tb___nba_sequent__TOP__top_tb__3(Vtop_tb_top_tb* vlSelf);
void Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec__1(Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec* vlSelf);
void Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec__1(Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec* vlSelf);
void Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec__1(Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec* vlSelf);
void Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec__1(Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec* vlSelf);
void Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec__1(Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec* vlSelf);
void Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec__1(Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec* vlSelf);
void Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec__1(Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec* vlSelf);
void Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec__1(Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec* vlSelf);
void Vtop_tb_cpu___nba_sequent__TOP__top_tb__dut__5(Vtop_tb_cpu* vlSelf);

void Vtop_tb___024root___eval_nba(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb_top_tb___nba_sequent__TOP__top_tb__0((&vlSymsp->TOP__top_tb));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vtop_tb_top_tb___nba_sequent__TOP__top_tb__1((&vlSymsp->TOP__top_tb));
        Vtop_tb_cpu___nba_sequent__TOP__top_tb__dut__0((&vlSymsp->TOP__top_tb__dut));
        Vtop_tb_cpu___nba_sequent__TOP__top_tb__dut__1((&vlSymsp->TOP__top_tb__dut));
        Vtop_tb_cpu___nba_sequent__TOP__top_tb__dut__2((&vlSymsp->TOP__top_tb__dut));
        Vtop_tb_cpu_midcore___nba_sequent__TOP__top_tb__dut__cpu_midcore__0((&vlSymsp->TOP__top_tb__dut__cpu_midcore));
        Vtop_tb___024root___nba_sequent__TOP__0(vlSelf);
        Vtop_tb_top_tb___nba_sequent__TOP__top_tb__2((&vlSymsp->TOP__top_tb));
        Vtop_tb_cpu___nba_sequent__TOP__top_tb__dut__3((&vlSymsp->TOP__top_tb__dut));
        Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec__0((&vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec));
        Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec__0((&vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec));
        Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec__0((&vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec));
        Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec__0((&vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec));
        Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec__0((&vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec));
        Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec__0((&vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec));
        Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec__0((&vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec));
        Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec__0((&vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec));
        Vtop_tb_cpu_midcore___nba_sequent__TOP__top_tb__dut__cpu_midcore__1((&vlSymsp->TOP__top_tb__dut__cpu_midcore));
        Vtop_tb___024root___nba_sequent__TOP__1(vlSelf);
        Vtop_tb_top_tb___nba_sequent__TOP__top_tb__3((&vlSymsp->TOP__top_tb));
        Vtop_tb_cpu___ico_sequent__TOP__top_tb__dut__1((&vlSymsp->TOP__top_tb__dut));
        Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec__1((&vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec));
        Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec__1((&vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec));
        Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec__1((&vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec));
        Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec__1((&vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec));
        Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec__1((&vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec));
        Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec__1((&vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec));
        Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec__1((&vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec));
        Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec__1((&vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec));
        Vtop_tb_cpu___nba_sequent__TOP__top_tb__dut__5((&vlSymsp->TOP__top_tb__dut));
    }
}
