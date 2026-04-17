// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


void Vtop_tb___024root__trace_chg_0_sub_4(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0_sub_4\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 15806);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+0,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x26U][0xfU] << 0x13U) 
                                | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x26U][0xeU] >> 0xdU))),32);
        bufp->chgCData(oldp+1,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x26U][0xeU] 
                                        >> 9U))),4);
        bufp->chgCData(oldp+2,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x26U][0xeU] 
                                         >> 2U))),7);
        bufp->chgBit(oldp+3,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][0xeU] >> 1U))));
        bufp->chgIData(oldp+4,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x26U][0xeU] << 0x1fU) 
                                | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x26U][0xdU] >> 1U))),32);
        bufp->chgCData(oldp+5,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x26U][0xdU] 
                                       << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                 [0x26U][0xcU] 
                                                 >> 0x1eU)))),3);
        bufp->chgIData(oldp+6,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x26U][0xcU] << 2U) 
                                | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x26U][0xbU] >> 0x1eU))),32);
        bufp->chgBit(oldp+7,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][0xbU] >> 0x1dU))));
        bufp->chgBit(oldp+8,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][0xbU] >> 0x1cU))));
        bufp->chgBit(oldp+9,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][0xbU] >> 0x1bU))));
        bufp->chgCData(oldp+10,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x26U][0xbU] 
                                          >> 0x16U))),5);
        bufp->chgCData(oldp+11,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x26U][0xbU] 
                                          >> 0xfU))),7);
        bufp->chgCData(oldp+12,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x26U][0xbU] 
                                          >> 8U))),7);
        bufp->chgIData(oldp+13,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][0xaU] >> 8U))),32);
        bufp->chgIData(oldp+14,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][9U] >> 8U))),32);
        bufp->chgIData(oldp+15,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][8U] >> 8U))),32);
        bufp->chgBit(oldp+16,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x26U][8U] >> 7U))));
        bufp->chgBit(oldp+17,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x26U][8U] >> 6U))));
        bufp->chgCData(oldp+18,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x26U][8U] 
                                          >> 1U))),5);
        bufp->chgCData(oldp+19,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x26U][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x26U][7U] 
                                           >> 0x1cU)))),5);
        bufp->chgIData(oldp+20,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+21,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+22,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x26U][5U] 
                                          >> 0x16U))),6);
        bufp->chgIData(oldp+23,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+24,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+25,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x26U][3U] 
                                         >> 0x12U))),4);
        bufp->chgCData(oldp+26,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x26U][3U] 
                                         >> 0xeU))),4);
        bufp->chgIData(oldp+27,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+28,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+29,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x26U][1U] >> 0xdU))));
        bufp->chgBit(oldp+30,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x26U][1U] >> 0xcU))));
        bufp->chgBit(oldp+31,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x26U][1U] >> 0xbU))));
        bufp->chgBit(oldp+32,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x26U][1U] >> 0xaU))));
        bufp->chgIData(oldp+33,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x26U][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x26U][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+34,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x26U][0U] >> 9U))));
        bufp->chgCData(oldp+35,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x26U][0U] 
                                       >> 6U))),3);
        bufp->chgCData(oldp+36,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x26U][0U])),6);
        bufp->chgBit(oldp+37,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][0x11U] 
                                     >> 0x19U))));
        bufp->chgBit(oldp+38,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][0x11U] 
                                     >> 0x18U))));
        bufp->chgBit(oldp+39,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][0x11U] 
                                     >> 0x17U))));
        bufp->chgBit(oldp+40,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][0x11U] 
                                     >> 0x16U))));
        bufp->chgBit(oldp+41,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][0x11U] 
                                     >> 0x15U))));
        bufp->chgCData(oldp+42,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x27U][0x11U] 
                                          >> 0xeU))),7);
        bufp->chgBit(oldp+43,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][0x11U] 
                                     >> 0xdU))));
        bufp->chgIData(oldp+44,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][0x10U] 
                                    >> 0xdU))),32);
        bufp->chgIData(oldp+45,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][0xfU] >> 0xdU))),32);
        bufp->chgIData(oldp+46,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][0xeU] >> 0xdU))),32);
        bufp->chgCData(oldp+47,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x27U][0xeU] 
                                         >> 9U))),4);
        bufp->chgCData(oldp+48,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x27U][0xeU] 
                                          >> 2U))),7);
        bufp->chgBit(oldp+49,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][0xeU] 
                                     >> 1U))));
        bufp->chgIData(oldp+50,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][0xdU] >> 1U))),32);
        bufp->chgCData(oldp+51,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x27U][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x27U][0xcU] 
                                                  >> 0x1eU)))),3);
        bufp->chgIData(oldp+52,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][0xbU] >> 0x1eU))),32);
        bufp->chgBit(oldp+53,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][0xbU] 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+54,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][0xbU] 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+55,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][0xbU] 
                                     >> 0x1bU))));
        bufp->chgCData(oldp+56,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x27U][0xbU] 
                                          >> 0x16U))),5);
        bufp->chgCData(oldp+57,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x27U][0xbU] 
                                          >> 0xfU))),7);
        bufp->chgCData(oldp+58,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x27U][0xbU] 
                                          >> 8U))),7);
        bufp->chgIData(oldp+59,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][0xbU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][0xaU] >> 8U))),32);
        bufp->chgIData(oldp+60,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][0xaU] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][9U] >> 8U))),32);
        bufp->chgIData(oldp+61,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][9U] << 0x18U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][8U] >> 8U))),32);
        bufp->chgBit(oldp+62,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][8U] >> 7U))));
        bufp->chgBit(oldp+63,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][8U] >> 6U))));
        bufp->chgCData(oldp+64,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x27U][8U] 
                                          >> 1U))),5);
        bufp->chgCData(oldp+65,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x27U][8U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x27U][7U] 
                                           >> 0x1cU)))),5);
        bufp->chgIData(oldp+66,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][7U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+67,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][6U] << 4U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+68,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x27U][5U] 
                                          >> 0x16U))),6);
        bufp->chgIData(oldp+69,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][5U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+70,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][4U] << 0xaU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+71,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x27U][3U] 
                                         >> 0x12U))),4);
        bufp->chgCData(oldp+72,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x27U][3U] 
                                         >> 0xeU))),4);
        bufp->chgIData(oldp+73,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][3U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+74,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][2U] << 0x12U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+75,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][1U] >> 0xdU))));
        bufp->chgBit(oldp+76,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][1U] >> 0xcU))));
        bufp->chgBit(oldp+77,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][1U] >> 0xbU))));
        bufp->chgBit(oldp+78,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][1U] >> 0xaU))));
        bufp->chgIData(oldp+79,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x27U][1U] << 0x16U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x27U][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+80,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x27U][0U] >> 9U))));
        bufp->chgCData(oldp+81,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x27U][0U] 
                                       >> 6U))),3);
        bufp->chgCData(oldp+82,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                 [0x27U][0U])),6);
        bufp->chgBit(oldp+83,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][0x11U] 
                                     >> 0x19U))));
        bufp->chgBit(oldp+84,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][0x11U] 
                                     >> 0x18U))));
        bufp->chgBit(oldp+85,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][0x11U] 
                                     >> 0x17U))));
        bufp->chgBit(oldp+86,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][0x11U] 
                                     >> 0x16U))));
        bufp->chgBit(oldp+87,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][0x11U] 
                                     >> 0x15U))));
        bufp->chgCData(oldp+88,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x28U][0x11U] 
                                          >> 0xeU))),7);
        bufp->chgBit(oldp+89,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][0x11U] 
                                     >> 0xdU))));
        bufp->chgIData(oldp+90,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x28U][0x11U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x28U][0x10U] 
                                    >> 0xdU))),32);
        bufp->chgIData(oldp+91,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x28U][0x10U] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x28U][0xfU] >> 0xdU))),32);
        bufp->chgIData(oldp+92,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x28U][0xfU] << 0x13U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x28U][0xeU] >> 0xdU))),32);
        bufp->chgCData(oldp+93,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x28U][0xeU] 
                                         >> 9U))),4);
        bufp->chgCData(oldp+94,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x28U][0xeU] 
                                          >> 2U))),7);
        bufp->chgBit(oldp+95,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][0xeU] 
                                     >> 1U))));
        bufp->chgIData(oldp+96,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x28U][0xeU] << 0x1fU) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x28U][0xdU] >> 1U))),32);
        bufp->chgCData(oldp+97,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x28U][0xdU] 
                                        << 2U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                  [0x28U][0xcU] 
                                                  >> 0x1eU)))),3);
        bufp->chgIData(oldp+98,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x28U][0xcU] << 2U) 
                                 | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x28U][0xbU] >> 0x1eU))),32);
        bufp->chgBit(oldp+99,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][0xbU] 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+100,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x28U][0xbU] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+101,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x28U][0xbU] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+102,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x28U][0xbU] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+103,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x28U][0xbU] 
                                           >> 0xfU))),7);
        bufp->chgCData(oldp+104,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x28U][0xbU] 
                                           >> 8U))),7);
        bufp->chgIData(oldp+105,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x28U][0xbU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][0xaU] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+106,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x28U][0xaU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][9U] >> 8U))),32);
        bufp->chgIData(oldp+107,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x28U][9U] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][8U] >> 8U))),32);
        bufp->chgBit(oldp+108,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x28U][8U] >> 7U))));
        bufp->chgBit(oldp+109,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x28U][8U] >> 6U))));
        bufp->chgCData(oldp+110,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x28U][8U] 
                                           >> 1U))),5);
        bufp->chgCData(oldp+111,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x28U][8U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                              [0x28U][7U] 
                                              >> 0x1cU)))),5);
        bufp->chgIData(oldp+112,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x28U][7U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+113,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x28U][6U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+114,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x28U][5U] 
                                           >> 0x16U))),6);
        bufp->chgIData(oldp+115,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x28U][5U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+116,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x28U][4U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+117,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x28U][3U] 
                                          >> 0x12U))),4);
        bufp->chgCData(oldp+118,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x28U][3U] 
                                          >> 0xeU))),4);
        bufp->chgIData(oldp+119,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x28U][3U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+120,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x28U][2U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+121,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x28U][1U] >> 0xdU))));
        bufp->chgBit(oldp+122,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x28U][1U] >> 0xcU))));
        bufp->chgBit(oldp+123,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x28U][1U] >> 0xbU))));
        bufp->chgBit(oldp+124,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x28U][1U] >> 0xaU))));
        bufp->chgIData(oldp+125,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x28U][1U] << 0x16U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x28U][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+126,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x28U][0U] >> 9U))));
        bufp->chgCData(oldp+127,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x28U][0U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+128,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x28U][0U])),6);
        bufp->chgBit(oldp+129,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x29U][0x11U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+130,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x29U][0x11U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+131,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x29U][0x11U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+132,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x29U][0x11U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+133,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x29U][0x11U] 
                                      >> 0x15U))));
        bufp->chgCData(oldp+134,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x29U][0x11U] 
                                           >> 0xeU))),7);
        bufp->chgBit(oldp+135,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x29U][0x11U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+136,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x29U][0x11U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][0x10U] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+137,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x29U][0x10U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][0xfU] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+138,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x29U][0xfU] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][0xeU] 
                                     >> 0xdU))),32);
        bufp->chgCData(oldp+139,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x29U][0xeU] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+140,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x29U][0xeU] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+141,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x29U][0xeU] 
                                      >> 1U))));
        bufp->chgIData(oldp+142,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x29U][0xeU] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][0xdU] 
                                     >> 1U))),32);
        bufp->chgCData(oldp+143,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x29U][0xdU] 
                                         << 2U) | (
                                                   vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                   [0x29U][0xcU] 
                                                   >> 0x1eU)))),3);
        bufp->chgIData(oldp+144,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x29U][0xcU] << 2U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][0xbU] 
                                     >> 0x1eU))),32);
        bufp->chgBit(oldp+145,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x29U][0xbU] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+146,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x29U][0xbU] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+147,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x29U][0xbU] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+148,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x29U][0xbU] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+149,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x29U][0xbU] 
                                           >> 0xfU))),7);
        bufp->chgCData(oldp+150,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x29U][0xbU] 
                                           >> 8U))),7);
        bufp->chgIData(oldp+151,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x29U][0xbU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][0xaU] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+152,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x29U][0xaU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][9U] >> 8U))),32);
        bufp->chgIData(oldp+153,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x29U][9U] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][8U] >> 8U))),32);
        bufp->chgBit(oldp+154,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x29U][8U] >> 7U))));
        bufp->chgBit(oldp+155,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x29U][8U] >> 6U))));
        bufp->chgCData(oldp+156,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x29U][8U] 
                                           >> 1U))),5);
        bufp->chgCData(oldp+157,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x29U][8U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                              [0x29U][7U] 
                                              >> 0x1cU)))),5);
        bufp->chgIData(oldp+158,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x29U][7U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+159,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x29U][6U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+160,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x29U][5U] 
                                           >> 0x16U))),6);
        bufp->chgIData(oldp+161,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x29U][5U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+162,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x29U][4U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+163,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x29U][3U] 
                                          >> 0x12U))),4);
        bufp->chgCData(oldp+164,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x29U][3U] 
                                          >> 0xeU))),4);
        bufp->chgIData(oldp+165,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x29U][3U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+166,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x29U][2U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+167,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x29U][1U] >> 0xdU))));
        bufp->chgBit(oldp+168,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x29U][1U] >> 0xcU))));
        bufp->chgBit(oldp+169,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x29U][1U] >> 0xbU))));
        bufp->chgBit(oldp+170,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x29U][1U] >> 0xaU))));
        bufp->chgIData(oldp+171,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x29U][1U] << 0x16U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x29U][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+172,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x29U][0U] >> 9U))));
        bufp->chgCData(oldp+173,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x29U][0U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+174,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x29U][0U])),6);
        bufp->chgBit(oldp+175,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2aU][0x11U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+176,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2aU][0x11U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+177,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2aU][0x11U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+178,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2aU][0x11U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+179,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2aU][0x11U] 
                                      >> 0x15U))));
        bufp->chgCData(oldp+180,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2aU][0x11U] 
                                           >> 0xeU))),7);
        bufp->chgBit(oldp+181,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2aU][0x11U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+182,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2aU][0x11U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][0x10U] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+183,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2aU][0x10U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][0xfU] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+184,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2aU][0xfU] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][0xeU] 
                                     >> 0xdU))),32);
        bufp->chgCData(oldp+185,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2aU][0xeU] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+186,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2aU][0xeU] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+187,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2aU][0xeU] 
                                      >> 1U))));
        bufp->chgIData(oldp+188,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2aU][0xeU] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][0xdU] 
                                     >> 1U))),32);
        bufp->chgCData(oldp+189,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2aU][0xdU] 
                                         << 2U) | (
                                                   vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                   [0x2aU][0xcU] 
                                                   >> 0x1eU)))),3);
        bufp->chgIData(oldp+190,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2aU][0xcU] << 2U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][0xbU] 
                                     >> 0x1eU))),32);
        bufp->chgBit(oldp+191,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2aU][0xbU] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+192,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2aU][0xbU] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+193,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2aU][0xbU] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+194,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2aU][0xbU] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+195,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2aU][0xbU] 
                                           >> 0xfU))),7);
        bufp->chgCData(oldp+196,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2aU][0xbU] 
                                           >> 8U))),7);
        bufp->chgIData(oldp+197,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2aU][0xbU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][0xaU] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+198,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2aU][0xaU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][9U] >> 8U))),32);
        bufp->chgIData(oldp+199,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2aU][9U] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][8U] >> 8U))),32);
        bufp->chgBit(oldp+200,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2aU][8U] >> 7U))));
        bufp->chgBit(oldp+201,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2aU][8U] >> 6U))));
        bufp->chgCData(oldp+202,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2aU][8U] 
                                           >> 1U))),5);
        bufp->chgCData(oldp+203,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x2aU][8U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                              [0x2aU][7U] 
                                              >> 0x1cU)))),5);
        bufp->chgIData(oldp+204,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2aU][7U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+205,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2aU][6U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+206,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2aU][5U] 
                                           >> 0x16U))),6);
        bufp->chgIData(oldp+207,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2aU][5U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+208,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2aU][4U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+209,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2aU][3U] 
                                          >> 0x12U))),4);
        bufp->chgCData(oldp+210,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2aU][3U] 
                                          >> 0xeU))),4);
        bufp->chgIData(oldp+211,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2aU][3U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+212,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2aU][2U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+213,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2aU][1U] >> 0xdU))));
        bufp->chgBit(oldp+214,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2aU][1U] >> 0xcU))));
        bufp->chgBit(oldp+215,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2aU][1U] >> 0xbU))));
        bufp->chgBit(oldp+216,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2aU][1U] >> 0xaU))));
        bufp->chgIData(oldp+217,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2aU][1U] << 0x16U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2aU][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+218,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2aU][0U] >> 9U))));
        bufp->chgCData(oldp+219,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x2aU][0U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+220,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2aU][0U])),6);
        bufp->chgBit(oldp+221,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2bU][0x11U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+222,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2bU][0x11U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+223,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2bU][0x11U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+224,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2bU][0x11U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+225,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2bU][0x11U] 
                                      >> 0x15U))));
        bufp->chgCData(oldp+226,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2bU][0x11U] 
                                           >> 0xeU))),7);
        bufp->chgBit(oldp+227,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2bU][0x11U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+228,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2bU][0x11U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][0x10U] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+229,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2bU][0x10U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][0xfU] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+230,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2bU][0xfU] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][0xeU] 
                                     >> 0xdU))),32);
        bufp->chgCData(oldp+231,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2bU][0xeU] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+232,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2bU][0xeU] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+233,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2bU][0xeU] 
                                      >> 1U))));
        bufp->chgIData(oldp+234,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2bU][0xeU] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][0xdU] 
                                     >> 1U))),32);
        bufp->chgCData(oldp+235,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2bU][0xdU] 
                                         << 2U) | (
                                                   vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                   [0x2bU][0xcU] 
                                                   >> 0x1eU)))),3);
        bufp->chgIData(oldp+236,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2bU][0xcU] << 2U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][0xbU] 
                                     >> 0x1eU))),32);
        bufp->chgBit(oldp+237,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2bU][0xbU] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+238,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2bU][0xbU] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+239,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2bU][0xbU] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+240,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2bU][0xbU] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+241,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2bU][0xbU] 
                                           >> 0xfU))),7);
        bufp->chgCData(oldp+242,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2bU][0xbU] 
                                           >> 8U))),7);
        bufp->chgIData(oldp+243,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2bU][0xbU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][0xaU] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+244,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2bU][0xaU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][9U] >> 8U))),32);
        bufp->chgIData(oldp+245,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2bU][9U] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][8U] >> 8U))),32);
        bufp->chgBit(oldp+246,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2bU][8U] >> 7U))));
        bufp->chgBit(oldp+247,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2bU][8U] >> 6U))));
        bufp->chgCData(oldp+248,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2bU][8U] 
                                           >> 1U))),5);
        bufp->chgCData(oldp+249,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x2bU][8U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                              [0x2bU][7U] 
                                              >> 0x1cU)))),5);
        bufp->chgIData(oldp+250,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2bU][7U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+251,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2bU][6U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+252,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2bU][5U] 
                                           >> 0x16U))),6);
        bufp->chgIData(oldp+253,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2bU][5U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+254,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2bU][4U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+255,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2bU][3U] 
                                          >> 0x12U))),4);
        bufp->chgCData(oldp+256,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2bU][3U] 
                                          >> 0xeU))),4);
        bufp->chgIData(oldp+257,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2bU][3U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+258,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2bU][2U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+259,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2bU][1U] >> 0xdU))));
        bufp->chgBit(oldp+260,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2bU][1U] >> 0xcU))));
        bufp->chgBit(oldp+261,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2bU][1U] >> 0xbU))));
        bufp->chgBit(oldp+262,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2bU][1U] >> 0xaU))));
        bufp->chgIData(oldp+263,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2bU][1U] << 0x16U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2bU][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+264,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2bU][0U] >> 9U))));
        bufp->chgCData(oldp+265,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x2bU][0U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+266,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2bU][0U])),6);
        bufp->chgBit(oldp+267,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2cU][0x11U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+268,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2cU][0x11U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+269,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2cU][0x11U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+270,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2cU][0x11U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+271,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2cU][0x11U] 
                                      >> 0x15U))));
        bufp->chgCData(oldp+272,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2cU][0x11U] 
                                           >> 0xeU))),7);
        bufp->chgBit(oldp+273,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2cU][0x11U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+274,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2cU][0x11U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][0x10U] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+275,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2cU][0x10U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][0xfU] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+276,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2cU][0xfU] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][0xeU] 
                                     >> 0xdU))),32);
        bufp->chgCData(oldp+277,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2cU][0xeU] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+278,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2cU][0xeU] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+279,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2cU][0xeU] 
                                      >> 1U))));
        bufp->chgIData(oldp+280,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2cU][0xeU] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][0xdU] 
                                     >> 1U))),32);
        bufp->chgCData(oldp+281,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2cU][0xdU] 
                                         << 2U) | (
                                                   vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                   [0x2cU][0xcU] 
                                                   >> 0x1eU)))),3);
        bufp->chgIData(oldp+282,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2cU][0xcU] << 2U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][0xbU] 
                                     >> 0x1eU))),32);
        bufp->chgBit(oldp+283,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2cU][0xbU] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+284,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2cU][0xbU] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+285,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2cU][0xbU] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+286,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2cU][0xbU] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+287,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2cU][0xbU] 
                                           >> 0xfU))),7);
        bufp->chgCData(oldp+288,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2cU][0xbU] 
                                           >> 8U))),7);
        bufp->chgIData(oldp+289,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2cU][0xbU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][0xaU] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+290,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2cU][0xaU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][9U] >> 8U))),32);
        bufp->chgIData(oldp+291,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2cU][9U] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][8U] >> 8U))),32);
        bufp->chgBit(oldp+292,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2cU][8U] >> 7U))));
        bufp->chgBit(oldp+293,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2cU][8U] >> 6U))));
        bufp->chgCData(oldp+294,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2cU][8U] 
                                           >> 1U))),5);
        bufp->chgCData(oldp+295,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x2cU][8U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                              [0x2cU][7U] 
                                              >> 0x1cU)))),5);
        bufp->chgIData(oldp+296,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2cU][7U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+297,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2cU][6U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+298,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2cU][5U] 
                                           >> 0x16U))),6);
        bufp->chgIData(oldp+299,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2cU][5U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+300,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2cU][4U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+301,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2cU][3U] 
                                          >> 0x12U))),4);
        bufp->chgCData(oldp+302,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2cU][3U] 
                                          >> 0xeU))),4);
        bufp->chgIData(oldp+303,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2cU][3U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+304,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2cU][2U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+305,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2cU][1U] >> 0xdU))));
        bufp->chgBit(oldp+306,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2cU][1U] >> 0xcU))));
        bufp->chgBit(oldp+307,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2cU][1U] >> 0xbU))));
        bufp->chgBit(oldp+308,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2cU][1U] >> 0xaU))));
        bufp->chgIData(oldp+309,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2cU][1U] << 0x16U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2cU][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+310,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2cU][0U] >> 9U))));
        bufp->chgCData(oldp+311,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x2cU][0U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+312,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2cU][0U])),6);
        bufp->chgBit(oldp+313,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2dU][0x11U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+314,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2dU][0x11U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+315,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2dU][0x11U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+316,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2dU][0x11U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+317,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2dU][0x11U] 
                                      >> 0x15U))));
        bufp->chgCData(oldp+318,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2dU][0x11U] 
                                           >> 0xeU))),7);
        bufp->chgBit(oldp+319,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2dU][0x11U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+320,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2dU][0x11U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][0x10U] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+321,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2dU][0x10U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][0xfU] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+322,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2dU][0xfU] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][0xeU] 
                                     >> 0xdU))),32);
        bufp->chgCData(oldp+323,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2dU][0xeU] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+324,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2dU][0xeU] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+325,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2dU][0xeU] 
                                      >> 1U))));
        bufp->chgIData(oldp+326,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2dU][0xeU] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][0xdU] 
                                     >> 1U))),32);
        bufp->chgCData(oldp+327,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2dU][0xdU] 
                                         << 2U) | (
                                                   vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                   [0x2dU][0xcU] 
                                                   >> 0x1eU)))),3);
        bufp->chgIData(oldp+328,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2dU][0xcU] << 2U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][0xbU] 
                                     >> 0x1eU))),32);
        bufp->chgBit(oldp+329,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2dU][0xbU] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+330,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2dU][0xbU] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+331,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2dU][0xbU] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+332,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2dU][0xbU] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+333,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2dU][0xbU] 
                                           >> 0xfU))),7);
        bufp->chgCData(oldp+334,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2dU][0xbU] 
                                           >> 8U))),7);
        bufp->chgIData(oldp+335,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2dU][0xbU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][0xaU] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+336,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2dU][0xaU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][9U] >> 8U))),32);
        bufp->chgIData(oldp+337,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2dU][9U] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][8U] >> 8U))),32);
        bufp->chgBit(oldp+338,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2dU][8U] >> 7U))));
        bufp->chgBit(oldp+339,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2dU][8U] >> 6U))));
        bufp->chgCData(oldp+340,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2dU][8U] 
                                           >> 1U))),5);
        bufp->chgCData(oldp+341,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x2dU][8U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                              [0x2dU][7U] 
                                              >> 0x1cU)))),5);
        bufp->chgIData(oldp+342,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2dU][7U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+343,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2dU][6U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+344,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2dU][5U] 
                                           >> 0x16U))),6);
        bufp->chgIData(oldp+345,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2dU][5U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+346,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2dU][4U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+347,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2dU][3U] 
                                          >> 0x12U))),4);
        bufp->chgCData(oldp+348,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2dU][3U] 
                                          >> 0xeU))),4);
        bufp->chgIData(oldp+349,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2dU][3U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+350,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2dU][2U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+351,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2dU][1U] >> 0xdU))));
        bufp->chgBit(oldp+352,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2dU][1U] >> 0xcU))));
        bufp->chgBit(oldp+353,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2dU][1U] >> 0xbU))));
        bufp->chgBit(oldp+354,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2dU][1U] >> 0xaU))));
        bufp->chgIData(oldp+355,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2dU][1U] << 0x16U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2dU][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+356,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2dU][0U] >> 9U))));
        bufp->chgCData(oldp+357,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x2dU][0U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+358,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2dU][0U])),6);
        bufp->chgBit(oldp+359,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2eU][0x11U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+360,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2eU][0x11U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+361,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2eU][0x11U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+362,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2eU][0x11U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+363,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2eU][0x11U] 
                                      >> 0x15U))));
        bufp->chgCData(oldp+364,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2eU][0x11U] 
                                           >> 0xeU))),7);
        bufp->chgBit(oldp+365,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2eU][0x11U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+366,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2eU][0x11U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][0x10U] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+367,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2eU][0x10U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][0xfU] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+368,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2eU][0xfU] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][0xeU] 
                                     >> 0xdU))),32);
        bufp->chgCData(oldp+369,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2eU][0xeU] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+370,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2eU][0xeU] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+371,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2eU][0xeU] 
                                      >> 1U))));
        bufp->chgIData(oldp+372,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2eU][0xeU] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][0xdU] 
                                     >> 1U))),32);
        bufp->chgCData(oldp+373,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2eU][0xdU] 
                                         << 2U) | (
                                                   vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                   [0x2eU][0xcU] 
                                                   >> 0x1eU)))),3);
        bufp->chgIData(oldp+374,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2eU][0xcU] << 2U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][0xbU] 
                                     >> 0x1eU))),32);
        bufp->chgBit(oldp+375,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2eU][0xbU] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+376,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2eU][0xbU] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+377,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2eU][0xbU] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+378,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2eU][0xbU] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+379,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2eU][0xbU] 
                                           >> 0xfU))),7);
        bufp->chgCData(oldp+380,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2eU][0xbU] 
                                           >> 8U))),7);
        bufp->chgIData(oldp+381,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2eU][0xbU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][0xaU] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+382,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2eU][0xaU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][9U] >> 8U))),32);
        bufp->chgIData(oldp+383,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2eU][9U] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][8U] >> 8U))),32);
        bufp->chgBit(oldp+384,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2eU][8U] >> 7U))));
        bufp->chgBit(oldp+385,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2eU][8U] >> 6U))));
        bufp->chgCData(oldp+386,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2eU][8U] 
                                           >> 1U))),5);
        bufp->chgCData(oldp+387,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x2eU][8U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                              [0x2eU][7U] 
                                              >> 0x1cU)))),5);
        bufp->chgIData(oldp+388,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2eU][7U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+389,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2eU][6U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+390,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2eU][5U] 
                                           >> 0x16U))),6);
        bufp->chgIData(oldp+391,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2eU][5U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+392,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2eU][4U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+393,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2eU][3U] 
                                          >> 0x12U))),4);
        bufp->chgCData(oldp+394,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2eU][3U] 
                                          >> 0xeU))),4);
        bufp->chgIData(oldp+395,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2eU][3U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+396,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2eU][2U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+397,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2eU][1U] >> 0xdU))));
        bufp->chgBit(oldp+398,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2eU][1U] >> 0xcU))));
        bufp->chgBit(oldp+399,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2eU][1U] >> 0xbU))));
        bufp->chgBit(oldp+400,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2eU][1U] >> 0xaU))));
        bufp->chgIData(oldp+401,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2eU][1U] << 0x16U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2eU][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+402,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2eU][0U] >> 9U))));
        bufp->chgCData(oldp+403,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x2eU][0U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+404,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2eU][0U])),6);
        bufp->chgBit(oldp+405,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2fU][0x11U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+406,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2fU][0x11U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+407,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2fU][0x11U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+408,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2fU][0x11U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+409,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2fU][0x11U] 
                                      >> 0x15U))));
        bufp->chgCData(oldp+410,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2fU][0x11U] 
                                           >> 0xeU))),7);
        bufp->chgBit(oldp+411,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2fU][0x11U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+412,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2fU][0x11U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][0x10U] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+413,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2fU][0x10U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][0xfU] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+414,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2fU][0xfU] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][0xeU] 
                                     >> 0xdU))),32);
        bufp->chgCData(oldp+415,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2fU][0xeU] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+416,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2fU][0xeU] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+417,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2fU][0xeU] 
                                      >> 1U))));
        bufp->chgIData(oldp+418,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2fU][0xeU] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][0xdU] 
                                     >> 1U))),32);
        bufp->chgCData(oldp+419,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x2fU][0xdU] 
                                         << 2U) | (
                                                   vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                   [0x2fU][0xcU] 
                                                   >> 0x1eU)))),3);
        bufp->chgIData(oldp+420,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2fU][0xcU] << 2U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][0xbU] 
                                     >> 0x1eU))),32);
        bufp->chgBit(oldp+421,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2fU][0xbU] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+422,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2fU][0xbU] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+423,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2fU][0xbU] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+424,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2fU][0xbU] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+425,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2fU][0xbU] 
                                           >> 0xfU))),7);
        bufp->chgCData(oldp+426,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2fU][0xbU] 
                                           >> 8U))),7);
        bufp->chgIData(oldp+427,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2fU][0xbU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][0xaU] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+428,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2fU][0xaU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][9U] >> 8U))),32);
        bufp->chgIData(oldp+429,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2fU][9U] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][8U] >> 8U))),32);
        bufp->chgBit(oldp+430,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2fU][8U] >> 7U))));
        bufp->chgBit(oldp+431,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2fU][8U] >> 6U))));
        bufp->chgCData(oldp+432,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2fU][8U] 
                                           >> 1U))),5);
        bufp->chgCData(oldp+433,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x2fU][8U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                              [0x2fU][7U] 
                                              >> 0x1cU)))),5);
        bufp->chgIData(oldp+434,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2fU][7U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+435,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2fU][6U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+436,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x2fU][5U] 
                                           >> 0x16U))),6);
        bufp->chgIData(oldp+437,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2fU][5U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+438,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2fU][4U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+439,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2fU][3U] 
                                          >> 0x12U))),4);
        bufp->chgCData(oldp+440,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x2fU][3U] 
                                          >> 0xeU))),4);
        bufp->chgIData(oldp+441,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2fU][3U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+442,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2fU][2U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+443,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2fU][1U] >> 0xdU))));
        bufp->chgBit(oldp+444,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2fU][1U] >> 0xcU))));
        bufp->chgBit(oldp+445,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2fU][1U] >> 0xbU))));
        bufp->chgBit(oldp+446,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2fU][1U] >> 0xaU))));
        bufp->chgIData(oldp+447,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x2fU][1U] << 0x16U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x2fU][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+448,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x2fU][0U] >> 9U))));
        bufp->chgCData(oldp+449,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x2fU][0U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+450,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x2fU][0U])),6);
        bufp->chgBit(oldp+451,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x30U][0x11U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+452,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x30U][0x11U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+453,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x30U][0x11U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+454,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x30U][0x11U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+455,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x30U][0x11U] 
                                      >> 0x15U))));
        bufp->chgCData(oldp+456,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x30U][0x11U] 
                                           >> 0xeU))),7);
        bufp->chgBit(oldp+457,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x30U][0x11U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+458,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x30U][0x11U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][0x10U] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+459,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x30U][0x10U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][0xfU] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+460,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x30U][0xfU] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][0xeU] 
                                     >> 0xdU))),32);
        bufp->chgCData(oldp+461,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x30U][0xeU] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+462,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x30U][0xeU] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+463,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x30U][0xeU] 
                                      >> 1U))));
        bufp->chgIData(oldp+464,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x30U][0xeU] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][0xdU] 
                                     >> 1U))),32);
        bufp->chgCData(oldp+465,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x30U][0xdU] 
                                         << 2U) | (
                                                   vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                   [0x30U][0xcU] 
                                                   >> 0x1eU)))),3);
        bufp->chgIData(oldp+466,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x30U][0xcU] << 2U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][0xbU] 
                                     >> 0x1eU))),32);
        bufp->chgBit(oldp+467,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x30U][0xbU] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+468,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x30U][0xbU] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+469,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x30U][0xbU] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+470,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x30U][0xbU] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+471,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x30U][0xbU] 
                                           >> 0xfU))),7);
        bufp->chgCData(oldp+472,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x30U][0xbU] 
                                           >> 8U))),7);
        bufp->chgIData(oldp+473,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x30U][0xbU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][0xaU] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+474,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x30U][0xaU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][9U] >> 8U))),32);
        bufp->chgIData(oldp+475,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x30U][9U] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][8U] >> 8U))),32);
        bufp->chgBit(oldp+476,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x30U][8U] >> 7U))));
        bufp->chgBit(oldp+477,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x30U][8U] >> 6U))));
        bufp->chgCData(oldp+478,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x30U][8U] 
                                           >> 1U))),5);
        bufp->chgCData(oldp+479,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x30U][8U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                              [0x30U][7U] 
                                              >> 0x1cU)))),5);
        bufp->chgIData(oldp+480,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x30U][7U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+481,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x30U][6U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+482,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x30U][5U] 
                                           >> 0x16U))),6);
        bufp->chgIData(oldp+483,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x30U][5U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+484,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x30U][4U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+485,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x30U][3U] 
                                          >> 0x12U))),4);
        bufp->chgCData(oldp+486,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x30U][3U] 
                                          >> 0xeU))),4);
        bufp->chgIData(oldp+487,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x30U][3U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+488,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x30U][2U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+489,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x30U][1U] >> 0xdU))));
        bufp->chgBit(oldp+490,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x30U][1U] >> 0xcU))));
        bufp->chgBit(oldp+491,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x30U][1U] >> 0xbU))));
        bufp->chgBit(oldp+492,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x30U][1U] >> 0xaU))));
        bufp->chgIData(oldp+493,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x30U][1U] << 0x16U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x30U][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+494,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x30U][0U] >> 9U))));
        bufp->chgCData(oldp+495,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x30U][0U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+496,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x30U][0U])),6);
        bufp->chgBit(oldp+497,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x31U][0x11U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+498,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x31U][0x11U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+499,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x31U][0x11U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+500,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x31U][0x11U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+501,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x31U][0x11U] 
                                      >> 0x15U))));
        bufp->chgCData(oldp+502,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x31U][0x11U] 
                                           >> 0xeU))),7);
        bufp->chgBit(oldp+503,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x31U][0x11U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+504,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x31U][0x11U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][0x10U] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+505,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x31U][0x10U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][0xfU] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+506,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x31U][0xfU] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][0xeU] 
                                     >> 0xdU))),32);
        bufp->chgCData(oldp+507,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x31U][0xeU] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+508,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x31U][0xeU] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+509,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x31U][0xeU] 
                                      >> 1U))));
        bufp->chgIData(oldp+510,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x31U][0xeU] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][0xdU] 
                                     >> 1U))),32);
        bufp->chgCData(oldp+511,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x31U][0xdU] 
                                         << 2U) | (
                                                   vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                   [0x31U][0xcU] 
                                                   >> 0x1eU)))),3);
        bufp->chgIData(oldp+512,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x31U][0xcU] << 2U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][0xbU] 
                                     >> 0x1eU))),32);
        bufp->chgBit(oldp+513,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x31U][0xbU] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+514,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x31U][0xbU] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+515,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x31U][0xbU] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+516,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x31U][0xbU] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+517,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x31U][0xbU] 
                                           >> 0xfU))),7);
        bufp->chgCData(oldp+518,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x31U][0xbU] 
                                           >> 8U))),7);
        bufp->chgIData(oldp+519,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x31U][0xbU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][0xaU] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+520,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x31U][0xaU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][9U] >> 8U))),32);
        bufp->chgIData(oldp+521,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x31U][9U] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][8U] >> 8U))),32);
        bufp->chgBit(oldp+522,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x31U][8U] >> 7U))));
        bufp->chgBit(oldp+523,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x31U][8U] >> 6U))));
        bufp->chgCData(oldp+524,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x31U][8U] 
                                           >> 1U))),5);
        bufp->chgCData(oldp+525,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x31U][8U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                              [0x31U][7U] 
                                              >> 0x1cU)))),5);
        bufp->chgIData(oldp+526,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x31U][7U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+527,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x31U][6U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+528,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x31U][5U] 
                                           >> 0x16U))),6);
        bufp->chgIData(oldp+529,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x31U][5U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+530,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x31U][4U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+531,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x31U][3U] 
                                          >> 0x12U))),4);
        bufp->chgCData(oldp+532,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x31U][3U] 
                                          >> 0xeU))),4);
        bufp->chgIData(oldp+533,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x31U][3U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+534,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x31U][2U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+535,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x31U][1U] >> 0xdU))));
        bufp->chgBit(oldp+536,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x31U][1U] >> 0xcU))));
        bufp->chgBit(oldp+537,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x31U][1U] >> 0xbU))));
        bufp->chgBit(oldp+538,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x31U][1U] >> 0xaU))));
        bufp->chgIData(oldp+539,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x31U][1U] << 0x16U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x31U][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+540,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x31U][0U] >> 9U))));
        bufp->chgCData(oldp+541,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x31U][0U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+542,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x31U][0U])),6);
        bufp->chgBit(oldp+543,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x32U][0x11U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+544,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x32U][0x11U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+545,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x32U][0x11U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+546,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x32U][0x11U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+547,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x32U][0x11U] 
                                      >> 0x15U))));
        bufp->chgCData(oldp+548,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x32U][0x11U] 
                                           >> 0xeU))),7);
        bufp->chgBit(oldp+549,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x32U][0x11U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+550,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x32U][0x11U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][0x10U] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+551,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x32U][0x10U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][0xfU] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+552,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x32U][0xfU] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][0xeU] 
                                     >> 0xdU))),32);
        bufp->chgCData(oldp+553,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x32U][0xeU] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+554,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x32U][0xeU] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+555,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x32U][0xeU] 
                                      >> 1U))));
        bufp->chgIData(oldp+556,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x32U][0xeU] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][0xdU] 
                                     >> 1U))),32);
        bufp->chgCData(oldp+557,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x32U][0xdU] 
                                         << 2U) | (
                                                   vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                   [0x32U][0xcU] 
                                                   >> 0x1eU)))),3);
        bufp->chgIData(oldp+558,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x32U][0xcU] << 2U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][0xbU] 
                                     >> 0x1eU))),32);
        bufp->chgBit(oldp+559,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x32U][0xbU] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+560,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x32U][0xbU] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+561,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x32U][0xbU] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+562,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x32U][0xbU] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+563,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x32U][0xbU] 
                                           >> 0xfU))),7);
        bufp->chgCData(oldp+564,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x32U][0xbU] 
                                           >> 8U))),7);
        bufp->chgIData(oldp+565,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x32U][0xbU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][0xaU] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+566,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x32U][0xaU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][9U] >> 8U))),32);
        bufp->chgIData(oldp+567,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x32U][9U] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][8U] >> 8U))),32);
        bufp->chgBit(oldp+568,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x32U][8U] >> 7U))));
        bufp->chgBit(oldp+569,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x32U][8U] >> 6U))));
        bufp->chgCData(oldp+570,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x32U][8U] 
                                           >> 1U))),5);
        bufp->chgCData(oldp+571,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x32U][8U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                              [0x32U][7U] 
                                              >> 0x1cU)))),5);
        bufp->chgIData(oldp+572,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x32U][7U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+573,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x32U][6U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+574,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x32U][5U] 
                                           >> 0x16U))),6);
        bufp->chgIData(oldp+575,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x32U][5U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+576,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x32U][4U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+577,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x32U][3U] 
                                          >> 0x12U))),4);
        bufp->chgCData(oldp+578,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x32U][3U] 
                                          >> 0xeU))),4);
        bufp->chgIData(oldp+579,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x32U][3U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+580,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x32U][2U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+581,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x32U][1U] >> 0xdU))));
        bufp->chgBit(oldp+582,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x32U][1U] >> 0xcU))));
        bufp->chgBit(oldp+583,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x32U][1U] >> 0xbU))));
        bufp->chgBit(oldp+584,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x32U][1U] >> 0xaU))));
        bufp->chgIData(oldp+585,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x32U][1U] << 0x16U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x32U][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+586,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x32U][0U] >> 9U))));
        bufp->chgCData(oldp+587,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x32U][0U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+588,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x32U][0U])),6);
        bufp->chgBit(oldp+589,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x33U][0x11U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+590,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x33U][0x11U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+591,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x33U][0x11U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+592,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x33U][0x11U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+593,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x33U][0x11U] 
                                      >> 0x15U))));
        bufp->chgCData(oldp+594,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x33U][0x11U] 
                                           >> 0xeU))),7);
        bufp->chgBit(oldp+595,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x33U][0x11U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+596,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x33U][0x11U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][0x10U] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+597,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x33U][0x10U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][0xfU] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+598,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x33U][0xfU] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][0xeU] 
                                     >> 0xdU))),32);
        bufp->chgCData(oldp+599,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x33U][0xeU] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+600,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x33U][0xeU] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+601,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x33U][0xeU] 
                                      >> 1U))));
        bufp->chgIData(oldp+602,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x33U][0xeU] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][0xdU] 
                                     >> 1U))),32);
        bufp->chgCData(oldp+603,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x33U][0xdU] 
                                         << 2U) | (
                                                   vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                   [0x33U][0xcU] 
                                                   >> 0x1eU)))),3);
        bufp->chgIData(oldp+604,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x33U][0xcU] << 2U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][0xbU] 
                                     >> 0x1eU))),32);
        bufp->chgBit(oldp+605,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x33U][0xbU] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+606,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x33U][0xbU] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+607,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x33U][0xbU] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+608,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x33U][0xbU] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+609,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x33U][0xbU] 
                                           >> 0xfU))),7);
        bufp->chgCData(oldp+610,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x33U][0xbU] 
                                           >> 8U))),7);
        bufp->chgIData(oldp+611,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x33U][0xbU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][0xaU] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+612,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x33U][0xaU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][9U] >> 8U))),32);
        bufp->chgIData(oldp+613,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x33U][9U] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][8U] >> 8U))),32);
        bufp->chgBit(oldp+614,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x33U][8U] >> 7U))));
        bufp->chgBit(oldp+615,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x33U][8U] >> 6U))));
        bufp->chgCData(oldp+616,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x33U][8U] 
                                           >> 1U))),5);
        bufp->chgCData(oldp+617,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x33U][8U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                              [0x33U][7U] 
                                              >> 0x1cU)))),5);
        bufp->chgIData(oldp+618,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x33U][7U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+619,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x33U][6U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+620,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x33U][5U] 
                                           >> 0x16U))),6);
        bufp->chgIData(oldp+621,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x33U][5U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+622,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x33U][4U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+623,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x33U][3U] 
                                          >> 0x12U))),4);
        bufp->chgCData(oldp+624,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x33U][3U] 
                                          >> 0xeU))),4);
        bufp->chgIData(oldp+625,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x33U][3U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+626,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x33U][2U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+627,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x33U][1U] >> 0xdU))));
        bufp->chgBit(oldp+628,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x33U][1U] >> 0xcU))));
        bufp->chgBit(oldp+629,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x33U][1U] >> 0xbU))));
        bufp->chgBit(oldp+630,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x33U][1U] >> 0xaU))));
        bufp->chgIData(oldp+631,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x33U][1U] << 0x16U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x33U][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+632,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x33U][0U] >> 9U))));
        bufp->chgCData(oldp+633,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x33U][0U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+634,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x33U][0U])),6);
        bufp->chgBit(oldp+635,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x34U][0x11U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+636,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x34U][0x11U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+637,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x34U][0x11U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+638,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x34U][0x11U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+639,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x34U][0x11U] 
                                      >> 0x15U))));
        bufp->chgCData(oldp+640,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x34U][0x11U] 
                                           >> 0xeU))),7);
        bufp->chgBit(oldp+641,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x34U][0x11U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+642,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x34U][0x11U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][0x10U] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+643,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x34U][0x10U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][0xfU] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+644,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x34U][0xfU] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][0xeU] 
                                     >> 0xdU))),32);
        bufp->chgCData(oldp+645,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x34U][0xeU] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+646,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x34U][0xeU] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+647,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x34U][0xeU] 
                                      >> 1U))));
        bufp->chgIData(oldp+648,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x34U][0xeU] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][0xdU] 
                                     >> 1U))),32);
        bufp->chgCData(oldp+649,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x34U][0xdU] 
                                         << 2U) | (
                                                   vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                   [0x34U][0xcU] 
                                                   >> 0x1eU)))),3);
        bufp->chgIData(oldp+650,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x34U][0xcU] << 2U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][0xbU] 
                                     >> 0x1eU))),32);
        bufp->chgBit(oldp+651,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x34U][0xbU] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+652,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x34U][0xbU] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+653,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x34U][0xbU] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+654,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x34U][0xbU] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+655,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x34U][0xbU] 
                                           >> 0xfU))),7);
        bufp->chgCData(oldp+656,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x34U][0xbU] 
                                           >> 8U))),7);
        bufp->chgIData(oldp+657,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x34U][0xbU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][0xaU] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+658,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x34U][0xaU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][9U] >> 8U))),32);
        bufp->chgIData(oldp+659,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x34U][9U] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][8U] >> 8U))),32);
        bufp->chgBit(oldp+660,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x34U][8U] >> 7U))));
        bufp->chgBit(oldp+661,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x34U][8U] >> 6U))));
        bufp->chgCData(oldp+662,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x34U][8U] 
                                           >> 1U))),5);
        bufp->chgCData(oldp+663,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x34U][8U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                              [0x34U][7U] 
                                              >> 0x1cU)))),5);
        bufp->chgIData(oldp+664,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x34U][7U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+665,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x34U][6U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+666,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x34U][5U] 
                                           >> 0x16U))),6);
        bufp->chgIData(oldp+667,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x34U][5U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+668,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x34U][4U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+669,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x34U][3U] 
                                          >> 0x12U))),4);
        bufp->chgCData(oldp+670,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x34U][3U] 
                                          >> 0xeU))),4);
        bufp->chgIData(oldp+671,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x34U][3U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+672,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x34U][2U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+673,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x34U][1U] >> 0xdU))));
        bufp->chgBit(oldp+674,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x34U][1U] >> 0xcU))));
        bufp->chgBit(oldp+675,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x34U][1U] >> 0xbU))));
        bufp->chgBit(oldp+676,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x34U][1U] >> 0xaU))));
        bufp->chgIData(oldp+677,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x34U][1U] << 0x16U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x34U][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+678,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x34U][0U] >> 9U))));
        bufp->chgCData(oldp+679,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x34U][0U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+680,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x34U][0U])),6);
        bufp->chgBit(oldp+681,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x35U][0x11U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+682,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x35U][0x11U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+683,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x35U][0x11U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+684,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x35U][0x11U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+685,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x35U][0x11U] 
                                      >> 0x15U))));
        bufp->chgCData(oldp+686,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x35U][0x11U] 
                                           >> 0xeU))),7);
        bufp->chgBit(oldp+687,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x35U][0x11U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+688,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x35U][0x11U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][0x10U] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+689,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x35U][0x10U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][0xfU] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+690,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x35U][0xfU] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][0xeU] 
                                     >> 0xdU))),32);
        bufp->chgCData(oldp+691,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x35U][0xeU] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+692,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x35U][0xeU] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+693,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x35U][0xeU] 
                                      >> 1U))));
        bufp->chgIData(oldp+694,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x35U][0xeU] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][0xdU] 
                                     >> 1U))),32);
        bufp->chgCData(oldp+695,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x35U][0xdU] 
                                         << 2U) | (
                                                   vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                   [0x35U][0xcU] 
                                                   >> 0x1eU)))),3);
        bufp->chgIData(oldp+696,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x35U][0xcU] << 2U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][0xbU] 
                                     >> 0x1eU))),32);
        bufp->chgBit(oldp+697,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x35U][0xbU] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+698,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x35U][0xbU] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+699,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x35U][0xbU] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+700,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x35U][0xbU] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+701,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x35U][0xbU] 
                                           >> 0xfU))),7);
        bufp->chgCData(oldp+702,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x35U][0xbU] 
                                           >> 8U))),7);
        bufp->chgIData(oldp+703,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x35U][0xbU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][0xaU] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+704,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x35U][0xaU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][9U] >> 8U))),32);
        bufp->chgIData(oldp+705,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x35U][9U] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][8U] >> 8U))),32);
        bufp->chgBit(oldp+706,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x35U][8U] >> 7U))));
        bufp->chgBit(oldp+707,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x35U][8U] >> 6U))));
        bufp->chgCData(oldp+708,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x35U][8U] 
                                           >> 1U))),5);
        bufp->chgCData(oldp+709,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x35U][8U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                              [0x35U][7U] 
                                              >> 0x1cU)))),5);
        bufp->chgIData(oldp+710,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x35U][7U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+711,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x35U][6U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+712,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x35U][5U] 
                                           >> 0x16U))),6);
        bufp->chgIData(oldp+713,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x35U][5U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+714,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x35U][4U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+715,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x35U][3U] 
                                          >> 0x12U))),4);
        bufp->chgCData(oldp+716,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x35U][3U] 
                                          >> 0xeU))),4);
        bufp->chgIData(oldp+717,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x35U][3U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+718,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x35U][2U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+719,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x35U][1U] >> 0xdU))));
        bufp->chgBit(oldp+720,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x35U][1U] >> 0xcU))));
        bufp->chgBit(oldp+721,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x35U][1U] >> 0xbU))));
        bufp->chgBit(oldp+722,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x35U][1U] >> 0xaU))));
        bufp->chgIData(oldp+723,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x35U][1U] << 0x16U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x35U][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+724,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x35U][0U] >> 9U))));
        bufp->chgCData(oldp+725,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x35U][0U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+726,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x35U][0U])),6);
        bufp->chgBit(oldp+727,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x36U][0x11U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+728,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x36U][0x11U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+729,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x36U][0x11U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+730,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x36U][0x11U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+731,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x36U][0x11U] 
                                      >> 0x15U))));
        bufp->chgCData(oldp+732,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x36U][0x11U] 
                                           >> 0xeU))),7);
        bufp->chgBit(oldp+733,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x36U][0x11U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+734,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x36U][0x11U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][0x10U] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+735,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x36U][0x10U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][0xfU] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+736,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x36U][0xfU] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][0xeU] 
                                     >> 0xdU))),32);
        bufp->chgCData(oldp+737,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x36U][0xeU] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+738,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x36U][0xeU] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+739,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x36U][0xeU] 
                                      >> 1U))));
        bufp->chgIData(oldp+740,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x36U][0xeU] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][0xdU] 
                                     >> 1U))),32);
        bufp->chgCData(oldp+741,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x36U][0xdU] 
                                         << 2U) | (
                                                   vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                   [0x36U][0xcU] 
                                                   >> 0x1eU)))),3);
        bufp->chgIData(oldp+742,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x36U][0xcU] << 2U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][0xbU] 
                                     >> 0x1eU))),32);
        bufp->chgBit(oldp+743,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x36U][0xbU] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+744,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x36U][0xbU] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+745,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x36U][0xbU] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+746,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x36U][0xbU] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+747,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x36U][0xbU] 
                                           >> 0xfU))),7);
        bufp->chgCData(oldp+748,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x36U][0xbU] 
                                           >> 8U))),7);
        bufp->chgIData(oldp+749,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x36U][0xbU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][0xaU] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+750,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x36U][0xaU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][9U] >> 8U))),32);
        bufp->chgIData(oldp+751,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x36U][9U] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][8U] >> 8U))),32);
        bufp->chgBit(oldp+752,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x36U][8U] >> 7U))));
        bufp->chgBit(oldp+753,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x36U][8U] >> 6U))));
        bufp->chgCData(oldp+754,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x36U][8U] 
                                           >> 1U))),5);
        bufp->chgCData(oldp+755,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x36U][8U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                              [0x36U][7U] 
                                              >> 0x1cU)))),5);
        bufp->chgIData(oldp+756,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x36U][7U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+757,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x36U][6U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+758,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x36U][5U] 
                                           >> 0x16U))),6);
        bufp->chgIData(oldp+759,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x36U][5U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+760,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x36U][4U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+761,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x36U][3U] 
                                          >> 0x12U))),4);
        bufp->chgCData(oldp+762,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x36U][3U] 
                                          >> 0xeU))),4);
        bufp->chgIData(oldp+763,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x36U][3U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+764,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x36U][2U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+765,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x36U][1U] >> 0xdU))));
        bufp->chgBit(oldp+766,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x36U][1U] >> 0xcU))));
        bufp->chgBit(oldp+767,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x36U][1U] >> 0xbU))));
        bufp->chgBit(oldp+768,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x36U][1U] >> 0xaU))));
        bufp->chgIData(oldp+769,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x36U][1U] << 0x16U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x36U][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+770,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x36U][0U] >> 9U))));
        bufp->chgCData(oldp+771,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x36U][0U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+772,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x36U][0U])),6);
        bufp->chgBit(oldp+773,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x37U][0x11U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+774,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x37U][0x11U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+775,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x37U][0x11U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+776,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x37U][0x11U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+777,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x37U][0x11U] 
                                      >> 0x15U))));
        bufp->chgCData(oldp+778,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x37U][0x11U] 
                                           >> 0xeU))),7);
        bufp->chgBit(oldp+779,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x37U][0x11U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+780,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x37U][0x11U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][0x10U] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+781,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x37U][0x10U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][0xfU] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+782,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x37U][0xfU] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][0xeU] 
                                     >> 0xdU))),32);
        bufp->chgCData(oldp+783,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x37U][0xeU] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+784,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x37U][0xeU] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+785,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x37U][0xeU] 
                                      >> 1U))));
        bufp->chgIData(oldp+786,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x37U][0xeU] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][0xdU] 
                                     >> 1U))),32);
        bufp->chgCData(oldp+787,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x37U][0xdU] 
                                         << 2U) | (
                                                   vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                   [0x37U][0xcU] 
                                                   >> 0x1eU)))),3);
        bufp->chgIData(oldp+788,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x37U][0xcU] << 2U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][0xbU] 
                                     >> 0x1eU))),32);
        bufp->chgBit(oldp+789,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x37U][0xbU] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+790,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x37U][0xbU] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+791,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x37U][0xbU] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+792,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x37U][0xbU] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+793,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x37U][0xbU] 
                                           >> 0xfU))),7);
        bufp->chgCData(oldp+794,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x37U][0xbU] 
                                           >> 8U))),7);
        bufp->chgIData(oldp+795,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x37U][0xbU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][0xaU] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+796,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x37U][0xaU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][9U] >> 8U))),32);
        bufp->chgIData(oldp+797,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x37U][9U] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][8U] >> 8U))),32);
        bufp->chgBit(oldp+798,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x37U][8U] >> 7U))));
        bufp->chgBit(oldp+799,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x37U][8U] >> 6U))));
        bufp->chgCData(oldp+800,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x37U][8U] 
                                           >> 1U))),5);
        bufp->chgCData(oldp+801,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x37U][8U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                              [0x37U][7U] 
                                              >> 0x1cU)))),5);
        bufp->chgIData(oldp+802,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x37U][7U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+803,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x37U][6U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+804,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x37U][5U] 
                                           >> 0x16U))),6);
        bufp->chgIData(oldp+805,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x37U][5U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+806,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x37U][4U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+807,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x37U][3U] 
                                          >> 0x12U))),4);
        bufp->chgCData(oldp+808,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x37U][3U] 
                                          >> 0xeU))),4);
        bufp->chgIData(oldp+809,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x37U][3U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+810,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x37U][2U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+811,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x37U][1U] >> 0xdU))));
        bufp->chgBit(oldp+812,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x37U][1U] >> 0xcU))));
        bufp->chgBit(oldp+813,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x37U][1U] >> 0xbU))));
        bufp->chgBit(oldp+814,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x37U][1U] >> 0xaU))));
        bufp->chgIData(oldp+815,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x37U][1U] << 0x16U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x37U][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+816,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x37U][0U] >> 9U))));
        bufp->chgCData(oldp+817,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x37U][0U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+818,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x37U][0U])),6);
        bufp->chgBit(oldp+819,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x38U][0x11U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+820,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x38U][0x11U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+821,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x38U][0x11U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+822,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x38U][0x11U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+823,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x38U][0x11U] 
                                      >> 0x15U))));
        bufp->chgCData(oldp+824,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x38U][0x11U] 
                                           >> 0xeU))),7);
        bufp->chgBit(oldp+825,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x38U][0x11U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+826,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x38U][0x11U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][0x10U] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+827,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x38U][0x10U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][0xfU] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+828,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x38U][0xfU] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][0xeU] 
                                     >> 0xdU))),32);
        bufp->chgCData(oldp+829,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x38U][0xeU] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+830,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x38U][0xeU] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+831,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x38U][0xeU] 
                                      >> 1U))));
        bufp->chgIData(oldp+832,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x38U][0xeU] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][0xdU] 
                                     >> 1U))),32);
        bufp->chgCData(oldp+833,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x38U][0xdU] 
                                         << 2U) | (
                                                   vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                   [0x38U][0xcU] 
                                                   >> 0x1eU)))),3);
        bufp->chgIData(oldp+834,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x38U][0xcU] << 2U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][0xbU] 
                                     >> 0x1eU))),32);
        bufp->chgBit(oldp+835,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x38U][0xbU] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+836,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x38U][0xbU] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+837,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x38U][0xbU] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+838,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x38U][0xbU] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+839,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x38U][0xbU] 
                                           >> 0xfU))),7);
        bufp->chgCData(oldp+840,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x38U][0xbU] 
                                           >> 8U))),7);
        bufp->chgIData(oldp+841,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x38U][0xbU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][0xaU] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+842,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x38U][0xaU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][9U] >> 8U))),32);
        bufp->chgIData(oldp+843,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x38U][9U] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][8U] >> 8U))),32);
        bufp->chgBit(oldp+844,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x38U][8U] >> 7U))));
        bufp->chgBit(oldp+845,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x38U][8U] >> 6U))));
        bufp->chgCData(oldp+846,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x38U][8U] 
                                           >> 1U))),5);
        bufp->chgCData(oldp+847,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x38U][8U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                              [0x38U][7U] 
                                              >> 0x1cU)))),5);
        bufp->chgIData(oldp+848,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x38U][7U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+849,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x38U][6U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+850,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x38U][5U] 
                                           >> 0x16U))),6);
        bufp->chgIData(oldp+851,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x38U][5U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+852,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x38U][4U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+853,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x38U][3U] 
                                          >> 0x12U))),4);
        bufp->chgCData(oldp+854,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x38U][3U] 
                                          >> 0xeU))),4);
        bufp->chgIData(oldp+855,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x38U][3U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+856,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x38U][2U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+857,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x38U][1U] >> 0xdU))));
        bufp->chgBit(oldp+858,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x38U][1U] >> 0xcU))));
        bufp->chgBit(oldp+859,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x38U][1U] >> 0xbU))));
        bufp->chgBit(oldp+860,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x38U][1U] >> 0xaU))));
        bufp->chgIData(oldp+861,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x38U][1U] << 0x16U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x38U][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+862,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x38U][0U] >> 9U))));
        bufp->chgCData(oldp+863,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x38U][0U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+864,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x38U][0U])),6);
        bufp->chgBit(oldp+865,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x39U][0x11U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+866,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x39U][0x11U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+867,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x39U][0x11U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+868,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x39U][0x11U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+869,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x39U][0x11U] 
                                      >> 0x15U))));
        bufp->chgCData(oldp+870,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x39U][0x11U] 
                                           >> 0xeU))),7);
        bufp->chgBit(oldp+871,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x39U][0x11U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+872,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x39U][0x11U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][0x10U] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+873,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x39U][0x10U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][0xfU] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+874,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x39U][0xfU] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][0xeU] 
                                     >> 0xdU))),32);
        bufp->chgCData(oldp+875,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x39U][0xeU] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+876,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x39U][0xeU] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+877,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x39U][0xeU] 
                                      >> 1U))));
        bufp->chgIData(oldp+878,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x39U][0xeU] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][0xdU] 
                                     >> 1U))),32);
        bufp->chgCData(oldp+879,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x39U][0xdU] 
                                         << 2U) | (
                                                   vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                   [0x39U][0xcU] 
                                                   >> 0x1eU)))),3);
        bufp->chgIData(oldp+880,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x39U][0xcU] << 2U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][0xbU] 
                                     >> 0x1eU))),32);
        bufp->chgBit(oldp+881,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x39U][0xbU] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+882,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x39U][0xbU] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+883,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x39U][0xbU] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+884,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x39U][0xbU] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+885,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x39U][0xbU] 
                                           >> 0xfU))),7);
        bufp->chgCData(oldp+886,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x39U][0xbU] 
                                           >> 8U))),7);
        bufp->chgIData(oldp+887,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x39U][0xbU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][0xaU] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+888,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x39U][0xaU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][9U] >> 8U))),32);
        bufp->chgIData(oldp+889,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x39U][9U] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][8U] >> 8U))),32);
        bufp->chgBit(oldp+890,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x39U][8U] >> 7U))));
        bufp->chgBit(oldp+891,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x39U][8U] >> 6U))));
        bufp->chgCData(oldp+892,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x39U][8U] 
                                           >> 1U))),5);
        bufp->chgCData(oldp+893,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x39U][8U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                              [0x39U][7U] 
                                              >> 0x1cU)))),5);
        bufp->chgIData(oldp+894,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x39U][7U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+895,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x39U][6U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+896,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x39U][5U] 
                                           >> 0x16U))),6);
        bufp->chgIData(oldp+897,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x39U][5U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+898,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x39U][4U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+899,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x39U][3U] 
                                          >> 0x12U))),4);
        bufp->chgCData(oldp+900,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x39U][3U] 
                                          >> 0xeU))),4);
        bufp->chgIData(oldp+901,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x39U][3U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+902,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x39U][2U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+903,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x39U][1U] >> 0xdU))));
        bufp->chgBit(oldp+904,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x39U][1U] >> 0xcU))));
        bufp->chgBit(oldp+905,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x39U][1U] >> 0xbU))));
        bufp->chgBit(oldp+906,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x39U][1U] >> 0xaU))));
        bufp->chgIData(oldp+907,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x39U][1U] << 0x16U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x39U][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+908,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x39U][0U] >> 9U))));
        bufp->chgCData(oldp+909,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x39U][0U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+910,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x39U][0U])),6);
        bufp->chgBit(oldp+911,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3aU][0x11U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+912,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3aU][0x11U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+913,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3aU][0x11U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+914,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3aU][0x11U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+915,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3aU][0x11U] 
                                      >> 0x15U))));
        bufp->chgCData(oldp+916,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3aU][0x11U] 
                                           >> 0xeU))),7);
        bufp->chgBit(oldp+917,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3aU][0x11U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+918,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3aU][0x11U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][0x10U] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+919,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3aU][0x10U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][0xfU] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+920,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3aU][0xfU] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][0xeU] 
                                     >> 0xdU))),32);
        bufp->chgCData(oldp+921,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3aU][0xeU] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+922,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3aU][0xeU] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+923,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3aU][0xeU] 
                                      >> 1U))));
        bufp->chgIData(oldp+924,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3aU][0xeU] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][0xdU] 
                                     >> 1U))),32);
        bufp->chgCData(oldp+925,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3aU][0xdU] 
                                         << 2U) | (
                                                   vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                   [0x3aU][0xcU] 
                                                   >> 0x1eU)))),3);
        bufp->chgIData(oldp+926,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3aU][0xcU] << 2U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][0xbU] 
                                     >> 0x1eU))),32);
        bufp->chgBit(oldp+927,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3aU][0xbU] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+928,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3aU][0xbU] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+929,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3aU][0xbU] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+930,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3aU][0xbU] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+931,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3aU][0xbU] 
                                           >> 0xfU))),7);
        bufp->chgCData(oldp+932,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3aU][0xbU] 
                                           >> 8U))),7);
        bufp->chgIData(oldp+933,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3aU][0xbU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][0xaU] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+934,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3aU][0xaU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][9U] >> 8U))),32);
        bufp->chgIData(oldp+935,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3aU][9U] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][8U] >> 8U))),32);
        bufp->chgBit(oldp+936,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3aU][8U] >> 7U))));
        bufp->chgBit(oldp+937,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3aU][8U] >> 6U))));
        bufp->chgCData(oldp+938,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3aU][8U] 
                                           >> 1U))),5);
        bufp->chgCData(oldp+939,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3aU][8U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                              [0x3aU][7U] 
                                              >> 0x1cU)))),5);
        bufp->chgIData(oldp+940,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3aU][7U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+941,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3aU][6U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+942,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3aU][5U] 
                                           >> 0x16U))),6);
        bufp->chgIData(oldp+943,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3aU][5U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+944,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3aU][4U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+945,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3aU][3U] 
                                          >> 0x12U))),4);
        bufp->chgCData(oldp+946,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3aU][3U] 
                                          >> 0xeU))),4);
        bufp->chgIData(oldp+947,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3aU][3U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+948,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3aU][2U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+949,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3aU][1U] >> 0xdU))));
        bufp->chgBit(oldp+950,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3aU][1U] >> 0xcU))));
        bufp->chgBit(oldp+951,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3aU][1U] >> 0xbU))));
        bufp->chgBit(oldp+952,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3aU][1U] >> 0xaU))));
        bufp->chgIData(oldp+953,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3aU][1U] << 0x16U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3aU][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+954,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3aU][0U] >> 9U))));
        bufp->chgCData(oldp+955,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                        [0x3aU][0U] 
                                        >> 6U))),3);
        bufp->chgCData(oldp+956,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                  [0x3aU][0U])),6);
        bufp->chgBit(oldp+957,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3bU][0x11U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+958,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3bU][0x11U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+959,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3bU][0x11U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+960,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3bU][0x11U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+961,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3bU][0x11U] 
                                      >> 0x15U))));
        bufp->chgCData(oldp+962,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3bU][0x11U] 
                                           >> 0xeU))),7);
        bufp->chgBit(oldp+963,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3bU][0x11U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+964,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3bU][0x11U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][0x10U] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+965,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3bU][0x10U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][0xfU] 
                                     >> 0xdU))),32);
        bufp->chgIData(oldp+966,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3bU][0xfU] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][0xeU] 
                                     >> 0xdU))),32);
        bufp->chgCData(oldp+967,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3bU][0xeU] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+968,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3bU][0xeU] 
                                           >> 2U))),7);
        bufp->chgBit(oldp+969,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3bU][0xeU] 
                                      >> 1U))));
        bufp->chgIData(oldp+970,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3bU][0xeU] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][0xdU] 
                                     >> 1U))),32);
        bufp->chgCData(oldp+971,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3bU][0xdU] 
                                         << 2U) | (
                                                   vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                   [0x3bU][0xcU] 
                                                   >> 0x1eU)))),3);
        bufp->chgIData(oldp+972,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3bU][0xcU] << 2U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][0xbU] 
                                     >> 0x1eU))),32);
        bufp->chgBit(oldp+973,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3bU][0xbU] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+974,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3bU][0xbU] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+975,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3bU][0xbU] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+976,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3bU][0xbU] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+977,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3bU][0xbU] 
                                           >> 0xfU))),7);
        bufp->chgCData(oldp+978,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3bU][0xbU] 
                                           >> 8U))),7);
        bufp->chgIData(oldp+979,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3bU][0xbU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][0xaU] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+980,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3bU][0xaU] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][9U] >> 8U))),32);
        bufp->chgIData(oldp+981,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3bU][9U] << 0x18U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][8U] >> 8U))),32);
        bufp->chgBit(oldp+982,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3bU][8U] >> 7U))));
        bufp->chgBit(oldp+983,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3bU][8U] >> 6U))));
        bufp->chgCData(oldp+984,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3bU][8U] 
                                           >> 1U))),5);
        bufp->chgCData(oldp+985,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3bU][8U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                              [0x3bU][7U] 
                                              >> 0x1cU)))),5);
        bufp->chgIData(oldp+986,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3bU][7U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+987,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3bU][6U] << 4U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+988,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3bU][5U] 
                                           >> 0x16U))),6);
        bufp->chgIData(oldp+989,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3bU][5U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+990,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3bU][4U] << 0xaU) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+991,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3bU][3U] 
                                          >> 0x12U))),4);
        bufp->chgCData(oldp+992,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3bU][3U] 
                                          >> 0xeU))),4);
        bufp->chgIData(oldp+993,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3bU][3U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+994,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3bU][2U] << 0x12U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+995,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3bU][1U] >> 0xdU))));
        bufp->chgBit(oldp+996,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3bU][1U] >> 0xcU))));
        bufp->chgBit(oldp+997,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3bU][1U] >> 0xbU))));
        bufp->chgBit(oldp+998,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3bU][1U] >> 0xaU))));
        bufp->chgIData(oldp+999,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3bU][1U] << 0x16U) 
                                  | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                     [0x3bU][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+1000,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3bU][0U] 
                                       >> 9U))));
        bufp->chgCData(oldp+1001,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3bU][0U] 
                                         >> 6U))),3);
        bufp->chgCData(oldp+1002,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3bU][0U])),6);
        bufp->chgBit(oldp+1003,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3cU][0x11U] 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1004,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3cU][0x11U] 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1005,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3cU][0x11U] 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1006,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3cU][0x11U] 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1007,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3cU][0x11U] 
                                       >> 0x15U))));
        bufp->chgCData(oldp+1008,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3cU][0x11U] 
                                            >> 0xeU))),7);
        bufp->chgBit(oldp+1009,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3cU][0x11U] 
                                       >> 0xdU))));
        bufp->chgIData(oldp+1010,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][0x11U] 
                                    << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                 [0x3cU][0x10U] 
                                                 >> 0xdU))),32);
        bufp->chgIData(oldp+1011,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][0x10U] 
                                    << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                 [0x3cU][0xfU] 
                                                 >> 0xdU))),32);
        bufp->chgIData(oldp+1012,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][0xfU] << 0x13U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3cU][0xeU] 
                                      >> 0xdU))),32);
        bufp->chgCData(oldp+1013,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3cU][0xeU] 
                                           >> 9U))),4);
        bufp->chgCData(oldp+1014,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3cU][0xeU] 
                                            >> 2U))),7);
        bufp->chgBit(oldp+1015,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3cU][0xeU] 
                                       >> 1U))));
        bufp->chgIData(oldp+1016,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][0xeU] << 0x1fU) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3cU][0xdU] 
                                      >> 1U))),32);
        bufp->chgCData(oldp+1017,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3cU][0xdU] 
                                          << 2U) | 
                                         (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3cU][0xcU] 
                                          >> 0x1eU)))),3);
        bufp->chgIData(oldp+1018,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][0xcU] << 2U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3cU][0xbU] 
                                      >> 0x1eU))),32);
        bufp->chgBit(oldp+1019,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3cU][0xbU] 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1020,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3cU][0xbU] 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1021,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3cU][0xbU] 
                                       >> 0x1bU))));
        bufp->chgCData(oldp+1022,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3cU][0xbU] 
                                            >> 0x16U))),5);
        bufp->chgCData(oldp+1023,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3cU][0xbU] 
                                            >> 0xfU))),7);
        bufp->chgCData(oldp+1024,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3cU][0xbU] 
                                            >> 8U))),7);
        bufp->chgIData(oldp+1025,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][0xbU] << 0x18U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3cU][0xaU] 
                                      >> 8U))),32);
        bufp->chgIData(oldp+1026,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][0xaU] << 0x18U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3cU][9U] >> 8U))),32);
        bufp->chgIData(oldp+1027,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][9U] << 0x18U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3cU][8U] >> 8U))),32);
        bufp->chgBit(oldp+1028,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3cU][8U] 
                                       >> 7U))));
        bufp->chgBit(oldp+1029,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3cU][8U] 
                                       >> 6U))));
        bufp->chgCData(oldp+1030,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3cU][8U] 
                                            >> 1U))),5);
        bufp->chgCData(oldp+1031,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                             [0x3cU][8U] 
                                             << 4U) 
                                            | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                               [0x3cU][7U] 
                                               >> 0x1cU)))),5);
        bufp->chgIData(oldp+1032,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][7U] << 4U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3cU][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+1033,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][6U] << 4U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3cU][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+1034,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3cU][5U] 
                                            >> 0x16U))),6);
        bufp->chgIData(oldp+1035,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][5U] << 0xaU) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3cU][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+1036,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][4U] << 0xaU) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3cU][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+1037,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3cU][3U] 
                                           >> 0x12U))),4);
        bufp->chgCData(oldp+1038,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3cU][3U] 
                                           >> 0xeU))),4);
        bufp->chgIData(oldp+1039,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][3U] << 0x12U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3cU][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+1040,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][2U] << 0x12U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3cU][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+1041,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3cU][1U] 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1042,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3cU][1U] 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1043,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3cU][1U] 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1044,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3cU][1U] 
                                       >> 0xaU))));
        bufp->chgIData(oldp+1045,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3cU][1U] << 0x16U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3cU][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+1046,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3cU][0U] 
                                       >> 9U))));
        bufp->chgCData(oldp+1047,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3cU][0U] 
                                         >> 6U))),3);
        bufp->chgCData(oldp+1048,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3cU][0U])),6);
        bufp->chgBit(oldp+1049,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3dU][0x11U] 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1050,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3dU][0x11U] 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1051,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3dU][0x11U] 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1052,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3dU][0x11U] 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1053,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3dU][0x11U] 
                                       >> 0x15U))));
        bufp->chgCData(oldp+1054,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3dU][0x11U] 
                                            >> 0xeU))),7);
        bufp->chgBit(oldp+1055,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3dU][0x11U] 
                                       >> 0xdU))));
        bufp->chgIData(oldp+1056,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][0x11U] 
                                    << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                 [0x3dU][0x10U] 
                                                 >> 0xdU))),32);
        bufp->chgIData(oldp+1057,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][0x10U] 
                                    << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                 [0x3dU][0xfU] 
                                                 >> 0xdU))),32);
        bufp->chgIData(oldp+1058,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][0xfU] << 0x13U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3dU][0xeU] 
                                      >> 0xdU))),32);
        bufp->chgCData(oldp+1059,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3dU][0xeU] 
                                           >> 9U))),4);
        bufp->chgCData(oldp+1060,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3dU][0xeU] 
                                            >> 2U))),7);
        bufp->chgBit(oldp+1061,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3dU][0xeU] 
                                       >> 1U))));
        bufp->chgIData(oldp+1062,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][0xeU] << 0x1fU) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3dU][0xdU] 
                                      >> 1U))),32);
        bufp->chgCData(oldp+1063,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3dU][0xdU] 
                                          << 2U) | 
                                         (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3dU][0xcU] 
                                          >> 0x1eU)))),3);
        bufp->chgIData(oldp+1064,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][0xcU] << 2U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3dU][0xbU] 
                                      >> 0x1eU))),32);
        bufp->chgBit(oldp+1065,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3dU][0xbU] 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1066,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3dU][0xbU] 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1067,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3dU][0xbU] 
                                       >> 0x1bU))));
        bufp->chgCData(oldp+1068,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3dU][0xbU] 
                                            >> 0x16U))),5);
        bufp->chgCData(oldp+1069,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3dU][0xbU] 
                                            >> 0xfU))),7);
        bufp->chgCData(oldp+1070,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3dU][0xbU] 
                                            >> 8U))),7);
        bufp->chgIData(oldp+1071,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][0xbU] << 0x18U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3dU][0xaU] 
                                      >> 8U))),32);
        bufp->chgIData(oldp+1072,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][0xaU] << 0x18U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3dU][9U] >> 8U))),32);
        bufp->chgIData(oldp+1073,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][9U] << 0x18U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3dU][8U] >> 8U))),32);
        bufp->chgBit(oldp+1074,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3dU][8U] 
                                       >> 7U))));
        bufp->chgBit(oldp+1075,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3dU][8U] 
                                       >> 6U))));
        bufp->chgCData(oldp+1076,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3dU][8U] 
                                            >> 1U))),5);
        bufp->chgCData(oldp+1077,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                             [0x3dU][8U] 
                                             << 4U) 
                                            | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                               [0x3dU][7U] 
                                               >> 0x1cU)))),5);
        bufp->chgIData(oldp+1078,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][7U] << 4U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3dU][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+1079,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][6U] << 4U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3dU][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+1080,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3dU][5U] 
                                            >> 0x16U))),6);
        bufp->chgIData(oldp+1081,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][5U] << 0xaU) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3dU][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+1082,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][4U] << 0xaU) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3dU][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+1083,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3dU][3U] 
                                           >> 0x12U))),4);
        bufp->chgCData(oldp+1084,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3dU][3U] 
                                           >> 0xeU))),4);
        bufp->chgIData(oldp+1085,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][3U] << 0x12U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3dU][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+1086,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][2U] << 0x12U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3dU][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+1087,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3dU][1U] 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1088,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3dU][1U] 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1089,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3dU][1U] 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1090,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3dU][1U] 
                                       >> 0xaU))));
        bufp->chgIData(oldp+1091,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3dU][1U] << 0x16U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3dU][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+1092,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3dU][0U] 
                                       >> 9U))));
        bufp->chgCData(oldp+1093,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3dU][0U] 
                                         >> 6U))),3);
        bufp->chgCData(oldp+1094,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3dU][0U])),6);
        bufp->chgBit(oldp+1095,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3eU][0x11U] 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1096,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3eU][0x11U] 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1097,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3eU][0x11U] 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1098,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3eU][0x11U] 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1099,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3eU][0x11U] 
                                       >> 0x15U))));
        bufp->chgCData(oldp+1100,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3eU][0x11U] 
                                            >> 0xeU))),7);
        bufp->chgBit(oldp+1101,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3eU][0x11U] 
                                       >> 0xdU))));
        bufp->chgIData(oldp+1102,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][0x11U] 
                                    << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                 [0x3eU][0x10U] 
                                                 >> 0xdU))),32);
        bufp->chgIData(oldp+1103,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][0x10U] 
                                    << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                 [0x3eU][0xfU] 
                                                 >> 0xdU))),32);
        bufp->chgIData(oldp+1104,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][0xfU] << 0x13U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3eU][0xeU] 
                                      >> 0xdU))),32);
        bufp->chgCData(oldp+1105,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3eU][0xeU] 
                                           >> 9U))),4);
        bufp->chgCData(oldp+1106,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3eU][0xeU] 
                                            >> 2U))),7);
        bufp->chgBit(oldp+1107,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3eU][0xeU] 
                                       >> 1U))));
        bufp->chgIData(oldp+1108,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][0xeU] << 0x1fU) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3eU][0xdU] 
                                      >> 1U))),32);
        bufp->chgCData(oldp+1109,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3eU][0xdU] 
                                          << 2U) | 
                                         (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3eU][0xcU] 
                                          >> 0x1eU)))),3);
        bufp->chgIData(oldp+1110,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][0xcU] << 2U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3eU][0xbU] 
                                      >> 0x1eU))),32);
        bufp->chgBit(oldp+1111,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3eU][0xbU] 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1112,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3eU][0xbU] 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1113,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3eU][0xbU] 
                                       >> 0x1bU))));
        bufp->chgCData(oldp+1114,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3eU][0xbU] 
                                            >> 0x16U))),5);
        bufp->chgCData(oldp+1115,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3eU][0xbU] 
                                            >> 0xfU))),7);
        bufp->chgCData(oldp+1116,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3eU][0xbU] 
                                            >> 8U))),7);
        bufp->chgIData(oldp+1117,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][0xbU] << 0x18U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3eU][0xaU] 
                                      >> 8U))),32);
        bufp->chgIData(oldp+1118,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][0xaU] << 0x18U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3eU][9U] >> 8U))),32);
        bufp->chgIData(oldp+1119,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][9U] << 0x18U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3eU][8U] >> 8U))),32);
        bufp->chgBit(oldp+1120,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3eU][8U] 
                                       >> 7U))));
        bufp->chgBit(oldp+1121,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3eU][8U] 
                                       >> 6U))));
        bufp->chgCData(oldp+1122,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3eU][8U] 
                                            >> 1U))),5);
        bufp->chgCData(oldp+1123,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                             [0x3eU][8U] 
                                             << 4U) 
                                            | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                               [0x3eU][7U] 
                                               >> 0x1cU)))),5);
        bufp->chgIData(oldp+1124,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][7U] << 4U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3eU][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+1125,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][6U] << 4U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3eU][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+1126,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3eU][5U] 
                                            >> 0x16U))),6);
        bufp->chgIData(oldp+1127,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][5U] << 0xaU) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3eU][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+1128,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][4U] << 0xaU) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3eU][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+1129,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3eU][3U] 
                                           >> 0x12U))),4);
        bufp->chgCData(oldp+1130,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3eU][3U] 
                                           >> 0xeU))),4);
        bufp->chgIData(oldp+1131,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][3U] << 0x12U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3eU][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+1132,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][2U] << 0x12U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3eU][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+1133,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3eU][1U] 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1134,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3eU][1U] 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1135,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3eU][1U] 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1136,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3eU][1U] 
                                       >> 0xaU))));
        bufp->chgIData(oldp+1137,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3eU][1U] << 0x16U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3eU][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+1138,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3eU][0U] 
                                       >> 9U))));
        bufp->chgCData(oldp+1139,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3eU][0U] 
                                         >> 6U))),3);
        bufp->chgCData(oldp+1140,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3eU][0U])),6);
        bufp->chgBit(oldp+1141,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3fU][0x11U] 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1142,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3fU][0x11U] 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1143,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3fU][0x11U] 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1144,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3fU][0x11U] 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1145,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3fU][0x11U] 
                                       >> 0x15U))));
        bufp->chgCData(oldp+1146,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3fU][0x11U] 
                                            >> 0xeU))),7);
        bufp->chgBit(oldp+1147,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3fU][0x11U] 
                                       >> 0xdU))));
        bufp->chgIData(oldp+1148,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][0x11U] 
                                    << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                 [0x3fU][0x10U] 
                                                 >> 0xdU))),32);
        bufp->chgIData(oldp+1149,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][0x10U] 
                                    << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                                 [0x3fU][0xfU] 
                                                 >> 0xdU))),32);
        bufp->chgIData(oldp+1150,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][0xfU] << 0x13U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3fU][0xeU] 
                                      >> 0xdU))),32);
        bufp->chgCData(oldp+1151,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3fU][0xeU] 
                                           >> 9U))),4);
        bufp->chgCData(oldp+1152,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3fU][0xeU] 
                                            >> 2U))),7);
        bufp->chgBit(oldp+1153,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3fU][0xeU] 
                                       >> 1U))));
        bufp->chgIData(oldp+1154,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][0xeU] << 0x1fU) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3fU][0xdU] 
                                      >> 1U))),32);
        bufp->chgCData(oldp+1155,((7U & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3fU][0xdU] 
                                          << 2U) | 
                                         (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                          [0x3fU][0xcU] 
                                          >> 0x1eU)))),3);
        bufp->chgIData(oldp+1156,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][0xcU] << 2U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3fU][0xbU] 
                                      >> 0x1eU))),32);
        bufp->chgBit(oldp+1157,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3fU][0xbU] 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1158,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3fU][0xbU] 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1159,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3fU][0xbU] 
                                       >> 0x1bU))));
        bufp->chgCData(oldp+1160,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3fU][0xbU] 
                                            >> 0x16U))),5);
        bufp->chgCData(oldp+1161,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3fU][0xbU] 
                                            >> 0xfU))),7);
        bufp->chgCData(oldp+1162,((0x7fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3fU][0xbU] 
                                            >> 8U))),7);
        bufp->chgIData(oldp+1163,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][0xbU] << 0x18U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3fU][0xaU] 
                                      >> 8U))),32);
        bufp->chgIData(oldp+1164,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][0xaU] << 0x18U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3fU][9U] >> 8U))),32);
        bufp->chgIData(oldp+1165,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][9U] << 0x18U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3fU][8U] >> 8U))),32);
        bufp->chgBit(oldp+1166,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3fU][8U] 
                                       >> 7U))));
        bufp->chgBit(oldp+1167,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3fU][8U] 
                                       >> 6U))));
        bufp->chgCData(oldp+1168,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3fU][8U] 
                                            >> 1U))),5);
        bufp->chgCData(oldp+1169,((0x1fU & ((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                             [0x3fU][8U] 
                                             << 4U) 
                                            | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                               [0x3fU][7U] 
                                               >> 0x1cU)))),5);
        bufp->chgIData(oldp+1170,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][7U] << 4U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3fU][6U] >> 0x1cU))),32);
        bufp->chgIData(oldp+1171,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][6U] << 4U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3fU][5U] >> 0x1cU))),32);
        bufp->chgCData(oldp+1172,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                            [0x3fU][5U] 
                                            >> 0x16U))),6);
        bufp->chgIData(oldp+1173,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][5U] << 0xaU) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3fU][4U] >> 0x16U))),32);
        bufp->chgIData(oldp+1174,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][4U] << 0xaU) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3fU][3U] >> 0x16U))),32);
        bufp->chgCData(oldp+1175,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3fU][3U] 
                                           >> 0x12U))),4);
        bufp->chgCData(oldp+1176,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                           [0x3fU][3U] 
                                           >> 0xeU))),4);
        bufp->chgIData(oldp+1177,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][3U] << 0x12U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3fU][2U] >> 0xeU))),32);
        bufp->chgIData(oldp+1178,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][2U] << 0x12U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3fU][1U] >> 0xeU))),32);
        bufp->chgBit(oldp+1179,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3fU][1U] 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1180,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3fU][1U] 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1181,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3fU][1U] 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1182,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3fU][1U] 
                                       >> 0xaU))));
        bufp->chgIData(oldp+1183,(((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                    [0x3fU][1U] << 0x16U) 
                                   | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                      [0x3fU][0U] >> 0xaU))),32);
        bufp->chgBit(oldp+1184,((1U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                       [0x3fU][0U] 
                                       >> 9U))));
        bufp->chgCData(oldp+1185,((7U & (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                         [0x3fU][0U] 
                                         >> 6U))),3);
        bufp->chgCData(oldp+1186,((0x3fU & vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq
                                   [0x3fU][0U])),6);
        bufp->chgCData(oldp+1187,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_wrPtr),7);
        bufp->chgCData(oldp+1188,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_rdPtr),7);
        bufp->chgBit(oldp+1189,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_empty));
        bufp->chgCData(oldp+1190,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[0]),6);
        bufp->chgCData(oldp+1191,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[1]),6);
        bufp->chgCData(oldp+1192,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[2]),6);
        bufp->chgCData(oldp+1193,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[3]),6);
        bufp->chgCData(oldp+1194,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[4]),6);
        bufp->chgCData(oldp+1195,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[5]),6);
        bufp->chgCData(oldp+1196,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[6]),6);
        bufp->chgCData(oldp+1197,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[7]),6);
        bufp->chgCData(oldp+1198,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[8]),6);
        bufp->chgCData(oldp+1199,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[9]),6);
        bufp->chgCData(oldp+1200,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[10]),6);
        bufp->chgCData(oldp+1201,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[11]),6);
        bufp->chgCData(oldp+1202,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[12]),6);
        bufp->chgCData(oldp+1203,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[13]),6);
        bufp->chgCData(oldp+1204,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[14]),6);
        bufp->chgCData(oldp+1205,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[15]),6);
        bufp->chgCData(oldp+1206,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[16]),6);
        bufp->chgCData(oldp+1207,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[17]),6);
        bufp->chgCData(oldp+1208,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[18]),6);
        bufp->chgCData(oldp+1209,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[19]),6);
        bufp->chgCData(oldp+1210,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[20]),6);
        bufp->chgCData(oldp+1211,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[21]),6);
        bufp->chgCData(oldp+1212,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[22]),6);
        bufp->chgCData(oldp+1213,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[23]),6);
        bufp->chgCData(oldp+1214,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[24]),6);
        bufp->chgCData(oldp+1215,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[25]),6);
        bufp->chgCData(oldp+1216,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[26]),6);
        bufp->chgCData(oldp+1217,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[27]),6);
        bufp->chgCData(oldp+1218,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[28]),6);
        bufp->chgCData(oldp+1219,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[29]),6);
        bufp->chgCData(oldp+1220,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[30]),6);
        bufp->chgCData(oldp+1221,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[31]),6);
        bufp->chgCData(oldp+1222,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[32]),6);
        bufp->chgCData(oldp+1223,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[33]),6);
        bufp->chgCData(oldp+1224,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[34]),6);
        bufp->chgCData(oldp+1225,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[35]),6);
        bufp->chgCData(oldp+1226,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[36]),6);
        bufp->chgCData(oldp+1227,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[37]),6);
        bufp->chgCData(oldp+1228,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[38]),6);
        bufp->chgCData(oldp+1229,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[39]),6);
        bufp->chgCData(oldp+1230,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[40]),6);
        bufp->chgCData(oldp+1231,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[41]),6);
        bufp->chgCData(oldp+1232,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[42]),6);
        bufp->chgCData(oldp+1233,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[43]),6);
        bufp->chgCData(oldp+1234,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[44]),6);
        bufp->chgCData(oldp+1235,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[45]),6);
        bufp->chgCData(oldp+1236,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[46]),6);
        bufp->chgCData(oldp+1237,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[47]),6);
        bufp->chgCData(oldp+1238,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[48]),6);
        bufp->chgCData(oldp+1239,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[49]),6);
        bufp->chgCData(oldp+1240,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[50]),6);
        bufp->chgCData(oldp+1241,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[51]),6);
        bufp->chgCData(oldp+1242,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[52]),6);
        bufp->chgCData(oldp+1243,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[53]),6);
        bufp->chgCData(oldp+1244,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[54]),6);
        bufp->chgCData(oldp+1245,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[55]),6);
        bufp->chgCData(oldp+1246,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[56]),6);
        bufp->chgCData(oldp+1247,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[57]),6);
        bufp->chgCData(oldp+1248,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[58]),6);
        bufp->chgCData(oldp+1249,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[59]),6);
        bufp->chgCData(oldp+1250,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[60]),6);
        bufp->chgCData(oldp+1251,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[61]),6);
        bufp->chgCData(oldp+1252,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[62]),6);
        bufp->chgCData(oldp+1253,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_age[63]),6);
        bufp->chgCData(oldp+1254,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[0]),6);
        bufp->chgCData(oldp+1255,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[1]),6);
        bufp->chgCData(oldp+1256,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[2]),6);
        bufp->chgCData(oldp+1257,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[3]),6);
        bufp->chgCData(oldp+1258,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[4]),6);
        bufp->chgCData(oldp+1259,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[5]),6);
        bufp->chgCData(oldp+1260,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[6]),6);
        bufp->chgCData(oldp+1261,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[7]),6);
        bufp->chgCData(oldp+1262,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[8]),6);
        bufp->chgCData(oldp+1263,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[9]),6);
        bufp->chgCData(oldp+1264,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[10]),6);
        bufp->chgCData(oldp+1265,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[11]),6);
        bufp->chgCData(oldp+1266,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[12]),6);
        bufp->chgCData(oldp+1267,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[13]),6);
        bufp->chgCData(oldp+1268,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[14]),6);
        bufp->chgCData(oldp+1269,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[15]),6);
        bufp->chgCData(oldp+1270,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[16]),6);
        bufp->chgCData(oldp+1271,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[17]),6);
        bufp->chgCData(oldp+1272,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[18]),6);
        bufp->chgCData(oldp+1273,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[19]),6);
        bufp->chgCData(oldp+1274,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[20]),6);
        bufp->chgCData(oldp+1275,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[21]),6);
        bufp->chgCData(oldp+1276,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[22]),6);
        bufp->chgCData(oldp+1277,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[23]),6);
        bufp->chgCData(oldp+1278,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[24]),6);
        bufp->chgCData(oldp+1279,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[25]),6);
        bufp->chgCData(oldp+1280,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[26]),6);
        bufp->chgCData(oldp+1281,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[27]),6);
        bufp->chgCData(oldp+1282,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[28]),6);
        bufp->chgCData(oldp+1283,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[29]),6);
        bufp->chgCData(oldp+1284,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[30]),6);
        bufp->chgCData(oldp+1285,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[31]),6);
        bufp->chgCData(oldp+1286,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[32]),6);
        bufp->chgCData(oldp+1287,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[33]),6);
        bufp->chgCData(oldp+1288,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[34]),6);
        bufp->chgCData(oldp+1289,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[35]),6);
        bufp->chgCData(oldp+1290,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[36]),6);
        bufp->chgCData(oldp+1291,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[37]),6);
        bufp->chgCData(oldp+1292,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[38]),6);
        bufp->chgCData(oldp+1293,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[39]),6);
        bufp->chgCData(oldp+1294,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[40]),6);
        bufp->chgCData(oldp+1295,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[41]),6);
        bufp->chgCData(oldp+1296,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[42]),6);
        bufp->chgCData(oldp+1297,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[43]),6);
        bufp->chgCData(oldp+1298,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[44]),6);
        bufp->chgCData(oldp+1299,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[45]),6);
        bufp->chgCData(oldp+1300,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[46]),6);
        bufp->chgCData(oldp+1301,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[47]),6);
        bufp->chgCData(oldp+1302,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[48]),6);
        bufp->chgCData(oldp+1303,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[49]),6);
        bufp->chgCData(oldp+1304,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[50]),6);
        bufp->chgCData(oldp+1305,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[51]),6);
        bufp->chgCData(oldp+1306,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[52]),6);
        bufp->chgCData(oldp+1307,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[53]),6);
        bufp->chgCData(oldp+1308,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[54]),6);
        bufp->chgCData(oldp+1309,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[55]),6);
        bufp->chgCData(oldp+1310,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[56]),6);
        bufp->chgCData(oldp+1311,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[57]),6);
        bufp->chgCData(oldp+1312,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[58]),6);
        bufp->chgCData(oldp+1313,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[59]),6);
        bufp->chgCData(oldp+1314,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[60]),6);
        bufp->chgCData(oldp+1315,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[61]),6);
        bufp->chgCData(oldp+1316,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[62]),6);
        bufp->chgCData(oldp+1317,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_age[63]),6);
        bufp->chgBit(oldp+1318,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[0]));
        bufp->chgBit(oldp+1319,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[1]));
        bufp->chgBit(oldp+1320,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[2]));
        bufp->chgBit(oldp+1321,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[3]));
        bufp->chgBit(oldp+1322,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[4]));
        bufp->chgBit(oldp+1323,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[5]));
        bufp->chgBit(oldp+1324,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[6]));
        bufp->chgBit(oldp+1325,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[7]));
        bufp->chgBit(oldp+1326,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[8]));
        bufp->chgBit(oldp+1327,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[9]));
        bufp->chgBit(oldp+1328,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[10]));
        bufp->chgBit(oldp+1329,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[11]));
        bufp->chgBit(oldp+1330,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[12]));
        bufp->chgBit(oldp+1331,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[13]));
        bufp->chgBit(oldp+1332,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[14]));
        bufp->chgBit(oldp+1333,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[15]));
        bufp->chgBit(oldp+1334,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[16]));
        bufp->chgBit(oldp+1335,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[17]));
        bufp->chgBit(oldp+1336,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[18]));
        bufp->chgBit(oldp+1337,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[19]));
        bufp->chgBit(oldp+1338,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[20]));
        bufp->chgBit(oldp+1339,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[21]));
        bufp->chgBit(oldp+1340,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[22]));
        bufp->chgBit(oldp+1341,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[23]));
        bufp->chgBit(oldp+1342,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[24]));
        bufp->chgBit(oldp+1343,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[25]));
        bufp->chgBit(oldp+1344,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[26]));
        bufp->chgBit(oldp+1345,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[27]));
        bufp->chgBit(oldp+1346,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[28]));
        bufp->chgBit(oldp+1347,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[29]));
        bufp->chgBit(oldp+1348,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[30]));
        bufp->chgBit(oldp+1349,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[31]));
        bufp->chgBit(oldp+1350,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[32]));
        bufp->chgBit(oldp+1351,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[33]));
        bufp->chgBit(oldp+1352,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[34]));
        bufp->chgBit(oldp+1353,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[35]));
        bufp->chgBit(oldp+1354,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[36]));
        bufp->chgBit(oldp+1355,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[37]));
        bufp->chgBit(oldp+1356,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[38]));
        bufp->chgBit(oldp+1357,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[39]));
        bufp->chgBit(oldp+1358,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[40]));
        bufp->chgBit(oldp+1359,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[41]));
        bufp->chgBit(oldp+1360,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[42]));
        bufp->chgBit(oldp+1361,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[43]));
        bufp->chgBit(oldp+1362,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[44]));
        bufp->chgBit(oldp+1363,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[45]));
        bufp->chgBit(oldp+1364,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[46]));
        bufp->chgBit(oldp+1365,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[47]));
        bufp->chgBit(oldp+1366,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[48]));
        bufp->chgBit(oldp+1367,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[49]));
        bufp->chgBit(oldp+1368,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[50]));
        bufp->chgBit(oldp+1369,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[51]));
        bufp->chgBit(oldp+1370,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[52]));
        bufp->chgBit(oldp+1371,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[53]));
        bufp->chgBit(oldp+1372,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[54]));
        bufp->chgBit(oldp+1373,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[55]));
        bufp->chgBit(oldp+1374,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[56]));
        bufp->chgBit(oldp+1375,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[57]));
        bufp->chgBit(oldp+1376,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[58]));
        bufp->chgBit(oldp+1377,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[59]));
        bufp->chgBit(oldp+1378,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[60]));
        bufp->chgBit(oldp+1379,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[61]));
        bufp->chgBit(oldp+1380,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[62]));
        bufp->chgBit(oldp+1381,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_addr_valid_prev[63]));
        bufp->chgCData(oldp+1382,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_free_idx),6);
        bufp->chgBit(oldp+1383,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_has_free));
        bufp->chgCData(oldp+1384,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_disp_s),6);
        bufp->chgIData(oldp+1385,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_disp_pr1v),32);
        bufp->chgIData(oldp+1386,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_disp_addr_c),32);
        bufp->chgIData(oldp+1387,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_pr1_a),32);
        bufp->chgIData(oldp+1388,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_pr2_av),32);
        bufp->chgBit(oldp+1389,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_pr2_addr_ok));
        bufp->chgCData(oldp+1390,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_disp_s),6);
        bufp->chgIData(oldp+1391,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_disp_a),32);
        bufp->chgCData(oldp+1392,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__swb_h),6);
        bufp->chgIData(oldp+1393,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_ff__DOT__unnamedblk18__DOT__i),32);
        bufp->chgIData(oldp+1394,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_ff__DOT__unnamedblk19__DOT__i),32);
        bufp->chgIData(oldp+1395,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_ff__DOT__unnamedblk20__DOT__i),32);
        bufp->chgIData(oldp+1396,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_ff__DOT__unnamedblk21__DOT__i),32);
        bufp->chgIData(oldp+1397,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_ff__DOT__unnamedblk22__DOT__i),32);
        bufp->chgIData(oldp+1398,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__lq_ff__DOT__unnamedblk23__DOT__i),32);
        bufp->chgIData(oldp+1399,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_ff__DOT__unnamedblk24__DOT__j),32);
        bufp->chgIData(oldp+1400,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_ff__DOT__unnamedblk25__DOT__j),32);
        bufp->chgIData(oldp+1401,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_ff__DOT__unnamedblk26__DOT__j),32);
        bufp->chgIData(oldp+1402,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_prev_ff__DOT__unnamedblk11__DOT__j),32);
        bufp->chgIData(oldp+1403,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__sq_prev_ff__DOT__unnamedblk12__DOT__j),32);
        bufp->chgBit(oldp+1404,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+1405,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1406,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+1407,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+1408,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+1409,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[0U])),32);
        bufp->chgBit(oldp+1410,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+1411,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+1412,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+1413,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1414,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+1415,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1416,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+1417,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[0U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1418,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+1419,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+1420,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+1421,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+1422,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+1423,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+1424,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+1425,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+1426,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+1427,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+1428,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+1429,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+1430,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+1431,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+1432,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+1433,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+1434,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+1435,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+1436,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+1437,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+1438,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[0U])),32);
        bufp->chgBit(oldp+1439,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+1440,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1441,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+1442,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+1443,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+1444,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+1445,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+1446,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+1447,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+1448,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+1449,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+1450,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+1451,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+1452,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+1453,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+1454,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+1455,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+1456,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+1457,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+1458,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+1459,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+1460,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+1461,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])),32);
        bufp->chgBit(oldp+1462,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+1463,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+1464,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+1465,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+1466,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+1467,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+1468,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+1469,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[0U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+1470,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+1471,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+1472,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+1473,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+1474,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[0U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+1475,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+1476,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+1477,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+1478,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]
                                    : 0U)),32);
        bufp->chgBit(oldp+1479,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+1480,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+1481,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+1482,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+1483,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+1484,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+1485,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+1486,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+1487,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+1488,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+1489,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+1490,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+1491,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+1492,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+1493,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+1494,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+1495,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+1496,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+1497,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+1498,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+1499,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
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
        bufp->chgBit(oldp+1500,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+1501,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1502,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+1503,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+1504,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+1505,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+1506,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+1507,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+1508,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+1509,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+1510,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+1511,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+1512,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+1513,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+1514,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+1515,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+1516,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+1517,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+1518,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+1519,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+1520,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+1521,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])
                                    : 0U)),32);
        bufp->chgBit(oldp+1522,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+1523,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+1524,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+1525,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+1526,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+1527,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                    : 0U)),32);
        bufp->chgBit(oldp+1528,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+1529,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U] 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+1530,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+1531,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+1532,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+1533,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+1534,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+1535,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1536,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+1537,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1538,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+1539,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]
                                        : (((0x80000000U 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]) 
                                            & (0xffffffffU 
                                               == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                            ? 0U : 
                                           VL_MODDIVS_III(32, 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])))
                                    : 0U)),32);
        bufp->chgBit(oldp+1540,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+1541,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1542,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+1543,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+1544,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+1545,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+1546,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+1547,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+1548,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+1549,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+1550,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1551,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+1552,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1553,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+1554,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+1555,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+1556,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1557,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+1558,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1559,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+1560,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+1561,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+1562,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1563,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+1564,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1565,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+1566,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1567,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+1568,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1569,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+1570,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1571,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+1572,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+1573,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+1574,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+1575,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1576,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+1577,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       ^ VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+1578,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+1579,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+1580,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])),7);
        bufp->chgIData(oldp+1581,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])),32);
        bufp->chgIData(oldp+1582,(VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 0x14U))),32);
        bufp->chgIData(oldp+1583,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+1584,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   & VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1585,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])),32);
        bufp->chgIData(oldp+1586,(VL_EXTENDS_II(32,13, 
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
        bufp->chgBit(oldp+1587,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                 == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
        bufp->chgBit(oldp+1588,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
        bufp->chgBit(oldp+1589,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                 >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
        bufp->chgBit(oldp+1590,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+1591,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+1592,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                 != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
        bufp->chgIData(oldp+1593,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U], 0x10U)),32);
        bufp->chgCData(oldp+1594,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+1595,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])),2);
        bufp->chgIData(oldp+1596,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+1597,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 0xdU))),3);
        bufp->chgIData(oldp+1598,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+1599,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+1600,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+1601,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+1602,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1603,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+1604,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+1605,(VL_EXTENDS_II(32,9, 
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
        bufp->chgBit(oldp+1606,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])));
        bufp->chgBit(oldp+1607,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])));
        bufp->chgIData(oldp+1608,(VL_EXTENDS_II(32,12, 
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
        bufp->chgIData(oldp+1609,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+1610,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                             << 1U)) 
                                   | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                >> 7U)) 
                                      | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+1611,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+1612,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                             << 4U)) 
                                   | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                >> 7U)) 
                                      | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 2U))))),32);
        bufp->chgIData(oldp+1613,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+1614,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[0U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+1615,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+1616,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+1617,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                             >> 1U)) 
                                   | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                               >> 7U)))),32);
        bufp->chgIData(oldp+1618,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+1619,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                    ? 0xffffffffU : 
                                   (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])))),32);
        bufp->chgIData(oldp+1620,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
        bufp->chgIData(oldp+1621,(VL_EXTENDS_II(32,21, 
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
        bufp->chgCData(oldp+1622,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+1623,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+1624,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+1625,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])),32);
        bufp->chgIData(oldp+1626,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1627,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1628,((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])) 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1629,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   | VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1630,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]
                                    : (((0x80000000U 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]) 
                                        & (0xffffffffU 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                        ? 0U : VL_MODDIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])))),32);
        bufp->chgIData(oldp+1631,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]
                                    : VL_MODDIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
        bufp->chgIData(oldp+1632,(VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+1633,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+1634,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])),6);
        bufp->chgIData(oldp+1635,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
        bufp->chgCData(oldp+1636,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+1637,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 0x14U))),6);
        bufp->chgIData(oldp+1638,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1639,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+1640,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                             VL_EXTENDS_II(32,12, 
                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                            >> 0x14U)))),32);
        bufp->chgIData(oldp+1641,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   < VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1642,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+1643,(VL_SHIFTRS_III(32,32,5, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
        bufp->chgIData(oldp+1644,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+1645,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
        bufp->chgIData(oldp+1646,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1647,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   ^ VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                    >> 0x14U)))),32);
        bufp->chgBit(oldp+1648,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+1649,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1650,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+1651,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+1652,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+1653,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[1U])),32);
        bufp->chgBit(oldp+1654,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+1655,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+1656,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+1657,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1658,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+1659,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1660,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+1661,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[1U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1662,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+1663,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+1664,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+1665,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+1666,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+1667,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+1668,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+1669,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+1670,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+1671,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+1672,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+1673,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+1674,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+1675,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+1676,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+1677,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+1678,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+1679,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+1680,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+1681,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+1682,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[1U])),32);
        bufp->chgBit(oldp+1683,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+1684,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1685,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+1686,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+1687,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+1688,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+1689,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+1690,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+1691,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+1692,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+1693,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+1694,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+1695,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+1696,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+1697,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+1698,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+1699,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+1700,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+1701,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+1702,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+1703,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+1704,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+1705,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])),32);
        bufp->chgBit(oldp+1706,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+1707,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+1708,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+1709,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+1710,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+1711,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+1712,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+1713,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[1U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+1714,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+1715,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+1716,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+1717,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+1718,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[1U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+1719,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+1720,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+1721,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+1722,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]
                                    : 0U)),32);
        bufp->chgBit(oldp+1723,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+1724,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+1725,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+1726,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+1727,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+1728,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+1729,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+1730,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+1731,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+1732,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+1733,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+1734,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+1735,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+1736,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+1737,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+1738,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+1739,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+1740,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+1741,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+1742,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+1743,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
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
        bufp->chgBit(oldp+1744,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+1745,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1746,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+1747,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+1748,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+1749,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+1750,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+1751,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+1752,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+1753,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+1754,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+1755,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+1756,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+1757,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+1758,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+1759,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+1760,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+1761,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+1762,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+1763,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+1764,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+1765,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])
                                    : 0U)),32);
        bufp->chgBit(oldp+1766,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+1767,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+1768,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+1769,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+1770,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+1771,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                    : 0U)),32);
        bufp->chgBit(oldp+1772,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+1773,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U] 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+1774,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+1775,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+1776,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+1777,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+1778,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+1779,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1780,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+1781,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1782,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+1783,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]
                                        : (((0x80000000U 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]) 
                                            & (0xffffffffU 
                                               == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                            ? 0U : 
                                           VL_MODDIVS_III(32, 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])))
                                    : 0U)),32);
        bufp->chgBit(oldp+1784,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+1785,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1786,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+1787,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+1788,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+1789,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+1790,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+1791,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+1792,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+1793,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+1794,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1795,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+1796,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1797,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+1798,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+1799,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+1800,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1801,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+1802,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1803,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+1804,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+1805,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+1806,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1807,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+1808,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1809,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+1810,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1811,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+1812,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1813,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+1814,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1815,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+1816,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+1817,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+1818,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+1819,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1820,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+1821,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       ^ VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+1822,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+1823,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+1824,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])),7);
        bufp->chgIData(oldp+1825,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])),32);
        bufp->chgIData(oldp+1826,(VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 0x14U))),32);
        bufp->chgIData(oldp+1827,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+1828,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   & VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1829,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])),32);
        bufp->chgIData(oldp+1830,(VL_EXTENDS_II(32,13, 
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
        bufp->chgBit(oldp+1831,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                 == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
        bufp->chgBit(oldp+1832,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
        bufp->chgBit(oldp+1833,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                 >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
        bufp->chgBit(oldp+1834,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+1835,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+1836,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                 != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
        bufp->chgIData(oldp+1837,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U], 0x10U)),32);
        bufp->chgCData(oldp+1838,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+1839,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])),2);
        bufp->chgIData(oldp+1840,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+1841,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 0xdU))),3);
        bufp->chgIData(oldp+1842,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+1843,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+1844,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+1845,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+1846,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1847,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+1848,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+1849,(VL_EXTENDS_II(32,9, 
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
        bufp->chgBit(oldp+1850,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])));
        bufp->chgBit(oldp+1851,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])));
        bufp->chgIData(oldp+1852,(VL_EXTENDS_II(32,12, 
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
        bufp->chgIData(oldp+1853,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+1854,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                             << 1U)) 
                                   | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                >> 7U)) 
                                      | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+1855,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+1856,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                             << 4U)) 
                                   | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                >> 7U)) 
                                      | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 2U))))),32);
        bufp->chgIData(oldp+1857,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+1858,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[1U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+1859,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+1860,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+1861,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                             >> 1U)) 
                                   | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                               >> 7U)))),32);
        bufp->chgIData(oldp+1862,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+1863,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                    ? 0xffffffffU : 
                                   (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])))),32);
        bufp->chgIData(oldp+1864,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
        bufp->chgIData(oldp+1865,(VL_EXTENDS_II(32,21, 
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
        bufp->chgCData(oldp+1866,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+1867,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+1868,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+1869,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])),32);
        bufp->chgIData(oldp+1870,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1871,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1872,((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])) 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1873,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   | VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1874,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]
                                    : (((0x80000000U 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]) 
                                        & (0xffffffffU 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                        ? 0U : VL_MODDIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])))),32);
        bufp->chgIData(oldp+1875,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]
                                    : VL_MODDIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
        bufp->chgIData(oldp+1876,(VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+1877,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+1878,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])),6);
        bufp->chgIData(oldp+1879,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
        bufp->chgCData(oldp+1880,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+1881,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 0x14U))),6);
        bufp->chgIData(oldp+1882,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1883,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+1884,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                             VL_EXTENDS_II(32,12, 
                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                            >> 0x14U)))),32);
        bufp->chgIData(oldp+1885,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   < VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1886,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+1887,(VL_SHIFTRS_III(32,32,5, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
        bufp->chgIData(oldp+1888,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+1889,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
        bufp->chgIData(oldp+1890,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1891,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   ^ VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                    >> 0x14U)))),32);
        bufp->chgBit(oldp+1892,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+1893,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1894,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+1895,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+1896,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+1897,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[2U])),32);
        bufp->chgBit(oldp+1898,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+1899,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+1900,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+1901,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1902,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+1903,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1904,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+1905,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[2U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1906,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+1907,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+1908,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+1909,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+1910,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+1911,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+1912,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+1913,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+1914,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+1915,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+1916,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+1917,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+1918,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+1919,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+1920,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+1921,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+1922,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+1923,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+1924,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+1925,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+1926,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[2U])),32);
        bufp->chgBit(oldp+1927,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+1928,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1929,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+1930,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+1931,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+1932,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+1933,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+1934,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+1935,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+1936,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+1937,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+1938,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+1939,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+1940,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+1941,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+1942,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+1943,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+1944,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+1945,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+1946,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+1947,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+1948,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+1949,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])),32);
        bufp->chgBit(oldp+1950,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+1951,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+1952,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+1953,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+1954,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+1955,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+1956,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+1957,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[2U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+1958,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+1959,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+1960,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+1961,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+1962,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[2U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+1963,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+1964,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+1965,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+1966,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]
                                    : 0U)),32);
        bufp->chgBit(oldp+1967,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+1968,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+1969,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+1970,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+1971,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+1972,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+1973,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+1974,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+1975,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+1976,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+1977,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+1978,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+1979,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+1980,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+1981,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+1982,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+1983,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+1984,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+1985,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+1986,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+1987,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
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
        bufp->chgBit(oldp+1988,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+1989,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1990,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+1991,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+1992,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+1993,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+1994,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+1995,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+1996,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+1997,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+1998,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+1999,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2000,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+2001,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2002,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+2003,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2004,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+2005,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2006,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+2007,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2008,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+2009,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2010,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+2011,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2012,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+2013,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2014,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+2015,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2016,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+2017,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U] 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2018,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+2019,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2020,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+2021,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2022,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+2023,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2024,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+2025,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2026,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+2027,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]
                                        : (((0x80000000U 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]) 
                                            & (0xffffffffU 
                                               == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                            ? 0U : 
                                           VL_MODDIVS_III(32, 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])))
                                    : 0U)),32);
        bufp->chgBit(oldp+2028,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+2029,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2030,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+2031,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+2032,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+2033,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+2034,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+2035,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2036,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2037,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+2038,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2039,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+2040,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2041,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+2042,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2043,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+2044,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2045,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+2046,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2047,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+2048,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2049,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+2050,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2051,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+2052,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2053,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+2054,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2055,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+2056,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2057,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+2058,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2059,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+2060,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2061,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2062,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+2063,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2064,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+2065,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       ^ VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+2066,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+2067,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+2068,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])),7);
        bufp->chgIData(oldp+2069,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])),32);
        bufp->chgIData(oldp+2070,(VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 0x14U))),32);
        bufp->chgIData(oldp+2071,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+2072,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   & VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2073,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])),32);
        bufp->chgIData(oldp+2074,(VL_EXTENDS_II(32,13, 
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
        bufp->chgBit(oldp+2075,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                 == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
        bufp->chgBit(oldp+2076,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
        bufp->chgBit(oldp+2077,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                 >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
        bufp->chgBit(oldp+2078,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+2079,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+2080,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                 != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
        bufp->chgIData(oldp+2081,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U], 0x10U)),32);
        bufp->chgCData(oldp+2082,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+2083,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])),2);
        bufp->chgIData(oldp+2084,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+2085,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 0xdU))),3);
        bufp->chgIData(oldp+2086,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+2087,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+2088,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+2089,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+2090,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+2091,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+2092,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+2093,(VL_EXTENDS_II(32,9, 
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
        bufp->chgBit(oldp+2094,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])));
        bufp->chgBit(oldp+2095,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])));
        bufp->chgIData(oldp+2096,(VL_EXTENDS_II(32,12, 
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
        bufp->chgIData(oldp+2097,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+2098,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                             << 1U)) 
                                   | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                >> 7U)) 
                                      | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+2099,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+2100,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                             << 4U)) 
                                   | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                >> 7U)) 
                                      | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 2U))))),32);
        bufp->chgIData(oldp+2101,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+2102,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[2U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+2103,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+2104,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+2105,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                             >> 1U)) 
                                   | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                               >> 7U)))),32);
        bufp->chgIData(oldp+2106,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+2107,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                    ? 0xffffffffU : 
                                   (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])))),32);
        bufp->chgIData(oldp+2108,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
        bufp->chgIData(oldp+2109,(VL_EXTENDS_II(32,21, 
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
        bufp->chgCData(oldp+2110,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+2111,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+2112,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+2113,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])),32);
        bufp->chgIData(oldp+2114,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2115,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2116,((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])) 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2117,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   | VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2118,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]
                                    : (((0x80000000U 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]) 
                                        & (0xffffffffU 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                        ? 0U : VL_MODDIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])))),32);
        bufp->chgIData(oldp+2119,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]
                                    : VL_MODDIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
        bufp->chgIData(oldp+2120,(VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+2121,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+2122,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])),6);
        bufp->chgIData(oldp+2123,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
        bufp->chgCData(oldp+2124,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+2125,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 0x14U))),6);
        bufp->chgIData(oldp+2126,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2127,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+2128,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                             VL_EXTENDS_II(32,12, 
                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                            >> 0x14U)))),32);
        bufp->chgIData(oldp+2129,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   < VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2130,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+2131,(VL_SHIFTRS_III(32,32,5, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
        bufp->chgIData(oldp+2132,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+2133,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
        bufp->chgIData(oldp+2134,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2135,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   ^ VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                    >> 0x14U)))),32);
        bufp->chgBit(oldp+2136,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+2137,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+2138,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+2139,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+2140,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+2141,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U])),32);
        bufp->chgBit(oldp+2142,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+2143,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+2144,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+2145,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2146,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+2147,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2148,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+2149,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2150,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+2151,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+2152,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+2153,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+2154,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+2155,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+2156,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+2157,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+2158,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+2159,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+2160,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+2161,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+2162,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+2163,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+2164,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+2165,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+2166,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+2167,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+2168,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+2169,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+2170,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U])),32);
        bufp->chgBit(oldp+2171,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+2172,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2173,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+2174,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+2175,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+2176,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+2177,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+2178,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+2179,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+2180,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+2181,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+2182,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+2183,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+2184,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+2185,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+2186,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+2187,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+2188,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+2189,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+2190,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+2191,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+2192,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+2193,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])),32);
        bufp->chgBit(oldp+2194,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+2195,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+2196,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2197,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+2198,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+2199,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+2200,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+2201,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[3U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+2202,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+2203,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+2204,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+2205,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+2206,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[3U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+2207,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+2208,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+2209,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+2210,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]
                                    : 0U)),32);
        bufp->chgBit(oldp+2211,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+2212,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+2213,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+2214,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2215,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+2216,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2217,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+2218,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2219,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+2220,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+2221,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+2222,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+2223,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+2224,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+2225,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+2226,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+2227,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+2228,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+2229,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+2230,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+2231,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
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
        bufp->chgBit(oldp+2232,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+2233,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2234,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+2235,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+2236,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+2237,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+2238,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+2239,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+2240,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+2241,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+2242,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+2243,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2244,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+2245,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2246,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+2247,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2248,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+2249,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2250,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+2251,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2252,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+2253,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2254,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+2255,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2256,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+2257,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2258,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+2259,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2260,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+2261,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U] 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2262,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+2263,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2264,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+2265,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2266,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+2267,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2268,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+2269,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2270,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+2271,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]
                                        : (((0x80000000U 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]) 
                                            & (0xffffffffU 
                                               == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                            ? 0U : 
                                           VL_MODDIVS_III(32, 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))
                                    : 0U)),32);
        bufp->chgBit(oldp+2272,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+2273,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2274,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+2275,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+2276,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+2277,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+2278,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+2279,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2280,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2281,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+2282,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2283,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+2284,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2285,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+2286,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2287,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+2288,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2289,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+2290,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2291,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+2292,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2293,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+2294,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2295,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+2296,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2297,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+2298,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2299,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+2300,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2301,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+2302,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2303,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+2304,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2305,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2306,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+2307,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2308,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+2309,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       ^ VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+2310,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+2311,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+2312,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])),7);
        bufp->chgIData(oldp+2313,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])),32);
        bufp->chgIData(oldp+2314,(VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 0x14U))),32);
        bufp->chgIData(oldp+2315,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+2316,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   & VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2317,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])),32);
        bufp->chgIData(oldp+2318,(VL_EXTENDS_II(32,13, 
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
        bufp->chgBit(oldp+2319,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                 == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
        bufp->chgBit(oldp+2320,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
        bufp->chgBit(oldp+2321,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                 >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
        bufp->chgBit(oldp+2322,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+2323,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+2324,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                 != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
        bufp->chgIData(oldp+2325,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)),32);
        bufp->chgCData(oldp+2326,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+2327,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])),2);
        bufp->chgIData(oldp+2328,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+2329,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 0xdU))),3);
        bufp->chgIData(oldp+2330,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+2331,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+2332,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+2333,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+2334,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+2335,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+2336,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+2337,(VL_EXTENDS_II(32,9, 
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
        bufp->chgBit(oldp+2338,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])));
        bufp->chgBit(oldp+2339,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])));
        bufp->chgIData(oldp+2340,(VL_EXTENDS_II(32,12, 
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
        bufp->chgIData(oldp+2341,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+2342,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                             << 1U)) 
                                   | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                >> 7U)) 
                                      | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+2343,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+2344,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                             << 4U)) 
                                   | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                >> 7U)) 
                                      | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 2U))))),32);
        bufp->chgIData(oldp+2345,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+2346,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[3U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+2347,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+2348,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+2349,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                             >> 1U)) 
                                   | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                               >> 7U)))),32);
        bufp->chgIData(oldp+2350,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+2351,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                    ? 0xffffffffU : 
                                   (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))),32);
        bufp->chgIData(oldp+2352,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
        bufp->chgIData(oldp+2353,(VL_EXTENDS_II(32,21, 
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
        bufp->chgCData(oldp+2354,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+2355,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+2356,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+2357,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])),32);
        bufp->chgIData(oldp+2358,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2359,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2360,((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])) 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2361,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   | VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2362,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]
                                    : (((0x80000000U 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]) 
                                        & (0xffffffffU 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                        ? 0U : VL_MODDIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))),32);
        bufp->chgIData(oldp+2363,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]
                                    : VL_MODDIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
        bufp->chgIData(oldp+2364,(VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+2365,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+2366,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])),6);
        bufp->chgIData(oldp+2367,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
        bufp->chgCData(oldp+2368,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+2369,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 0x14U))),6);
        bufp->chgIData(oldp+2370,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2371,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+2372,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                             VL_EXTENDS_II(32,12, 
                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                            >> 0x14U)))),32);
        bufp->chgIData(oldp+2373,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   < VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2374,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+2375,(VL_SHIFTRS_III(32,32,5, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
        bufp->chgIData(oldp+2376,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+2377,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
        bufp->chgIData(oldp+2378,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2379,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   ^ VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)))),32);
        bufp->chgBit(oldp+2380,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+2381,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+2382,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+2383,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+2384,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+2385,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U])),32);
        bufp->chgBit(oldp+2386,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+2387,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+2388,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+2389,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2390,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+2391,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2392,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+2393,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2394,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+2395,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+2396,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+2397,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+2398,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+2399,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+2400,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+2401,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+2402,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+2403,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+2404,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+2405,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+2406,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+2407,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+2408,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+2409,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+2410,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+2411,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+2412,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+2413,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+2414,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U])),32);
        bufp->chgBit(oldp+2415,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+2416,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2417,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+2418,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+2419,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+2420,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+2421,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+2422,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+2423,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+2424,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+2425,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+2426,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+2427,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+2428,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+2429,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+2430,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+2431,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+2432,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+2433,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+2434,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+2435,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+2436,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+2437,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])),32);
        bufp->chgBit(oldp+2438,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+2439,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+2440,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2441,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+2442,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+2443,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+2444,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+2445,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[4U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+2446,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+2447,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+2448,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+2449,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+2450,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[4U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+2451,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+2452,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+2453,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+2454,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]
                                    : 0U)),32);
        bufp->chgBit(oldp+2455,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+2456,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+2457,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+2458,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2459,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+2460,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2461,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+2462,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2463,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+2464,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+2465,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+2466,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+2467,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+2468,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+2469,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+2470,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+2471,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+2472,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+2473,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+2474,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+2475,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
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
        bufp->chgBit(oldp+2476,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+2477,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2478,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+2479,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+2480,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+2481,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+2482,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+2483,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+2484,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+2485,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+2486,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+2487,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2488,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+2489,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2490,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+2491,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2492,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+2493,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2494,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+2495,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2496,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+2497,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2498,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+2499,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2500,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+2501,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2502,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+2503,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2504,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+2505,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U] 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2506,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+2507,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2508,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+2509,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2510,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+2511,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2512,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+2513,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2514,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+2515,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]
                                        : (((0x80000000U 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]) 
                                            & (0xffffffffU 
                                               == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                            ? 0U : 
                                           VL_MODDIVS_III(32, 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))
                                    : 0U)),32);
        bufp->chgBit(oldp+2516,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+2517,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2518,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+2519,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+2520,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+2521,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+2522,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+2523,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2524,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2525,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+2526,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2527,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+2528,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2529,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+2530,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2531,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+2532,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2533,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+2534,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2535,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+2536,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2537,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+2538,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2539,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+2540,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2541,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+2542,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2543,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+2544,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2545,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+2546,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2547,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+2548,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2549,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2550,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+2551,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2552,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+2553,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       ^ VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+2554,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+2555,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+2556,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])),7);
        bufp->chgIData(oldp+2557,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])),32);
        bufp->chgIData(oldp+2558,(VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 0x14U))),32);
        bufp->chgIData(oldp+2559,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+2560,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   & VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2561,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])),32);
        bufp->chgIData(oldp+2562,(VL_EXTENDS_II(32,13, 
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
        bufp->chgBit(oldp+2563,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                 == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
        bufp->chgBit(oldp+2564,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
        bufp->chgBit(oldp+2565,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                 >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
        bufp->chgBit(oldp+2566,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+2567,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+2568,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                 != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
        bufp->chgIData(oldp+2569,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)),32);
        bufp->chgCData(oldp+2570,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+2571,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])),2);
        bufp->chgIData(oldp+2572,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+2573,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 0xdU))),3);
        bufp->chgIData(oldp+2574,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+2575,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+2576,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+2577,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+2578,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+2579,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+2580,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+2581,(VL_EXTENDS_II(32,9, 
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
        bufp->chgBit(oldp+2582,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])));
        bufp->chgBit(oldp+2583,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])));
        bufp->chgIData(oldp+2584,(VL_EXTENDS_II(32,12, 
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
        bufp->chgIData(oldp+2585,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+2586,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                             << 1U)) 
                                   | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                >> 7U)) 
                                      | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+2587,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+2588,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                             << 4U)) 
                                   | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                >> 7U)) 
                                      | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 2U))))),32);
        bufp->chgIData(oldp+2589,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+2590,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[4U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+2591,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+2592,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+2593,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                             >> 1U)) 
                                   | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                               >> 7U)))),32);
        bufp->chgIData(oldp+2594,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+2595,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                    ? 0xffffffffU : 
                                   (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))),32);
        bufp->chgIData(oldp+2596,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
        bufp->chgIData(oldp+2597,(VL_EXTENDS_II(32,21, 
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
        bufp->chgCData(oldp+2598,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+2599,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+2600,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+2601,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])),32);
        bufp->chgIData(oldp+2602,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2603,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2604,((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])) 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2605,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   | VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2606,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]
                                    : (((0x80000000U 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]) 
                                        & (0xffffffffU 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                        ? 0U : VL_MODDIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))),32);
        bufp->chgIData(oldp+2607,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]
                                    : VL_MODDIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
        bufp->chgIData(oldp+2608,(VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+2609,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+2610,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])),6);
        bufp->chgIData(oldp+2611,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
        bufp->chgCData(oldp+2612,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+2613,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 0x14U))),6);
        bufp->chgIData(oldp+2614,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2615,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+2616,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                             VL_EXTENDS_II(32,12, 
                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                            >> 0x14U)))),32);
        bufp->chgIData(oldp+2617,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   < VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2618,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+2619,(VL_SHIFTRS_III(32,32,5, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
        bufp->chgIData(oldp+2620,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+2621,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
        bufp->chgIData(oldp+2622,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2623,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   ^ VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)))),32);
        bufp->chgBit(oldp+2624,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+2625,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+2626,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+2627,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+2628,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+2629,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U])),32);
        bufp->chgBit(oldp+2630,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+2631,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+2632,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+2633,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2634,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+2635,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2636,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+2637,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2638,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+2639,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+2640,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+2641,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+2642,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+2643,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+2644,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+2645,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+2646,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+2647,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+2648,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+2649,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+2650,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+2651,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+2652,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+2653,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+2654,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+2655,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+2656,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+2657,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+2658,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U])),32);
        bufp->chgBit(oldp+2659,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+2660,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2661,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+2662,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+2663,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+2664,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+2665,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+2666,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+2667,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+2668,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+2669,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+2670,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+2671,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+2672,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+2673,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+2674,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+2675,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+2676,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+2677,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+2678,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+2679,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+2680,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+2681,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])),32);
        bufp->chgBit(oldp+2682,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+2683,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+2684,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2685,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+2686,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+2687,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+2688,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+2689,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[5U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+2690,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+2691,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+2692,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+2693,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+2694,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[5U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+2695,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+2696,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+2697,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+2698,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]
                                    : 0U)),32);
        bufp->chgBit(oldp+2699,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+2700,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+2701,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+2702,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2703,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+2704,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2705,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+2706,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2707,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+2708,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+2709,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+2710,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+2711,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+2712,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+2713,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+2714,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+2715,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+2716,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+2717,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+2718,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+2719,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
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
        bufp->chgBit(oldp+2720,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+2721,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2722,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+2723,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+2724,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+2725,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+2726,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+2727,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+2728,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+2729,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+2730,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+2731,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2732,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+2733,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2734,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+2735,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2736,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+2737,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2738,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+2739,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2740,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+2741,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2742,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+2743,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2744,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+2745,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2746,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+2747,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2748,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+2749,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U] 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2750,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+2751,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2752,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+2753,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2754,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+2755,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2756,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+2757,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2758,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+2759,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]
                                        : (((0x80000000U 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]) 
                                            & (0xffffffffU 
                                               == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                            ? 0U : 
                                           VL_MODDIVS_III(32, 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))
                                    : 0U)),32);
        bufp->chgBit(oldp+2760,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+2761,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2762,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+2763,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+2764,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+2765,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+2766,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+2767,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2768,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2769,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+2770,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2771,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+2772,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2773,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+2774,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2775,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+2776,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2777,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+2778,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2779,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+2780,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2781,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+2782,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2783,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+2784,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2785,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+2786,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2787,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+2788,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2789,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+2790,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2791,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+2792,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2793,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2794,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+2795,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2796,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+2797,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       ^ VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+2798,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+2799,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+2800,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])),7);
        bufp->chgIData(oldp+2801,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])),32);
        bufp->chgIData(oldp+2802,(VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 0x14U))),32);
        bufp->chgIData(oldp+2803,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+2804,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   & VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2805,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])),32);
        bufp->chgIData(oldp+2806,(VL_EXTENDS_II(32,13, 
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
        bufp->chgBit(oldp+2807,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                 == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
        bufp->chgBit(oldp+2808,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
        bufp->chgBit(oldp+2809,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                 >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
        bufp->chgBit(oldp+2810,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+2811,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+2812,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                 != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
        bufp->chgIData(oldp+2813,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)),32);
        bufp->chgCData(oldp+2814,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+2815,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])),2);
        bufp->chgIData(oldp+2816,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+2817,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 0xdU))),3);
        bufp->chgIData(oldp+2818,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+2819,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+2820,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+2821,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+2822,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+2823,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+2824,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+2825,(VL_EXTENDS_II(32,9, 
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
        bufp->chgBit(oldp+2826,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])));
        bufp->chgBit(oldp+2827,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])));
        bufp->chgIData(oldp+2828,(VL_EXTENDS_II(32,12, 
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
        bufp->chgIData(oldp+2829,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+2830,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                             << 1U)) 
                                   | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                >> 7U)) 
                                      | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+2831,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+2832,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                             << 4U)) 
                                   | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                >> 7U)) 
                                      | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 2U))))),32);
        bufp->chgIData(oldp+2833,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+2834,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[5U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+2835,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+2836,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+2837,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                             >> 1U)) 
                                   | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                               >> 7U)))),32);
        bufp->chgIData(oldp+2838,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+2839,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                    ? 0xffffffffU : 
                                   (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))),32);
        bufp->chgIData(oldp+2840,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
        bufp->chgIData(oldp+2841,(VL_EXTENDS_II(32,21, 
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
        bufp->chgCData(oldp+2842,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+2843,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+2844,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+2845,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])),32);
        bufp->chgIData(oldp+2846,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2847,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2848,((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])) 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2849,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   | VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2850,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]
                                    : (((0x80000000U 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]) 
                                        & (0xffffffffU 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                        ? 0U : VL_MODDIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))),32);
        bufp->chgIData(oldp+2851,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]
                                    : VL_MODDIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
        bufp->chgIData(oldp+2852,(VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+2853,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+2854,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])),6);
        bufp->chgIData(oldp+2855,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
        bufp->chgCData(oldp+2856,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+2857,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 0x14U))),6);
        bufp->chgIData(oldp+2858,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2859,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+2860,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                             VL_EXTENDS_II(32,12, 
                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                            >> 0x14U)))),32);
        bufp->chgIData(oldp+2861,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   < VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2862,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+2863,(VL_SHIFTRS_III(32,32,5, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
        bufp->chgIData(oldp+2864,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+2865,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
        bufp->chgIData(oldp+2866,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2867,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   ^ VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)))),32);
        bufp->chgBit(oldp+2868,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+2869,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+2870,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+2871,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+2872,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+2873,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[6U])),32);
        bufp->chgBit(oldp+2874,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+2875,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+2876,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+2877,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2878,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+2879,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2880,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+2881,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[6U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2882,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+2883,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+2884,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+2885,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+2886,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+2887,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+2888,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+2889,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+2890,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+2891,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+2892,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+2893,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+2894,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+2895,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+2896,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+2897,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+2898,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+2899,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+2900,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+2901,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+2902,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[6U])),32);
        bufp->chgBit(oldp+2903,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+2904,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2905,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+2906,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+2907,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+2908,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+2909,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+2910,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+2911,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+2912,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+2913,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+2914,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+2915,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+2916,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+2917,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+2918,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+2919,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+2920,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+2921,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+2922,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+2923,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+2924,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+2925,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])),32);
        bufp->chgBit(oldp+2926,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+2927,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+2928,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2929,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+2930,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+2931,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+2932,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+2933,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[6U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+2934,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+2935,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+2936,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+2937,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+2938,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[6U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+2939,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+2940,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+2941,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+2942,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]
                                    : 0U)),32);
        bufp->chgBit(oldp+2943,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+2944,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+2945,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+2946,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2947,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+2948,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2949,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+2950,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2951,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+2952,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+2953,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+2954,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+2955,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+2956,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+2957,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+2958,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+2959,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+2960,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+2961,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+2962,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+2963,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
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
        bufp->chgBit(oldp+2964,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+2965,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2966,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+2967,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+2968,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+2969,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+2970,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+2971,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+2972,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+2973,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+2974,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+2975,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2976,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+2977,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2978,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+2979,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2980,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+2981,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2982,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+2983,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2984,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+2985,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2986,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+2987,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2988,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+2989,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2990,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+2991,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2992,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+2993,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U] 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2994,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+2995,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2996,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+2997,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2998,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+2999,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+3000,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+3001,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3002,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+3003,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]
                                        : (((0x80000000U 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]) 
                                            & (0xffffffffU 
                                               == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                            ? 0U : 
                                           VL_MODDIVS_III(32, 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])))
                                    : 0U)),32);
        bufp->chgBit(oldp+3004,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+3005,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+3006,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+3007,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+3008,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+3009,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+3010,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+3011,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+3012,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+3013,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+3014,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+3015,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+3016,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3017,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+3018,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+3019,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+3020,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3021,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+3022,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3023,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+3024,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+3025,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+3026,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+3027,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+3028,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3029,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+3030,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                    : 0U)),32);
    }
}
