// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_4(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0_sub_4\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+15806,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+15807,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x26U][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+15808,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x26U][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+15809,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x26U][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+15810,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+15811,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x26U][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x26U][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+15812,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+15813,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x26U][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+15814,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x26U][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+15815,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x26U][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+15816,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x26U][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+15817,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x26U][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+15818,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x26U][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+15819,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+15820,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][9U] >> 8U))),32);
    bufp->fullIData(oldp+15821,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][8U] >> 8U))),32);
    bufp->fullBit(oldp+15822,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x26U][8U] >> 7U))));
    bufp->fullBit(oldp+15823,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x26U][8U] >> 6U))));
    bufp->fullCData(oldp+15824,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x26U][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+15825,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x26U][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x26U][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+15826,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+15827,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+15828,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x26U][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+15829,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+15830,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+15831,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x26U][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+15832,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x26U][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+15833,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+15834,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+15835,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x26U][1U] >> 0xdU))));
    bufp->fullBit(oldp+15836,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x26U][1U] >> 0xcU))));
    bufp->fullBit(oldp+15837,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x26U][1U] >> 0xbU))));
    bufp->fullBit(oldp+15838,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x26U][1U] >> 0xaU))));
    bufp->fullIData(oldp+15839,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+15840,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x26U][0U] >> 9U))));
    bufp->fullCData(oldp+15841,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x26U][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+15842,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x26U][0U])),6);
    bufp->fullBit(oldp+15843,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+15844,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+15845,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+15846,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+15847,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+15848,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x27U][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+15849,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+15850,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+15851,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+15852,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+15853,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x27U][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+15854,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x27U][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+15855,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+15856,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+15857,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x27U][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x27U][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+15858,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+15859,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+15860,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+15861,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+15862,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x27U][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+15863,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x27U][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+15864,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x27U][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+15865,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+15866,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][9U] >> 8U))),32);
    bufp->fullIData(oldp+15867,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][8U] >> 8U))),32);
    bufp->fullBit(oldp+15868,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][8U] >> 7U))));
    bufp->fullBit(oldp+15869,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][8U] >> 6U))));
    bufp->fullCData(oldp+15870,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x27U][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+15871,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x27U][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x27U][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+15872,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+15873,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+15874,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x27U][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+15875,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+15876,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+15877,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x27U][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+15878,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x27U][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+15879,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+15880,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+15881,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][1U] >> 0xdU))));
    bufp->fullBit(oldp+15882,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][1U] >> 0xcU))));
    bufp->fullBit(oldp+15883,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][1U] >> 0xbU))));
    bufp->fullBit(oldp+15884,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][1U] >> 0xaU))));
    bufp->fullIData(oldp+15885,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+15886,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][0U] >> 9U))));
    bufp->fullCData(oldp+15887,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x27U][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+15888,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x27U][0U])),6);
    bufp->fullBit(oldp+15889,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+15890,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+15891,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+15892,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+15893,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+15894,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x28U][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+15895,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+15896,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x28U][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x28U][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+15897,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x28U][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x28U][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+15898,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x28U][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x28U][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+15899,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x28U][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+15900,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x28U][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+15901,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+15902,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x28U][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x28U][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+15903,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x28U][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x28U][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+15904,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x28U][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x28U][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+15905,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+15906,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+15907,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+15908,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x28U][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+15909,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x28U][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+15910,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x28U][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+15911,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x28U][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x28U][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+15912,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x28U][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x28U][9U] >> 8U))),32);
    bufp->fullIData(oldp+15913,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x28U][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x28U][8U] >> 8U))),32);
    bufp->fullBit(oldp+15914,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][8U] >> 7U))));
    bufp->fullBit(oldp+15915,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][8U] >> 6U))));
    bufp->fullCData(oldp+15916,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x28U][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+15917,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x28U][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x28U][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+15918,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x28U][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x28U][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+15919,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x28U][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x28U][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+15920,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x28U][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+15921,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x28U][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x28U][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+15922,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x28U][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x28U][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+15923,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x28U][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+15924,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x28U][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+15925,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x28U][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x28U][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+15926,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x28U][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x28U][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+15927,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][1U] >> 0xdU))));
    bufp->fullBit(oldp+15928,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][1U] >> 0xcU))));
    bufp->fullBit(oldp+15929,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][1U] >> 0xbU))));
    bufp->fullBit(oldp+15930,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][1U] >> 0xaU))));
    bufp->fullIData(oldp+15931,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x28U][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x28U][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+15932,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][0U] >> 9U))));
    bufp->fullCData(oldp+15933,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x28U][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+15934,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x28U][0U])),6);
    bufp->fullBit(oldp+15935,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+15936,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+15937,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+15938,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+15939,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+15940,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x29U][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+15941,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+15942,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x29U][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x29U][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+15943,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x29U][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x29U][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+15944,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x29U][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x29U][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+15945,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x29U][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+15946,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x29U][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+15947,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+15948,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x29U][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x29U][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+15949,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x29U][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x29U][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+15950,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x29U][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x29U][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+15951,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+15952,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+15953,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+15954,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x29U][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+15955,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x29U][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+15956,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x29U][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+15957,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x29U][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x29U][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+15958,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x29U][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x29U][9U] >> 8U))),32);
    bufp->fullIData(oldp+15959,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x29U][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x29U][8U] >> 8U))),32);
    bufp->fullBit(oldp+15960,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][8U] >> 7U))));
    bufp->fullBit(oldp+15961,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][8U] >> 6U))));
    bufp->fullCData(oldp+15962,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x29U][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+15963,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x29U][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x29U][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+15964,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x29U][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x29U][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+15965,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x29U][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x29U][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+15966,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x29U][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+15967,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x29U][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x29U][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+15968,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x29U][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x29U][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+15969,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x29U][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+15970,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x29U][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+15971,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x29U][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x29U][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+15972,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x29U][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x29U][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+15973,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][1U] >> 0xdU))));
    bufp->fullBit(oldp+15974,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][1U] >> 0xcU))));
    bufp->fullBit(oldp+15975,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][1U] >> 0xbU))));
    bufp->fullBit(oldp+15976,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][1U] >> 0xaU))));
    bufp->fullIData(oldp+15977,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x29U][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x29U][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+15978,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][0U] >> 9U))));
    bufp->fullCData(oldp+15979,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x29U][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+15980,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x29U][0U])),6);
    bufp->fullBit(oldp+15981,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+15982,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+15983,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+15984,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+15985,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+15986,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2aU][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+15987,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+15988,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2aU][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2aU][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+15989,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2aU][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2aU][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+15990,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2aU][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2aU][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+15991,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2aU][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+15992,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2aU][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+15993,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+15994,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2aU][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2aU][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+15995,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x2aU][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x2aU][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+15996,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2aU][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2aU][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+15997,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+15998,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+15999,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+16000,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2aU][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+16001,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2aU][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+16002,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2aU][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+16003,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2aU][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2aU][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+16004,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2aU][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2aU][9U] >> 8U))),32);
    bufp->fullIData(oldp+16005,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2aU][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2aU][8U] >> 8U))),32);
    bufp->fullBit(oldp+16006,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][8U] >> 7U))));
    bufp->fullBit(oldp+16007,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][8U] >> 6U))));
    bufp->fullCData(oldp+16008,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2aU][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+16009,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2aU][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2aU][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+16010,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2aU][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2aU][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+16011,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2aU][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2aU][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+16012,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2aU][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+16013,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2aU][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2aU][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+16014,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2aU][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2aU][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+16015,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2aU][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+16016,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2aU][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+16017,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2aU][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2aU][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+16018,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2aU][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2aU][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+16019,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][1U] >> 0xdU))));
    bufp->fullBit(oldp+16020,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][1U] >> 0xcU))));
    bufp->fullBit(oldp+16021,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][1U] >> 0xbU))));
    bufp->fullBit(oldp+16022,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][1U] >> 0xaU))));
    bufp->fullIData(oldp+16023,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2aU][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2aU][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+16024,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][0U] >> 9U))));
    bufp->fullCData(oldp+16025,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x2aU][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+16026,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x2aU][0U])),6);
    bufp->fullBit(oldp+16027,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+16028,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+16029,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+16030,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+16031,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+16032,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2bU][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+16033,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+16034,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2bU][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2bU][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+16035,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2bU][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2bU][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+16036,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2bU][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2bU][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+16037,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2bU][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+16038,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2bU][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+16039,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+16040,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2bU][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2bU][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+16041,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x2bU][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x2bU][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+16042,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2bU][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2bU][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+16043,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+16044,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+16045,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+16046,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2bU][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+16047,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2bU][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+16048,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2bU][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+16049,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2bU][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2bU][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+16050,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2bU][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2bU][9U] >> 8U))),32);
    bufp->fullIData(oldp+16051,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2bU][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2bU][8U] >> 8U))),32);
    bufp->fullBit(oldp+16052,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][8U] >> 7U))));
    bufp->fullBit(oldp+16053,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][8U] >> 6U))));
    bufp->fullCData(oldp+16054,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2bU][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+16055,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2bU][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2bU][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+16056,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2bU][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2bU][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+16057,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2bU][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2bU][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+16058,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2bU][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+16059,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2bU][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2bU][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+16060,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2bU][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2bU][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+16061,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2bU][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+16062,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2bU][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+16063,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2bU][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2bU][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+16064,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2bU][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2bU][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+16065,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][1U] >> 0xdU))));
    bufp->fullBit(oldp+16066,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][1U] >> 0xcU))));
    bufp->fullBit(oldp+16067,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][1U] >> 0xbU))));
    bufp->fullBit(oldp+16068,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][1U] >> 0xaU))));
    bufp->fullIData(oldp+16069,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2bU][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2bU][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+16070,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][0U] >> 9U))));
    bufp->fullCData(oldp+16071,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x2bU][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+16072,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x2bU][0U])),6);
    bufp->fullBit(oldp+16073,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+16074,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+16075,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+16076,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+16077,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+16078,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2cU][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+16079,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+16080,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2cU][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2cU][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+16081,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2cU][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2cU][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+16082,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2cU][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2cU][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+16083,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2cU][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+16084,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2cU][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+16085,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+16086,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2cU][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2cU][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+16087,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x2cU][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x2cU][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+16088,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2cU][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2cU][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+16089,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+16090,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+16091,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+16092,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2cU][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+16093,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2cU][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+16094,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2cU][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+16095,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2cU][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2cU][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+16096,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2cU][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2cU][9U] >> 8U))),32);
    bufp->fullIData(oldp+16097,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2cU][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2cU][8U] >> 8U))),32);
    bufp->fullBit(oldp+16098,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][8U] >> 7U))));
    bufp->fullBit(oldp+16099,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][8U] >> 6U))));
    bufp->fullCData(oldp+16100,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2cU][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+16101,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2cU][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2cU][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+16102,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2cU][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2cU][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+16103,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2cU][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2cU][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+16104,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2cU][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+16105,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2cU][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2cU][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+16106,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2cU][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2cU][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+16107,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2cU][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+16108,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2cU][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+16109,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2cU][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2cU][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+16110,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2cU][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2cU][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+16111,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][1U] >> 0xdU))));
    bufp->fullBit(oldp+16112,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][1U] >> 0xcU))));
    bufp->fullBit(oldp+16113,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][1U] >> 0xbU))));
    bufp->fullBit(oldp+16114,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][1U] >> 0xaU))));
    bufp->fullIData(oldp+16115,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2cU][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2cU][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+16116,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][0U] >> 9U))));
    bufp->fullCData(oldp+16117,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x2cU][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+16118,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x2cU][0U])),6);
    bufp->fullBit(oldp+16119,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+16120,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+16121,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+16122,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+16123,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+16124,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2dU][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+16125,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+16126,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2dU][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2dU][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+16127,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2dU][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2dU][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+16128,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2dU][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2dU][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+16129,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2dU][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+16130,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2dU][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+16131,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+16132,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2dU][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2dU][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+16133,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x2dU][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x2dU][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+16134,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2dU][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2dU][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+16135,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+16136,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+16137,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+16138,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2dU][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+16139,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2dU][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+16140,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2dU][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+16141,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2dU][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2dU][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+16142,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2dU][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2dU][9U] >> 8U))),32);
    bufp->fullIData(oldp+16143,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2dU][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2dU][8U] >> 8U))),32);
    bufp->fullBit(oldp+16144,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][8U] >> 7U))));
    bufp->fullBit(oldp+16145,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][8U] >> 6U))));
    bufp->fullCData(oldp+16146,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2dU][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+16147,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2dU][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2dU][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+16148,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2dU][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2dU][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+16149,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2dU][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2dU][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+16150,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2dU][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+16151,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2dU][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2dU][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+16152,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2dU][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2dU][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+16153,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2dU][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+16154,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2dU][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+16155,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2dU][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2dU][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+16156,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2dU][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2dU][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+16157,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][1U] >> 0xdU))));
    bufp->fullBit(oldp+16158,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][1U] >> 0xcU))));
    bufp->fullBit(oldp+16159,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][1U] >> 0xbU))));
    bufp->fullBit(oldp+16160,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][1U] >> 0xaU))));
    bufp->fullIData(oldp+16161,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2dU][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2dU][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+16162,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][0U] >> 9U))));
    bufp->fullCData(oldp+16163,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x2dU][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+16164,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x2dU][0U])),6);
    bufp->fullBit(oldp+16165,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+16166,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+16167,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+16168,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+16169,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+16170,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2eU][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+16171,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+16172,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2eU][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2eU][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+16173,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2eU][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2eU][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+16174,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2eU][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2eU][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+16175,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2eU][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+16176,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2eU][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+16177,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+16178,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2eU][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2eU][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+16179,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x2eU][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x2eU][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+16180,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2eU][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2eU][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+16181,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+16182,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+16183,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+16184,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2eU][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+16185,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2eU][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+16186,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2eU][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+16187,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2eU][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2eU][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+16188,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2eU][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2eU][9U] >> 8U))),32);
    bufp->fullIData(oldp+16189,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2eU][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2eU][8U] >> 8U))),32);
    bufp->fullBit(oldp+16190,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][8U] >> 7U))));
    bufp->fullBit(oldp+16191,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][8U] >> 6U))));
    bufp->fullCData(oldp+16192,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2eU][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+16193,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2eU][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2eU][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+16194,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2eU][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2eU][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+16195,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2eU][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2eU][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+16196,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2eU][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+16197,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2eU][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2eU][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+16198,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2eU][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2eU][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+16199,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2eU][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+16200,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2eU][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+16201,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2eU][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2eU][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+16202,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2eU][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2eU][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+16203,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][1U] >> 0xdU))));
    bufp->fullBit(oldp+16204,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][1U] >> 0xcU))));
    bufp->fullBit(oldp+16205,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][1U] >> 0xbU))));
    bufp->fullBit(oldp+16206,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][1U] >> 0xaU))));
    bufp->fullIData(oldp+16207,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2eU][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2eU][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+16208,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][0U] >> 9U))));
    bufp->fullCData(oldp+16209,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x2eU][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+16210,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x2eU][0U])),6);
    bufp->fullBit(oldp+16211,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+16212,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+16213,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+16214,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+16215,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+16216,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2fU][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+16217,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+16218,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2fU][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2fU][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+16219,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2fU][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2fU][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+16220,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2fU][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2fU][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+16221,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2fU][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+16222,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2fU][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+16223,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+16224,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2fU][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2fU][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+16225,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x2fU][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x2fU][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+16226,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2fU][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2fU][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+16227,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+16228,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+16229,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+16230,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2fU][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+16231,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2fU][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+16232,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2fU][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+16233,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2fU][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2fU][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+16234,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2fU][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2fU][9U] >> 8U))),32);
    bufp->fullIData(oldp+16235,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2fU][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2fU][8U] >> 8U))),32);
    bufp->fullBit(oldp+16236,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][8U] >> 7U))));
    bufp->fullBit(oldp+16237,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][8U] >> 6U))));
    bufp->fullCData(oldp+16238,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2fU][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+16239,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2fU][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2fU][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+16240,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2fU][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2fU][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+16241,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2fU][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2fU][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+16242,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2fU][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+16243,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2fU][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2fU][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+16244,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2fU][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2fU][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+16245,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2fU][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+16246,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2fU][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+16247,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2fU][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2fU][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+16248,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2fU][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2fU][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+16249,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][1U] >> 0xdU))));
    bufp->fullBit(oldp+16250,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][1U] >> 0xcU))));
    bufp->fullBit(oldp+16251,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][1U] >> 0xbU))));
    bufp->fullBit(oldp+16252,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][1U] >> 0xaU))));
    bufp->fullIData(oldp+16253,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2fU][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x2fU][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+16254,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][0U] >> 9U))));
    bufp->fullCData(oldp+16255,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x2fU][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+16256,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x2fU][0U])),6);
    bufp->fullBit(oldp+16257,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+16258,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+16259,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+16260,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+16261,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+16262,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x30U][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+16263,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+16264,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x30U][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x30U][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+16265,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x30U][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x30U][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+16266,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x30U][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x30U][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+16267,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x30U][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+16268,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x30U][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+16269,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+16270,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x30U][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x30U][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+16271,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x30U][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x30U][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+16272,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x30U][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x30U][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+16273,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+16274,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+16275,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+16276,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x30U][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+16277,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x30U][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+16278,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x30U][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+16279,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x30U][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x30U][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+16280,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x30U][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x30U][9U] >> 8U))),32);
    bufp->fullIData(oldp+16281,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x30U][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x30U][8U] >> 8U))),32);
    bufp->fullBit(oldp+16282,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][8U] >> 7U))));
    bufp->fullBit(oldp+16283,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][8U] >> 6U))));
    bufp->fullCData(oldp+16284,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x30U][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+16285,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x30U][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x30U][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+16286,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x30U][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x30U][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+16287,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x30U][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x30U][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+16288,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x30U][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+16289,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x30U][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x30U][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+16290,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x30U][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x30U][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+16291,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x30U][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+16292,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x30U][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+16293,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x30U][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x30U][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+16294,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x30U][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x30U][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+16295,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][1U] >> 0xdU))));
    bufp->fullBit(oldp+16296,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][1U] >> 0xcU))));
    bufp->fullBit(oldp+16297,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][1U] >> 0xbU))));
    bufp->fullBit(oldp+16298,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][1U] >> 0xaU))));
    bufp->fullIData(oldp+16299,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x30U][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x30U][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+16300,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][0U] >> 9U))));
    bufp->fullCData(oldp+16301,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x30U][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+16302,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x30U][0U])),6);
    bufp->fullBit(oldp+16303,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+16304,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+16305,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+16306,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+16307,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+16308,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x31U][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+16309,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+16310,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x31U][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x31U][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+16311,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x31U][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x31U][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+16312,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x31U][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x31U][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+16313,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x31U][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+16314,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x31U][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+16315,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+16316,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x31U][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x31U][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+16317,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x31U][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x31U][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+16318,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x31U][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x31U][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+16319,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+16320,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+16321,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+16322,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x31U][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+16323,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x31U][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+16324,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x31U][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+16325,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x31U][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x31U][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+16326,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x31U][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x31U][9U] >> 8U))),32);
    bufp->fullIData(oldp+16327,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x31U][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x31U][8U] >> 8U))),32);
    bufp->fullBit(oldp+16328,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][8U] >> 7U))));
    bufp->fullBit(oldp+16329,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][8U] >> 6U))));
    bufp->fullCData(oldp+16330,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x31U][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+16331,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x31U][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x31U][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+16332,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x31U][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x31U][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+16333,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x31U][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x31U][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+16334,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x31U][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+16335,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x31U][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x31U][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+16336,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x31U][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x31U][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+16337,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x31U][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+16338,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x31U][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+16339,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x31U][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x31U][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+16340,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x31U][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x31U][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+16341,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][1U] >> 0xdU))));
    bufp->fullBit(oldp+16342,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][1U] >> 0xcU))));
    bufp->fullBit(oldp+16343,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][1U] >> 0xbU))));
    bufp->fullBit(oldp+16344,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][1U] >> 0xaU))));
    bufp->fullIData(oldp+16345,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x31U][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x31U][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+16346,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][0U] >> 9U))));
    bufp->fullCData(oldp+16347,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x31U][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+16348,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x31U][0U])),6);
    bufp->fullBit(oldp+16349,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+16350,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+16351,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+16352,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+16353,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+16354,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x32U][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+16355,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+16356,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x32U][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x32U][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+16357,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x32U][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x32U][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+16358,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x32U][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x32U][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+16359,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x32U][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+16360,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x32U][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+16361,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+16362,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x32U][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x32U][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+16363,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x32U][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x32U][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+16364,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x32U][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x32U][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+16365,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+16366,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+16367,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+16368,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x32U][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+16369,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x32U][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+16370,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x32U][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+16371,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x32U][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x32U][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+16372,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x32U][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x32U][9U] >> 8U))),32);
    bufp->fullIData(oldp+16373,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x32U][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x32U][8U] >> 8U))),32);
    bufp->fullBit(oldp+16374,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][8U] >> 7U))));
    bufp->fullBit(oldp+16375,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][8U] >> 6U))));
    bufp->fullCData(oldp+16376,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x32U][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+16377,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x32U][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x32U][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+16378,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x32U][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x32U][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+16379,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x32U][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x32U][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+16380,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x32U][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+16381,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x32U][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x32U][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+16382,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x32U][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x32U][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+16383,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x32U][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+16384,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x32U][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+16385,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x32U][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x32U][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+16386,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x32U][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x32U][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+16387,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][1U] >> 0xdU))));
    bufp->fullBit(oldp+16388,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][1U] >> 0xcU))));
    bufp->fullBit(oldp+16389,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][1U] >> 0xbU))));
    bufp->fullBit(oldp+16390,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][1U] >> 0xaU))));
    bufp->fullIData(oldp+16391,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x32U][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x32U][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+16392,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][0U] >> 9U))));
    bufp->fullCData(oldp+16393,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x32U][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+16394,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x32U][0U])),6);
    bufp->fullBit(oldp+16395,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+16396,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+16397,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+16398,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+16399,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+16400,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x33U][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+16401,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+16402,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x33U][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x33U][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+16403,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x33U][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x33U][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+16404,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x33U][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x33U][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+16405,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x33U][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+16406,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x33U][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+16407,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+16408,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x33U][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x33U][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+16409,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x33U][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x33U][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+16410,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x33U][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x33U][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+16411,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+16412,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+16413,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+16414,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x33U][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+16415,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x33U][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+16416,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x33U][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+16417,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x33U][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x33U][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+16418,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x33U][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x33U][9U] >> 8U))),32);
    bufp->fullIData(oldp+16419,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x33U][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x33U][8U] >> 8U))),32);
    bufp->fullBit(oldp+16420,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][8U] >> 7U))));
    bufp->fullBit(oldp+16421,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][8U] >> 6U))));
    bufp->fullCData(oldp+16422,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x33U][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+16423,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x33U][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x33U][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+16424,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x33U][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x33U][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+16425,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x33U][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x33U][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+16426,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x33U][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+16427,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x33U][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x33U][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+16428,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x33U][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x33U][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+16429,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x33U][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+16430,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x33U][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+16431,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x33U][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x33U][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+16432,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x33U][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x33U][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+16433,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][1U] >> 0xdU))));
    bufp->fullBit(oldp+16434,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][1U] >> 0xcU))));
    bufp->fullBit(oldp+16435,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][1U] >> 0xbU))));
    bufp->fullBit(oldp+16436,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][1U] >> 0xaU))));
    bufp->fullIData(oldp+16437,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x33U][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x33U][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+16438,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][0U] >> 9U))));
    bufp->fullCData(oldp+16439,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x33U][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+16440,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x33U][0U])),6);
    bufp->fullBit(oldp+16441,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+16442,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+16443,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+16444,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+16445,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+16446,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x34U][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+16447,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+16448,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x34U][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x34U][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+16449,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x34U][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x34U][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+16450,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x34U][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x34U][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+16451,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x34U][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+16452,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x34U][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+16453,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+16454,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x34U][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x34U][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+16455,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x34U][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x34U][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+16456,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x34U][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x34U][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+16457,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+16458,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+16459,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+16460,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x34U][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+16461,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x34U][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+16462,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x34U][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+16463,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x34U][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x34U][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+16464,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x34U][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x34U][9U] >> 8U))),32);
    bufp->fullIData(oldp+16465,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x34U][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x34U][8U] >> 8U))),32);
    bufp->fullBit(oldp+16466,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][8U] >> 7U))));
    bufp->fullBit(oldp+16467,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][8U] >> 6U))));
    bufp->fullCData(oldp+16468,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x34U][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+16469,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x34U][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x34U][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+16470,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x34U][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x34U][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+16471,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x34U][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x34U][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+16472,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x34U][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+16473,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x34U][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x34U][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+16474,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x34U][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x34U][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+16475,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x34U][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+16476,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x34U][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+16477,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x34U][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x34U][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+16478,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x34U][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x34U][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+16479,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][1U] >> 0xdU))));
    bufp->fullBit(oldp+16480,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][1U] >> 0xcU))));
    bufp->fullBit(oldp+16481,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][1U] >> 0xbU))));
    bufp->fullBit(oldp+16482,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][1U] >> 0xaU))));
    bufp->fullIData(oldp+16483,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x34U][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x34U][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+16484,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][0U] >> 9U))));
    bufp->fullCData(oldp+16485,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x34U][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+16486,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x34U][0U])),6);
    bufp->fullBit(oldp+16487,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+16488,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+16489,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+16490,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+16491,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+16492,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x35U][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+16493,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+16494,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x35U][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x35U][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+16495,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x35U][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x35U][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+16496,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x35U][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x35U][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+16497,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x35U][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+16498,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x35U][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+16499,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+16500,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x35U][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x35U][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+16501,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x35U][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x35U][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+16502,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x35U][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x35U][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+16503,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+16504,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+16505,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+16506,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x35U][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+16507,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x35U][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+16508,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x35U][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+16509,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x35U][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x35U][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+16510,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x35U][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x35U][9U] >> 8U))),32);
    bufp->fullIData(oldp+16511,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x35U][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x35U][8U] >> 8U))),32);
    bufp->fullBit(oldp+16512,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][8U] >> 7U))));
    bufp->fullBit(oldp+16513,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][8U] >> 6U))));
    bufp->fullCData(oldp+16514,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x35U][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+16515,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x35U][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x35U][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+16516,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x35U][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x35U][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+16517,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x35U][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x35U][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+16518,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x35U][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+16519,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x35U][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x35U][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+16520,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x35U][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x35U][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+16521,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x35U][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+16522,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x35U][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+16523,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x35U][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x35U][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+16524,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x35U][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x35U][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+16525,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][1U] >> 0xdU))));
    bufp->fullBit(oldp+16526,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][1U] >> 0xcU))));
    bufp->fullBit(oldp+16527,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][1U] >> 0xbU))));
    bufp->fullBit(oldp+16528,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][1U] >> 0xaU))));
    bufp->fullIData(oldp+16529,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x35U][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x35U][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+16530,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][0U] >> 9U))));
    bufp->fullCData(oldp+16531,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x35U][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+16532,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x35U][0U])),6);
    bufp->fullBit(oldp+16533,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+16534,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+16535,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+16536,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+16537,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+16538,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x36U][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+16539,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+16540,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x36U][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x36U][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+16541,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x36U][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x36U][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+16542,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x36U][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x36U][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+16543,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x36U][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+16544,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x36U][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+16545,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+16546,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x36U][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x36U][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+16547,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x36U][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x36U][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+16548,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x36U][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x36U][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+16549,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+16550,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+16551,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+16552,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x36U][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+16553,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x36U][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+16554,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x36U][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+16555,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x36U][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x36U][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+16556,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x36U][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x36U][9U] >> 8U))),32);
    bufp->fullIData(oldp+16557,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x36U][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x36U][8U] >> 8U))),32);
    bufp->fullBit(oldp+16558,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][8U] >> 7U))));
    bufp->fullBit(oldp+16559,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][8U] >> 6U))));
    bufp->fullCData(oldp+16560,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x36U][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+16561,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x36U][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x36U][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+16562,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x36U][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x36U][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+16563,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x36U][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x36U][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+16564,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x36U][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+16565,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x36U][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x36U][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+16566,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x36U][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x36U][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+16567,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x36U][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+16568,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x36U][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+16569,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x36U][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x36U][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+16570,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x36U][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x36U][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+16571,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][1U] >> 0xdU))));
    bufp->fullBit(oldp+16572,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][1U] >> 0xcU))));
    bufp->fullBit(oldp+16573,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][1U] >> 0xbU))));
    bufp->fullBit(oldp+16574,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][1U] >> 0xaU))));
    bufp->fullIData(oldp+16575,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x36U][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x36U][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+16576,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][0U] >> 9U))));
    bufp->fullCData(oldp+16577,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x36U][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+16578,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x36U][0U])),6);
    bufp->fullBit(oldp+16579,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+16580,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+16581,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+16582,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+16583,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+16584,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x37U][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+16585,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+16586,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x37U][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x37U][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+16587,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x37U][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x37U][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+16588,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x37U][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x37U][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+16589,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x37U][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+16590,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x37U][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+16591,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+16592,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x37U][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x37U][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+16593,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x37U][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x37U][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+16594,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x37U][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x37U][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+16595,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+16596,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+16597,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+16598,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x37U][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+16599,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x37U][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+16600,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x37U][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+16601,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x37U][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x37U][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+16602,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x37U][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x37U][9U] >> 8U))),32);
    bufp->fullIData(oldp+16603,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x37U][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x37U][8U] >> 8U))),32);
    bufp->fullBit(oldp+16604,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][8U] >> 7U))));
    bufp->fullBit(oldp+16605,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][8U] >> 6U))));
    bufp->fullCData(oldp+16606,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x37U][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+16607,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x37U][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x37U][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+16608,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x37U][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x37U][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+16609,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x37U][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x37U][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+16610,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x37U][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+16611,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x37U][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x37U][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+16612,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x37U][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x37U][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+16613,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x37U][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+16614,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x37U][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+16615,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x37U][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x37U][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+16616,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x37U][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x37U][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+16617,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][1U] >> 0xdU))));
    bufp->fullBit(oldp+16618,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][1U] >> 0xcU))));
    bufp->fullBit(oldp+16619,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][1U] >> 0xbU))));
    bufp->fullBit(oldp+16620,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][1U] >> 0xaU))));
    bufp->fullIData(oldp+16621,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x37U][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x37U][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+16622,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][0U] >> 9U))));
    bufp->fullCData(oldp+16623,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x37U][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+16624,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x37U][0U])),6);
    bufp->fullBit(oldp+16625,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+16626,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+16627,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+16628,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+16629,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+16630,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x38U][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+16631,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+16632,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x38U][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x38U][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+16633,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x38U][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x38U][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+16634,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x38U][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x38U][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+16635,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x38U][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+16636,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x38U][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+16637,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+16638,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x38U][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x38U][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+16639,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x38U][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x38U][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+16640,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x38U][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x38U][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+16641,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+16642,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+16643,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+16644,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x38U][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+16645,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x38U][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+16646,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x38U][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+16647,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x38U][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x38U][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+16648,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x38U][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x38U][9U] >> 8U))),32);
    bufp->fullIData(oldp+16649,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x38U][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x38U][8U] >> 8U))),32);
    bufp->fullBit(oldp+16650,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][8U] >> 7U))));
    bufp->fullBit(oldp+16651,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][8U] >> 6U))));
    bufp->fullCData(oldp+16652,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x38U][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+16653,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x38U][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x38U][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+16654,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x38U][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x38U][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+16655,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x38U][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x38U][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+16656,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x38U][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+16657,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x38U][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x38U][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+16658,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x38U][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x38U][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+16659,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x38U][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+16660,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x38U][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+16661,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x38U][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x38U][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+16662,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x38U][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x38U][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+16663,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][1U] >> 0xdU))));
    bufp->fullBit(oldp+16664,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][1U] >> 0xcU))));
    bufp->fullBit(oldp+16665,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][1U] >> 0xbU))));
    bufp->fullBit(oldp+16666,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][1U] >> 0xaU))));
    bufp->fullIData(oldp+16667,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x38U][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x38U][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+16668,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][0U] >> 9U))));
    bufp->fullCData(oldp+16669,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x38U][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+16670,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x38U][0U])),6);
    bufp->fullBit(oldp+16671,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+16672,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+16673,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+16674,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+16675,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+16676,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x39U][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+16677,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+16678,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x39U][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x39U][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+16679,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x39U][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x39U][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+16680,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x39U][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x39U][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+16681,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x39U][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+16682,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x39U][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+16683,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+16684,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x39U][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x39U][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+16685,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x39U][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x39U][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+16686,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x39U][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x39U][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+16687,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+16688,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+16689,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+16690,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x39U][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+16691,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x39U][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+16692,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x39U][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+16693,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x39U][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x39U][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+16694,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x39U][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x39U][9U] >> 8U))),32);
    bufp->fullIData(oldp+16695,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x39U][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x39U][8U] >> 8U))),32);
    bufp->fullBit(oldp+16696,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][8U] >> 7U))));
    bufp->fullBit(oldp+16697,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][8U] >> 6U))));
    bufp->fullCData(oldp+16698,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x39U][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+16699,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x39U][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x39U][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+16700,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x39U][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x39U][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+16701,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x39U][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x39U][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+16702,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x39U][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+16703,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x39U][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x39U][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+16704,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x39U][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x39U][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+16705,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x39U][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+16706,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x39U][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+16707,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x39U][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x39U][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+16708,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x39U][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x39U][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+16709,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][1U] >> 0xdU))));
    bufp->fullBit(oldp+16710,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][1U] >> 0xcU))));
    bufp->fullBit(oldp+16711,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][1U] >> 0xbU))));
    bufp->fullBit(oldp+16712,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][1U] >> 0xaU))));
    bufp->fullIData(oldp+16713,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x39U][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x39U][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+16714,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][0U] >> 9U))));
    bufp->fullCData(oldp+16715,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x39U][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+16716,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x39U][0U])),6);
    bufp->fullBit(oldp+16717,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+16718,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+16719,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+16720,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+16721,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+16722,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3aU][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+16723,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+16724,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3aU][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3aU][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+16725,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3aU][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3aU][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+16726,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3aU][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3aU][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+16727,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3aU][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+16728,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3aU][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+16729,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+16730,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3aU][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3aU][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+16731,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x3aU][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x3aU][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+16732,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3aU][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3aU][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+16733,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+16734,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+16735,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+16736,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3aU][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+16737,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3aU][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+16738,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3aU][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+16739,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3aU][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3aU][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+16740,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3aU][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3aU][9U] >> 8U))),32);
    bufp->fullIData(oldp+16741,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3aU][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3aU][8U] >> 8U))),32);
    bufp->fullBit(oldp+16742,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][8U] >> 7U))));
    bufp->fullBit(oldp+16743,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][8U] >> 6U))));
    bufp->fullCData(oldp+16744,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3aU][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+16745,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3aU][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3aU][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+16746,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3aU][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3aU][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+16747,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3aU][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3aU][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+16748,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3aU][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+16749,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3aU][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3aU][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+16750,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3aU][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3aU][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+16751,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3aU][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+16752,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3aU][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+16753,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3aU][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3aU][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+16754,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3aU][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3aU][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+16755,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][1U] >> 0xdU))));
    bufp->fullBit(oldp+16756,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][1U] >> 0xcU))));
    bufp->fullBit(oldp+16757,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][1U] >> 0xbU))));
    bufp->fullBit(oldp+16758,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][1U] >> 0xaU))));
    bufp->fullIData(oldp+16759,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3aU][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3aU][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+16760,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][0U] >> 9U))));
    bufp->fullCData(oldp+16761,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3aU][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+16762,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x3aU][0U])),6);
    bufp->fullBit(oldp+16763,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+16764,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+16765,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+16766,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+16767,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+16768,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3bU][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+16769,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+16770,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3bU][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3bU][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+16771,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3bU][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3bU][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+16772,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3bU][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3bU][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+16773,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3bU][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+16774,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3bU][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+16775,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+16776,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3bU][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3bU][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+16777,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x3bU][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x3bU][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+16778,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3bU][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3bU][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+16779,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+16780,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+16781,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+16782,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3bU][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+16783,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3bU][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+16784,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3bU][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+16785,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3bU][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3bU][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+16786,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3bU][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3bU][9U] >> 8U))),32);
    bufp->fullIData(oldp+16787,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3bU][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3bU][8U] >> 8U))),32);
    bufp->fullBit(oldp+16788,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][8U] >> 7U))));
    bufp->fullBit(oldp+16789,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][8U] >> 6U))));
    bufp->fullCData(oldp+16790,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3bU][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+16791,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3bU][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3bU][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+16792,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3bU][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3bU][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+16793,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3bU][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3bU][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+16794,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3bU][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+16795,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3bU][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3bU][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+16796,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3bU][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3bU][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+16797,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3bU][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+16798,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3bU][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+16799,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3bU][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3bU][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+16800,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3bU][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3bU][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+16801,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][1U] >> 0xdU))));
    bufp->fullBit(oldp+16802,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][1U] >> 0xcU))));
    bufp->fullBit(oldp+16803,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][1U] >> 0xbU))));
    bufp->fullBit(oldp+16804,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][1U] >> 0xaU))));
    bufp->fullIData(oldp+16805,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3bU][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3bU][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+16806,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][0U] >> 9U))));
    bufp->fullCData(oldp+16807,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3bU][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+16808,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x3bU][0U])),6);
    bufp->fullBit(oldp+16809,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3cU][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+16810,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3cU][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+16811,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3cU][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+16812,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3cU][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+16813,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3cU][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+16814,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3cU][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+16815,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3cU][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+16816,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3cU][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+16817,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3cU][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+16818,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3cU][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+16819,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3cU][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+16820,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3cU][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+16821,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3cU][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+16822,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3cU][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+16823,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x3cU][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x3cU][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+16824,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3cU][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+16825,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3cU][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+16826,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3cU][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+16827,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3cU][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+16828,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3cU][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+16829,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3cU][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+16830,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3cU][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+16831,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3cU][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+16832,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3cU][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][9U] >> 8U))),32);
    bufp->fullIData(oldp+16833,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3cU][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][8U] >> 8U))),32);
    bufp->fullBit(oldp+16834,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3cU][8U] >> 7U))));
    bufp->fullBit(oldp+16835,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3cU][8U] >> 6U))));
    bufp->fullCData(oldp+16836,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3cU][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+16837,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3cU][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3cU][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+16838,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3cU][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+16839,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3cU][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+16840,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3cU][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+16841,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3cU][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+16842,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3cU][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+16843,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3cU][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+16844,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3cU][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+16845,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3cU][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+16846,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3cU][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+16847,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3cU][1U] >> 0xdU))));
    bufp->fullBit(oldp+16848,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3cU][1U] >> 0xcU))));
    bufp->fullBit(oldp+16849,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3cU][1U] >> 0xbU))));
    bufp->fullBit(oldp+16850,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3cU][1U] >> 0xaU))));
    bufp->fullIData(oldp+16851,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3cU][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+16852,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3cU][0U] >> 9U))));
    bufp->fullCData(oldp+16853,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3cU][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+16854,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x3cU][0U])),6);
    bufp->fullBit(oldp+16855,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3dU][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+16856,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3dU][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+16857,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3dU][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+16858,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3dU][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+16859,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3dU][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+16860,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3dU][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+16861,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3dU][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+16862,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3dU][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+16863,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3dU][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+16864,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3dU][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+16865,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3dU][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+16866,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3dU][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+16867,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3dU][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+16868,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3dU][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+16869,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x3dU][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x3dU][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+16870,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3dU][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+16871,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3dU][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+16872,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3dU][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+16873,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3dU][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+16874,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3dU][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+16875,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3dU][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+16876,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3dU][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+16877,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3dU][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+16878,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3dU][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][9U] >> 8U))),32);
    bufp->fullIData(oldp+16879,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3dU][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][8U] >> 8U))),32);
    bufp->fullBit(oldp+16880,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3dU][8U] >> 7U))));
    bufp->fullBit(oldp+16881,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3dU][8U] >> 6U))));
    bufp->fullCData(oldp+16882,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3dU][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+16883,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3dU][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3dU][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+16884,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3dU][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+16885,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3dU][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+16886,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3dU][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+16887,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3dU][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+16888,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3dU][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+16889,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3dU][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+16890,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3dU][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+16891,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3dU][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+16892,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3dU][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+16893,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3dU][1U] >> 0xdU))));
    bufp->fullBit(oldp+16894,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3dU][1U] >> 0xcU))));
    bufp->fullBit(oldp+16895,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3dU][1U] >> 0xbU))));
    bufp->fullBit(oldp+16896,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3dU][1U] >> 0xaU))));
    bufp->fullIData(oldp+16897,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3dU][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+16898,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3dU][0U] >> 9U))));
    bufp->fullCData(oldp+16899,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3dU][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+16900,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x3dU][0U])),6);
    bufp->fullBit(oldp+16901,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3eU][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+16902,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3eU][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+16903,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3eU][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+16904,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3eU][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+16905,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3eU][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+16906,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3eU][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+16907,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3eU][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+16908,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3eU][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+16909,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3eU][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+16910,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3eU][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+16911,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3eU][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+16912,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3eU][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+16913,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3eU][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+16914,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3eU][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+16915,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x3eU][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x3eU][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+16916,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3eU][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+16917,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3eU][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+16918,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3eU][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+16919,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3eU][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+16920,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3eU][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+16921,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3eU][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+16922,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3eU][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+16923,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3eU][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+16924,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3eU][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][9U] >> 8U))),32);
    bufp->fullIData(oldp+16925,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3eU][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][8U] >> 8U))),32);
    bufp->fullBit(oldp+16926,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3eU][8U] >> 7U))));
    bufp->fullBit(oldp+16927,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3eU][8U] >> 6U))));
    bufp->fullCData(oldp+16928,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3eU][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+16929,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3eU][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3eU][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+16930,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3eU][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+16931,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3eU][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+16932,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3eU][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+16933,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3eU][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+16934,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3eU][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+16935,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3eU][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+16936,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3eU][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+16937,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3eU][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+16938,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3eU][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+16939,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3eU][1U] >> 0xdU))));
    bufp->fullBit(oldp+16940,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3eU][1U] >> 0xcU))));
    bufp->fullBit(oldp+16941,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3eU][1U] >> 0xbU))));
    bufp->fullBit(oldp+16942,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3eU][1U] >> 0xaU))));
    bufp->fullIData(oldp+16943,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3eU][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+16944,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3eU][0U] >> 9U))));
    bufp->fullCData(oldp+16945,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3eU][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+16946,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x3eU][0U])),6);
    bufp->fullBit(oldp+16947,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3fU][0x11U] 
                                     >> 0x19U))));
    bufp->fullBit(oldp+16948,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3fU][0x11U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+16949,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3fU][0x11U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+16950,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3fU][0x11U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+16951,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3fU][0x11U] 
                                     >> 0x15U))));
    bufp->fullCData(oldp+16952,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3fU][0x11U] 
                                          >> 0xeU))),7);
    bufp->fullBit(oldp+16953,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3fU][0x11U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+16954,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3fU][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][0x10U] 
                                    >> 0xdU))),32);
    bufp->fullIData(oldp+16955,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3fU][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][0xfU] >> 0xdU))),32);
    bufp->fullIData(oldp+16956,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3fU][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][0xeU] >> 0xdU))),32);
    bufp->fullCData(oldp+16957,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3fU][0xeU] 
                                         >> 9U))),4);
    bufp->fullCData(oldp+16958,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3fU][0xeU] 
                                          >> 2U))),7);
    bufp->fullBit(oldp+16959,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3fU][0xeU] 
                                     >> 1U))));
    bufp->fullIData(oldp+16960,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3fU][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][0xdU] >> 1U))),32);
    bufp->fullCData(oldp+16961,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x3fU][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x3fU][0xcU] 
                                                  >> 0x1eU)))),3);
    bufp->fullIData(oldp+16962,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3fU][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][0xbU] >> 0x1eU))),32);
    bufp->fullBit(oldp+16963,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3fU][0xbU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+16964,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3fU][0xbU] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+16965,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3fU][0xbU] 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+16966,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3fU][0xbU] 
                                          >> 0x16U))),5);
    bufp->fullCData(oldp+16967,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3fU][0xbU] 
                                          >> 0xfU))),7);
    bufp->fullCData(oldp+16968,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3fU][0xbU] 
                                          >> 8U))),7);
    bufp->fullIData(oldp+16969,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3fU][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][0xaU] >> 8U))),32);
    bufp->fullIData(oldp+16970,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3fU][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][9U] >> 8U))),32);
    bufp->fullIData(oldp+16971,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3fU][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][8U] >> 8U))),32);
    bufp->fullBit(oldp+16972,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3fU][8U] >> 7U))));
    bufp->fullBit(oldp+16973,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3fU][8U] >> 6U))));
    bufp->fullCData(oldp+16974,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3fU][8U] 
                                          >> 1U))),5);
    bufp->fullCData(oldp+16975,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3fU][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3fU][7U] 
                                           >> 0x1cU)))),5);
    bufp->fullIData(oldp+16976,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3fU][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][6U] >> 0x1cU))),32);
    bufp->fullIData(oldp+16977,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3fU][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][5U] >> 0x1cU))),32);
    bufp->fullCData(oldp+16978,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3fU][5U] 
                                          >> 0x16U))),6);
    bufp->fullIData(oldp+16979,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3fU][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][4U] >> 0x16U))),32);
    bufp->fullIData(oldp+16980,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3fU][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][3U] >> 0x16U))),32);
    bufp->fullCData(oldp+16981,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3fU][3U] 
                                         >> 0x12U))),4);
    bufp->fullCData(oldp+16982,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3fU][3U] 
                                         >> 0xeU))),4);
    bufp->fullIData(oldp+16983,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3fU][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][2U] >> 0xeU))),32);
    bufp->fullIData(oldp+16984,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3fU][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][1U] >> 0xeU))),32);
    bufp->fullBit(oldp+16985,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3fU][1U] >> 0xdU))));
    bufp->fullBit(oldp+16986,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3fU][1U] >> 0xcU))));
    bufp->fullBit(oldp+16987,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3fU][1U] >> 0xbU))));
    bufp->fullBit(oldp+16988,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3fU][1U] >> 0xaU))));
    bufp->fullIData(oldp+16989,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3fU][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][0U] >> 0xaU))),32);
    bufp->fullBit(oldp+16990,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3fU][0U] >> 9U))));
    bufp->fullCData(oldp+16991,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3fU][0U] 
                                       >> 6U))),3);
    bufp->fullCData(oldp+16992,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x3fU][0U])),6);
    bufp->fullCData(oldp+16993,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_wrPtr),7);
    bufp->fullCData(oldp+16994,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_rdPtr),7);
    bufp->fullBit(oldp+16995,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_empty));
    bufp->fullCData(oldp+16996,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[0]),6);
    bufp->fullCData(oldp+16997,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[1]),6);
    bufp->fullCData(oldp+16998,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[2]),6);
    bufp->fullCData(oldp+16999,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[3]),6);
    bufp->fullCData(oldp+17000,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[4]),6);
    bufp->fullCData(oldp+17001,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[5]),6);
    bufp->fullCData(oldp+17002,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[6]),6);
    bufp->fullCData(oldp+17003,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[7]),6);
    bufp->fullCData(oldp+17004,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[8]),6);
    bufp->fullCData(oldp+17005,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[9]),6);
    bufp->fullCData(oldp+17006,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[10]),6);
    bufp->fullCData(oldp+17007,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[11]),6);
    bufp->fullCData(oldp+17008,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[12]),6);
    bufp->fullCData(oldp+17009,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[13]),6);
    bufp->fullCData(oldp+17010,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[14]),6);
    bufp->fullCData(oldp+17011,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[15]),6);
    bufp->fullCData(oldp+17012,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[16]),6);
    bufp->fullCData(oldp+17013,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[17]),6);
    bufp->fullCData(oldp+17014,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[18]),6);
    bufp->fullCData(oldp+17015,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[19]),6);
    bufp->fullCData(oldp+17016,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[20]),6);
    bufp->fullCData(oldp+17017,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[21]),6);
    bufp->fullCData(oldp+17018,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[22]),6);
    bufp->fullCData(oldp+17019,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[23]),6);
    bufp->fullCData(oldp+17020,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[24]),6);
    bufp->fullCData(oldp+17021,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[25]),6);
    bufp->fullCData(oldp+17022,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[26]),6);
    bufp->fullCData(oldp+17023,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[27]),6);
    bufp->fullCData(oldp+17024,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[28]),6);
    bufp->fullCData(oldp+17025,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[29]),6);
    bufp->fullCData(oldp+17026,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[30]),6);
    bufp->fullCData(oldp+17027,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[31]),6);
    bufp->fullCData(oldp+17028,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[32]),6);
    bufp->fullCData(oldp+17029,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[33]),6);
    bufp->fullCData(oldp+17030,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[34]),6);
    bufp->fullCData(oldp+17031,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[35]),6);
    bufp->fullCData(oldp+17032,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[36]),6);
    bufp->fullCData(oldp+17033,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[37]),6);
    bufp->fullCData(oldp+17034,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[38]),6);
    bufp->fullCData(oldp+17035,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[39]),6);
    bufp->fullCData(oldp+17036,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[40]),6);
    bufp->fullCData(oldp+17037,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[41]),6);
    bufp->fullCData(oldp+17038,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[42]),6);
    bufp->fullCData(oldp+17039,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[43]),6);
    bufp->fullCData(oldp+17040,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[44]),6);
    bufp->fullCData(oldp+17041,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[45]),6);
    bufp->fullCData(oldp+17042,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[46]),6);
    bufp->fullCData(oldp+17043,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[47]),6);
    bufp->fullCData(oldp+17044,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[48]),6);
    bufp->fullCData(oldp+17045,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[49]),6);
    bufp->fullCData(oldp+17046,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[50]),6);
    bufp->fullCData(oldp+17047,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[51]),6);
    bufp->fullCData(oldp+17048,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[52]),6);
    bufp->fullCData(oldp+17049,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[53]),6);
    bufp->fullCData(oldp+17050,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[54]),6);
    bufp->fullCData(oldp+17051,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[55]),6);
    bufp->fullCData(oldp+17052,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[56]),6);
    bufp->fullCData(oldp+17053,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[57]),6);
    bufp->fullCData(oldp+17054,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[58]),6);
    bufp->fullCData(oldp+17055,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[59]),6);
    bufp->fullCData(oldp+17056,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[60]),6);
    bufp->fullCData(oldp+17057,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[61]),6);
    bufp->fullCData(oldp+17058,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[62]),6);
    bufp->fullCData(oldp+17059,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[63]),6);
    bufp->fullCData(oldp+17060,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[0]),6);
    bufp->fullCData(oldp+17061,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[1]),6);
    bufp->fullCData(oldp+17062,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[2]),6);
    bufp->fullCData(oldp+17063,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[3]),6);
    bufp->fullCData(oldp+17064,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[4]),6);
    bufp->fullCData(oldp+17065,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[5]),6);
    bufp->fullCData(oldp+17066,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[6]),6);
    bufp->fullCData(oldp+17067,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[7]),6);
    bufp->fullCData(oldp+17068,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[8]),6);
    bufp->fullCData(oldp+17069,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[9]),6);
    bufp->fullCData(oldp+17070,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[10]),6);
    bufp->fullCData(oldp+17071,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[11]),6);
    bufp->fullCData(oldp+17072,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[12]),6);
    bufp->fullCData(oldp+17073,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[13]),6);
    bufp->fullCData(oldp+17074,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[14]),6);
    bufp->fullCData(oldp+17075,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[15]),6);
    bufp->fullCData(oldp+17076,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[16]),6);
    bufp->fullCData(oldp+17077,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[17]),6);
    bufp->fullCData(oldp+17078,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[18]),6);
    bufp->fullCData(oldp+17079,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[19]),6);
    bufp->fullCData(oldp+17080,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[20]),6);
    bufp->fullCData(oldp+17081,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[21]),6);
    bufp->fullCData(oldp+17082,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[22]),6);
    bufp->fullCData(oldp+17083,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[23]),6);
    bufp->fullCData(oldp+17084,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[24]),6);
    bufp->fullCData(oldp+17085,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[25]),6);
    bufp->fullCData(oldp+17086,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[26]),6);
    bufp->fullCData(oldp+17087,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[27]),6);
    bufp->fullCData(oldp+17088,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[28]),6);
    bufp->fullCData(oldp+17089,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[29]),6);
    bufp->fullCData(oldp+17090,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[30]),6);
    bufp->fullCData(oldp+17091,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[31]),6);
    bufp->fullCData(oldp+17092,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[32]),6);
    bufp->fullCData(oldp+17093,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[33]),6);
    bufp->fullCData(oldp+17094,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[34]),6);
    bufp->fullCData(oldp+17095,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[35]),6);
    bufp->fullCData(oldp+17096,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[36]),6);
    bufp->fullCData(oldp+17097,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[37]),6);
    bufp->fullCData(oldp+17098,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[38]),6);
    bufp->fullCData(oldp+17099,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[39]),6);
    bufp->fullCData(oldp+17100,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[40]),6);
    bufp->fullCData(oldp+17101,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[41]),6);
    bufp->fullCData(oldp+17102,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[42]),6);
    bufp->fullCData(oldp+17103,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[43]),6);
    bufp->fullCData(oldp+17104,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[44]),6);
    bufp->fullCData(oldp+17105,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[45]),6);
    bufp->fullCData(oldp+17106,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[46]),6);
    bufp->fullCData(oldp+17107,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[47]),6);
    bufp->fullCData(oldp+17108,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[48]),6);
    bufp->fullCData(oldp+17109,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[49]),6);
    bufp->fullCData(oldp+17110,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[50]),6);
    bufp->fullCData(oldp+17111,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[51]),6);
    bufp->fullCData(oldp+17112,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[52]),6);
    bufp->fullCData(oldp+17113,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[53]),6);
    bufp->fullCData(oldp+17114,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[54]),6);
    bufp->fullCData(oldp+17115,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[55]),6);
    bufp->fullCData(oldp+17116,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[56]),6);
    bufp->fullCData(oldp+17117,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[57]),6);
    bufp->fullCData(oldp+17118,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[58]),6);
    bufp->fullCData(oldp+17119,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[59]),6);
    bufp->fullCData(oldp+17120,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[60]),6);
    bufp->fullCData(oldp+17121,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[61]),6);
    bufp->fullCData(oldp+17122,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[62]),6);
    bufp->fullCData(oldp+17123,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[63]),6);
    bufp->fullBit(oldp+17124,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[0]));
    bufp->fullBit(oldp+17125,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[1]));
    bufp->fullBit(oldp+17126,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[2]));
    bufp->fullBit(oldp+17127,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[3]));
    bufp->fullBit(oldp+17128,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[4]));
    bufp->fullBit(oldp+17129,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[5]));
    bufp->fullBit(oldp+17130,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[6]));
    bufp->fullBit(oldp+17131,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[7]));
    bufp->fullBit(oldp+17132,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[8]));
    bufp->fullBit(oldp+17133,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[9]));
    bufp->fullBit(oldp+17134,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[10]));
    bufp->fullBit(oldp+17135,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[11]));
    bufp->fullBit(oldp+17136,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[12]));
    bufp->fullBit(oldp+17137,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[13]));
    bufp->fullBit(oldp+17138,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[14]));
    bufp->fullBit(oldp+17139,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[15]));
    bufp->fullBit(oldp+17140,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[16]));
    bufp->fullBit(oldp+17141,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[17]));
    bufp->fullBit(oldp+17142,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[18]));
    bufp->fullBit(oldp+17143,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[19]));
    bufp->fullBit(oldp+17144,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[20]));
    bufp->fullBit(oldp+17145,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[21]));
    bufp->fullBit(oldp+17146,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[22]));
    bufp->fullBit(oldp+17147,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[23]));
    bufp->fullBit(oldp+17148,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[24]));
    bufp->fullBit(oldp+17149,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[25]));
    bufp->fullBit(oldp+17150,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[26]));
    bufp->fullBit(oldp+17151,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[27]));
    bufp->fullBit(oldp+17152,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[28]));
    bufp->fullBit(oldp+17153,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[29]));
    bufp->fullBit(oldp+17154,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[30]));
    bufp->fullBit(oldp+17155,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[31]));
    bufp->fullBit(oldp+17156,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[32]));
    bufp->fullBit(oldp+17157,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[33]));
    bufp->fullBit(oldp+17158,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[34]));
    bufp->fullBit(oldp+17159,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[35]));
    bufp->fullBit(oldp+17160,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[36]));
    bufp->fullBit(oldp+17161,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[37]));
    bufp->fullBit(oldp+17162,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[38]));
    bufp->fullBit(oldp+17163,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[39]));
    bufp->fullBit(oldp+17164,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[40]));
    bufp->fullBit(oldp+17165,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[41]));
    bufp->fullBit(oldp+17166,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[42]));
    bufp->fullBit(oldp+17167,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[43]));
    bufp->fullBit(oldp+17168,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[44]));
    bufp->fullBit(oldp+17169,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[45]));
    bufp->fullBit(oldp+17170,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[46]));
    bufp->fullBit(oldp+17171,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[47]));
    bufp->fullBit(oldp+17172,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[48]));
    bufp->fullBit(oldp+17173,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[49]));
    bufp->fullBit(oldp+17174,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[50]));
    bufp->fullBit(oldp+17175,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[51]));
    bufp->fullBit(oldp+17176,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[52]));
    bufp->fullBit(oldp+17177,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[53]));
    bufp->fullBit(oldp+17178,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[54]));
    bufp->fullBit(oldp+17179,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[55]));
    bufp->fullBit(oldp+17180,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[56]));
    bufp->fullBit(oldp+17181,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[57]));
    bufp->fullBit(oldp+17182,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[58]));
    bufp->fullBit(oldp+17183,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[59]));
    bufp->fullBit(oldp+17184,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[60]));
    bufp->fullBit(oldp+17185,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[61]));
    bufp->fullBit(oldp+17186,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[62]));
    bufp->fullBit(oldp+17187,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[63]));
    bufp->fullCData(oldp+17188,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_free_idx),6);
    bufp->fullBit(oldp+17189,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_has_free));
    bufp->fullCData(oldp+17190,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_disp_s),6);
    bufp->fullIData(oldp+17191,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_disp_pr1v),32);
    bufp->fullIData(oldp+17192,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_disp_addr_c),32);
    bufp->fullIData(oldp+17193,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_pr1_a),32);
    bufp->fullIData(oldp+17194,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_pr2_av),32);
    bufp->fullBit(oldp+17195,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_pr2_addr_ok));
    bufp->fullCData(oldp+17196,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_disp_s),6);
    bufp->fullIData(oldp+17197,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_disp_a),32);
    bufp->fullCData(oldp+17198,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__swb_h),6);
    bufp->fullIData(oldp+17199,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_ff__DOT__unnamedblk18__DOT__i),32);
    bufp->fullIData(oldp+17200,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_ff__DOT__unnamedblk19__DOT__i),32);
    bufp->fullIData(oldp+17201,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_ff__DOT__unnamedblk20__DOT__i),32);
    bufp->fullIData(oldp+17202,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_ff__DOT__unnamedblk21__DOT__i),32);
    bufp->fullIData(oldp+17203,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_ff__DOT__unnamedblk22__DOT__i),32);
    bufp->fullIData(oldp+17204,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_ff__DOT__unnamedblk23__DOT__i),32);
    bufp->fullIData(oldp+17205,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_ff__DOT__unnamedblk24__DOT__j),32);
    bufp->fullIData(oldp+17206,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_ff__DOT__unnamedblk25__DOT__j),32);
    bufp->fullIData(oldp+17207,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_ff__DOT__unnamedblk26__DOT__j),32);
    bufp->fullIData(oldp+17208,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_prev_ff__DOT__unnamedblk11__DOT__j),32);
    bufp->fullIData(oldp+17209,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_prev_ff__DOT__unnamedblk12__DOT__j),32);
    bufp->fullBit(oldp+17210,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+17211,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                          >> 0xfU))),5);
    bufp->fullCData(oldp+17212,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                          >> 0x14U))),5);
    bufp->fullCData(oldp+17213,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                          >> 7U))),5);
    bufp->fullIData(oldp+17214,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+17215,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[0U])),32);
    bufp->fullBit(oldp+17216,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+17217,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result
                                  : 0U)),32);
    bufp->fullBit(oldp+17218,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+17219,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+17220,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+17221,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                     & VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17222,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+17223,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[0U] 
                                     + (0xfffff000U 
                                        & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+17224,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+17225,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+17226,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+17227,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+17228,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+17229,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+17230,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+17231,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+17232,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+17233,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+17234,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+17235,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+17236,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+17237,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+17238,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+17239,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+17240,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+17241,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+17242,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+17243,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                          >> 2U))),5);
    bufp->fullIData(oldp+17244,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[0U])),32);
    bufp->fullBit(oldp+17245,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+17246,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                     + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17247,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+17248,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                     + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                  : 0U)),32);
    bufp->fullBit(oldp+17249,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+17250,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                             >> 2U)))),5);
    bufp->fullIData(oldp+17251,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                 + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+17252,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+17253,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                             >> 7U)))),5);
    bufp->fullIData(oldp+17254,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+17255,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+17256,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                 & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+17257,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+17258,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+17259,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+17260,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+17261,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+17262,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+17263,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+17264,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+17265,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+17266,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+17267,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])),32);
    bufp->fullBit(oldp+17268,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+17269,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+17270,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                  : 0U)),32);
    bufp->fullBit(oldp+17271,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+17272,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                  : 0U)),32);
    bufp->fullBit(oldp+17273,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+17274,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+17275,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[0U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+17276,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+17277,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+17278,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+17279,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+17280,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? VL_SHIFTR_III(32,32,32, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[0U], 
                                                  VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                  : 0U)),32);
    bufp->fullIData(oldp+17281,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+17282,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+17283,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+17284,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]
                                  : 0U)),32);
    bufp->fullBit(oldp+17285,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+17286,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+17287,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+17288,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? VL_SHIFTL_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                  : 0U)),32);
    bufp->fullBit(oldp+17289,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+17290,(VL_SHIFTRS_III(32,32,6, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+17291,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+17292,(VL_SHIFTR_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+17293,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+17294,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+17295,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+17296,(VL_SHIFTL_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+17297,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+17298,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+17299,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+17300,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+17301,(VL_SHIFTL_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+17302,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+17303,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+17304,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+17305,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                      ? 0xffffffffU
                                      : (((0x80000000U 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]) 
                                          & (0xffffffffU 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                          ? 0x80000000U
                                          : VL_DIVS_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])))
                                  : 0U)),32);
    bufp->fullBit(oldp+17306,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+17307,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                      ? 0xffffffffU
                                      : VL_DIV_III(32, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+17308,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+17309,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+17310,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+17311,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+17312,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+17313,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+17314,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+17315,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result))
                                  : 0U)),32);
    bufp->fullIData(oldp+17316,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+17317,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+17318,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+17319,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)
                                  : 0U)),32);
    bufp->fullBit(oldp+17320,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+17321,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+17322,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,16, 
                                                  (0xffffU 
                                                   & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result))
                                  : 0U)),32);
    bufp->fullCData(oldp+17323,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+17324,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+17325,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)
                                  : 0U)),32);
    bufp->fullBit(oldp+17326,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+17327,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? (0xfffff000U & 
                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])
                                  : 0U)),32);
    bufp->fullBit(oldp+17328,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+17329,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+17330,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result
                                  : 0U)),32);
    bufp->fullCData(oldp+17331,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+17332,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+17333,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                     * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                  : 0U)),32);
    bufp->fullBit(oldp+17334,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+17335,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__VdfgTmp_hb1a4827e__0 
                                              * (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+17336,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+17337,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__VdfgTmp_hb1a4827e__0 
                                              * (QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+17338,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+17339,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? (IData)((((QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])) 
                                              * (QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+17340,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+17341,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+17342,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+17343,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                     | VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17344,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+17345,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                      ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]
                                      : (((0x80000000U 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]) 
                                          & (0xffffffffU 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                          ? 0U : VL_MODDIVS_III(32, 
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])))
                                  : 0U)),32);
    bufp->fullBit(oldp+17346,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+17347,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                      ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]
                                      : VL_MODDIV_III(32, 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+17348,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+17349,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+17350,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+17351,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+17352,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+17353,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+17354,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+17355,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+17356,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                     << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+17357,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+17358,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? VL_SHIFTL_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17359,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+17360,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_blt__DOT__cond)
                                  : 0U)),32);
    bufp->fullBit(oldp+17361,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+17362,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? VL_LTS_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                               VL_EXTENDS_II(32,12, 
                                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                              >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17363,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+17364,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                     < VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17365,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+17366,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_bltu__DOT__cond)
                                  : 0U)),32);
    bufp->fullBit(oldp+17367,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+17368,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? VL_SHIFTRS_III(32,32,5, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                   (0x1fU 
                                                    & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+17369,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+17370,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? VL_SHIFTRS_III(32,32,6, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                   (0x3fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                       >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17371,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+17372,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                     >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+17373,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+17374,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? VL_SHIFTR_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17375,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+17376,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+17377,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+17378,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+17379,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+17380,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+17381,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+17382,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+17383,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                     ^ VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullCData(oldp+17384,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                 >> 0x19U)),7);
    bufp->fullCData(oldp+17385,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                       >> 0xcU))),3);
    bufp->fullCData(oldp+17386,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])),7);
    bufp->fullIData(oldp+17387,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                 + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])),32);
    bufp->fullIData(oldp+17388,(VL_EXTENDS_II(32,12, 
                                              (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                               >> 0x14U))),32);
    bufp->fullIData(oldp+17389,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+17390,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                 & VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+17391,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])),32);
    bufp->fullIData(oldp+17392,(VL_EXTENDS_II(32,13, 
                                              ((0x1000U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                           >> 7U))))))),32);
    bufp->fullBit(oldp+17393,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                               == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
    bufp->fullBit(oldp+17394,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
    bufp->fullBit(oldp+17395,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                               >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
    bufp->fullBit(oldp+17396,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+17397,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+17398,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                               != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
    bufp->fullIData(oldp+17399,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U], 0x10U)),32);
    bufp->fullCData(oldp+17400,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 0xcU))),4);
    bufp->fullCData(oldp+17401,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])),2);
    bufp->fullIData(oldp+17402,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+17403,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                       >> 0xdU))),3);
    bufp->fullIData(oldp+17404,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                 + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+17405,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+17406,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                 + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+17407,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+17408,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                          >> 0xaU))),6);
    bufp->fullCData(oldp+17409,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                       >> 5U))),2);
    bufp->fullCData(oldp+17410,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                       >> 0xaU))),2);
    bufp->fullIData(oldp+17411,(VL_EXTENDS_II(32,9, 
                                              ((0x100U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                   >> 4U)) 
                                               | ((0xc0U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                      << 1U)) 
                                                  | ((0x20U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                         << 3U)) 
                                                     | ((0x18U 
                                                         & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                            >> 7U)) 
                                                        | (6U 
                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                              >> 2U)))))))),32);
    bufp->fullBit(oldp+17412,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])));
    bufp->fullBit(oldp+17413,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])));
    bufp->fullIData(oldp+17414,(VL_EXTENDS_II(32,12, 
                                              ((0x800U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                   >> 1U)) 
                                               | ((0x400U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                      << 2U)) 
                                                  | ((0x300U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                         >> 1U)) 
                                                     | ((0x80U 
                                                         & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                            << 1U)) 
                                                        | ((0x40U 
                                                            & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                               >> 1U)) 
                                                           | ((0x20U 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                                  << 3U)) 
                                                              | ((0x10U 
                                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                                     >> 7U)) 
                                                                 | (0xeU 
                                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                                       >> 2U))))))))))),32);
    bufp->fullIData(oldp+17415,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+17416,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                           << 1U)) 
                                 | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                              >> 7U)) 
                                    | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                             >> 4U))))),32);
    bufp->fullIData(oldp+17417,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+17418,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                           << 4U)) 
                                 | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                              >> 7U)) 
                                    | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                >> 2U))))),32);
    bufp->fullIData(oldp+17419,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+17420,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[0U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+17421,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+17422,(VL_SHIFTL_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+17423,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                           >> 1U)) 
                                 | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                             >> 7U)))),32);
    bufp->fullIData(oldp+17424,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+17425,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                  ? 0xffffffffU : (
                                                   ((0x80000000U 
                                                     == 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]) 
                                                    & (0xffffffffU 
                                                       == 
                                                       vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                                    ? 0x80000000U
                                                    : 
                                                   VL_DIVS_III(32, 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])))),32);
    bufp->fullIData(oldp+17426,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                  ? 0xffffffffU : VL_DIV_III(32, 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
    bufp->fullIData(oldp+17427,(VL_EXTENDS_II(32,21, 
                                              ((0x100000U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U]) 
                                                  | ((0x800U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                           >> 0x14U))))))),32);
    bufp->fullCData(oldp+17428,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+17429,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+17430,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+17431,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                 * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])),32);
    bufp->fullIData(oldp+17432,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__VdfgTmp_hb1a4827e__0 
                                          * (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U] 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+17433,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__VdfgTmp_hb1a4827e__0 
                                          * (QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+17434,((IData)((((QData)((IData)(
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])) 
                                          * (QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+17435,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                 | VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+17436,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]
                                  : (((0x80000000U 
                                       == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]) 
                                      & (0xffffffffU 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                      ? 0U : VL_MODDIVS_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])))),32);
    bufp->fullIData(oldp+17437,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]
                                  : VL_MODDIV_III(32, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
    bufp->fullIData(oldp+17438,(VL_EXTENDS_II(32,12, 
                                              ((0xfe0U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                     >> 7U))))),32);
    bufp->fullIData(oldp+17439,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+17440,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])),6);
    bufp->fullIData(oldp+17441,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                 << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
    bufp->fullCData(oldp+17442,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                 >> 0x1aU)),7);
    bufp->fullCData(oldp+17443,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                          >> 0x14U))),6);
    bufp->fullIData(oldp+17444,(VL_SHIFTL_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+17445,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+17446,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                           VL_EXTENDS_II(32,12, 
                                                         (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                          >> 0x14U)))),32);
    bufp->fullIData(oldp+17447,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                 < VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+17448,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+17449,(VL_SHIFTRS_III(32,32,5, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                               (0x1fU 
                                                & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
    bufp->fullIData(oldp+17450,(VL_SHIFTRS_III(32,32,6, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                               (0x3fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                   >> 0x14U)))),32);
    bufp->fullIData(oldp+17451,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                 >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
    bufp->fullIData(oldp+17452,(VL_SHIFTR_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+17453,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                 ^ VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 0x14U)))),32);
    bufp->fullBit(oldp+17454,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+17455,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                          >> 0xfU))),5);
    bufp->fullCData(oldp+17456,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                          >> 0x14U))),5);
    bufp->fullCData(oldp+17457,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                          >> 7U))),5);
    bufp->fullIData(oldp+17458,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+17459,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[1U])),32);
    bufp->fullBit(oldp+17460,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+17461,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result
                                  : 0U)),32);
    bufp->fullBit(oldp+17462,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+17463,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+17464,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+17465,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                     & VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17466,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+17467,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[1U] 
                                     + (0xfffff000U 
                                        & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+17468,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+17469,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+17470,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+17471,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+17472,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+17473,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+17474,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+17475,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+17476,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+17477,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+17478,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+17479,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+17480,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+17481,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+17482,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+17483,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+17484,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+17485,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+17486,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+17487,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                          >> 2U))),5);
    bufp->fullIData(oldp+17488,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[1U])),32);
    bufp->fullBit(oldp+17489,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+17490,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                     + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17491,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+17492,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                     + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                  : 0U)),32);
    bufp->fullBit(oldp+17493,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+17494,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                             >> 2U)))),5);
    bufp->fullIData(oldp+17495,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                 + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+17496,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+17497,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                             >> 7U)))),5);
    bufp->fullIData(oldp+17498,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+17499,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+17500,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                 & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+17501,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+17502,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+17503,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+17504,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+17505,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+17506,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+17507,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+17508,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+17509,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+17510,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+17511,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])),32);
    bufp->fullBit(oldp+17512,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+17513,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+17514,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                  : 0U)),32);
    bufp->fullBit(oldp+17515,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+17516,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                  : 0U)),32);
    bufp->fullBit(oldp+17517,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+17518,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+17519,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[1U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+17520,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+17521,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+17522,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+17523,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+17524,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? VL_SHIFTR_III(32,32,32, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[1U], 
                                                  VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                  : 0U)),32);
    bufp->fullIData(oldp+17525,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+17526,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+17527,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+17528,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]
                                  : 0U)),32);
    bufp->fullBit(oldp+17529,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+17530,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+17531,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+17532,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? VL_SHIFTL_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                  : 0U)),32);
    bufp->fullBit(oldp+17533,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+17534,(VL_SHIFTRS_III(32,32,6, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+17535,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+17536,(VL_SHIFTR_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+17537,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+17538,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+17539,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+17540,(VL_SHIFTL_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+17541,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+17542,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+17543,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+17544,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+17545,(VL_SHIFTL_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+17546,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+17547,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+17548,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+17549,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                      ? 0xffffffffU
                                      : (((0x80000000U 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]) 
                                          & (0xffffffffU 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                          ? 0x80000000U
                                          : VL_DIVS_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])))
                                  : 0U)),32);
    bufp->fullBit(oldp+17550,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+17551,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                      ? 0xffffffffU
                                      : VL_DIV_III(32, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+17552,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+17553,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+17554,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+17555,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+17556,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+17557,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+17558,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+17559,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result))
                                  : 0U)),32);
    bufp->fullIData(oldp+17560,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+17561,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+17562,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+17563,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)
                                  : 0U)),32);
    bufp->fullBit(oldp+17564,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+17565,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+17566,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,16, 
                                                  (0xffffU 
                                                   & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result))
                                  : 0U)),32);
    bufp->fullCData(oldp+17567,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+17568,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+17569,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)
                                  : 0U)),32);
    bufp->fullBit(oldp+17570,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+17571,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? (0xfffff000U & 
                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])
                                  : 0U)),32);
    bufp->fullBit(oldp+17572,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+17573,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+17574,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result
                                  : 0U)),32);
    bufp->fullCData(oldp+17575,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+17576,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+17577,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                     * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                  : 0U)),32);
    bufp->fullBit(oldp+17578,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+17579,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__VdfgTmp_hb1a4827e__0 
                                              * (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+17580,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+17581,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__VdfgTmp_hb1a4827e__0 
                                              * (QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+17582,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+17583,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? (IData)((((QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])) 
                                              * (QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+17584,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+17585,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+17586,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+17587,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                     | VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17588,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+17589,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                      ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]
                                      : (((0x80000000U 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]) 
                                          & (0xffffffffU 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                          ? 0U : VL_MODDIVS_III(32, 
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])))
                                  : 0U)),32);
    bufp->fullBit(oldp+17590,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+17591,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                      ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]
                                      : VL_MODDIV_III(32, 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+17592,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+17593,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+17594,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+17595,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+17596,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+17597,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+17598,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+17599,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+17600,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                     << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+17601,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+17602,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? VL_SHIFTL_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17603,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+17604,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_blt__DOT__cond)
                                  : 0U)),32);
    bufp->fullBit(oldp+17605,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+17606,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? VL_LTS_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                               VL_EXTENDS_II(32,12, 
                                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                              >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17607,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+17608,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                     < VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17609,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+17610,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_bltu__DOT__cond)
                                  : 0U)),32);
    bufp->fullBit(oldp+17611,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+17612,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? VL_SHIFTRS_III(32,32,5, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                   (0x1fU 
                                                    & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+17613,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+17614,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? VL_SHIFTRS_III(32,32,6, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                   (0x3fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                       >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17615,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+17616,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                     >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+17617,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+17618,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? VL_SHIFTR_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17619,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+17620,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+17621,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+17622,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+17623,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+17624,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+17625,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+17626,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+17627,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                     ^ VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullCData(oldp+17628,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                 >> 0x19U)),7);
    bufp->fullCData(oldp+17629,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                       >> 0xcU))),3);
    bufp->fullCData(oldp+17630,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])),7);
    bufp->fullIData(oldp+17631,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                 + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])),32);
    bufp->fullIData(oldp+17632,(VL_EXTENDS_II(32,12, 
                                              (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                               >> 0x14U))),32);
    bufp->fullIData(oldp+17633,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+17634,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                 & VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+17635,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])),32);
    bufp->fullIData(oldp+17636,(VL_EXTENDS_II(32,13, 
                                              ((0x1000U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                           >> 7U))))))),32);
    bufp->fullBit(oldp+17637,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                               == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
    bufp->fullBit(oldp+17638,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
    bufp->fullBit(oldp+17639,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                               >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
    bufp->fullBit(oldp+17640,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+17641,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+17642,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                               != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
    bufp->fullIData(oldp+17643,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U], 0x10U)),32);
    bufp->fullCData(oldp+17644,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 0xcU))),4);
    bufp->fullCData(oldp+17645,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])),2);
    bufp->fullIData(oldp+17646,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+17647,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                       >> 0xdU))),3);
    bufp->fullIData(oldp+17648,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                 + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+17649,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+17650,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                 + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+17651,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+17652,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                          >> 0xaU))),6);
    bufp->fullCData(oldp+17653,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                       >> 5U))),2);
    bufp->fullCData(oldp+17654,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                       >> 0xaU))),2);
    bufp->fullIData(oldp+17655,(VL_EXTENDS_II(32,9, 
                                              ((0x100U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                   >> 4U)) 
                                               | ((0xc0U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                      << 1U)) 
                                                  | ((0x20U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                         << 3U)) 
                                                     | ((0x18U 
                                                         & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                            >> 7U)) 
                                                        | (6U 
                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                              >> 2U)))))))),32);
    bufp->fullBit(oldp+17656,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])));
    bufp->fullBit(oldp+17657,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])));
    bufp->fullIData(oldp+17658,(VL_EXTENDS_II(32,12, 
                                              ((0x800U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                   >> 1U)) 
                                               | ((0x400U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                      << 2U)) 
                                                  | ((0x300U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                         >> 1U)) 
                                                     | ((0x80U 
                                                         & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                            << 1U)) 
                                                        | ((0x40U 
                                                            & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                               >> 1U)) 
                                                           | ((0x20U 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                                  << 3U)) 
                                                              | ((0x10U 
                                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                                     >> 7U)) 
                                                                 | (0xeU 
                                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                                       >> 2U))))))))))),32);
    bufp->fullIData(oldp+17659,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+17660,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                           << 1U)) 
                                 | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                              >> 7U)) 
                                    | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                             >> 4U))))),32);
    bufp->fullIData(oldp+17661,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+17662,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                           << 4U)) 
                                 | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                              >> 7U)) 
                                    | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                >> 2U))))),32);
    bufp->fullIData(oldp+17663,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+17664,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[1U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+17665,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+17666,(VL_SHIFTL_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+17667,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                           >> 1U)) 
                                 | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                             >> 7U)))),32);
    bufp->fullIData(oldp+17668,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+17669,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                  ? 0xffffffffU : (
                                                   ((0x80000000U 
                                                     == 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]) 
                                                    & (0xffffffffU 
                                                       == 
                                                       vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                                    ? 0x80000000U
                                                    : 
                                                   VL_DIVS_III(32, 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])))),32);
    bufp->fullIData(oldp+17670,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                  ? 0xffffffffU : VL_DIV_III(32, 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
    bufp->fullIData(oldp+17671,(VL_EXTENDS_II(32,21, 
                                              ((0x100000U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U]) 
                                                  | ((0x800U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                           >> 0x14U))))))),32);
    bufp->fullCData(oldp+17672,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+17673,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+17674,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+17675,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                 * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])),32);
    bufp->fullIData(oldp+17676,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__VdfgTmp_hb1a4827e__0 
                                          * (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U] 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+17677,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__VdfgTmp_hb1a4827e__0 
                                          * (QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+17678,((IData)((((QData)((IData)(
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])) 
                                          * (QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+17679,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                 | VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+17680,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]
                                  : (((0x80000000U 
                                       == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]) 
                                      & (0xffffffffU 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                      ? 0U : VL_MODDIVS_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])))),32);
    bufp->fullIData(oldp+17681,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]
                                  : VL_MODDIV_III(32, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
    bufp->fullIData(oldp+17682,(VL_EXTENDS_II(32,12, 
                                              ((0xfe0U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                     >> 7U))))),32);
    bufp->fullIData(oldp+17683,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+17684,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])),6);
    bufp->fullIData(oldp+17685,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                 << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
    bufp->fullCData(oldp+17686,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                 >> 0x1aU)),7);
    bufp->fullCData(oldp+17687,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                          >> 0x14U))),6);
    bufp->fullIData(oldp+17688,(VL_SHIFTL_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+17689,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+17690,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                           VL_EXTENDS_II(32,12, 
                                                         (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                          >> 0x14U)))),32);
    bufp->fullIData(oldp+17691,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                 < VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+17692,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+17693,(VL_SHIFTRS_III(32,32,5, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                               (0x1fU 
                                                & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
    bufp->fullIData(oldp+17694,(VL_SHIFTRS_III(32,32,6, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                               (0x3fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                   >> 0x14U)))),32);
    bufp->fullIData(oldp+17695,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                 >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
    bufp->fullIData(oldp+17696,(VL_SHIFTR_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+17697,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                 ^ VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 0x14U)))),32);
    bufp->fullBit(oldp+17698,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+17699,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                          >> 0xfU))),5);
    bufp->fullCData(oldp+17700,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                          >> 0x14U))),5);
    bufp->fullCData(oldp+17701,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                          >> 7U))),5);
    bufp->fullIData(oldp+17702,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+17703,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[2U])),32);
    bufp->fullBit(oldp+17704,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+17705,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result
                                  : 0U)),32);
    bufp->fullBit(oldp+17706,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+17707,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+17708,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+17709,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                     & VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17710,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+17711,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[2U] 
                                     + (0xfffff000U 
                                        & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+17712,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+17713,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+17714,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+17715,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+17716,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+17717,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+17718,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+17719,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+17720,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+17721,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+17722,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+17723,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+17724,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+17725,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+17726,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+17727,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+17728,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+17729,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+17730,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+17731,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                          >> 2U))),5);
    bufp->fullIData(oldp+17732,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[2U])),32);
    bufp->fullBit(oldp+17733,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+17734,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                     + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17735,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+17736,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                     + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                  : 0U)),32);
    bufp->fullBit(oldp+17737,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+17738,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                             >> 2U)))),5);
    bufp->fullIData(oldp+17739,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                 + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+17740,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+17741,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                             >> 7U)))),5);
    bufp->fullIData(oldp+17742,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+17743,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+17744,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                 & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+17745,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+17746,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+17747,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+17748,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+17749,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+17750,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+17751,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+17752,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+17753,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+17754,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+17755,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])),32);
    bufp->fullBit(oldp+17756,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+17757,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+17758,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                  : 0U)),32);
    bufp->fullBit(oldp+17759,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+17760,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                  : 0U)),32);
    bufp->fullBit(oldp+17761,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+17762,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+17763,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[2U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+17764,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+17765,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+17766,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+17767,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+17768,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? VL_SHIFTR_III(32,32,32, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[2U], 
                                                  VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                  : 0U)),32);
    bufp->fullIData(oldp+17769,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+17770,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+17771,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+17772,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]
                                  : 0U)),32);
    bufp->fullBit(oldp+17773,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+17774,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+17775,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+17776,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? VL_SHIFTL_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                  : 0U)),32);
    bufp->fullBit(oldp+17777,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+17778,(VL_SHIFTRS_III(32,32,6, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+17779,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+17780,(VL_SHIFTR_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+17781,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+17782,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+17783,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+17784,(VL_SHIFTL_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+17785,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+17786,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+17787,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+17788,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+17789,(VL_SHIFTL_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+17790,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+17791,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+17792,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+17793,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                      ? 0xffffffffU
                                      : (((0x80000000U 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]) 
                                          & (0xffffffffU 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                          ? 0x80000000U
                                          : VL_DIVS_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])))
                                  : 0U)),32);
    bufp->fullBit(oldp+17794,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+17795,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                      ? 0xffffffffU
                                      : VL_DIV_III(32, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+17796,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+17797,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+17798,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+17799,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+17800,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+17801,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+17802,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+17803,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result))
                                  : 0U)),32);
    bufp->fullIData(oldp+17804,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+17805,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+17806,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+17807,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)
                                  : 0U)),32);
    bufp->fullBit(oldp+17808,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+17809,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+17810,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,16, 
                                                  (0xffffU 
                                                   & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result))
                                  : 0U)),32);
    bufp->fullCData(oldp+17811,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+17812,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+17813,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)
                                  : 0U)),32);
    bufp->fullBit(oldp+17814,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+17815,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? (0xfffff000U & 
                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])
                                  : 0U)),32);
    bufp->fullBit(oldp+17816,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+17817,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+17818,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result
                                  : 0U)),32);
    bufp->fullCData(oldp+17819,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+17820,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+17821,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                     * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                  : 0U)),32);
    bufp->fullBit(oldp+17822,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+17823,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__VdfgTmp_hb1a4827e__0 
                                              * (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+17824,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+17825,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__VdfgTmp_hb1a4827e__0 
                                              * (QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+17826,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+17827,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? (IData)((((QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])) 
                                              * (QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+17828,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+17829,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+17830,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+17831,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                     | VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17832,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+17833,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                      ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]
                                      : (((0x80000000U 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]) 
                                          & (0xffffffffU 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                          ? 0U : VL_MODDIVS_III(32, 
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])))
                                  : 0U)),32);
    bufp->fullBit(oldp+17834,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+17835,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                      ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]
                                      : VL_MODDIV_III(32, 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+17836,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+17837,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+17838,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+17839,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+17840,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+17841,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+17842,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+17843,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+17844,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                     << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+17845,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+17846,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? VL_SHIFTL_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17847,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+17848,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_blt__DOT__cond)
                                  : 0U)),32);
    bufp->fullBit(oldp+17849,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+17850,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? VL_LTS_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                               VL_EXTENDS_II(32,12, 
                                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                              >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17851,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+17852,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                     < VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17853,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+17854,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_bltu__DOT__cond)
                                  : 0U)),32);
    bufp->fullBit(oldp+17855,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+17856,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? VL_SHIFTRS_III(32,32,5, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                   (0x1fU 
                                                    & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+17857,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+17858,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? VL_SHIFTRS_III(32,32,6, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                   (0x3fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                       >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17859,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+17860,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                     >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+17861,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+17862,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? VL_SHIFTR_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17863,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+17864,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+17865,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+17866,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+17867,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+17868,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+17869,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+17870,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+17871,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                     ^ VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullCData(oldp+17872,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                 >> 0x19U)),7);
    bufp->fullCData(oldp+17873,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                       >> 0xcU))),3);
    bufp->fullCData(oldp+17874,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])),7);
    bufp->fullIData(oldp+17875,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                 + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])),32);
    bufp->fullIData(oldp+17876,(VL_EXTENDS_II(32,12, 
                                              (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                               >> 0x14U))),32);
    bufp->fullIData(oldp+17877,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+17878,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                 & VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+17879,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])),32);
    bufp->fullIData(oldp+17880,(VL_EXTENDS_II(32,13, 
                                              ((0x1000U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                           >> 7U))))))),32);
    bufp->fullBit(oldp+17881,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                               == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
    bufp->fullBit(oldp+17882,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
    bufp->fullBit(oldp+17883,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                               >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
    bufp->fullBit(oldp+17884,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+17885,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+17886,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                               != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
    bufp->fullIData(oldp+17887,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U], 0x10U)),32);
    bufp->fullCData(oldp+17888,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 0xcU))),4);
    bufp->fullCData(oldp+17889,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])),2);
    bufp->fullIData(oldp+17890,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+17891,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                       >> 0xdU))),3);
    bufp->fullIData(oldp+17892,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                 + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+17893,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+17894,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                 + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+17895,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+17896,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                          >> 0xaU))),6);
    bufp->fullCData(oldp+17897,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                       >> 5U))),2);
    bufp->fullCData(oldp+17898,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                       >> 0xaU))),2);
    bufp->fullIData(oldp+17899,(VL_EXTENDS_II(32,9, 
                                              ((0x100U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                   >> 4U)) 
                                               | ((0xc0U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                      << 1U)) 
                                                  | ((0x20U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                         << 3U)) 
                                                     | ((0x18U 
                                                         & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                            >> 7U)) 
                                                        | (6U 
                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                              >> 2U)))))))),32);
    bufp->fullBit(oldp+17900,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])));
    bufp->fullBit(oldp+17901,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])));
    bufp->fullIData(oldp+17902,(VL_EXTENDS_II(32,12, 
                                              ((0x800U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                   >> 1U)) 
                                               | ((0x400U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                      << 2U)) 
                                                  | ((0x300U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                         >> 1U)) 
                                                     | ((0x80U 
                                                         & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                            << 1U)) 
                                                        | ((0x40U 
                                                            & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                               >> 1U)) 
                                                           | ((0x20U 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                                  << 3U)) 
                                                              | ((0x10U 
                                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                                     >> 7U)) 
                                                                 | (0xeU 
                                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                                       >> 2U))))))))))),32);
    bufp->fullIData(oldp+17903,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+17904,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                           << 1U)) 
                                 | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                              >> 7U)) 
                                    | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                             >> 4U))))),32);
    bufp->fullIData(oldp+17905,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+17906,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                           << 4U)) 
                                 | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                              >> 7U)) 
                                    | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                >> 2U))))),32);
    bufp->fullIData(oldp+17907,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+17908,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[2U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+17909,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+17910,(VL_SHIFTL_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+17911,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                           >> 1U)) 
                                 | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                             >> 7U)))),32);
    bufp->fullIData(oldp+17912,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+17913,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                  ? 0xffffffffU : (
                                                   ((0x80000000U 
                                                     == 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]) 
                                                    & (0xffffffffU 
                                                       == 
                                                       vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                                    ? 0x80000000U
                                                    : 
                                                   VL_DIVS_III(32, 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])))),32);
    bufp->fullIData(oldp+17914,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                  ? 0xffffffffU : VL_DIV_III(32, 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
    bufp->fullIData(oldp+17915,(VL_EXTENDS_II(32,21, 
                                              ((0x100000U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U]) 
                                                  | ((0x800U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                           >> 0x14U))))))),32);
    bufp->fullCData(oldp+17916,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+17917,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+17918,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+17919,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                 * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])),32);
    bufp->fullIData(oldp+17920,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__VdfgTmp_hb1a4827e__0 
                                          * (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U] 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+17921,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__VdfgTmp_hb1a4827e__0 
                                          * (QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+17922,((IData)((((QData)((IData)(
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])) 
                                          * (QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+17923,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                 | VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+17924,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]
                                  : (((0x80000000U 
                                       == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]) 
                                      & (0xffffffffU 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                      ? 0U : VL_MODDIVS_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])))),32);
    bufp->fullIData(oldp+17925,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]
                                  : VL_MODDIV_III(32, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
    bufp->fullIData(oldp+17926,(VL_EXTENDS_II(32,12, 
                                              ((0xfe0U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                     >> 7U))))),32);
    bufp->fullIData(oldp+17927,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+17928,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])),6);
    bufp->fullIData(oldp+17929,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                 << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
    bufp->fullCData(oldp+17930,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                 >> 0x1aU)),7);
    bufp->fullCData(oldp+17931,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                          >> 0x14U))),6);
    bufp->fullIData(oldp+17932,(VL_SHIFTL_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+17933,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+17934,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                           VL_EXTENDS_II(32,12, 
                                                         (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                          >> 0x14U)))),32);
    bufp->fullIData(oldp+17935,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                 < VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+17936,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+17937,(VL_SHIFTRS_III(32,32,5, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                               (0x1fU 
                                                & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
    bufp->fullIData(oldp+17938,(VL_SHIFTRS_III(32,32,6, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                               (0x3fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                   >> 0x14U)))),32);
    bufp->fullIData(oldp+17939,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                 >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
    bufp->fullIData(oldp+17940,(VL_SHIFTR_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+17941,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                 ^ VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 0x14U)))),32);
    bufp->fullBit(oldp+17942,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+17943,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                          >> 0xfU))),5);
    bufp->fullCData(oldp+17944,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                          >> 0x14U))),5);
    bufp->fullCData(oldp+17945,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                          >> 7U))),5);
    bufp->fullIData(oldp+17946,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+17947,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U])),32);
    bufp->fullBit(oldp+17948,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+17949,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result
                                  : 0U)),32);
    bufp->fullBit(oldp+17950,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+17951,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+17952,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+17953,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                     & VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17954,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+17955,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U] 
                                     + (0xfffff000U 
                                        & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+17956,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+17957,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+17958,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+17959,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+17960,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+17961,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+17962,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+17963,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+17964,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+17965,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+17966,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+17967,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+17968,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+17969,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+17970,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+17971,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+17972,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+17973,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+17974,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+17975,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                          >> 2U))),5);
    bufp->fullIData(oldp+17976,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U])),32);
    bufp->fullBit(oldp+17977,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+17978,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                     + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                  : 0U)),32);
    bufp->fullBit(oldp+17979,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+17980,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                     + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                  : 0U)),32);
    bufp->fullBit(oldp+17981,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+17982,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                             >> 2U)))),5);
    bufp->fullIData(oldp+17983,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                 + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+17984,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+17985,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                             >> 7U)))),5);
    bufp->fullIData(oldp+17986,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+17987,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+17988,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                 & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+17989,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+17990,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+17991,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+17992,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+17993,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+17994,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+17995,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+17996,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+17997,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+17998,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+17999,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])),32);
    bufp->fullBit(oldp+18000,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+18001,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+18002,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                  : 0U)),32);
    bufp->fullBit(oldp+18003,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+18004,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                  : 0U)),32);
    bufp->fullBit(oldp+18005,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+18006,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+18007,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[3U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+18008,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+18009,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+18010,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+18011,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+18012,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? VL_SHIFTR_III(32,32,32, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[3U], 
                                                  VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                  : 0U)),32);
    bufp->fullIData(oldp+18013,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+18014,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+18015,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+18016,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]
                                  : 0U)),32);
    bufp->fullBit(oldp+18017,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+18018,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+18019,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+18020,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? VL_SHIFTL_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                  : 0U)),32);
    bufp->fullBit(oldp+18021,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+18022,(VL_SHIFTRS_III(32,32,6, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+18023,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+18024,(VL_SHIFTR_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+18025,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+18026,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+18027,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+18028,(VL_SHIFTL_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+18029,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+18030,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+18031,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+18032,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+18033,(VL_SHIFTL_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+18034,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+18035,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+18036,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+18037,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                      ? 0xffffffffU
                                      : (((0x80000000U 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]) 
                                          & (0xffffffffU 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                          ? 0x80000000U
                                          : VL_DIVS_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))
                                  : 0U)),32);
    bufp->fullBit(oldp+18038,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+18039,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                      ? 0xffffffffU
                                      : VL_DIV_III(32, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18040,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+18041,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+18042,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+18043,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+18044,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+18045,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+18046,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+18047,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result))
                                  : 0U)),32);
    bufp->fullIData(oldp+18048,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+18049,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+18050,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+18051,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)
                                  : 0U)),32);
    bufp->fullBit(oldp+18052,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+18053,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+18054,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,16, 
                                                  (0xffffU 
                                                   & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result))
                                  : 0U)),32);
    bufp->fullCData(oldp+18055,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+18056,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+18057,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)
                                  : 0U)),32);
    bufp->fullBit(oldp+18058,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+18059,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? (0xfffff000U & 
                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])
                                  : 0U)),32);
    bufp->fullBit(oldp+18060,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+18061,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+18062,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result
                                  : 0U)),32);
    bufp->fullCData(oldp+18063,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+18064,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+18065,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                     * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                  : 0U)),32);
    bufp->fullBit(oldp+18066,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+18067,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__VdfgTmp_hb1a4827e__0 
                                              * (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+18068,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+18069,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__VdfgTmp_hb1a4827e__0 
                                              * (QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+18070,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+18071,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? (IData)((((QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])) 
                                              * (QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+18072,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+18073,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+18074,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+18075,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                     | VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18076,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+18077,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                      ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]
                                      : (((0x80000000U 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]) 
                                          & (0xffffffffU 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                          ? 0U : VL_MODDIVS_III(32, 
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))
                                  : 0U)),32);
    bufp->fullBit(oldp+18078,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+18079,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                      ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]
                                      : VL_MODDIV_III(32, 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18080,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+18081,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+18082,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+18083,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+18084,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+18085,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+18086,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+18087,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+18088,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                     << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18089,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+18090,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? VL_SHIFTL_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18091,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+18092,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_blt__DOT__cond)
                                  : 0U)),32);
    bufp->fullBit(oldp+18093,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+18094,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? VL_LTS_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                               VL_EXTENDS_II(32,12, 
                                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                              >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18095,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+18096,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                     < VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18097,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+18098,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_bltu__DOT__cond)
                                  : 0U)),32);
    bufp->fullBit(oldp+18099,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+18100,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? VL_SHIFTRS_III(32,32,5, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                   (0x1fU 
                                                    & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18101,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+18102,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? VL_SHIFTRS_III(32,32,6, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                   (0x3fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18103,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+18104,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                     >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18105,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+18106,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? VL_SHIFTR_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18107,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+18108,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+18109,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+18110,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+18111,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+18112,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+18113,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+18114,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+18115,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                     ^ VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullCData(oldp+18116,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                 >> 0x19U)),7);
    bufp->fullCData(oldp+18117,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                       >> 0xcU))),3);
    bufp->fullCData(oldp+18118,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])),7);
    bufp->fullIData(oldp+18119,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                 + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])),32);
    bufp->fullIData(oldp+18120,(VL_EXTENDS_II(32,12, 
                                              (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                               >> 0x14U))),32);
    bufp->fullIData(oldp+18121,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+18122,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                 & VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+18123,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])),32);
    bufp->fullIData(oldp+18124,(VL_EXTENDS_II(32,13, 
                                              ((0x1000U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                           >> 7U))))))),32);
    bufp->fullBit(oldp+18125,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                               == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
    bufp->fullBit(oldp+18126,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
    bufp->fullBit(oldp+18127,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                               >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
    bufp->fullBit(oldp+18128,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+18129,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+18130,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                               != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
    bufp->fullIData(oldp+18131,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)),32);
    bufp->fullCData(oldp+18132,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 0xcU))),4);
    bufp->fullCData(oldp+18133,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])),2);
    bufp->fullIData(oldp+18134,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+18135,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                       >> 0xdU))),3);
    bufp->fullIData(oldp+18136,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                 + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+18137,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+18138,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                 + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+18139,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+18140,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                          >> 0xaU))),6);
    bufp->fullCData(oldp+18141,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                       >> 5U))),2);
    bufp->fullCData(oldp+18142,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                       >> 0xaU))),2);
    bufp->fullIData(oldp+18143,(VL_EXTENDS_II(32,9, 
                                              ((0x100U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 4U)) 
                                               | ((0xc0U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      << 1U)) 
                                                  | ((0x20U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                         << 3U)) 
                                                     | ((0x18U 
                                                         & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                            >> 7U)) 
                                                        | (6U 
                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                              >> 2U)))))))),32);
    bufp->fullBit(oldp+18144,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])));
    bufp->fullBit(oldp+18145,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])));
    bufp->fullIData(oldp+18146,(VL_EXTENDS_II(32,12, 
                                              ((0x800U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 1U)) 
                                               | ((0x400U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      << 2U)) 
                                                  | ((0x300U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                         >> 1U)) 
                                                     | ((0x80U 
                                                         & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                            << 1U)) 
                                                        | ((0x40U 
                                                            & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                               >> 1U)) 
                                                           | ((0x20U 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                  << 3U)) 
                                                              | ((0x10U 
                                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                     >> 7U)) 
                                                                 | (0xeU 
                                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                       >> 2U))))))))))),32);
    bufp->fullIData(oldp+18147,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+18148,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                           << 1U)) 
                                 | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                              >> 7U)) 
                                    | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                             >> 4U))))),32);
    bufp->fullIData(oldp+18149,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+18150,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                           << 4U)) 
                                 | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                              >> 7U)) 
                                    | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                >> 2U))))),32);
    bufp->fullIData(oldp+18151,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+18152,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[3U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+18153,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+18154,(VL_SHIFTL_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+18155,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                           >> 1U)) 
                                 | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                             >> 7U)))),32);
    bufp->fullIData(oldp+18156,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+18157,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                  ? 0xffffffffU : (
                                                   ((0x80000000U 
                                                     == 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]) 
                                                    & (0xffffffffU 
                                                       == 
                                                       vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                                    ? 0x80000000U
                                                    : 
                                                   VL_DIVS_III(32, 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))),32);
    bufp->fullIData(oldp+18158,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                  ? 0xffffffffU : VL_DIV_III(32, 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
    bufp->fullIData(oldp+18159,(VL_EXTENDS_II(32,21, 
                                              ((0x100000U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]) 
                                                  | ((0x800U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                           >> 0x14U))))))),32);
    bufp->fullCData(oldp+18160,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+18161,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+18162,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+18163,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                 * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])),32);
    bufp->fullIData(oldp+18164,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__VdfgTmp_hb1a4827e__0 
                                          * (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U] 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+18165,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__VdfgTmp_hb1a4827e__0 
                                          * (QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+18166,((IData)((((QData)((IData)(
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])) 
                                          * (QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+18167,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                 | VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+18168,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]
                                  : (((0x80000000U 
                                       == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]) 
                                      & (0xffffffffU 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                      ? 0U : VL_MODDIVS_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))),32);
    bufp->fullIData(oldp+18169,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]
                                  : VL_MODDIV_III(32, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
    bufp->fullIData(oldp+18170,(VL_EXTENDS_II(32,12, 
                                              ((0xfe0U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                     >> 7U))))),32);
    bufp->fullIData(oldp+18171,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+18172,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])),6);
    bufp->fullIData(oldp+18173,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                 << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
    bufp->fullCData(oldp+18174,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                 >> 0x1aU)),7);
    bufp->fullCData(oldp+18175,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                          >> 0x14U))),6);
    bufp->fullIData(oldp+18176,(VL_SHIFTL_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+18177,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+18178,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                           VL_EXTENDS_II(32,12, 
                                                         (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                          >> 0x14U)))),32);
    bufp->fullIData(oldp+18179,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                 < VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+18180,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+18181,(VL_SHIFTRS_III(32,32,5, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                               (0x1fU 
                                                & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
    bufp->fullIData(oldp+18182,(VL_SHIFTRS_III(32,32,6, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                               (0x3fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 0x14U)))),32);
    bufp->fullIData(oldp+18183,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                 >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
    bufp->fullIData(oldp+18184,(VL_SHIFTR_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+18185,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                 ^ VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 0x14U)))),32);
    bufp->fullBit(oldp+18186,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+18187,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                          >> 0xfU))),5);
    bufp->fullCData(oldp+18188,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                          >> 0x14U))),5);
    bufp->fullCData(oldp+18189,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                          >> 7U))),5);
    bufp->fullIData(oldp+18190,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+18191,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U])),32);
    bufp->fullBit(oldp+18192,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+18193,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result
                                  : 0U)),32);
    bufp->fullBit(oldp+18194,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+18195,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+18196,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+18197,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                     & VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18198,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+18199,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U] 
                                     + (0xfffff000U 
                                        & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18200,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+18201,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+18202,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+18203,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+18204,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+18205,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+18206,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+18207,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+18208,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+18209,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+18210,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+18211,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+18212,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+18213,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+18214,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+18215,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+18216,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+18217,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+18218,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+18219,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                          >> 2U))),5);
    bufp->fullIData(oldp+18220,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U])),32);
    bufp->fullBit(oldp+18221,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+18222,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                     + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18223,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+18224,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                     + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                  : 0U)),32);
    bufp->fullBit(oldp+18225,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+18226,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                             >> 2U)))),5);
    bufp->fullIData(oldp+18227,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                 + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+18228,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+18229,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                             >> 7U)))),5);
    bufp->fullIData(oldp+18230,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+18231,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+18232,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                 & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+18233,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+18234,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+18235,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+18236,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+18237,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+18238,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+18239,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+18240,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+18241,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+18242,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+18243,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])),32);
    bufp->fullBit(oldp+18244,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+18245,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+18246,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                  : 0U)),32);
    bufp->fullBit(oldp+18247,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+18248,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                  : 0U)),32);
    bufp->fullBit(oldp+18249,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+18250,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+18251,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[4U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+18252,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+18253,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+18254,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+18255,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+18256,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? VL_SHIFTR_III(32,32,32, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[4U], 
                                                  VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                  : 0U)),32);
    bufp->fullIData(oldp+18257,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+18258,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+18259,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+18260,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]
                                  : 0U)),32);
    bufp->fullBit(oldp+18261,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+18262,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+18263,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+18264,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? VL_SHIFTL_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                  : 0U)),32);
    bufp->fullBit(oldp+18265,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+18266,(VL_SHIFTRS_III(32,32,6, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+18267,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+18268,(VL_SHIFTR_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+18269,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+18270,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+18271,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+18272,(VL_SHIFTL_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+18273,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+18274,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+18275,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+18276,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+18277,(VL_SHIFTL_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+18278,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+18279,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+18280,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+18281,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                      ? 0xffffffffU
                                      : (((0x80000000U 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]) 
                                          & (0xffffffffU 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                          ? 0x80000000U
                                          : VL_DIVS_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))
                                  : 0U)),32);
    bufp->fullBit(oldp+18282,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+18283,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                      ? 0xffffffffU
                                      : VL_DIV_III(32, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18284,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+18285,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+18286,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+18287,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+18288,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+18289,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+18290,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+18291,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result))
                                  : 0U)),32);
    bufp->fullIData(oldp+18292,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+18293,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+18294,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+18295,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)
                                  : 0U)),32);
    bufp->fullBit(oldp+18296,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+18297,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+18298,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,16, 
                                                  (0xffffU 
                                                   & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result))
                                  : 0U)),32);
    bufp->fullCData(oldp+18299,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+18300,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+18301,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)
                                  : 0U)),32);
    bufp->fullBit(oldp+18302,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+18303,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? (0xfffff000U & 
                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])
                                  : 0U)),32);
    bufp->fullBit(oldp+18304,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+18305,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+18306,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result
                                  : 0U)),32);
    bufp->fullCData(oldp+18307,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+18308,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+18309,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                     * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                  : 0U)),32);
    bufp->fullBit(oldp+18310,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+18311,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__VdfgTmp_hb1a4827e__0 
                                              * (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+18312,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+18313,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__VdfgTmp_hb1a4827e__0 
                                              * (QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+18314,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+18315,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? (IData)((((QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])) 
                                              * (QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+18316,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+18317,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+18318,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+18319,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                     | VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18320,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+18321,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                      ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]
                                      : (((0x80000000U 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]) 
                                          & (0xffffffffU 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                          ? 0U : VL_MODDIVS_III(32, 
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))
                                  : 0U)),32);
    bufp->fullBit(oldp+18322,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+18323,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                      ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]
                                      : VL_MODDIV_III(32, 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18324,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+18325,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+18326,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+18327,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+18328,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+18329,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+18330,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+18331,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+18332,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                     << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18333,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+18334,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? VL_SHIFTL_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18335,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+18336,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_blt__DOT__cond)
                                  : 0U)),32);
    bufp->fullBit(oldp+18337,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+18338,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? VL_LTS_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                               VL_EXTENDS_II(32,12, 
                                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                              >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18339,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+18340,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                     < VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18341,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+18342,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_bltu__DOT__cond)
                                  : 0U)),32);
    bufp->fullBit(oldp+18343,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+18344,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? VL_SHIFTRS_III(32,32,5, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                   (0x1fU 
                                                    & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18345,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+18346,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? VL_SHIFTRS_III(32,32,6, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                   (0x3fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18347,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+18348,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                     >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18349,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+18350,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? VL_SHIFTR_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18351,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+18352,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+18353,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+18354,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+18355,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+18356,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+18357,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+18358,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+18359,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                     ^ VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullCData(oldp+18360,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                 >> 0x19U)),7);
    bufp->fullCData(oldp+18361,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                       >> 0xcU))),3);
    bufp->fullCData(oldp+18362,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])),7);
    bufp->fullIData(oldp+18363,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                 + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])),32);
    bufp->fullIData(oldp+18364,(VL_EXTENDS_II(32,12, 
                                              (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                               >> 0x14U))),32);
    bufp->fullIData(oldp+18365,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+18366,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                 & VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+18367,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])),32);
    bufp->fullIData(oldp+18368,(VL_EXTENDS_II(32,13, 
                                              ((0x1000U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                           >> 7U))))))),32);
    bufp->fullBit(oldp+18369,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                               == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
    bufp->fullBit(oldp+18370,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
    bufp->fullBit(oldp+18371,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                               >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
    bufp->fullBit(oldp+18372,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+18373,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+18374,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                               != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
    bufp->fullIData(oldp+18375,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)),32);
    bufp->fullCData(oldp+18376,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 0xcU))),4);
    bufp->fullCData(oldp+18377,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])),2);
    bufp->fullIData(oldp+18378,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+18379,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                       >> 0xdU))),3);
    bufp->fullIData(oldp+18380,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                 + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+18381,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+18382,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                 + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+18383,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+18384,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                          >> 0xaU))),6);
    bufp->fullCData(oldp+18385,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                       >> 5U))),2);
    bufp->fullCData(oldp+18386,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                       >> 0xaU))),2);
    bufp->fullIData(oldp+18387,(VL_EXTENDS_II(32,9, 
                                              ((0x100U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 4U)) 
                                               | ((0xc0U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      << 1U)) 
                                                  | ((0x20U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                         << 3U)) 
                                                     | ((0x18U 
                                                         & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                            >> 7U)) 
                                                        | (6U 
                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                              >> 2U)))))))),32);
    bufp->fullBit(oldp+18388,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])));
    bufp->fullBit(oldp+18389,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])));
    bufp->fullIData(oldp+18390,(VL_EXTENDS_II(32,12, 
                                              ((0x800U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 1U)) 
                                               | ((0x400U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      << 2U)) 
                                                  | ((0x300U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                         >> 1U)) 
                                                     | ((0x80U 
                                                         & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                            << 1U)) 
                                                        | ((0x40U 
                                                            & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                               >> 1U)) 
                                                           | ((0x20U 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                  << 3U)) 
                                                              | ((0x10U 
                                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                     >> 7U)) 
                                                                 | (0xeU 
                                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                       >> 2U))))))))))),32);
    bufp->fullIData(oldp+18391,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+18392,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                           << 1U)) 
                                 | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                              >> 7U)) 
                                    | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                             >> 4U))))),32);
    bufp->fullIData(oldp+18393,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+18394,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                           << 4U)) 
                                 | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                              >> 7U)) 
                                    | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                >> 2U))))),32);
    bufp->fullIData(oldp+18395,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+18396,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[4U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+18397,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+18398,(VL_SHIFTL_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+18399,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                           >> 1U)) 
                                 | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                             >> 7U)))),32);
    bufp->fullIData(oldp+18400,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+18401,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                  ? 0xffffffffU : (
                                                   ((0x80000000U 
                                                     == 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]) 
                                                    & (0xffffffffU 
                                                       == 
                                                       vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                                    ? 0x80000000U
                                                    : 
                                                   VL_DIVS_III(32, 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))),32);
    bufp->fullIData(oldp+18402,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                  ? 0xffffffffU : VL_DIV_III(32, 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
    bufp->fullIData(oldp+18403,(VL_EXTENDS_II(32,21, 
                                              ((0x100000U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]) 
                                                  | ((0x800U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                           >> 0x14U))))))),32);
    bufp->fullCData(oldp+18404,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+18405,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+18406,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+18407,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                 * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])),32);
    bufp->fullIData(oldp+18408,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__VdfgTmp_hb1a4827e__0 
                                          * (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U] 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+18409,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__VdfgTmp_hb1a4827e__0 
                                          * (QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+18410,((IData)((((QData)((IData)(
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])) 
                                          * (QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+18411,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                 | VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+18412,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]
                                  : (((0x80000000U 
                                       == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]) 
                                      & (0xffffffffU 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                      ? 0U : VL_MODDIVS_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))),32);
    bufp->fullIData(oldp+18413,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]
                                  : VL_MODDIV_III(32, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
    bufp->fullIData(oldp+18414,(VL_EXTENDS_II(32,12, 
                                              ((0xfe0U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                     >> 7U))))),32);
    bufp->fullIData(oldp+18415,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+18416,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])),6);
    bufp->fullIData(oldp+18417,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                 << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
    bufp->fullCData(oldp+18418,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                 >> 0x1aU)),7);
    bufp->fullCData(oldp+18419,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                          >> 0x14U))),6);
    bufp->fullIData(oldp+18420,(VL_SHIFTL_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+18421,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+18422,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                           VL_EXTENDS_II(32,12, 
                                                         (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                          >> 0x14U)))),32);
    bufp->fullIData(oldp+18423,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                 < VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+18424,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+18425,(VL_SHIFTRS_III(32,32,5, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                               (0x1fU 
                                                & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
    bufp->fullIData(oldp+18426,(VL_SHIFTRS_III(32,32,6, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                               (0x3fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 0x14U)))),32);
    bufp->fullIData(oldp+18427,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                 >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
    bufp->fullIData(oldp+18428,(VL_SHIFTR_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+18429,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                 ^ VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 0x14U)))),32);
    bufp->fullBit(oldp+18430,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+18431,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                          >> 0xfU))),5);
    bufp->fullCData(oldp+18432,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                          >> 0x14U))),5);
    bufp->fullCData(oldp+18433,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                          >> 7U))),5);
    bufp->fullIData(oldp+18434,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+18435,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U])),32);
    bufp->fullBit(oldp+18436,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+18437,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result
                                  : 0U)),32);
    bufp->fullBit(oldp+18438,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+18439,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+18440,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+18441,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                     & VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18442,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+18443,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U] 
                                     + (0xfffff000U 
                                        & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18444,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+18445,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+18446,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+18447,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+18448,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+18449,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+18450,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+18451,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+18452,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+18453,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+18454,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+18455,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+18456,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+18457,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+18458,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+18459,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+18460,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+18461,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+18462,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+18463,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                          >> 2U))),5);
    bufp->fullIData(oldp+18464,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U])),32);
    bufp->fullBit(oldp+18465,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+18466,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                     + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18467,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+18468,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                     + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                  : 0U)),32);
    bufp->fullBit(oldp+18469,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+18470,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                             >> 2U)))),5);
    bufp->fullIData(oldp+18471,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                 + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+18472,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+18473,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                             >> 7U)))),5);
    bufp->fullIData(oldp+18474,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+18475,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+18476,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                 & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+18477,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+18478,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+18479,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+18480,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+18481,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+18482,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+18483,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+18484,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+18485,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+18486,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+18487,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])),32);
    bufp->fullBit(oldp+18488,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+18489,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+18490,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                  : 0U)),32);
    bufp->fullBit(oldp+18491,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+18492,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                  : 0U)),32);
    bufp->fullBit(oldp+18493,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+18494,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+18495,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[5U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+18496,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+18497,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+18498,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+18499,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+18500,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? VL_SHIFTR_III(32,32,32, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[5U], 
                                                  VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                  : 0U)),32);
    bufp->fullIData(oldp+18501,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+18502,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+18503,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+18504,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]
                                  : 0U)),32);
    bufp->fullBit(oldp+18505,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+18506,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+18507,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+18508,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? VL_SHIFTL_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                  : 0U)),32);
    bufp->fullBit(oldp+18509,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+18510,(VL_SHIFTRS_III(32,32,6, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+18511,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+18512,(VL_SHIFTR_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+18513,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+18514,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+18515,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+18516,(VL_SHIFTL_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+18517,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+18518,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+18519,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+18520,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+18521,(VL_SHIFTL_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+18522,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+18523,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+18524,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+18525,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                      ? 0xffffffffU
                                      : (((0x80000000U 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]) 
                                          & (0xffffffffU 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                          ? 0x80000000U
                                          : VL_DIVS_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))
                                  : 0U)),32);
    bufp->fullBit(oldp+18526,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+18527,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                      ? 0xffffffffU
                                      : VL_DIV_III(32, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18528,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+18529,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+18530,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+18531,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+18532,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+18533,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+18534,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+18535,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result))
                                  : 0U)),32);
    bufp->fullIData(oldp+18536,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+18537,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+18538,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+18539,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)
                                  : 0U)),32);
    bufp->fullBit(oldp+18540,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+18541,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+18542,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,16, 
                                                  (0xffffU 
                                                   & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result))
                                  : 0U)),32);
    bufp->fullCData(oldp+18543,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+18544,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+18545,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)
                                  : 0U)),32);
    bufp->fullBit(oldp+18546,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+18547,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? (0xfffff000U & 
                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])
                                  : 0U)),32);
    bufp->fullBit(oldp+18548,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+18549,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+18550,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result
                                  : 0U)),32);
    bufp->fullCData(oldp+18551,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+18552,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+18553,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                     * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                  : 0U)),32);
    bufp->fullBit(oldp+18554,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+18555,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__VdfgTmp_hb1a4827e__0 
                                              * (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+18556,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+18557,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__VdfgTmp_hb1a4827e__0 
                                              * (QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+18558,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+18559,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? (IData)((((QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])) 
                                              * (QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+18560,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+18561,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+18562,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+18563,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                     | VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18564,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+18565,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                      ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]
                                      : (((0x80000000U 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]) 
                                          & (0xffffffffU 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                          ? 0U : VL_MODDIVS_III(32, 
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))
                                  : 0U)),32);
    bufp->fullBit(oldp+18566,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+18567,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                      ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]
                                      : VL_MODDIV_III(32, 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18568,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+18569,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+18570,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+18571,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+18572,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+18573,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+18574,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+18575,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+18576,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                     << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18577,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+18578,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? VL_SHIFTL_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18579,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+18580,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_blt__DOT__cond)
                                  : 0U)),32);
    bufp->fullBit(oldp+18581,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+18582,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? VL_LTS_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                               VL_EXTENDS_II(32,12, 
                                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                              >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18583,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+18584,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                     < VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18585,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+18586,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_bltu__DOT__cond)
                                  : 0U)),32);
    bufp->fullBit(oldp+18587,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+18588,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? VL_SHIFTRS_III(32,32,5, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                   (0x1fU 
                                                    & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18589,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+18590,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? VL_SHIFTRS_III(32,32,6, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                   (0x3fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18591,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+18592,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                     >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18593,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+18594,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? VL_SHIFTR_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18595,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+18596,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+18597,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+18598,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+18599,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+18600,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+18601,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+18602,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+18603,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                     ^ VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullCData(oldp+18604,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                 >> 0x19U)),7);
    bufp->fullCData(oldp+18605,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                       >> 0xcU))),3);
    bufp->fullCData(oldp+18606,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])),7);
    bufp->fullIData(oldp+18607,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                 + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])),32);
    bufp->fullIData(oldp+18608,(VL_EXTENDS_II(32,12, 
                                              (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                               >> 0x14U))),32);
    bufp->fullIData(oldp+18609,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+18610,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                 & VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+18611,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])),32);
    bufp->fullIData(oldp+18612,(VL_EXTENDS_II(32,13, 
                                              ((0x1000U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                           >> 7U))))))),32);
    bufp->fullBit(oldp+18613,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                               == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
    bufp->fullBit(oldp+18614,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
    bufp->fullBit(oldp+18615,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                               >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
    bufp->fullBit(oldp+18616,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+18617,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+18618,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                               != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
    bufp->fullIData(oldp+18619,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)),32);
    bufp->fullCData(oldp+18620,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 0xcU))),4);
    bufp->fullCData(oldp+18621,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])),2);
    bufp->fullIData(oldp+18622,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+18623,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                       >> 0xdU))),3);
    bufp->fullIData(oldp+18624,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                 + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+18625,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+18626,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                 + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+18627,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+18628,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                          >> 0xaU))),6);
    bufp->fullCData(oldp+18629,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                       >> 5U))),2);
    bufp->fullCData(oldp+18630,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                       >> 0xaU))),2);
    bufp->fullIData(oldp+18631,(VL_EXTENDS_II(32,9, 
                                              ((0x100U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 4U)) 
                                               | ((0xc0U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      << 1U)) 
                                                  | ((0x20U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                         << 3U)) 
                                                     | ((0x18U 
                                                         & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                            >> 7U)) 
                                                        | (6U 
                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                              >> 2U)))))))),32);
    bufp->fullBit(oldp+18632,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])));
    bufp->fullBit(oldp+18633,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])));
    bufp->fullIData(oldp+18634,(VL_EXTENDS_II(32,12, 
                                              ((0x800U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 1U)) 
                                               | ((0x400U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      << 2U)) 
                                                  | ((0x300U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                         >> 1U)) 
                                                     | ((0x80U 
                                                         & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                            << 1U)) 
                                                        | ((0x40U 
                                                            & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                               >> 1U)) 
                                                           | ((0x20U 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                  << 3U)) 
                                                              | ((0x10U 
                                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                     >> 7U)) 
                                                                 | (0xeU 
                                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                       >> 2U))))))))))),32);
    bufp->fullIData(oldp+18635,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+18636,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                           << 1U)) 
                                 | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                              >> 7U)) 
                                    | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                             >> 4U))))),32);
    bufp->fullIData(oldp+18637,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+18638,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                           << 4U)) 
                                 | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                              >> 7U)) 
                                    | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                >> 2U))))),32);
    bufp->fullIData(oldp+18639,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+18640,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[5U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+18641,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+18642,(VL_SHIFTL_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+18643,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                           >> 1U)) 
                                 | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                             >> 7U)))),32);
    bufp->fullIData(oldp+18644,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+18645,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                  ? 0xffffffffU : (
                                                   ((0x80000000U 
                                                     == 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]) 
                                                    & (0xffffffffU 
                                                       == 
                                                       vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                                    ? 0x80000000U
                                                    : 
                                                   VL_DIVS_III(32, 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))),32);
    bufp->fullIData(oldp+18646,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                  ? 0xffffffffU : VL_DIV_III(32, 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
    bufp->fullIData(oldp+18647,(VL_EXTENDS_II(32,21, 
                                              ((0x100000U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]) 
                                                  | ((0x800U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                           >> 0x14U))))))),32);
    bufp->fullCData(oldp+18648,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+18649,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+18650,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+18651,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                 * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])),32);
    bufp->fullIData(oldp+18652,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__VdfgTmp_hb1a4827e__0 
                                          * (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U] 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+18653,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__VdfgTmp_hb1a4827e__0 
                                          * (QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+18654,((IData)((((QData)((IData)(
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])) 
                                          * (QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+18655,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                 | VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+18656,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]
                                  : (((0x80000000U 
                                       == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]) 
                                      & (0xffffffffU 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                      ? 0U : VL_MODDIVS_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))),32);
    bufp->fullIData(oldp+18657,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]
                                  : VL_MODDIV_III(32, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
    bufp->fullIData(oldp+18658,(VL_EXTENDS_II(32,12, 
                                              ((0xfe0U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                     >> 7U))))),32);
    bufp->fullIData(oldp+18659,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+18660,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])),6);
    bufp->fullIData(oldp+18661,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                 << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
    bufp->fullCData(oldp+18662,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                 >> 0x1aU)),7);
    bufp->fullCData(oldp+18663,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                          >> 0x14U))),6);
    bufp->fullIData(oldp+18664,(VL_SHIFTL_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+18665,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+18666,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                           VL_EXTENDS_II(32,12, 
                                                         (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                          >> 0x14U)))),32);
    bufp->fullIData(oldp+18667,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                 < VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+18668,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+18669,(VL_SHIFTRS_III(32,32,5, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                               (0x1fU 
                                                & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
    bufp->fullIData(oldp+18670,(VL_SHIFTRS_III(32,32,6, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                               (0x3fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 0x14U)))),32);
    bufp->fullIData(oldp+18671,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                 >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
    bufp->fullIData(oldp+18672,(VL_SHIFTR_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+18673,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                 ^ VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 0x14U)))),32);
    bufp->fullBit(oldp+18674,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+18675,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                          >> 0xfU))),5);
    bufp->fullCData(oldp+18676,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                          >> 0x14U))),5);
    bufp->fullCData(oldp+18677,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                          >> 7U))),5);
    bufp->fullIData(oldp+18678,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+18679,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[6U])),32);
    bufp->fullBit(oldp+18680,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+18681,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result
                                  : 0U)),32);
    bufp->fullBit(oldp+18682,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+18683,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+18684,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+18685,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                     & VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18686,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+18687,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[6U] 
                                     + (0xfffff000U 
                                        & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18688,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+18689,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+18690,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+18691,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+18692,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+18693,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+18694,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+18695,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+18696,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+18697,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+18698,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+18699,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+18700,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+18701,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+18702,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+18703,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+18704,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+18705,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+18706,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+18707,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                          >> 2U))),5);
    bufp->fullIData(oldp+18708,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[6U])),32);
    bufp->fullBit(oldp+18709,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+18710,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                     + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18711,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+18712,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                     + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                  : 0U)),32);
    bufp->fullBit(oldp+18713,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+18714,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                             >> 2U)))),5);
    bufp->fullIData(oldp+18715,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+18716,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+18717,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                             >> 7U)))),5);
    bufp->fullIData(oldp+18718,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+18719,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+18720,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+18721,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+18722,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+18723,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+18724,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+18725,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+18726,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+18727,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+18728,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+18729,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+18730,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+18731,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])),32);
    bufp->fullBit(oldp+18732,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+18733,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+18734,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                  : 0U)),32);
    bufp->fullBit(oldp+18735,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+18736,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                  : 0U)),32);
    bufp->fullBit(oldp+18737,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+18738,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+18739,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[6U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+18740,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+18741,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+18742,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+18743,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+18744,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? VL_SHIFTR_III(32,32,32, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[6U], 
                                                  VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                  : 0U)),32);
    bufp->fullIData(oldp+18745,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+18746,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+18747,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+18748,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]
                                  : 0U)),32);
    bufp->fullBit(oldp+18749,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+18750,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+18751,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+18752,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? VL_SHIFTL_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                  : 0U)),32);
    bufp->fullBit(oldp+18753,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+18754,(VL_SHIFTRS_III(32,32,6, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+18755,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+18756,(VL_SHIFTR_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+18757,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+18758,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+18759,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+18760,(VL_SHIFTL_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+18761,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+18762,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+18763,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+18764,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+18765,(VL_SHIFTL_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+18766,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+18767,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+18768,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+18769,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                      ? 0xffffffffU
                                      : (((0x80000000U 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]) 
                                          & (0xffffffffU 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                          ? 0x80000000U
                                          : VL_DIVS_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])))
                                  : 0U)),32);
    bufp->fullBit(oldp+18770,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+18771,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                      ? 0xffffffffU
                                      : VL_DIV_III(32, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18772,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+18773,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+18774,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+18775,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+18776,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+18777,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+18778,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+18779,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result))
                                  : 0U)),32);
    bufp->fullIData(oldp+18780,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+18781,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+18782,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+18783,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)
                                  : 0U)),32);
    bufp->fullBit(oldp+18784,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+18785,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+18786,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,16, 
                                                  (0xffffU 
                                                   & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result))
                                  : 0U)),32);
    bufp->fullCData(oldp+18787,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+18788,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+18789,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)
                                  : 0U)),32);
    bufp->fullBit(oldp+18790,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+18791,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? (0xfffff000U & 
                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])
                                  : 0U)),32);
    bufp->fullBit(oldp+18792,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+18793,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+18794,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result
                                  : 0U)),32);
    bufp->fullCData(oldp+18795,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+18796,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+18797,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                     * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                  : 0U)),32);
    bufp->fullBit(oldp+18798,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+18799,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__VdfgTmp_hb1a4827e__0 
                                              * (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+18800,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+18801,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__VdfgTmp_hb1a4827e__0 
                                              * (QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+18802,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+18803,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? (IData)((((QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])) 
                                              * (QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+18804,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+18805,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+18806,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+18807,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                     | VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18808,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+18809,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                      ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]
                                      : (((0x80000000U 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]) 
                                          & (0xffffffffU 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                          ? 0U : VL_MODDIVS_III(32, 
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])))
                                  : 0U)),32);
    bufp->fullBit(oldp+18810,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+18811,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                      ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]
                                      : VL_MODDIV_III(32, 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18812,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+18813,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+18814,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+18815,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+18816,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+18817,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+18818,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+18819,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+18820,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                     << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18821,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+18822,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? VL_SHIFTL_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18823,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+18824,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_blt__DOT__cond)
                                  : 0U)),32);
    bufp->fullBit(oldp+18825,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+18826,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? VL_LTS_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                               VL_EXTENDS_II(32,12, 
                                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                              >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18827,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+18828,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                     < VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18829,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+18830,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_bltu__DOT__cond)
                                  : 0U)),32);
    bufp->fullBit(oldp+18831,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+18832,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? VL_SHIFTRS_III(32,32,5, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                   (0x1fU 
                                                    & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18833,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+18834,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? VL_SHIFTRS_III(32,32,6, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                   (0x3fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                       >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18835,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+18836,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                     >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                  : 0U)),32);
}
