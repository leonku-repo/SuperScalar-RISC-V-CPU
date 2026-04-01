// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


void Vtop_tb___024root__trace_chg_0_sub_1(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 3854);
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+0,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [2U] 
                                              >> 0x17U)))),3);
        bufp->chgCData(oldp+1,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [2U] 
                                                >> 0x13U)))),4);
        bufp->chgCData(oldp+2,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [2U] 
                                              >> 0x10U)))),3);
        bufp->chgBit(oldp+3,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [2U] >> 0xfU)))));
        bufp->chgBit(oldp+4,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [2U] >> 0xeU)))));
        bufp->chgCData(oldp+5,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [2U] 
                                                 >> 8U)))),6);
        bufp->chgCData(oldp+6,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [2U] 
                                                 >> 2U)))),6);
        bufp->chgBit(oldp+7,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [2U] >> 1U)))));
        bufp->chgBit(oldp+8,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [2U]))));
        bufp->chgIData(oldp+9,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [3U] >> 0x1aU))),32);
        bufp->chgCData(oldp+10,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [3U] 
                                               >> 0x17U)))),3);
        bufp->chgCData(oldp+11,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [3U] 
                                                 >> 0x13U)))),4);
        bufp->chgCData(oldp+12,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [3U] 
                                               >> 0x10U)))),3);
        bufp->chgBit(oldp+13,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [3U] >> 0xfU)))));
        bufp->chgBit(oldp+14,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [3U] >> 0xeU)))));
        bufp->chgCData(oldp+15,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [3U] 
                                                  >> 8U)))),6);
        bufp->chgCData(oldp+16,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [3U] 
                                                  >> 2U)))),6);
        bufp->chgBit(oldp+17,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [3U] >> 1U)))));
        bufp->chgBit(oldp+18,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [3U]))));
        bufp->chgIData(oldp+19,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                         [4U] >> 0x1aU))),32);
        bufp->chgCData(oldp+20,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [4U] 
                                               >> 0x17U)))),3);
        bufp->chgCData(oldp+21,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [4U] 
                                                 >> 0x13U)))),4);
        bufp->chgCData(oldp+22,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [4U] 
                                               >> 0x10U)))),3);
        bufp->chgBit(oldp+23,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [4U] >> 0xfU)))));
        bufp->chgBit(oldp+24,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [4U] >> 0xeU)))));
        bufp->chgCData(oldp+25,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [4U] 
                                                  >> 8U)))),6);
        bufp->chgCData(oldp+26,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [4U] 
                                                  >> 2U)))),6);
        bufp->chgBit(oldp+27,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [4U] >> 1U)))));
        bufp->chgBit(oldp+28,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [4U]))));
        bufp->chgIData(oldp+29,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                         [5U] >> 0x1aU))),32);
        bufp->chgCData(oldp+30,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [5U] 
                                               >> 0x17U)))),3);
        bufp->chgCData(oldp+31,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [5U] 
                                                 >> 0x13U)))),4);
        bufp->chgCData(oldp+32,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [5U] 
                                               >> 0x10U)))),3);
        bufp->chgBit(oldp+33,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [5U] >> 0xfU)))));
        bufp->chgBit(oldp+34,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [5U] >> 0xeU)))));
        bufp->chgCData(oldp+35,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [5U] 
                                                  >> 8U)))),6);
        bufp->chgCData(oldp+36,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [5U] 
                                                  >> 2U)))),6);
        bufp->chgBit(oldp+37,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [5U] >> 1U)))));
        bufp->chgBit(oldp+38,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [5U]))));
        bufp->chgIData(oldp+39,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                         [6U] >> 0x1aU))),32);
        bufp->chgCData(oldp+40,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [6U] 
                                               >> 0x17U)))),3);
        bufp->chgCData(oldp+41,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [6U] 
                                                 >> 0x13U)))),4);
        bufp->chgCData(oldp+42,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [6U] 
                                               >> 0x10U)))),3);
        bufp->chgBit(oldp+43,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [6U] >> 0xfU)))));
        bufp->chgBit(oldp+44,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [6U] >> 0xeU)))));
        bufp->chgCData(oldp+45,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [6U] 
                                                  >> 8U)))),6);
        bufp->chgCData(oldp+46,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [6U] 
                                                  >> 2U)))),6);
        bufp->chgBit(oldp+47,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [6U] >> 1U)))));
        bufp->chgBit(oldp+48,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [6U]))));
        bufp->chgIData(oldp+49,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                         [7U] >> 0x1aU))),32);
        bufp->chgCData(oldp+50,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [7U] 
                                               >> 0x17U)))),3);
        bufp->chgCData(oldp+51,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [7U] 
                                                 >> 0x13U)))),4);
        bufp->chgCData(oldp+52,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [7U] 
                                               >> 0x10U)))),3);
        bufp->chgBit(oldp+53,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [7U] >> 0xfU)))));
        bufp->chgBit(oldp+54,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [7U] >> 0xeU)))));
        bufp->chgCData(oldp+55,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [7U] 
                                                  >> 8U)))),6);
        bufp->chgCData(oldp+56,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [7U] 
                                                  >> 2U)))),6);
        bufp->chgBit(oldp+57,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [7U] >> 1U)))));
        bufp->chgBit(oldp+58,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [7U]))));
        bufp->chgIData(oldp+59,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                         [8U] >> 0x1aU))),32);
        bufp->chgCData(oldp+60,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [8U] 
                                               >> 0x17U)))),3);
        bufp->chgCData(oldp+61,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [8U] 
                                                 >> 0x13U)))),4);
        bufp->chgCData(oldp+62,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [8U] 
                                               >> 0x10U)))),3);
        bufp->chgBit(oldp+63,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [8U] >> 0xfU)))));
        bufp->chgBit(oldp+64,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [8U] >> 0xeU)))));
        bufp->chgCData(oldp+65,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [8U] 
                                                  >> 8U)))),6);
        bufp->chgCData(oldp+66,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [8U] 
                                                  >> 2U)))),6);
        bufp->chgBit(oldp+67,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [8U] >> 1U)))));
        bufp->chgBit(oldp+68,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [8U]))));
        bufp->chgIData(oldp+69,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                         [9U] >> 0x1aU))),32);
        bufp->chgCData(oldp+70,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [9U] 
                                               >> 0x17U)))),3);
        bufp->chgCData(oldp+71,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [9U] 
                                                 >> 0x13U)))),4);
        bufp->chgCData(oldp+72,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [9U] 
                                               >> 0x10U)))),3);
        bufp->chgBit(oldp+73,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [9U] >> 0xfU)))));
        bufp->chgBit(oldp+74,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [9U] >> 0xeU)))));
        bufp->chgCData(oldp+75,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [9U] 
                                                  >> 8U)))),6);
        bufp->chgCData(oldp+76,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [9U] 
                                                  >> 2U)))),6);
        bufp->chgBit(oldp+77,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [9U] >> 1U)))));
        bufp->chgBit(oldp+78,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [9U]))));
        bufp->chgIData(oldp+79,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                         [0xaU] >> 0x1aU))),32);
        bufp->chgCData(oldp+80,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [0xaU] 
                                               >> 0x17U)))),3);
        bufp->chgCData(oldp+81,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xaU] 
                                                 >> 0x13U)))),4);
        bufp->chgCData(oldp+82,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [0xaU] 
                                               >> 0x10U)))),3);
        bufp->chgBit(oldp+83,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [0xaU] 
                                             >> 0xfU)))));
        bufp->chgBit(oldp+84,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [0xaU] 
                                             >> 0xeU)))));
        bufp->chgCData(oldp+85,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [0xaU] 
                                                  >> 8U)))),6);
        bufp->chgCData(oldp+86,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [0xaU] 
                                                  >> 2U)))),6);
        bufp->chgBit(oldp+87,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [0xaU] 
                                             >> 1U)))));
        bufp->chgBit(oldp+88,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xaU]))));
        bufp->chgIData(oldp+89,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                         [0xbU] >> 0x1aU))),32);
        bufp->chgCData(oldp+90,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [0xbU] 
                                               >> 0x17U)))),3);
        bufp->chgCData(oldp+91,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xbU] 
                                                 >> 0x13U)))),4);
        bufp->chgCData(oldp+92,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [0xbU] 
                                               >> 0x10U)))),3);
        bufp->chgBit(oldp+93,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [0xbU] 
                                             >> 0xfU)))));
        bufp->chgBit(oldp+94,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [0xbU] 
                                             >> 0xeU)))));
        bufp->chgCData(oldp+95,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [0xbU] 
                                                  >> 8U)))),6);
        bufp->chgCData(oldp+96,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [0xbU] 
                                                  >> 2U)))),6);
        bufp->chgBit(oldp+97,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [0xbU] 
                                             >> 1U)))));
        bufp->chgBit(oldp+98,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xbU]))));
        bufp->chgIData(oldp+99,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                         [0xcU] >> 0x1aU))),32);
        bufp->chgCData(oldp+100,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xcU] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+101,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [0xcU] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+102,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xcU] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+103,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xcU] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+104,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xcU] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+105,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [0xcU] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+106,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [0xcU] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+107,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xcU] 
                                              >> 1U)))));
        bufp->chgBit(oldp+108,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [0xcU]))));
        bufp->chgIData(oldp+109,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                          [0xdU] >> 0x1aU))),32);
        bufp->chgCData(oldp+110,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xdU] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+111,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [0xdU] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+112,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xdU] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+113,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xdU] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+114,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xdU] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+115,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [0xdU] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+116,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [0xdU] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+117,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xdU] 
                                              >> 1U)))));
        bufp->chgBit(oldp+118,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [0xdU]))));
        bufp->chgIData(oldp+119,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                          [0xeU] >> 0x1aU))),32);
        bufp->chgCData(oldp+120,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xeU] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+121,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [0xeU] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+122,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xeU] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+123,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xeU] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+124,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xeU] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+125,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [0xeU] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+126,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [0xeU] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+127,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xeU] 
                                              >> 1U)))));
        bufp->chgBit(oldp+128,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [0xeU]))));
        bufp->chgIData(oldp+129,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                          [0xfU] >> 0x1aU))),32);
        bufp->chgCData(oldp+130,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xfU] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+131,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [0xfU] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+132,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xfU] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+133,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xfU] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+134,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xfU] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+135,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [0xfU] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+136,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [0xfU] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+137,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xfU] 
                                              >> 1U)))));
        bufp->chgBit(oldp+138,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [0xfU]))));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[0]));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[1]));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[2]));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[3]));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[4]));
        bufp->chgBit(oldp+144,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[5]));
        bufp->chgBit(oldp+145,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[6]));
        bufp->chgBit(oldp+146,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[7]));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[8]));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[9]));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[10]));
        bufp->chgBit(oldp+150,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[11]));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[12]));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[13]));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[14]));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[15]));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[0]));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[1]));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[2]));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[3]));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[4]));
        bufp->chgBit(oldp+160,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[5]));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[6]));
        bufp->chgBit(oldp+162,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[7]));
        bufp->chgBit(oldp+163,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[8]));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[9]));
        bufp->chgBit(oldp+165,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[10]));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[11]));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[12]));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[13]));
        bufp->chgBit(oldp+169,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[14]));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[15]));
        bufp->chgCData(oldp+171,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__wrPtr),5);
        bufp->chgCData(oldp+172,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rdPtr),5);
        bufp->chgIData(oldp+173,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__unnamedblk3__DOT__i),32);
        bufp->chgCData(oldp+174,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask),4);
        bufp->chgBit(oldp+175,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__store_match));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__store_committed));
        bufp->chgIData(oldp+177,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__prf_addr),32);
        bufp->chgBit(oldp+178,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__valid[0]));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__valid[1]));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__valid[2]));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__valid[3]));
        bufp->chgBit(oldp+182,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [0U][0xbU] >> 0x10U))));
        bufp->chgBit(oldp+183,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [0U][0xbU] >> 0xfU))));
        bufp->chgBit(oldp+184,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [0U][0xbU] >> 0xeU))));
        bufp->chgCData(oldp+185,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [0U][0xbU] 
                                           >> 9U))),5);
        bufp->chgCData(oldp+186,((0x3fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [0U][0xbU] 
                                           >> 3U))),6);
        bufp->chgCData(oldp+187,((0x3fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                            [0U][0xbU] 
                                            << 3U) 
                                           | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                              [0U][0xaU] 
                                              >> 0x1dU)))),6);
        bufp->chgIData(oldp+188,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][0xaU] << 3U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [0U][9U] >> 0x1dU))),32);
        bufp->chgIData(oldp+189,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][9U] << 3U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [0U][8U] >> 0x1dU))),32);
        bufp->chgIData(oldp+190,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][8U] << 3U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [0U][7U] >> 0x1dU))),32);
        bufp->chgBit(oldp+191,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [0U][7U] >> 0x1cU))));
        bufp->chgBit(oldp+192,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [0U][7U] >> 0x1bU))));
        bufp->chgCData(oldp+193,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [0U][7U] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+194,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [0U][7U] 
                                           >> 0x11U))),5);
        bufp->chgIData(oldp+195,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][7U] << 0xfU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [0U][6U] >> 0x11U))),32);
        bufp->chgIData(oldp+196,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][6U] << 0xfU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [0U][5U] >> 0x11U))),32);
        bufp->chgCData(oldp+197,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [0U][5U] 
                                          >> 0xdU))),4);
        bufp->chgIData(oldp+198,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][5U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [0U][4U] >> 0xdU))),32);
        bufp->chgIData(oldp+199,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][4U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [0U][3U] >> 0xdU))),32);
        bufp->chgCData(oldp+200,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [0U][3U] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+201,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [0U][3U] 
                                          >> 5U))),4);
        bufp->chgIData(oldp+202,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][3U] << 0x1bU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [0U][2U] >> 5U))),32);
        bufp->chgIData(oldp+203,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][2U] << 0x1bU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [0U][1U] >> 5U))),32);
        bufp->chgBit(oldp+204,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [0U][1U] >> 4U))));
        bufp->chgBit(oldp+205,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [0U][1U] >> 3U))));
        bufp->chgBit(oldp+206,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [0U][1U] >> 2U))));
        bufp->chgBit(oldp+207,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [0U][1U] >> 1U))));
        bufp->chgIData(oldp+208,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][1U] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [0U][0U] >> 1U))),32);
        bufp->chgBit(oldp+209,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                [0U][0U])));
        bufp->chgBit(oldp+210,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [1U][0xbU] >> 0x10U))));
        bufp->chgBit(oldp+211,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [1U][0xbU] >> 0xfU))));
        bufp->chgBit(oldp+212,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [1U][0xbU] >> 0xeU))));
        bufp->chgCData(oldp+213,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [1U][0xbU] 
                                           >> 9U))),5);
        bufp->chgCData(oldp+214,((0x3fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [1U][0xbU] 
                                           >> 3U))),6);
        bufp->chgCData(oldp+215,((0x3fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                            [1U][0xbU] 
                                            << 3U) 
                                           | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                              [1U][0xaU] 
                                              >> 0x1dU)))),6);
        bufp->chgIData(oldp+216,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][0xaU] << 3U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [1U][9U] >> 0x1dU))),32);
        bufp->chgIData(oldp+217,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][9U] << 3U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [1U][8U] >> 0x1dU))),32);
        bufp->chgIData(oldp+218,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][8U] << 3U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [1U][7U] >> 0x1dU))),32);
        bufp->chgBit(oldp+219,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [1U][7U] >> 0x1cU))));
        bufp->chgBit(oldp+220,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [1U][7U] >> 0x1bU))));
        bufp->chgCData(oldp+221,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [1U][7U] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+222,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [1U][7U] 
                                           >> 0x11U))),5);
        bufp->chgIData(oldp+223,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][7U] << 0xfU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [1U][6U] >> 0x11U))),32);
        bufp->chgIData(oldp+224,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][6U] << 0xfU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [1U][5U] >> 0x11U))),32);
        bufp->chgCData(oldp+225,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [1U][5U] 
                                          >> 0xdU))),4);
        bufp->chgIData(oldp+226,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][5U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [1U][4U] >> 0xdU))),32);
        bufp->chgIData(oldp+227,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][4U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [1U][3U] >> 0xdU))),32);
        bufp->chgCData(oldp+228,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [1U][3U] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+229,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [1U][3U] 
                                          >> 5U))),4);
        bufp->chgIData(oldp+230,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][3U] << 0x1bU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [1U][2U] >> 5U))),32);
        bufp->chgIData(oldp+231,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][2U] << 0x1bU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [1U][1U] >> 5U))),32);
        bufp->chgBit(oldp+232,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [1U][1U] >> 4U))));
        bufp->chgBit(oldp+233,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [1U][1U] >> 3U))));
        bufp->chgBit(oldp+234,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [1U][1U] >> 2U))));
        bufp->chgBit(oldp+235,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [1U][1U] >> 1U))));
        bufp->chgIData(oldp+236,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][1U] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [1U][0U] >> 1U))),32);
        bufp->chgBit(oldp+237,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                [1U][0U])));
        bufp->chgBit(oldp+238,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [2U][0xbU] >> 0x10U))));
        bufp->chgBit(oldp+239,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [2U][0xbU] >> 0xfU))));
        bufp->chgBit(oldp+240,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [2U][0xbU] >> 0xeU))));
        bufp->chgCData(oldp+241,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [2U][0xbU] 
                                           >> 9U))),5);
        bufp->chgCData(oldp+242,((0x3fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [2U][0xbU] 
                                           >> 3U))),6);
        bufp->chgCData(oldp+243,((0x3fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                            [2U][0xbU] 
                                            << 3U) 
                                           | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                              [2U][0xaU] 
                                              >> 0x1dU)))),6);
        bufp->chgIData(oldp+244,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][0xaU] << 3U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [2U][9U] >> 0x1dU))),32);
        bufp->chgIData(oldp+245,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][9U] << 3U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [2U][8U] >> 0x1dU))),32);
        bufp->chgIData(oldp+246,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][8U] << 3U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [2U][7U] >> 0x1dU))),32);
        bufp->chgBit(oldp+247,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [2U][7U] >> 0x1cU))));
        bufp->chgBit(oldp+248,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [2U][7U] >> 0x1bU))));
        bufp->chgCData(oldp+249,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [2U][7U] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+250,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [2U][7U] 
                                           >> 0x11U))),5);
        bufp->chgIData(oldp+251,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][7U] << 0xfU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [2U][6U] >> 0x11U))),32);
        bufp->chgIData(oldp+252,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][6U] << 0xfU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [2U][5U] >> 0x11U))),32);
        bufp->chgCData(oldp+253,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [2U][5U] 
                                          >> 0xdU))),4);
        bufp->chgIData(oldp+254,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][5U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [2U][4U] >> 0xdU))),32);
        bufp->chgIData(oldp+255,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][4U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [2U][3U] >> 0xdU))),32);
        bufp->chgCData(oldp+256,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [2U][3U] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+257,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [2U][3U] 
                                          >> 5U))),4);
        bufp->chgIData(oldp+258,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][3U] << 0x1bU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [2U][2U] >> 5U))),32);
        bufp->chgIData(oldp+259,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][2U] << 0x1bU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [2U][1U] >> 5U))),32);
        bufp->chgBit(oldp+260,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [2U][1U] >> 4U))));
        bufp->chgBit(oldp+261,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [2U][1U] >> 3U))));
        bufp->chgBit(oldp+262,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [2U][1U] >> 2U))));
        bufp->chgBit(oldp+263,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [2U][1U] >> 1U))));
        bufp->chgIData(oldp+264,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][1U] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [2U][0U] >> 1U))),32);
        bufp->chgBit(oldp+265,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                [2U][0U])));
        bufp->chgBit(oldp+266,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [3U][0xbU] >> 0x10U))));
        bufp->chgBit(oldp+267,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [3U][0xbU] >> 0xfU))));
        bufp->chgBit(oldp+268,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [3U][0xbU] >> 0xeU))));
        bufp->chgCData(oldp+269,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [3U][0xbU] 
                                           >> 9U))),5);
        bufp->chgCData(oldp+270,((0x3fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [3U][0xbU] 
                                           >> 3U))),6);
        bufp->chgCData(oldp+271,((0x3fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                            [3U][0xbU] 
                                            << 3U) 
                                           | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                              [3U][0xaU] 
                                              >> 0x1dU)))),6);
        bufp->chgIData(oldp+272,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][0xaU] << 3U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [3U][9U] >> 0x1dU))),32);
        bufp->chgIData(oldp+273,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][9U] << 3U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [3U][8U] >> 0x1dU))),32);
        bufp->chgIData(oldp+274,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][8U] << 3U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [3U][7U] >> 0x1dU))),32);
        bufp->chgBit(oldp+275,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [3U][7U] >> 0x1cU))));
        bufp->chgBit(oldp+276,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [3U][7U] >> 0x1bU))));
        bufp->chgCData(oldp+277,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [3U][7U] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+278,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [3U][7U] 
                                           >> 0x11U))),5);
        bufp->chgIData(oldp+279,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][7U] << 0xfU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [3U][6U] >> 0x11U))),32);
        bufp->chgIData(oldp+280,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][6U] << 0xfU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [3U][5U] >> 0x11U))),32);
        bufp->chgCData(oldp+281,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [3U][5U] 
                                          >> 0xdU))),4);
        bufp->chgIData(oldp+282,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][5U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [3U][4U] >> 0xdU))),32);
        bufp->chgIData(oldp+283,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][4U] << 0x13U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [3U][3U] >> 0xdU))),32);
        bufp->chgCData(oldp+284,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [3U][3U] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+285,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [3U][3U] 
                                          >> 5U))),4);
        bufp->chgIData(oldp+286,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][3U] << 0x1bU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [3U][2U] >> 5U))),32);
        bufp->chgIData(oldp+287,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][2U] << 0x1bU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [3U][1U] >> 5U))),32);
        bufp->chgBit(oldp+288,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [3U][1U] >> 4U))));
        bufp->chgBit(oldp+289,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [3U][1U] >> 3U))));
        bufp->chgBit(oldp+290,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [3U][1U] >> 2U))));
        bufp->chgBit(oldp+291,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [3U][1U] >> 1U))));
        bufp->chgIData(oldp+292,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][1U] << 0x1fU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [3U][0U] >> 1U))),32);
        bufp->chgBit(oldp+293,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                [3U][0U])));
        bufp->chgIData(oldp+294,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                          [0U] >> 0x1aU))),32);
        bufp->chgCData(oldp+295,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [0U] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+296,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                  [0U] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+297,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [0U] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+298,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [0U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+299,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [0U] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+300,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                   [0U] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+301,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                   [0U] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+302,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [0U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+303,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                             [0U]))));
        bufp->chgIData(oldp+304,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                          [1U] >> 0x1aU))),32);
        bufp->chgCData(oldp+305,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [1U] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+306,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                  [1U] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+307,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [1U] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+308,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [1U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+309,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [1U] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+310,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                   [1U] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+311,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                   [1U] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+312,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [1U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+313,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                             [1U]))));
        bufp->chgIData(oldp+314,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                          [2U] >> 0x1aU))),32);
        bufp->chgCData(oldp+315,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [2U] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+316,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                  [2U] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+317,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [2U] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+318,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [2U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+319,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [2U] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+320,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                   [2U] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+321,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                   [2U] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+322,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [2U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+323,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                             [2U]))));
        bufp->chgIData(oldp+324,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                          [3U] >> 0x1aU))),32);
        bufp->chgCData(oldp+325,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [3U] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+326,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                  [3U] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+327,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [3U] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+328,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [3U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+329,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [3U] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+330,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                   [3U] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+331,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                   [3U] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+332,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [3U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+333,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                             [3U]))));
        bufp->chgBit(oldp+334,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready[0]));
        bufp->chgBit(oldp+335,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready[1]));
        bufp->chgBit(oldp+336,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready[2]));
        bufp->chgBit(oldp+337,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready[3]));
        bufp->chgBit(oldp+338,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready[0]));
        bufp->chgBit(oldp+339,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready[1]));
        bufp->chgBit(oldp+340,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready[2]));
        bufp->chgBit(oldp+341,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready[3]));
        bufp->chgCData(oldp+342,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__wr_idx),2);
        bufp->chgCData(oldp+343,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx),2);
        bufp->chgBit(oldp+344,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__wr_idx_valid));
        bufp->chgBit(oldp+345,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx_valid));
        bufp->chgIData(oldp+346,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__unnamedblk7__DOT__i),32);
        bufp->chgQData(oldp+347,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss),64);
        bufp->chgQData(oldp+349,(((QData)((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
                                  * (QData)((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)))),64);
        VL_EXTENDS_WI(65,32, __Vtemp_3, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val);
        __Vtemp_4[0U] = __Vtemp_3[0U];
        __Vtemp_4[1U] = __Vtemp_3[1U];
        __Vtemp_4[2U] = (1U & __Vtemp_3[2U]);
        VL_EXTENDS_WQ(65,33, __Vtemp_6, (QData)((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)));
        __Vtemp_7[0U] = __Vtemp_6[0U];
        __Vtemp_7[1U] = __Vtemp_6[1U];
        __Vtemp_7[2U] = (1U & __Vtemp_6[2U]);
        VL_MULS_WWW(65, __Vtemp_8, __Vtemp_4, __Vtemp_7);
        __Vtemp_9[0U] = __Vtemp_8[0U];
        __Vtemp_9[1U] = __Vtemp_8[1U];
        __Vtemp_9[2U] = (1U & __Vtemp_8[2U]);
        bufp->chgWData(oldp+351,(__Vtemp_9),65);
        VL_EXTENDS_WI(65,32, __Vtemp_12, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val);
        __Vtemp_13[0U] = __Vtemp_12[0U];
        __Vtemp_13[1U] = __Vtemp_12[1U];
        __Vtemp_13[2U] = (1U & __Vtemp_12[2U]);
        VL_EXTENDS_WQ(65,33, __Vtemp_15, (QData)((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)));
        __Vtemp_16[0U] = __Vtemp_15[0U];
        __Vtemp_16[1U] = __Vtemp_15[1U];
        __Vtemp_16[2U] = (1U & __Vtemp_15[2U]);
        VL_MULS_WWW(65, __Vtemp_17, __Vtemp_13, __Vtemp_16);
        bufp->chgIData(oldp+354,(((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                 >> 0x12U)))
                                   ? ((1U & (IData)(
                                                    (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                     >> 0x11U)))
                                       ? ((1U & (IData)(
                                                        (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                         >> 0x10U)))
                                           ? ((0U == vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                               ? vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val
                                               : VL_MODDIV_III(32, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val))
                                           : ((0U == vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                               ? vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val
                                               : ((IData)(vlSymsp->TOP__top_tb__dut.cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                   ? 0U
                                                   : 
                                                  VL_MODDIVS_III(32, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val))))
                                       : ((1U & (IData)(
                                                        (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                         >> 0x10U)))
                                           ? ((0U == vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                               ? 0xffffffffU
                                               : VL_DIV_III(32, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val))
                                           : ((0U == vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                               ? 0xffffffffU
                                               : ((IData)(vlSymsp->TOP__top_tb__dut.cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                   ? 0x80000000U
                                                   : 
                                                  VL_DIVS_III(32, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)))))
                                   : ((1U & (IData)(
                                                    (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                     >> 0x11U)))
                                       ? ((1U & (IData)(
                                                        (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                         >> 0x10U)))
                                           ? (IData)(
                                                     (((QData)((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
                                                       * (QData)((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val))) 
                                                      >> 0x20U))
                                           : __Vtemp_17[1U])
                                       : ((1U & (IData)(
                                                        (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                         >> 0x10U)))
                                           ? (IData)(
                                                     (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss 
                                                      >> 0x20U))
                                           : (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss))))),32);
        bufp->chgIData(oldp+355,(((0U == vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                   ? 0xffffffffU : 
                                  ((IData)(vlSymsp->TOP__top_tb__dut.cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                    ? 0x80000000U : 
                                   VL_DIVS_III(32, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)))),32);
        bufp->chgIData(oldp+356,(((0U == vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                   ? 0xffffffffU : 
                                  VL_DIV_III(32, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val))),32);
        bufp->chgBit(oldp+357,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetchq_full));
        bufp->chgIData(oldp+358,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_target),32);
        bufp->chgBit(oldp+359,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp));
        bufp->chgBit(oldp+360,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_valid));
        bufp->chgBit(oldp+361,(((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp) 
                                & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_valid))));
        bufp->chgBit(oldp+362,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_hit));
        bufp->chgBit(oldp+363,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__commit_pred_taken));
        bufp->chgBit(oldp+364,(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT____Vcellinp__tage_predictor__update_valid));
        bufp->chgCData(oldp+365,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[0]),3);
        bufp->chgCData(oldp+366,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[1]),3);
        bufp->chgCData(oldp+367,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[2]),3);
        bufp->chgCData(oldp+368,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[3]),3);
        bufp->chgCData(oldp+369,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[4]),3);
        bufp->chgCData(oldp+370,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[5]),3);
        bufp->chgCData(oldp+371,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[6]),3);
        bufp->chgCData(oldp+372,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[7]),3);
        bufp->chgCData(oldp+373,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[8]),3);
        bufp->chgCData(oldp+374,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[9]),3);
        bufp->chgCData(oldp+375,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[10]),3);
        bufp->chgCData(oldp+376,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[11]),3);
        bufp->chgCData(oldp+377,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[12]),3);
        bufp->chgCData(oldp+378,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[13]),3);
        bufp->chgCData(oldp+379,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[14]),3);
        bufp->chgCData(oldp+380,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[15]),3);
        bufp->chgCData(oldp+381,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                          >> 2U))),4);
        bufp->chgCData(oldp+382,((0xfU & ((vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[0xaU] 
                                           << 1U) | 
                                          (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[9U] 
                                           >> 0x1fU)))),4);
        bufp->chgCData(oldp+383,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_way),2);
        bufp->chgCData(oldp+384,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_way),2);
        bufp->chgCData(oldp+385,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_install_way),2);
        bufp->chgBit(oldp+386,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_found));
        bufp->chgBit(oldp+387,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_found));
        bufp->chgIData(oldp+388,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk2__DOT__w),32);
        bufp->chgIData(oldp+389,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk3__DOT__w),32);
        bufp->chgIData(oldp+390,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk4__DOT__s),32);
        bufp->chgIData(oldp+391,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__w),32);
        bufp->chgWData(oldp+392,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_cand_ctr[0]),65);
        bufp->chgWData(oldp+395,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_cand_ctr[1]),65);
        bufp->chgWData(oldp+398,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_cand_ctr[2]),65);
        bufp->chgWData(oldp+401,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_cand_ctr[3]),65);
        bufp->chgWData(oldp+404,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_cand_ctr[4]),65);
        bufp->chgWData(oldp+407,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_ctr[0]),65);
        bufp->chgWData(oldp+410,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_ctr[1]),65);
        bufp->chgWData(oldp+413,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_ctr[2]),65);
        bufp->chgWData(oldp+416,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_ctr[3]),65);
        bufp->chgWData(oldp+419,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_ctr[4]),65);
        bufp->chgWData(oldp+422,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_ctr[0]),65);
        bufp->chgWData(oldp+425,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_ctr[1]),65);
        bufp->chgWData(oldp+428,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_ctr[2]),65);
        bufp->chgWData(oldp+431,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_ctr[3]),65);
        bufp->chgWData(oldp+434,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_ctr[4]),65);
        bufp->chgWData(oldp+437,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mispred_ctr[0]),65);
        bufp->chgWData(oldp+440,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mispred_ctr[1]),65);
        bufp->chgWData(oldp+443,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mispred_ctr[2]),65);
        bufp->chgWData(oldp+446,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mispred_ctr[3]),65);
        bufp->chgWData(oldp+449,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mispred_ctr[4]),65);
        bufp->chgWData(oldp+452,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_u_match_ctr[0]),65);
        bufp->chgWData(oldp+455,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_u_match_ctr[1]),65);
        bufp->chgWData(oldp+458,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_u_match_ctr[2]),65);
        bufp->chgWData(oldp+461,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_u_match_ctr[3]),65);
        bufp->chgWData(oldp+464,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_u_match_ctr[4]),65);
        bufp->chgWData(oldp+467,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_match_ctr[0]),65);
        bufp->chgWData(oldp+470,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_match_ctr[1]),65);
        bufp->chgWData(oldp+473,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_match_ctr[2]),65);
        bufp->chgWData(oldp+476,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_match_ctr[3]),65);
        bufp->chgWData(oldp+479,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_match_ctr[4]),65);
        bufp->chgWData(oldp+482,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__T4_fail_alloc_ctr),65);
        bufp->chgIData(oldp+485,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist),32);
        bufp->chgIData(oldp+486,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__phist),32);
        bufp->chgCData(oldp+487,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lfsr),8);
        bufp->chgCData(oldp+488,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_bp_idx),7);
        bufp->chgCData(oldp+489,((0x7fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                            >> 0x19U) 
                                           ^ ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                               >> 5U) 
                                              ^ (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                                 >> 0xdU))))),7);
        bufp->chgSData(oldp+490,(((IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h9247e85f__0) 
                                  ^ (3U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist))),9);
        bufp->chgSData(oldp+491,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag),9);
        bufp->chgSData(oldp+492,(((IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h9247e85f__0) 
                                  ^ (0xfU & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist))),9);
        bufp->chgSData(oldp+493,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag),9);
        bufp->chgSData(oldp+494,(((IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h9247e85f__0) 
                                  ^ (0xffU & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist))),9);
        bufp->chgSData(oldp+495,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag),9);
        bufp->chgSData(oldp+496,(((IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h9247e85f__0) 
                                  ^ (IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h083e6cc3__0))),9);
        bufp->chgSData(oldp+497,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag),9);
        bufp->chgIData(oldp+498,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_2),32);
        bufp->chgIData(oldp+499,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_3),32);
        bufp->chgIData(oldp+500,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_4),32);
        bufp->chgBit(oldp+501,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__bp_table
                                      [(0x7fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                                  >> 0x19U) 
                                                 ^ 
                                                 ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                                   >> 5U) 
                                                  ^ 
                                                  (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                                   >> 0xdU))))] 
                                      >> 1U))));
        bufp->chgBit(oldp+502,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u));
        bufp->chgBit(oldp+503,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u));
        bufp->chgBit(oldp+504,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u));
        bufp->chgBit(oldp+505,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u));
        bufp->chgBit(oldp+506,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag));
        bufp->chgBit(oldp+507,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag));
        bufp->chgBit(oldp+508,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag));
        bufp->chgBit(oldp+509,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag));
        bufp->chgIData(oldp+510,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u),32);
        bufp->chgIData(oldp+511,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u),32);
        bufp->chgIData(oldp+512,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u),32);
        bufp->chgIData(oldp+513,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u),32);
        bufp->chgIData(oldp+514,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag),32);
        bufp->chgIData(oldp+515,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag),32);
        bufp->chgIData(oldp+516,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag),32);
        bufp->chgIData(oldp+517,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag),32);
        bufp->chgCData(oldp+518,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp),3);
        bufp->chgIData(oldp+519,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp),32);
        bufp->chgBit(oldp+520,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp));
        bufp->chgBit(oldp+521,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp));
        bufp->chgBit(oldp+522,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp));
        bufp->chgIData(oldp+523,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp),32);
        bufp->chgIData(oldp+524,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag),32);
        bufp->chgIData(oldp+525,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag),32);
        bufp->chgIData(oldp+526,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag),32);
        bufp->chgBit(oldp+527,(((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp) 
                                != (1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table
                                          [(0x3fU & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag)] 
                                          >> 1U)))));
        bufp->chgBit(oldp+528,(((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp) 
                                != (1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table
                                          [(0x3fU & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag)] 
                                          >> 1U)))));
        bufp->chgBit(oldp+529,(((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp) 
                                != (1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table
                                          [(0x3fU & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag)] 
                                          >> 1U)))));
        bufp->chgIData(oldp+530,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0U][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0U][4U] >> 9U))),32);
        bufp->chgCData(oldp+531,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [0U][4U] >> 6U))),3);
        bufp->chgIData(oldp+532,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0U][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0U][3U] >> 6U))),32);
        bufp->chgBit(oldp+533,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0U][3U] >> 5U))));
        bufp->chgBit(oldp+534,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0U][3U] >> 4U))));
        bufp->chgBit(oldp+535,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0U][3U] >> 3U))));
        bufp->chgIData(oldp+536,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0U][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0U][2U] >> 3U))),32);
        bufp->chgIData(oldp+537,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0U][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0U][1U] >> 3U))),32);
        bufp->chgIData(oldp+538,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0U][0U] >> 3U))),32);
        bufp->chgBit(oldp+539,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0U][0U] >> 2U))));
        bufp->chgBit(oldp+540,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0U][0U] >> 1U))));
        bufp->chgBit(oldp+541,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [0U][0U])));
        bufp->chgIData(oldp+542,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [1U][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [1U][4U] >> 9U))),32);
        bufp->chgCData(oldp+543,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [1U][4U] >> 6U))),3);
        bufp->chgIData(oldp+544,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [1U][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [1U][3U] >> 6U))),32);
        bufp->chgBit(oldp+545,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [1U][3U] >> 5U))));
        bufp->chgBit(oldp+546,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [1U][3U] >> 4U))));
        bufp->chgBit(oldp+547,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [1U][3U] >> 3U))));
        bufp->chgIData(oldp+548,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [1U][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [1U][2U] >> 3U))),32);
        bufp->chgIData(oldp+549,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [1U][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [1U][1U] >> 3U))),32);
        bufp->chgIData(oldp+550,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [1U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [1U][0U] >> 3U))),32);
        bufp->chgBit(oldp+551,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [1U][0U] >> 2U))));
        bufp->chgBit(oldp+552,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [1U][0U] >> 1U))));
        bufp->chgBit(oldp+553,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [1U][0U])));
        bufp->chgIData(oldp+554,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [2U][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [2U][4U] >> 9U))),32);
        bufp->chgCData(oldp+555,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [2U][4U] >> 6U))),3);
        bufp->chgIData(oldp+556,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [2U][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [2U][3U] >> 6U))),32);
        bufp->chgBit(oldp+557,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [2U][3U] >> 5U))));
        bufp->chgBit(oldp+558,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [2U][3U] >> 4U))));
        bufp->chgBit(oldp+559,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [2U][3U] >> 3U))));
        bufp->chgIData(oldp+560,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [2U][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [2U][2U] >> 3U))),32);
        bufp->chgIData(oldp+561,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [2U][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [2U][1U] >> 3U))),32);
        bufp->chgIData(oldp+562,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [2U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [2U][0U] >> 3U))),32);
        bufp->chgBit(oldp+563,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [2U][0U] >> 2U))));
        bufp->chgBit(oldp+564,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [2U][0U] >> 1U))));
        bufp->chgBit(oldp+565,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [2U][0U])));
        bufp->chgIData(oldp+566,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [3U][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [3U][4U] >> 9U))),32);
        bufp->chgCData(oldp+567,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [3U][4U] >> 6U))),3);
        bufp->chgIData(oldp+568,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [3U][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [3U][3U] >> 6U))),32);
        bufp->chgBit(oldp+569,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [3U][3U] >> 5U))));
        bufp->chgBit(oldp+570,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [3U][3U] >> 4U))));
        bufp->chgBit(oldp+571,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [3U][3U] >> 3U))));
        bufp->chgIData(oldp+572,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [3U][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [3U][2U] >> 3U))),32);
        bufp->chgIData(oldp+573,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [3U][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [3U][1U] >> 3U))),32);
        bufp->chgIData(oldp+574,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [3U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [3U][0U] >> 3U))),32);
        bufp->chgBit(oldp+575,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [3U][0U] >> 2U))));
        bufp->chgBit(oldp+576,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [3U][0U] >> 1U))));
        bufp->chgBit(oldp+577,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [3U][0U])));
        bufp->chgIData(oldp+578,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [4U][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [4U][4U] >> 9U))),32);
        bufp->chgCData(oldp+579,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [4U][4U] >> 6U))),3);
        bufp->chgIData(oldp+580,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [4U][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [4U][3U] >> 6U))),32);
        bufp->chgBit(oldp+581,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [4U][3U] >> 5U))));
        bufp->chgBit(oldp+582,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [4U][3U] >> 4U))));
        bufp->chgBit(oldp+583,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [4U][3U] >> 3U))));
        bufp->chgIData(oldp+584,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [4U][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [4U][2U] >> 3U))),32);
        bufp->chgIData(oldp+585,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [4U][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [4U][1U] >> 3U))),32);
        bufp->chgIData(oldp+586,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [4U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [4U][0U] >> 3U))),32);
        bufp->chgBit(oldp+587,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [4U][0U] >> 2U))));
        bufp->chgBit(oldp+588,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [4U][0U] >> 1U))));
        bufp->chgBit(oldp+589,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [4U][0U])));
        bufp->chgIData(oldp+590,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [5U][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [5U][4U] >> 9U))),32);
        bufp->chgCData(oldp+591,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [5U][4U] >> 6U))),3);
        bufp->chgIData(oldp+592,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [5U][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [5U][3U] >> 6U))),32);
        bufp->chgBit(oldp+593,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [5U][3U] >> 5U))));
        bufp->chgBit(oldp+594,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [5U][3U] >> 4U))));
        bufp->chgBit(oldp+595,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [5U][3U] >> 3U))));
        bufp->chgIData(oldp+596,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [5U][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [5U][2U] >> 3U))),32);
        bufp->chgIData(oldp+597,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [5U][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [5U][1U] >> 3U))),32);
        bufp->chgIData(oldp+598,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [5U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [5U][0U] >> 3U))),32);
        bufp->chgBit(oldp+599,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [5U][0U] >> 2U))));
        bufp->chgBit(oldp+600,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [5U][0U] >> 1U))));
        bufp->chgBit(oldp+601,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [5U][0U])));
        bufp->chgIData(oldp+602,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [6U][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [6U][4U] >> 9U))),32);
        bufp->chgCData(oldp+603,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [6U][4U] >> 6U))),3);
        bufp->chgIData(oldp+604,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [6U][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [6U][3U] >> 6U))),32);
        bufp->chgBit(oldp+605,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [6U][3U] >> 5U))));
        bufp->chgBit(oldp+606,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [6U][3U] >> 4U))));
        bufp->chgBit(oldp+607,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [6U][3U] >> 3U))));
        bufp->chgIData(oldp+608,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [6U][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [6U][2U] >> 3U))),32);
        bufp->chgIData(oldp+609,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [6U][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [6U][1U] >> 3U))),32);
        bufp->chgIData(oldp+610,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [6U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [6U][0U] >> 3U))),32);
        bufp->chgBit(oldp+611,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [6U][0U] >> 2U))));
        bufp->chgBit(oldp+612,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [6U][0U] >> 1U))));
        bufp->chgBit(oldp+613,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [6U][0U])));
        bufp->chgIData(oldp+614,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [7U][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [7U][4U] >> 9U))),32);
        bufp->chgCData(oldp+615,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [7U][4U] >> 6U))),3);
        bufp->chgIData(oldp+616,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [7U][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [7U][3U] >> 6U))),32);
        bufp->chgBit(oldp+617,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [7U][3U] >> 5U))));
        bufp->chgBit(oldp+618,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [7U][3U] >> 4U))));
        bufp->chgBit(oldp+619,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [7U][3U] >> 3U))));
        bufp->chgIData(oldp+620,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [7U][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [7U][2U] >> 3U))),32);
        bufp->chgIData(oldp+621,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [7U][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [7U][1U] >> 3U))),32);
        bufp->chgIData(oldp+622,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [7U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [7U][0U] >> 3U))),32);
        bufp->chgBit(oldp+623,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [7U][0U] >> 2U))));
        bufp->chgBit(oldp+624,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [7U][0U] >> 1U))));
        bufp->chgBit(oldp+625,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [7U][0U])));
        bufp->chgIData(oldp+626,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [8U][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [8U][4U] >> 9U))),32);
        bufp->chgCData(oldp+627,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [8U][4U] >> 6U))),3);
        bufp->chgIData(oldp+628,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [8U][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [8U][3U] >> 6U))),32);
        bufp->chgBit(oldp+629,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [8U][3U] >> 5U))));
        bufp->chgBit(oldp+630,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [8U][3U] >> 4U))));
        bufp->chgBit(oldp+631,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [8U][3U] >> 3U))));
        bufp->chgIData(oldp+632,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [8U][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [8U][2U] >> 3U))),32);
        bufp->chgIData(oldp+633,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [8U][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [8U][1U] >> 3U))),32);
        bufp->chgIData(oldp+634,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [8U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [8U][0U] >> 3U))),32);
        bufp->chgBit(oldp+635,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [8U][0U] >> 2U))));
        bufp->chgBit(oldp+636,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [8U][0U] >> 1U))));
        bufp->chgBit(oldp+637,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [8U][0U])));
        bufp->chgIData(oldp+638,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [9U][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [9U][4U] >> 9U))),32);
        bufp->chgCData(oldp+639,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [9U][4U] >> 6U))),3);
        bufp->chgIData(oldp+640,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [9U][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [9U][3U] >> 6U))),32);
        bufp->chgBit(oldp+641,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [9U][3U] >> 5U))));
        bufp->chgBit(oldp+642,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [9U][3U] >> 4U))));
        bufp->chgBit(oldp+643,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [9U][3U] >> 3U))));
        bufp->chgIData(oldp+644,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [9U][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [9U][2U] >> 3U))),32);
        bufp->chgIData(oldp+645,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [9U][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [9U][1U] >> 3U))),32);
        bufp->chgIData(oldp+646,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [9U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [9U][0U] >> 3U))),32);
        bufp->chgBit(oldp+647,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [9U][0U] >> 2U))));
        bufp->chgBit(oldp+648,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [9U][0U] >> 1U))));
        bufp->chgBit(oldp+649,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [9U][0U])));
        bufp->chgIData(oldp+650,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xaU][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xaU][4U] >> 9U))),32);
        bufp->chgCData(oldp+651,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [0xaU][4U] 
                                        >> 6U))),3);
        bufp->chgIData(oldp+652,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xaU][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xaU][3U] >> 6U))),32);
        bufp->chgBit(oldp+653,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xaU][3U] >> 5U))));
        bufp->chgBit(oldp+654,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xaU][3U] >> 4U))));
        bufp->chgBit(oldp+655,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xaU][3U] >> 3U))));
        bufp->chgIData(oldp+656,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xaU][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xaU][2U] >> 3U))),32);
        bufp->chgIData(oldp+657,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xaU][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xaU][1U] >> 3U))),32);
        bufp->chgIData(oldp+658,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xaU][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xaU][0U] >> 3U))),32);
        bufp->chgBit(oldp+659,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xaU][0U] >> 2U))));
        bufp->chgBit(oldp+660,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xaU][0U] >> 1U))));
        bufp->chgBit(oldp+661,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [0xaU][0U])));
        bufp->chgIData(oldp+662,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xbU][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xbU][4U] >> 9U))),32);
        bufp->chgCData(oldp+663,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [0xbU][4U] 
                                        >> 6U))),3);
        bufp->chgIData(oldp+664,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xbU][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xbU][3U] >> 6U))),32);
        bufp->chgBit(oldp+665,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xbU][3U] >> 5U))));
        bufp->chgBit(oldp+666,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xbU][3U] >> 4U))));
        bufp->chgBit(oldp+667,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xbU][3U] >> 3U))));
        bufp->chgIData(oldp+668,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xbU][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xbU][2U] >> 3U))),32);
        bufp->chgIData(oldp+669,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xbU][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xbU][1U] >> 3U))),32);
        bufp->chgIData(oldp+670,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xbU][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xbU][0U] >> 3U))),32);
        bufp->chgBit(oldp+671,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xbU][0U] >> 2U))));
        bufp->chgBit(oldp+672,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xbU][0U] >> 1U))));
        bufp->chgBit(oldp+673,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [0xbU][0U])));
        bufp->chgIData(oldp+674,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xcU][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xcU][4U] >> 9U))),32);
        bufp->chgCData(oldp+675,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [0xcU][4U] 
                                        >> 6U))),3);
        bufp->chgIData(oldp+676,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xcU][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xcU][3U] >> 6U))),32);
        bufp->chgBit(oldp+677,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xcU][3U] >> 5U))));
        bufp->chgBit(oldp+678,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xcU][3U] >> 4U))));
        bufp->chgBit(oldp+679,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xcU][3U] >> 3U))));
        bufp->chgIData(oldp+680,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xcU][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xcU][2U] >> 3U))),32);
        bufp->chgIData(oldp+681,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xcU][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xcU][1U] >> 3U))),32);
        bufp->chgIData(oldp+682,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xcU][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xcU][0U] >> 3U))),32);
        bufp->chgBit(oldp+683,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xcU][0U] >> 2U))));
        bufp->chgBit(oldp+684,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xcU][0U] >> 1U))));
        bufp->chgBit(oldp+685,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [0xcU][0U])));
        bufp->chgIData(oldp+686,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xdU][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xdU][4U] >> 9U))),32);
        bufp->chgCData(oldp+687,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [0xdU][4U] 
                                        >> 6U))),3);
        bufp->chgIData(oldp+688,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xdU][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xdU][3U] >> 6U))),32);
        bufp->chgBit(oldp+689,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xdU][3U] >> 5U))));
        bufp->chgBit(oldp+690,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xdU][3U] >> 4U))));
        bufp->chgBit(oldp+691,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xdU][3U] >> 3U))));
        bufp->chgIData(oldp+692,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xdU][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xdU][2U] >> 3U))),32);
        bufp->chgIData(oldp+693,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xdU][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xdU][1U] >> 3U))),32);
        bufp->chgIData(oldp+694,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xdU][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xdU][0U] >> 3U))),32);
        bufp->chgBit(oldp+695,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xdU][0U] >> 2U))));
        bufp->chgBit(oldp+696,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xdU][0U] >> 1U))));
        bufp->chgBit(oldp+697,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [0xdU][0U])));
        bufp->chgIData(oldp+698,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xeU][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xeU][4U] >> 9U))),32);
        bufp->chgCData(oldp+699,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [0xeU][4U] 
                                        >> 6U))),3);
        bufp->chgIData(oldp+700,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xeU][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xeU][3U] >> 6U))),32);
        bufp->chgBit(oldp+701,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xeU][3U] >> 5U))));
        bufp->chgBit(oldp+702,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xeU][3U] >> 4U))));
        bufp->chgBit(oldp+703,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xeU][3U] >> 3U))));
        bufp->chgIData(oldp+704,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xeU][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xeU][2U] >> 3U))),32);
        bufp->chgIData(oldp+705,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xeU][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xeU][1U] >> 3U))),32);
        bufp->chgIData(oldp+706,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xeU][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xeU][0U] >> 3U))),32);
        bufp->chgBit(oldp+707,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xeU][0U] >> 2U))));
        bufp->chgBit(oldp+708,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xeU][0U] >> 1U))));
        bufp->chgBit(oldp+709,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [0xeU][0U])));
        bufp->chgIData(oldp+710,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xfU][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xfU][4U] >> 9U))),32);
        bufp->chgCData(oldp+711,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [0xfU][4U] 
                                        >> 6U))),3);
        bufp->chgIData(oldp+712,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xfU][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xfU][3U] >> 6U))),32);
        bufp->chgBit(oldp+713,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xfU][3U] >> 5U))));
        bufp->chgBit(oldp+714,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xfU][3U] >> 4U))));
        bufp->chgBit(oldp+715,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xfU][3U] >> 3U))));
        bufp->chgIData(oldp+716,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xfU][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xfU][2U] >> 3U))),32);
        bufp->chgIData(oldp+717,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xfU][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xfU][1U] >> 3U))),32);
        bufp->chgIData(oldp+718,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xfU][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xfU][0U] >> 3U))),32);
        bufp->chgBit(oldp+719,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xfU][0U] >> 2U))));
        bufp->chgBit(oldp+720,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xfU][0U] >> 1U))));
        bufp->chgBit(oldp+721,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [0xfU][0U])));
        bufp->chgIData(oldp+722,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[5U] 
                                   << 0x17U) | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U] 
                                                >> 9U))),32);
        bufp->chgCData(oldp+723,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U] 
                                        >> 6U))),3);
        bufp->chgIData(oldp+724,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U] 
                                   << 0x1aU) | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[3U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+725,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[3U] 
                                      >> 5U))));
        bufp->chgBit(oldp+726,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[3U] 
                                      >> 4U))));
        bufp->chgBit(oldp+727,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[3U] 
                                      >> 3U))));
        bufp->chgIData(oldp+728,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[3U] 
                                   << 0x1dU) | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[2U] 
                                                >> 3U))),32);
        bufp->chgIData(oldp+729,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[2U] 
                                   << 0x1dU) | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[1U] 
                                                >> 3U))),32);
        bufp->chgIData(oldp+730,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[1U] 
                                   << 0x1dU) | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[0U] 
                                                >> 3U))),32);
        bufp->chgBit(oldp+731,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+732,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+733,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[0U])));
        bufp->chgCData(oldp+734,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtr),5);
        bufp->chgCData(oldp+735,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr),5);
        bufp->chgCData(oldp+736,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtrNext),5);
        bufp->chgBit(oldp+737,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__full));
        bufp->chgBit(oldp+738,((((1U & ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtr) 
                                        >> 4U)) == 
                                 (1U & ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr) 
                                        >> 4U))) & (IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_hc4999392__0))));
        bufp->chgBit(oldp+739,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__fifo_valid_pop));
        bufp->chgBit(oldp+740,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T1));
        bufp->chgBit(oldp+741,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T2));
        bufp->chgBit(oldp+742,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T3));
        bufp->chgBit(oldp+743,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T4));
        bufp->chgBit(oldp+744,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1));
        bufp->chgBit(oldp+745,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2));
        bufp->chgBit(oldp+746,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3));
        bufp->chgBit(oldp+747,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4));
        bufp->chgBit(oldp+748,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1));
        bufp->chgBit(oldp+749,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2));
        bufp->chgBit(oldp+750,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3));
        bufp->chgBit(oldp+751,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4));
        bufp->chgIData(oldp+752,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T1),32);
        bufp->chgIData(oldp+753,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T2),32);
        bufp->chgIData(oldp+754,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T3),32);
        bufp->chgIData(oldp+755,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T4),32);
        bufp->chgCData(oldp+756,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T1),6);
        bufp->chgCData(oldp+757,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T2),6);
        bufp->chgCData(oldp+758,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T3),6);
        bufp->chgCData(oldp+759,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T4),6);
        bufp->chgBit(oldp+760,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[0]));
        bufp->chgBit(oldp+761,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[1]));
        bufp->chgBit(oldp+762,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[2]));
        bufp->chgBit(oldp+763,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[3]));
        bufp->chgCData(oldp+764,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position),3);
        bufp->chgBit(oldp+765,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__decrement_all_u));
        bufp->chgIData(oldp+766,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1),32);
        bufp->chgIData(oldp+767,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2),32);
        bufp->chgIData(oldp+768,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3),32);
        bufp->chgIData(oldp+769,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4),32);
        bufp->chgIData(oldp+770,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count),32);
        bufp->chgIData(oldp+771,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__target_q),32);
        bufp->chgIData(oldp+772,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+773,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk10__DOT__i),32);
        bufp->chgIData(oldp+774,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk11__DOT__i),32);
        bufp->chgIData(oldp+775,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk12__DOT__i),32);
        bufp->chgIData(oldp+776,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk13__DOT__i),32);
        bufp->chgIData(oldp+777,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk14__DOT__i),32);
        bufp->chgIData(oldp+778,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk15__DOT__i),32);
        bufp->chgIData(oldp+779,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk16__DOT__i),32);
        bufp->chgIData(oldp+780,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk17__DOT__i),32);
        bufp->chgIData(oldp+781,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk18__DOT__i),32);
        bufp->chgIData(oldp+782,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk19__DOT__i),32);
        bufp->chgIData(oldp+783,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk20__DOT__i),32);
        bufp->chgIData(oldp+784,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk21__DOT__i),32);
        bufp->chgIData(oldp+785,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk22__DOT__i),32);
        bufp->chgIData(oldp+786,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk23__DOT__i),32);
        bufp->chgIData(oldp+787,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk24__DOT__i),32);
        bufp->chgIData(oldp+788,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk25__DOT__i),32);
        bufp->chgIData(oldp+789,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk26__DOT__i),32);
        bufp->chgIData(oldp+790,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk27__DOT__i),32);
        bufp->chgIData(oldp+791,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk28__DOT__i),32);
        bufp->chgIData(oldp+792,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+793,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+794,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk8__DOT__i),32);
        bufp->chgIData(oldp+795,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk9__DOT__i),32);
        bufp->chgBit(oldp+796,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__stale_in_flight));
        bufp->chgBit(oldp+797,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_empty));
        bufp->chgBit(oldp+798,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_empty));
        bufp->chgBit(oldp+799,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_empty));
        bufp->chgBit(oldp+800,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_empty));
        bufp->chgBit(oldp+801,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_full));
        bufp->chgBit(oldp+802,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_full));
        bufp->chgBit(oldp+803,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_full));
        bufp->chgBit(oldp+804,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_full));
        bufp->chgBit(oldp+805,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[0]));
        bufp->chgBit(oldp+806,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[1]));
        bufp->chgBit(oldp+807,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[2]));
        bufp->chgBit(oldp+808,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[3]));
        bufp->chgBit(oldp+809,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[4]));
        bufp->chgBit(oldp+810,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[5]));
        bufp->chgBit(oldp+811,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[6]));
        bufp->chgBit(oldp+812,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[7]));
        bufp->chgCData(oldp+813,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__wrPtr),4);
        bufp->chgCData(oldp+814,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__rdPtr),4);
        bufp->chgIData(oldp+815,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+816,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[0]),32);
        bufp->chgIData(oldp+817,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[1]),32);
        bufp->chgIData(oldp+818,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[2]),32);
        bufp->chgIData(oldp+819,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[3]),32);
        bufp->chgIData(oldp+820,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[4]),32);
        bufp->chgIData(oldp+821,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[5]),32);
        bufp->chgIData(oldp+822,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[6]),32);
        bufp->chgIData(oldp+823,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[7]),32);
        bufp->chgCData(oldp+824,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__wrPtr),4);
        bufp->chgCData(oldp+825,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__rdPtr),4);
        bufp->chgIData(oldp+826,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+827,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[0]),32);
        bufp->chgIData(oldp+828,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[1]),32);
        bufp->chgIData(oldp+829,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[2]),32);
        bufp->chgIData(oldp+830,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[3]),32);
        bufp->chgIData(oldp+831,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[4]),32);
        bufp->chgIData(oldp+832,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[5]),32);
        bufp->chgIData(oldp+833,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[6]),32);
        bufp->chgIData(oldp+834,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[7]),32);
        bufp->chgCData(oldp+835,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__wrPtr),4);
        bufp->chgCData(oldp+836,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__rdPtr),4);
        bufp->chgIData(oldp+837,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+838,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[0]),32);
        bufp->chgIData(oldp+839,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[1]),32);
        bufp->chgIData(oldp+840,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[2]),32);
        bufp->chgIData(oldp+841,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[3]),32);
        bufp->chgIData(oldp+842,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[4]),32);
        bufp->chgIData(oldp+843,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[5]),32);
        bufp->chgIData(oldp+844,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[6]),32);
        bufp->chgIData(oldp+845,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[7]),32);
        bufp->chgCData(oldp+846,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__wrPtr),4);
        bufp->chgCData(oldp+847,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__rdPtr),4);
        bufp->chgIData(oldp+848,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+849,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0]),6);
        bufp->chgCData(oldp+850,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[1]),6);
        bufp->chgCData(oldp+851,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[2]),6);
        bufp->chgCData(oldp+852,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[3]),6);
        bufp->chgCData(oldp+853,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[4]),6);
        bufp->chgCData(oldp+854,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[5]),6);
        bufp->chgCData(oldp+855,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[6]),6);
        bufp->chgCData(oldp+856,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[7]),6);
        bufp->chgCData(oldp+857,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[8]),6);
        bufp->chgCData(oldp+858,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[9]),6);
        bufp->chgCData(oldp+859,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[10]),6);
        bufp->chgCData(oldp+860,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[11]),6);
        bufp->chgCData(oldp+861,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[12]),6);
        bufp->chgCData(oldp+862,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[13]),6);
        bufp->chgCData(oldp+863,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[14]),6);
        bufp->chgCData(oldp+864,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[15]),6);
        bufp->chgCData(oldp+865,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[16]),6);
        bufp->chgCData(oldp+866,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[17]),6);
        bufp->chgCData(oldp+867,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[18]),6);
        bufp->chgCData(oldp+868,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[19]),6);
        bufp->chgCData(oldp+869,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[20]),6);
        bufp->chgCData(oldp+870,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[21]),6);
        bufp->chgCData(oldp+871,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[22]),6);
        bufp->chgCData(oldp+872,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[23]),6);
        bufp->chgCData(oldp+873,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[24]),6);
        bufp->chgCData(oldp+874,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[25]),6);
        bufp->chgCData(oldp+875,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[26]),6);
        bufp->chgCData(oldp+876,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[27]),6);
        bufp->chgCData(oldp+877,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[28]),6);
        bufp->chgCData(oldp+878,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[29]),6);
        bufp->chgCData(oldp+879,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[30]),6);
        bufp->chgCData(oldp+880,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[31]),6);
        bufp->chgBit(oldp+881,(vlSymsp->TOP__top_tb__dut.__Vcellinp__cpu_midcore__commit_update));
        bufp->chgBit(oldp+882,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+883,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+884,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                      >> 0xeU))));
        bufp->chgCData(oldp+885,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                           >> 9U))),5);
        bufp->chgCData(oldp+886,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                           >> 3U))),6);
        bufp->chgCData(oldp+887,((0x3fU & ((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                            << 3U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xaU] 
                                              >> 0x1dU)))),6);
        bufp->chgIData(oldp+888,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xaU] 
                                   << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[9U] 
                                             >> 0x1dU))),32);
        bufp->chgIData(oldp+889,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[9U] 
                                   << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[8U] 
                                             >> 0x1dU))),32);
        bufp->chgIData(oldp+890,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[8U] 
                                   << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                             >> 0x1dU))),32);
        bufp->chgBit(oldp+891,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+892,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+893,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+894,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                           >> 0x11U))),5);
        bufp->chgIData(oldp+895,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                   << 0xfU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[6U] 
                                               >> 0x11U))),32);
        bufp->chgIData(oldp+896,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[6U] 
                                   << 0xfU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[5U] 
                                               >> 0x11U))),32);
        bufp->chgCData(oldp+897,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[5U] 
                                          >> 0xdU))),4);
        bufp->chgIData(oldp+898,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[5U] 
                                   << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[4U] 
                                                >> 0xdU))),32);
        bufp->chgIData(oldp+899,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[4U] 
                                   << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[3U] 
                                                >> 0xdU))),32);
        bufp->chgCData(oldp+900,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[3U] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+901,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[3U] 
                                          >> 5U))),4);
        bufp->chgIData(oldp+902,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[3U] 
                                   << 0x1bU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+903,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[2U] 
                                   << 0x1bU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                                >> 5U))),32);
        bufp->chgBit(oldp+904,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                      >> 4U))));
        bufp->chgBit(oldp+905,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                      >> 3U))));
        bufp->chgBit(oldp+906,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                      >> 2U))));
        bufp->chgBit(oldp+907,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                      >> 1U))));
        bufp->chgIData(oldp+908,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                   << 0x1fU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0U] 
                                                >> 1U))),32);
        bufp->chgBit(oldp+909,((1U & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0U])));
        bufp->chgBit(oldp+910,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+911,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+912,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                      >> 0xeU))));
        bufp->chgCData(oldp+913,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                           >> 9U))),5);
        bufp->chgCData(oldp+914,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                           >> 3U))),6);
        bufp->chgCData(oldp+915,((0x3fU & ((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                            << 3U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xaU] 
                                              >> 0x1dU)))),6);
        bufp->chgIData(oldp+916,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xaU] 
                                   << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[9U] 
                                             >> 0x1dU))),32);
        bufp->chgIData(oldp+917,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[9U] 
                                   << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[8U] 
                                             >> 0x1dU))),32);
        bufp->chgIData(oldp+918,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[8U] 
                                   << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                             >> 0x1dU))),32);
        bufp->chgBit(oldp+919,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+920,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+921,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+922,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                           >> 0x11U))),5);
        bufp->chgIData(oldp+923,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                   << 0xfU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[6U] 
                                               >> 0x11U))),32);
        bufp->chgIData(oldp+924,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[6U] 
                                   << 0xfU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[5U] 
                                               >> 0x11U))),32);
        bufp->chgCData(oldp+925,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[5U] 
                                          >> 0xdU))),4);
        bufp->chgIData(oldp+926,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[5U] 
                                   << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[4U] 
                                                >> 0xdU))),32);
        bufp->chgIData(oldp+927,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[4U] 
                                   << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[3U] 
                                                >> 0xdU))),32);
        bufp->chgCData(oldp+928,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[3U] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+929,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[3U] 
                                          >> 5U))),4);
        bufp->chgIData(oldp+930,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[3U] 
                                   << 0x1bU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+931,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[2U] 
                                   << 0x1bU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                                >> 5U))),32);
        bufp->chgBit(oldp+932,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                      >> 4U))));
        bufp->chgBit(oldp+933,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                      >> 3U))));
        bufp->chgBit(oldp+934,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                      >> 2U))));
        bufp->chgBit(oldp+935,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                      >> 1U))));
        bufp->chgIData(oldp+936,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                   << 0x1fU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0U] 
                                                >> 1U))),32);
        bufp->chgBit(oldp+937,((1U & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0U])));
        bufp->chgBit(oldp+938,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+939,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+940,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                      >> 0xeU))));
        bufp->chgCData(oldp+941,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                           >> 9U))),5);
        bufp->chgCData(oldp+942,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                           >> 3U))),6);
        bufp->chgCData(oldp+943,((0x3fU & ((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                            << 3U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xaU] 
                                              >> 0x1dU)))),6);
        bufp->chgIData(oldp+944,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xaU] 
                                   << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[9U] 
                                             >> 0x1dU))),32);
        bufp->chgIData(oldp+945,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[9U] 
                                   << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[8U] 
                                             >> 0x1dU))),32);
        bufp->chgIData(oldp+946,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[8U] 
                                   << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                             >> 0x1dU))),32);
        bufp->chgBit(oldp+947,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+948,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+949,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+950,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                           >> 0x11U))),5);
        bufp->chgIData(oldp+951,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                   << 0xfU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[6U] 
                                               >> 0x11U))),32);
        bufp->chgIData(oldp+952,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[6U] 
                                   << 0xfU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[5U] 
                                               >> 0x11U))),32);
        bufp->chgCData(oldp+953,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[5U] 
                                          >> 0xdU))),4);
        bufp->chgIData(oldp+954,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[5U] 
                                   << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[4U] 
                                                >> 0xdU))),32);
        bufp->chgIData(oldp+955,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[4U] 
                                   << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[3U] 
                                                >> 0xdU))),32);
        bufp->chgCData(oldp+956,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[3U] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+957,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[3U] 
                                          >> 5U))),4);
        bufp->chgIData(oldp+958,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[3U] 
                                   << 0x1bU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+959,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[2U] 
                                   << 0x1bU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                                >> 5U))),32);
        bufp->chgBit(oldp+960,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                      >> 4U))));
        bufp->chgBit(oldp+961,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                      >> 3U))));
        bufp->chgBit(oldp+962,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                      >> 2U))));
        bufp->chgBit(oldp+963,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                      >> 1U))));
        bufp->chgIData(oldp+964,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                   << 0x1fU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0U] 
                                                >> 1U))),32);
        bufp->chgBit(oldp+965,((1U & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0U])));
        bufp->chgBit(oldp+966,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+967,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+968,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                      >> 0xeU))));
        bufp->chgCData(oldp+969,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                           >> 9U))),5);
        bufp->chgCData(oldp+970,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                           >> 3U))),6);
        bufp->chgCData(oldp+971,((0x3fU & ((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                            << 3U) 
                                           | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xaU] 
                                              >> 0x1dU)))),6);
        bufp->chgIData(oldp+972,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xaU] 
                                   << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[9U] 
                                             >> 0x1dU))),32);
        bufp->chgIData(oldp+973,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[9U] 
                                   << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[8U] 
                                             >> 0x1dU))),32);
        bufp->chgIData(oldp+974,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[8U] 
                                   << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                             >> 0x1dU))),32);
        bufp->chgBit(oldp+975,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+976,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+977,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+978,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                           >> 0x11U))),5);
        bufp->chgIData(oldp+979,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                   << 0xfU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[6U] 
                                               >> 0x11U))),32);
        bufp->chgIData(oldp+980,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[6U] 
                                   << 0xfU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[5U] 
                                               >> 0x11U))),32);
        bufp->chgCData(oldp+981,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[5U] 
                                          >> 0xdU))),4);
        bufp->chgIData(oldp+982,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[5U] 
                                   << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[4U] 
                                                >> 0xdU))),32);
        bufp->chgIData(oldp+983,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[4U] 
                                   << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[3U] 
                                                >> 0xdU))),32);
        bufp->chgCData(oldp+984,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[3U] 
                                          >> 9U))),4);
        bufp->chgCData(oldp+985,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[3U] 
                                          >> 5U))),4);
        bufp->chgIData(oldp+986,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[3U] 
                                   << 0x1bU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+987,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[2U] 
                                   << 0x1bU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                                >> 5U))),32);
        bufp->chgBit(oldp+988,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                      >> 4U))));
        bufp->chgBit(oldp+989,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                      >> 3U))));
        bufp->chgBit(oldp+990,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                      >> 2U))));
        bufp->chgBit(oldp+991,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                      >> 1U))));
        bufp->chgIData(oldp+992,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                   << 0x1fU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0U] 
                                                >> 1U))),32);
        bufp->chgBit(oldp+993,((1U & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0U])));
        bufp->chgIData(oldp+994,((IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                          >> 0x1aU))),32);
        bufp->chgCData(oldp+995,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+996,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+997,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+998,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+999,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+1000,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                                    >> 8U)))),6);
        bufp->chgCData(oldp+1001,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                                    >> 2U)))),6);
        bufp->chgBit(oldp+1002,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                               >> 1U)))));
        bufp->chgBit(oldp+1003,((1U & (IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o))));
        bufp->chgIData(oldp+1004,((IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                           >> 0x1aU))),32);
        bufp->chgCData(oldp+1005,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                 >> 0x17U)))),3);
        bufp->chgCData(oldp+1006,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                   >> 0x13U)))),4);
        bufp->chgCData(oldp+1007,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                 >> 0x10U)))),3);
        bufp->chgBit(oldp+1008,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1009,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                               >> 0xeU)))));
        bufp->chgCData(oldp+1010,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                    >> 8U)))),6);
        bufp->chgCData(oldp+1011,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                    >> 2U)))),6);
        bufp->chgBit(oldp+1012,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                               >> 1U)))));
        bufp->chgBit(oldp+1013,((1U & (IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg))));
        bufp->chgIData(oldp+1014,((IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                           >> 0x1aU))),32);
        bufp->chgCData(oldp+1015,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                                 >> 0x17U)))),3);
        bufp->chgCData(oldp+1016,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                                   >> 0x13U)))),4);
        bufp->chgCData(oldp+1017,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                                 >> 0x10U)))),3);
        bufp->chgBit(oldp+1018,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1019,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                               >> 0xeU)))));
        bufp->chgCData(oldp+1020,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                                    >> 8U)))),6);
        bufp->chgCData(oldp+1021,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                                    >> 2U)))),6);
        bufp->chgBit(oldp+1022,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                               >> 1U)))));
        bufp->chgBit(oldp+1023,((1U & (IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg))));
        bufp->chgCData(oldp+1024,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_lookup_rs1),5);
        bufp->chgCData(oldp+1025,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+1026,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                            >> 7U))),5);
        bufp->chgCData(oldp+1027,(((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                  >> 0xfU)))
                                    ? (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                        >> 8U)))
                                    : 0U)),6);
        bufp->chgCData(oldp+1028,(((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                  >> 0xeU)))
                                    ? (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                        >> 2U)))
                                    : 0U)),6);
        bufp->chgBit(oldp+1029,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__busy_table__DOT__bt 
                                               >> (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                               >> 0xfU)))
                                                    ? 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                               >> 8U)))
                                                    : 0U))))));
        bufp->chgBit(oldp+1030,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__busy_table__DOT__bt 
                                               >> (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                               >> 0xeU)))
                                                    ? 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                               >> 2U)))
                                                    : 0U))))));
        bufp->chgCData(oldp+1031,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_pr),6);
        bufp->chgBit(oldp+1032,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_pr_valid));
        bufp->chgBit(oldp+1033,((IData)((0x14000U == 
                                         (0x14000U 
                                          & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU])))));
        bufp->chgCData(oldp+1034,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__rename_update_pr),6);
        bufp->chgCData(oldp+1035,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__rename_update_ar),5);
        bufp->chgQData(oldp+1036,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__busy_table__DOT__bt),64);
        bufp->chgCData(oldp+1038,((vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+1039,((0x7fU & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)),7);
        bufp->chgIData(oldp+1040,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__i_imm),32);
        bufp->chgIData(oldp+1041,((((- (IData)((vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                >> 0x1fU))) 
                                    << 0xbU) | ((0x7e0U 
                                                 & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                      >> 7U))))),32);
        bufp->chgIData(oldp+1042,((((- (IData)((vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0x800U 
                                                 & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                         >> 7U)))))),32);
        bufp->chgIData(oldp+1043,((0xfffff000U & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)),32);
        bufp->chgIData(oldp+1044,((((- (IData)((vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst) 
                                                 | ((0x800U 
                                                     & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                          >> 0x14U)))))),32);
        bufp->chgCData(oldp+1045,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                         >> 0xcU))),3);
        bufp->chgBit(oldp+1046,((((IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.decode__DOT____VdfgTmp_h90d7ced5__0) 
                                  | ((3U == (0x7fU 
                                             & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                     | ((0x6fU == (0x7fU 
                                                   & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                        | ((0x67U == 
                                            (0x7fU 
                                             & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                           | (IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.decode__DOT____VdfgExtracted_hf4d07035__0))))) 
                                 & (0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                            >> 7U))))));
        bufp->chgBit(oldp+1047,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__rs1_valid));
        bufp->chgBit(oldp+1048,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__rs2_valid));
        bufp->chgBit(oldp+1049,((0x63U == (0x7fU & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst))));
        bufp->chgIData(oldp+1050,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__imm_o),32);
        bufp->chgCData(oldp+1051,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__dispatch_to),3);
        bufp->chgCData(oldp+1052,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__alu_op),4);
        bufp->chgBit(oldp+1053,(((0x6fU == (0x7fU & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                 | (0x67U == (0x7fU 
                                              & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)))));
        bufp->chgQData(oldp+1054,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list),64);
        bufp->chgQData(oldp+1056,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list_recovery),64);
        bufp->chgCData(oldp+1058,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[0]),6);
        bufp->chgCData(oldp+1059,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[1]),6);
        bufp->chgCData(oldp+1060,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[2]),6);
        bufp->chgCData(oldp+1061,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[3]),6);
        bufp->chgCData(oldp+1062,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[4]),6);
        bufp->chgCData(oldp+1063,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[5]),6);
        bufp->chgCData(oldp+1064,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[6]),6);
        bufp->chgCData(oldp+1065,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[7]),6);
        bufp->chgCData(oldp+1066,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[8]),6);
        bufp->chgCData(oldp+1067,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[9]),6);
        bufp->chgCData(oldp+1068,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[10]),6);
        bufp->chgCData(oldp+1069,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[11]),6);
        bufp->chgCData(oldp+1070,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[12]),6);
        bufp->chgCData(oldp+1071,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[13]),6);
        bufp->chgCData(oldp+1072,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[14]),6);
        bufp->chgCData(oldp+1073,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[15]),6);
        bufp->chgCData(oldp+1074,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[16]),6);
        bufp->chgCData(oldp+1075,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[17]),6);
        bufp->chgCData(oldp+1076,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[18]),6);
        bufp->chgCData(oldp+1077,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[19]),6);
        bufp->chgCData(oldp+1078,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[20]),6);
        bufp->chgCData(oldp+1079,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[21]),6);
        bufp->chgCData(oldp+1080,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[22]),6);
        bufp->chgCData(oldp+1081,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[23]),6);
        bufp->chgCData(oldp+1082,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[24]),6);
        bufp->chgCData(oldp+1083,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[25]),6);
        bufp->chgCData(oldp+1084,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[26]),6);
        bufp->chgCData(oldp+1085,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[27]),6);
        bufp->chgCData(oldp+1086,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[28]),6);
        bufp->chgCData(oldp+1087,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[29]),6);
        bufp->chgCData(oldp+1088,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[30]),6);
        bufp->chgCData(oldp+1089,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[31]),6);
        bufp->chgIData(oldp+1090,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1091,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[0]));
        bufp->chgBit(oldp+1092,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[1]));
        bufp->chgBit(oldp+1093,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[2]));
        bufp->chgBit(oldp+1094,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[3]));
        bufp->chgBit(oldp+1095,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[4]));
        bufp->chgBit(oldp+1096,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[5]));
        bufp->chgBit(oldp+1097,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[6]));
        bufp->chgBit(oldp+1098,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[7]));
        bufp->chgQData(oldp+1099,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[0]),64);
        bufp->chgQData(oldp+1101,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[1]),64);
        bufp->chgQData(oldp+1103,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[2]),64);
        bufp->chgQData(oldp+1105,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[3]),64);
        bufp->chgQData(oldp+1107,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[4]),64);
        bufp->chgQData(oldp+1109,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[5]),64);
        bufp->chgQData(oldp+1111,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[6]),64);
        bufp->chgQData(oldp+1113,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[7]),64);
        bufp->chgIData(oldp+1115,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[0]),32);
        bufp->chgIData(oldp+1116,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[1]),32);
        bufp->chgIData(oldp+1117,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[2]),32);
        bufp->chgIData(oldp+1118,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[3]),32);
        bufp->chgIData(oldp+1119,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[4]),32);
        bufp->chgIData(oldp+1120,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[5]),32);
        bufp->chgIData(oldp+1121,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[6]),32);
        bufp->chgIData(oldp+1122,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[7]),32);
        bufp->chgBit(oldp+1123,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[0]));
        bufp->chgBit(oldp+1124,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[1]));
        bufp->chgBit(oldp+1125,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[2]));
        bufp->chgBit(oldp+1126,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[3]));
        bufp->chgBit(oldp+1127,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[4]));
        bufp->chgBit(oldp+1128,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[5]));
        bufp->chgBit(oldp+1129,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[6]));
        bufp->chgBit(oldp+1130,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[7]));
        bufp->chgCData(oldp+1131,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[0]),5);
        bufp->chgCData(oldp+1132,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[1]),5);
        bufp->chgCData(oldp+1133,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[2]),5);
        bufp->chgCData(oldp+1134,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[3]),5);
        bufp->chgCData(oldp+1135,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[4]),5);
        bufp->chgCData(oldp+1136,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[5]),5);
        bufp->chgCData(oldp+1137,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[6]),5);
        bufp->chgCData(oldp+1138,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[7]),5);
        bufp->chgCData(oldp+1139,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[0]),5);
        bufp->chgCData(oldp+1140,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[1]),5);
        bufp->chgCData(oldp+1141,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[2]),5);
        bufp->chgCData(oldp+1142,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[3]),5);
        bufp->chgCData(oldp+1143,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[4]),5);
        bufp->chgCData(oldp+1144,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[5]),5);
        bufp->chgCData(oldp+1145,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[6]),5);
        bufp->chgCData(oldp+1146,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[7]),5);
        bufp->chgIData(oldp+1147,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[0]),32);
        bufp->chgIData(oldp+1148,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[1]),32);
        bufp->chgIData(oldp+1149,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[2]),32);
        bufp->chgIData(oldp+1150,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[3]),32);
        bufp->chgIData(oldp+1151,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[4]),32);
        bufp->chgIData(oldp+1152,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[5]),32);
        bufp->chgIData(oldp+1153,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[6]),32);
        bufp->chgIData(oldp+1154,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[7]),32);
        bufp->chgIData(oldp+1155,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[0]),32);
        bufp->chgIData(oldp+1156,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[1]),32);
        bufp->chgIData(oldp+1157,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[2]),32);
        bufp->chgIData(oldp+1158,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[3]),32);
        bufp->chgIData(oldp+1159,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[4]),32);
        bufp->chgIData(oldp+1160,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[5]),32);
        bufp->chgIData(oldp+1161,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[6]),32);
        bufp->chgIData(oldp+1162,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[7]),32);
        bufp->chgCData(oldp+1163,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[0]),5);
        bufp->chgCData(oldp+1164,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[1]),5);
        bufp->chgCData(oldp+1165,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[2]),5);
        bufp->chgCData(oldp+1166,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[3]),5);
        bufp->chgCData(oldp+1167,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[4]),5);
        bufp->chgCData(oldp+1168,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[5]),5);
        bufp->chgCData(oldp+1169,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[6]),5);
        bufp->chgCData(oldp+1170,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[7]),5);
        bufp->chgIData(oldp+1171,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[0]),32);
        bufp->chgIData(oldp+1172,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[1]),32);
        bufp->chgIData(oldp+1173,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[2]),32);
        bufp->chgIData(oldp+1174,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[3]),32);
        bufp->chgIData(oldp+1175,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[4]),32);
        bufp->chgIData(oldp+1176,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[5]),32);
        bufp->chgIData(oldp+1177,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[6]),32);
        bufp->chgIData(oldp+1178,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[7]),32);
        bufp->chgIData(oldp+1179,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[0]),32);
        bufp->chgIData(oldp+1180,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[1]),32);
        bufp->chgIData(oldp+1181,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[2]),32);
        bufp->chgIData(oldp+1182,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[3]),32);
        bufp->chgIData(oldp+1183,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[4]),32);
        bufp->chgIData(oldp+1184,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[5]),32);
        bufp->chgIData(oldp+1185,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[6]),32);
        bufp->chgIData(oldp+1186,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[7]),32);
        bufp->chgIData(oldp+1187,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[0]),32);
        bufp->chgIData(oldp+1188,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[1]),32);
        bufp->chgIData(oldp+1189,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[2]),32);
        bufp->chgIData(oldp+1190,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[3]),32);
        bufp->chgIData(oldp+1191,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[4]),32);
        bufp->chgIData(oldp+1192,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[5]),32);
        bufp->chgIData(oldp+1193,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[6]),32);
        bufp->chgIData(oldp+1194,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[7]),32);
        bufp->chgIData(oldp+1195,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[0]),32);
        bufp->chgIData(oldp+1196,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[1]),32);
        bufp->chgIData(oldp+1197,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[2]),32);
        bufp->chgIData(oldp+1198,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[3]),32);
        bufp->chgIData(oldp+1199,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[4]),32);
        bufp->chgIData(oldp+1200,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[5]),32);
        bufp->chgIData(oldp+1201,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[6]),32);
        bufp->chgIData(oldp+1202,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[7]),32);
        bufp->chgCData(oldp+1203,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[0]),4);
        bufp->chgCData(oldp+1204,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[1]),4);
        bufp->chgCData(oldp+1205,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[2]),4);
        bufp->chgCData(oldp+1206,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[3]),4);
        bufp->chgCData(oldp+1207,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[4]),4);
        bufp->chgCData(oldp+1208,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[5]),4);
        bufp->chgCData(oldp+1209,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[6]),4);
        bufp->chgCData(oldp+1210,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[7]),4);
        bufp->chgCData(oldp+1211,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[0]),4);
        bufp->chgCData(oldp+1212,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[1]),4);
        bufp->chgCData(oldp+1213,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[2]),4);
        bufp->chgCData(oldp+1214,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[3]),4);
        bufp->chgCData(oldp+1215,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[4]),4);
        bufp->chgCData(oldp+1216,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[5]),4);
        bufp->chgCData(oldp+1217,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[6]),4);
        bufp->chgCData(oldp+1218,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[7]),4);
        bufp->chgIData(oldp+1219,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[0]),32);
        bufp->chgIData(oldp+1220,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[1]),32);
        bufp->chgIData(oldp+1221,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[2]),32);
        bufp->chgIData(oldp+1222,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[3]),32);
        bufp->chgIData(oldp+1223,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[4]),32);
        bufp->chgIData(oldp+1224,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[5]),32);
        bufp->chgIData(oldp+1225,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[6]),32);
        bufp->chgIData(oldp+1226,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[7]),32);
        bufp->chgIData(oldp+1227,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[0]),32);
        bufp->chgIData(oldp+1228,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[1]),32);
        bufp->chgIData(oldp+1229,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[2]),32);
        bufp->chgIData(oldp+1230,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[3]),32);
        bufp->chgIData(oldp+1231,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[4]),32);
        bufp->chgIData(oldp+1232,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[5]),32);
        bufp->chgIData(oldp+1233,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[6]),32);
        bufp->chgIData(oldp+1234,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[7]),32);
        bufp->chgBit(oldp+1235,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+1236,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1237,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+1238,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+1239,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+1240,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[0U])),32);
        bufp->chgBit(oldp+1241,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+1242,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+1243,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+1244,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1245,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+1246,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1247,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+1248,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[0U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1249,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+1250,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+1251,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+1252,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+1253,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+1254,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+1255,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+1256,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+1257,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+1258,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+1259,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+1260,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+1261,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+1262,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+1263,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+1264,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+1265,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+1266,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+1267,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+1268,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+1269,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[0U])),32);
        bufp->chgBit(oldp+1270,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+1271,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1272,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+1273,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+1274,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+1275,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+1276,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+1277,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+1278,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+1279,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+1280,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+1281,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+1282,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+1283,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+1284,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+1285,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+1286,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+1287,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+1288,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+1289,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+1290,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+1291,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+1292,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])),32);
        bufp->chgBit(oldp+1293,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+1294,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+1295,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+1296,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+1297,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+1298,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+1299,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+1300,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[0U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+1301,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+1302,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+1303,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+1304,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+1305,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[0U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+1306,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+1307,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+1308,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+1309,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]
                                    : 0U)),32);
        bufp->chgBit(oldp+1310,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+1311,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+1312,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+1313,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+1314,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+1315,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+1316,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+1317,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+1318,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+1319,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+1320,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+1321,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+1322,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+1323,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+1324,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+1325,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+1326,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+1327,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+1328,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+1329,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+1330,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+1331,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+1332,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1333,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+1334,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+1335,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+1336,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+1337,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+1338,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+1339,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+1340,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+1341,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+1342,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+1343,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+1344,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+1345,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+1346,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+1347,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+1348,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+1349,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+1350,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+1351,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+1352,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])
                                    : 0U)),32);
        bufp->chgBit(oldp+1353,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+1354,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+1355,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+1356,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+1357,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+1358,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                    : 0U)),32);
        bufp->chgBit(oldp+1359,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+1360,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+1361,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+1362,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+1363,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+1364,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+1365,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+1366,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1367,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+1368,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1369,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+1370,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+1371,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+1372,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1373,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+1374,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+1375,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+1376,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+1377,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+1378,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+1379,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+1380,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+1381,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1382,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+1383,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1384,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+1385,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+1386,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+1387,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1388,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+1389,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1390,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+1391,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+1392,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+1393,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1394,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+1395,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1396,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+1397,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1398,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+1399,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1400,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+1401,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1402,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+1403,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+1404,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+1405,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+1406,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1407,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+1408,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       ^ VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+1409,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+1410,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+1411,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])),7);
        bufp->chgIData(oldp+1412,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])),32);
        bufp->chgIData(oldp+1413,(VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 0x14U))),32);
        bufp->chgIData(oldp+1414,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+1415,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   & VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1416,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])),32);
        bufp->chgIData(oldp+1417,(VL_EXTENDS_II(32,13, 
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
        bufp->chgBit(oldp+1418,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                 == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
        bufp->chgBit(oldp+1419,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
        bufp->chgBit(oldp+1420,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                 >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
        bufp->chgBit(oldp+1421,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+1422,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+1423,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                 != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
        bufp->chgIData(oldp+1424,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U], 0x10U)),32);
        bufp->chgCData(oldp+1425,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+1426,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])),2);
        bufp->chgIData(oldp+1427,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+1428,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 0xdU))),3);
        bufp->chgIData(oldp+1429,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+1430,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+1431,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+1432,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+1433,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1434,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+1435,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+1436,(VL_EXTENDS_II(32,9, 
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
        bufp->chgBit(oldp+1437,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])));
        bufp->chgBit(oldp+1438,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])));
        bufp->chgIData(oldp+1439,(VL_EXTENDS_II(32,12, 
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
        bufp->chgIData(oldp+1440,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+1441,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                             << 1U)) 
                                   | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                >> 7U)) 
                                      | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+1442,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+1443,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                             << 4U)) 
                                   | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                >> 7U)) 
                                      | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 2U))))),32);
        bufp->chgIData(oldp+1444,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+1445,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[0U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+1446,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+1447,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+1448,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                             >> 1U)) 
                                   | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                               >> 7U)))),32);
        bufp->chgIData(oldp+1449,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+1450,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                    ? 0xffffffffU : 
                                   (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])))),32);
        bufp->chgIData(oldp+1451,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
        bufp->chgIData(oldp+1452,(VL_EXTENDS_II(32,21, 
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
        bufp->chgCData(oldp+1453,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+1454,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+1455,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+1456,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])),32);
        bufp->chgIData(oldp+1457,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1458,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1459,((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])) 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1460,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   | VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1461,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]
                                    : (((0x80000000U 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]) 
                                        & (0xffffffffU 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                        ? 0U : VL_MODDIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])))),32);
        bufp->chgIData(oldp+1462,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]
                                    : VL_MODDIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
        bufp->chgIData(oldp+1463,(VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+1464,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+1465,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])),6);
        bufp->chgIData(oldp+1466,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
        bufp->chgCData(oldp+1467,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+1468,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 0x14U))),6);
        bufp->chgIData(oldp+1469,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1470,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+1471,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                             VL_EXTENDS_II(32,12, 
                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                            >> 0x14U)))),32);
        bufp->chgIData(oldp+1472,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   < VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1473,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+1474,(VL_SHIFTRS_III(32,32,5, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
        bufp->chgIData(oldp+1475,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+1476,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
        bufp->chgIData(oldp+1477,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1478,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   ^ VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                    >> 0x14U)))),32);
        bufp->chgBit(oldp+1479,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+1480,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1481,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+1482,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+1483,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+1484,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[1U])),32);
        bufp->chgBit(oldp+1485,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+1486,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+1487,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+1488,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1489,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+1490,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1491,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+1492,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[1U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1493,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+1494,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+1495,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+1496,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+1497,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+1498,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+1499,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+1500,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+1501,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+1502,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+1503,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+1504,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+1505,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+1506,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+1507,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+1508,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+1509,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+1510,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+1511,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+1512,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+1513,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[1U])),32);
        bufp->chgBit(oldp+1514,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+1515,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1516,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+1517,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+1518,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+1519,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+1520,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+1521,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+1522,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+1523,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+1524,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+1525,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+1526,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+1527,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+1528,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+1529,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+1530,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+1531,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+1532,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+1533,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+1534,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+1535,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+1536,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])),32);
        bufp->chgBit(oldp+1537,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+1538,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+1539,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+1540,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+1541,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+1542,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+1543,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+1544,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[1U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+1545,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+1546,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+1547,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+1548,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+1549,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[1U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+1550,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+1551,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+1552,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+1553,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]
                                    : 0U)),32);
        bufp->chgBit(oldp+1554,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+1555,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+1556,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+1557,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+1558,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+1559,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+1560,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+1561,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+1562,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+1563,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+1564,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+1565,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+1566,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+1567,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+1568,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+1569,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+1570,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+1571,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+1572,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+1573,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+1574,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+1575,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+1576,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1577,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+1578,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+1579,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+1580,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+1581,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+1582,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+1583,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+1584,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+1585,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+1586,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+1587,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+1588,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+1589,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+1590,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+1591,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+1592,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+1593,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+1594,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+1595,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+1596,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])
                                    : 0U)),32);
        bufp->chgBit(oldp+1597,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+1598,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+1599,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+1600,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+1601,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+1602,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                    : 0U)),32);
        bufp->chgBit(oldp+1603,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+1604,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+1605,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+1606,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+1607,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+1608,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+1609,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+1610,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1611,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+1612,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1613,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+1614,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+1615,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+1616,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1617,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+1618,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+1619,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+1620,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+1621,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+1622,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+1623,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+1624,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+1625,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1626,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+1627,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1628,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+1629,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+1630,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+1631,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1632,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+1633,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1634,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+1635,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+1636,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+1637,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1638,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+1639,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1640,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+1641,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1642,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+1643,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1644,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+1645,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1646,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+1647,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+1648,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+1649,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+1650,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1651,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+1652,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       ^ VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+1653,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+1654,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+1655,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])),7);
        bufp->chgIData(oldp+1656,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])),32);
        bufp->chgIData(oldp+1657,(VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 0x14U))),32);
        bufp->chgIData(oldp+1658,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+1659,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   & VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1660,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])),32);
        bufp->chgIData(oldp+1661,(VL_EXTENDS_II(32,13, 
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
        bufp->chgBit(oldp+1662,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                 == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
        bufp->chgBit(oldp+1663,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
        bufp->chgBit(oldp+1664,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                 >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
        bufp->chgBit(oldp+1665,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+1666,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+1667,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                 != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
        bufp->chgIData(oldp+1668,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U], 0x10U)),32);
        bufp->chgCData(oldp+1669,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+1670,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])),2);
        bufp->chgIData(oldp+1671,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+1672,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 0xdU))),3);
        bufp->chgIData(oldp+1673,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+1674,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+1675,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+1676,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+1677,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1678,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+1679,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+1680,(VL_EXTENDS_II(32,9, 
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
        bufp->chgBit(oldp+1681,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])));
        bufp->chgBit(oldp+1682,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])));
        bufp->chgIData(oldp+1683,(VL_EXTENDS_II(32,12, 
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
        bufp->chgIData(oldp+1684,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+1685,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                             << 1U)) 
                                   | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                >> 7U)) 
                                      | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+1686,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+1687,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                             << 4U)) 
                                   | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                >> 7U)) 
                                      | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 2U))))),32);
        bufp->chgIData(oldp+1688,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+1689,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[1U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+1690,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+1691,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+1692,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                             >> 1U)) 
                                   | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                               >> 7U)))),32);
        bufp->chgIData(oldp+1693,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+1694,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                    ? 0xffffffffU : 
                                   (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])))),32);
        bufp->chgIData(oldp+1695,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
        bufp->chgIData(oldp+1696,(VL_EXTENDS_II(32,21, 
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
        bufp->chgCData(oldp+1697,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+1698,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+1699,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+1700,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])),32);
        bufp->chgIData(oldp+1701,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1702,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1703,((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])) 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1704,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   | VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1705,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]
                                    : (((0x80000000U 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]) 
                                        & (0xffffffffU 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                        ? 0U : VL_MODDIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])))),32);
        bufp->chgIData(oldp+1706,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]
                                    : VL_MODDIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
        bufp->chgIData(oldp+1707,(VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+1708,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+1709,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])),6);
        bufp->chgIData(oldp+1710,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
        bufp->chgCData(oldp+1711,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+1712,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 0x14U))),6);
        bufp->chgIData(oldp+1713,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1714,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+1715,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                             VL_EXTENDS_II(32,12, 
                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                            >> 0x14U)))),32);
        bufp->chgIData(oldp+1716,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   < VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1717,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+1718,(VL_SHIFTRS_III(32,32,5, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
        bufp->chgIData(oldp+1719,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+1720,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
        bufp->chgIData(oldp+1721,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1722,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   ^ VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                    >> 0x14U)))),32);
        bufp->chgBit(oldp+1723,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+1724,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1725,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+1726,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+1727,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+1728,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[2U])),32);
        bufp->chgBit(oldp+1729,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+1730,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+1731,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+1732,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1733,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+1734,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1735,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+1736,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[2U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1737,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+1738,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+1739,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+1740,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+1741,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+1742,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+1743,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+1744,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+1745,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+1746,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+1747,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+1748,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+1749,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+1750,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+1751,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+1752,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+1753,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+1754,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+1755,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+1756,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+1757,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[2U])),32);
        bufp->chgBit(oldp+1758,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+1759,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1760,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+1761,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+1762,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+1763,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+1764,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+1765,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+1766,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+1767,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+1768,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+1769,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+1770,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+1771,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+1772,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+1773,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+1774,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+1775,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+1776,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+1777,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+1778,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+1779,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+1780,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])),32);
        bufp->chgBit(oldp+1781,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+1782,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+1783,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+1784,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+1785,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+1786,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+1787,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+1788,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[2U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+1789,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+1790,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+1791,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+1792,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+1793,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[2U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+1794,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+1795,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+1796,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+1797,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]
                                    : 0U)),32);
        bufp->chgBit(oldp+1798,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+1799,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+1800,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+1801,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+1802,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+1803,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+1804,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+1805,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+1806,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+1807,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+1808,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+1809,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+1810,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+1811,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+1812,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+1813,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+1814,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+1815,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+1816,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+1817,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+1818,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+1819,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+1820,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1821,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+1822,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+1823,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+1824,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+1825,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+1826,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+1827,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+1828,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+1829,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+1830,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+1831,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+1832,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+1833,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+1834,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+1835,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+1836,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+1837,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+1838,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+1839,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+1840,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])
                                    : 0U)),32);
        bufp->chgBit(oldp+1841,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+1842,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+1843,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+1844,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+1845,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+1846,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                    : 0U)),32);
        bufp->chgBit(oldp+1847,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+1848,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+1849,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+1850,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+1851,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+1852,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+1853,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+1854,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1855,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+1856,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1857,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+1858,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+1859,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+1860,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1861,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+1862,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+1863,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+1864,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+1865,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+1866,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+1867,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+1868,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+1869,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1870,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+1871,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1872,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+1873,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+1874,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+1875,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1876,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+1877,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1878,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+1879,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+1880,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+1881,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1882,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+1883,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1884,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+1885,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1886,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+1887,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1888,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+1889,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1890,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+1891,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+1892,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+1893,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+1894,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1895,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+1896,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       ^ VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+1897,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+1898,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+1899,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])),7);
        bufp->chgIData(oldp+1900,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])),32);
        bufp->chgIData(oldp+1901,(VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 0x14U))),32);
        bufp->chgIData(oldp+1902,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+1903,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   & VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1904,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])),32);
        bufp->chgIData(oldp+1905,(VL_EXTENDS_II(32,13, 
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
        bufp->chgBit(oldp+1906,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                 == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
        bufp->chgBit(oldp+1907,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
        bufp->chgBit(oldp+1908,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                 >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
        bufp->chgBit(oldp+1909,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+1910,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+1911,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                 != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
        bufp->chgIData(oldp+1912,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U], 0x10U)),32);
        bufp->chgCData(oldp+1913,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+1914,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])),2);
        bufp->chgIData(oldp+1915,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+1916,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 0xdU))),3);
        bufp->chgIData(oldp+1917,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+1918,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+1919,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+1920,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+1921,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1922,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+1923,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+1924,(VL_EXTENDS_II(32,9, 
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
        bufp->chgBit(oldp+1925,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])));
        bufp->chgBit(oldp+1926,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])));
        bufp->chgIData(oldp+1927,(VL_EXTENDS_II(32,12, 
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
        bufp->chgIData(oldp+1928,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+1929,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                             << 1U)) 
                                   | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                >> 7U)) 
                                      | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+1930,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+1931,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                             << 4U)) 
                                   | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                >> 7U)) 
                                      | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 2U))))),32);
        bufp->chgIData(oldp+1932,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+1933,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[2U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+1934,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+1935,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+1936,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                             >> 1U)) 
                                   | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                               >> 7U)))),32);
        bufp->chgIData(oldp+1937,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+1938,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                    ? 0xffffffffU : 
                                   (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])))),32);
        bufp->chgIData(oldp+1939,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
        bufp->chgIData(oldp+1940,(VL_EXTENDS_II(32,21, 
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
        bufp->chgCData(oldp+1941,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+1942,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+1943,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+1944,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])),32);
        bufp->chgIData(oldp+1945,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1946,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1947,((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])) 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1948,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   | VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1949,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]
                                    : (((0x80000000U 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]) 
                                        & (0xffffffffU 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                        ? 0U : VL_MODDIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])))),32);
        bufp->chgIData(oldp+1950,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]
                                    : VL_MODDIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
        bufp->chgIData(oldp+1951,(VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+1952,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+1953,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])),6);
        bufp->chgIData(oldp+1954,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
        bufp->chgCData(oldp+1955,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+1956,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 0x14U))),6);
        bufp->chgIData(oldp+1957,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1958,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+1959,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                             VL_EXTENDS_II(32,12, 
                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                            >> 0x14U)))),32);
        bufp->chgIData(oldp+1960,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   < VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1961,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+1962,(VL_SHIFTRS_III(32,32,5, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
        bufp->chgIData(oldp+1963,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+1964,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
        bufp->chgIData(oldp+1965,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1966,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   ^ VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                    >> 0x14U)))),32);
        bufp->chgBit(oldp+1967,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+1968,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1969,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+1970,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+1971,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+1972,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U])),32);
        bufp->chgBit(oldp+1973,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+1974,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+1975,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+1976,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1977,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+1978,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1979,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+1980,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1981,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+1982,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+1983,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+1984,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+1985,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+1986,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+1987,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+1988,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+1989,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+1990,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+1991,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+1992,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+1993,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+1994,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+1995,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+1996,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+1997,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+1998,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+1999,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+2000,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+2001,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U])),32);
        bufp->chgBit(oldp+2002,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+2003,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2004,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+2005,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+2006,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+2007,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+2008,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+2009,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+2010,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+2011,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+2012,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+2013,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+2014,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+2015,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+2016,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+2017,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+2018,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+2019,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+2020,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+2021,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+2022,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+2023,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+2024,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])),32);
        bufp->chgBit(oldp+2025,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+2026,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+2027,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2028,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+2029,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+2030,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+2031,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+2032,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[3U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+2033,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+2034,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+2035,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+2036,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+2037,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[3U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+2038,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+2039,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+2040,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+2041,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]
                                    : 0U)),32);
        bufp->chgBit(oldp+2042,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+2043,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+2044,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+2045,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2046,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+2047,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2048,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+2049,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2050,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+2051,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+2052,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+2053,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+2054,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+2055,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+2056,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+2057,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+2058,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+2059,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+2060,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+2061,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+2062,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2063,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+2064,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2065,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+2066,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+2067,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+2068,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+2069,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+2070,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+2071,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+2072,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+2073,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+2074,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2075,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+2076,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2077,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+2078,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2079,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+2080,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2081,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+2082,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2083,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+2084,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2085,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+2086,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2087,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+2088,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2089,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+2090,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2091,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+2092,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2093,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+2094,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2095,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+2096,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2097,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+2098,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2099,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+2100,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2101,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+2102,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2103,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+2104,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2105,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+2106,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+2107,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+2108,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+2109,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+2110,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2111,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2112,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+2113,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2114,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+2115,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2116,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+2117,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2118,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+2119,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2120,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+2121,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2122,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+2123,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2124,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+2125,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2126,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+2127,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2128,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+2129,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2130,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+2131,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2132,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+2133,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2134,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+2135,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2136,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2137,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+2138,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2139,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+2140,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       ^ VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+2141,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+2142,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+2143,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])),7);
        bufp->chgIData(oldp+2144,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])),32);
        bufp->chgIData(oldp+2145,(VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 0x14U))),32);
        bufp->chgIData(oldp+2146,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+2147,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   & VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2148,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])),32);
        bufp->chgIData(oldp+2149,(VL_EXTENDS_II(32,13, 
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
        bufp->chgBit(oldp+2150,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                 == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
        bufp->chgBit(oldp+2151,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
        bufp->chgBit(oldp+2152,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                 >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
        bufp->chgBit(oldp+2153,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+2154,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+2155,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                 != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
        bufp->chgIData(oldp+2156,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)),32);
        bufp->chgCData(oldp+2157,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+2158,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])),2);
        bufp->chgIData(oldp+2159,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+2160,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 0xdU))),3);
        bufp->chgIData(oldp+2161,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+2162,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+2163,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+2164,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+2165,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+2166,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+2167,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+2168,(VL_EXTENDS_II(32,9, 
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
        bufp->chgBit(oldp+2169,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])));
        bufp->chgBit(oldp+2170,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])));
        bufp->chgIData(oldp+2171,(VL_EXTENDS_II(32,12, 
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
        bufp->chgIData(oldp+2172,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+2173,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                             << 1U)) 
                                   | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                >> 7U)) 
                                      | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+2174,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+2175,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                             << 4U)) 
                                   | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                >> 7U)) 
                                      | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 2U))))),32);
        bufp->chgIData(oldp+2176,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+2177,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[3U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+2178,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+2179,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+2180,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                             >> 1U)) 
                                   | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                               >> 7U)))),32);
        bufp->chgIData(oldp+2181,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+2182,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                    ? 0xffffffffU : 
                                   (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))),32);
        bufp->chgIData(oldp+2183,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
        bufp->chgIData(oldp+2184,(VL_EXTENDS_II(32,21, 
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
        bufp->chgCData(oldp+2185,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+2186,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+2187,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+2188,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])),32);
        bufp->chgIData(oldp+2189,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2190,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2191,((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])) 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2192,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   | VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2193,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]
                                    : (((0x80000000U 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]) 
                                        & (0xffffffffU 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                        ? 0U : VL_MODDIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))),32);
        bufp->chgIData(oldp+2194,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]
                                    : VL_MODDIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
        bufp->chgIData(oldp+2195,(VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+2196,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+2197,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])),6);
        bufp->chgIData(oldp+2198,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
        bufp->chgCData(oldp+2199,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+2200,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 0x14U))),6);
        bufp->chgIData(oldp+2201,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2202,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+2203,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                             VL_EXTENDS_II(32,12, 
                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                            >> 0x14U)))),32);
        bufp->chgIData(oldp+2204,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   < VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2205,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+2206,(VL_SHIFTRS_III(32,32,5, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
        bufp->chgIData(oldp+2207,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+2208,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
        bufp->chgIData(oldp+2209,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2210,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   ^ VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)))),32);
        bufp->chgBit(oldp+2211,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+2212,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+2213,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+2214,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+2215,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+2216,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U])),32);
        bufp->chgBit(oldp+2217,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+2218,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+2219,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+2220,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2221,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+2222,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2223,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+2224,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2225,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+2226,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+2227,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+2228,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+2229,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+2230,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+2231,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+2232,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+2233,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+2234,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+2235,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+2236,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+2237,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+2238,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+2239,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+2240,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+2241,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+2242,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+2243,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+2244,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+2245,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U])),32);
        bufp->chgBit(oldp+2246,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+2247,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2248,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+2249,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+2250,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+2251,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+2252,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+2253,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+2254,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+2255,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+2256,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+2257,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+2258,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+2259,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+2260,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+2261,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+2262,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+2263,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+2264,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+2265,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+2266,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+2267,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+2268,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])),32);
        bufp->chgBit(oldp+2269,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+2270,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+2271,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2272,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+2273,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+2274,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+2275,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+2276,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[4U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+2277,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+2278,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+2279,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+2280,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+2281,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[4U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+2282,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+2283,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+2284,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+2285,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]
                                    : 0U)),32);
        bufp->chgBit(oldp+2286,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+2287,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+2288,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+2289,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2290,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+2291,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2292,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+2293,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2294,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+2295,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+2296,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+2297,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+2298,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+2299,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+2300,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+2301,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+2302,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+2303,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+2304,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+2305,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+2306,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2307,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+2308,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2309,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+2310,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+2311,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+2312,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+2313,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+2314,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+2315,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+2316,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+2317,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+2318,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2319,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+2320,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2321,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+2322,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2323,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+2324,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2325,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+2326,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2327,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+2328,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2329,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+2330,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2331,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+2332,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2333,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+2334,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2335,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+2336,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2337,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+2338,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2339,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+2340,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2341,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+2342,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2343,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+2344,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2345,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+2346,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2347,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+2348,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2349,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+2350,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+2351,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+2352,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+2353,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+2354,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2355,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2356,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+2357,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2358,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+2359,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2360,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+2361,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2362,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+2363,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2364,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+2365,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2366,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+2367,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2368,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+2369,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2370,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+2371,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2372,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+2373,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2374,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+2375,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2376,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+2377,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2378,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+2379,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2380,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2381,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+2382,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2383,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+2384,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       ^ VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+2385,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+2386,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+2387,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])),7);
        bufp->chgIData(oldp+2388,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])),32);
        bufp->chgIData(oldp+2389,(VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 0x14U))),32);
        bufp->chgIData(oldp+2390,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+2391,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   & VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2392,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])),32);
        bufp->chgIData(oldp+2393,(VL_EXTENDS_II(32,13, 
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
        bufp->chgBit(oldp+2394,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                 == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
        bufp->chgBit(oldp+2395,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
        bufp->chgBit(oldp+2396,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                 >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
        bufp->chgBit(oldp+2397,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+2398,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+2399,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                 != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
        bufp->chgIData(oldp+2400,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)),32);
        bufp->chgCData(oldp+2401,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+2402,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])),2);
        bufp->chgIData(oldp+2403,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+2404,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 0xdU))),3);
        bufp->chgIData(oldp+2405,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+2406,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+2407,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+2408,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+2409,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+2410,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+2411,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+2412,(VL_EXTENDS_II(32,9, 
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
        bufp->chgBit(oldp+2413,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])));
        bufp->chgBit(oldp+2414,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])));
        bufp->chgIData(oldp+2415,(VL_EXTENDS_II(32,12, 
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
        bufp->chgIData(oldp+2416,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+2417,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                             << 1U)) 
                                   | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                >> 7U)) 
                                      | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+2418,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+2419,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                             << 4U)) 
                                   | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                >> 7U)) 
                                      | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 2U))))),32);
        bufp->chgIData(oldp+2420,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+2421,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[4U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+2422,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+2423,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+2424,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                             >> 1U)) 
                                   | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                               >> 7U)))),32);
        bufp->chgIData(oldp+2425,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+2426,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                    ? 0xffffffffU : 
                                   (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))),32);
        bufp->chgIData(oldp+2427,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
        bufp->chgIData(oldp+2428,(VL_EXTENDS_II(32,21, 
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
        bufp->chgCData(oldp+2429,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+2430,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+2431,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+2432,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])),32);
        bufp->chgIData(oldp+2433,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2434,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2435,((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])) 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2436,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   | VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2437,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]
                                    : (((0x80000000U 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]) 
                                        & (0xffffffffU 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                        ? 0U : VL_MODDIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))),32);
        bufp->chgIData(oldp+2438,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]
                                    : VL_MODDIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
        bufp->chgIData(oldp+2439,(VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+2440,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+2441,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])),6);
        bufp->chgIData(oldp+2442,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
        bufp->chgCData(oldp+2443,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+2444,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 0x14U))),6);
        bufp->chgIData(oldp+2445,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2446,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+2447,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                             VL_EXTENDS_II(32,12, 
                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                            >> 0x14U)))),32);
        bufp->chgIData(oldp+2448,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   < VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2449,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+2450,(VL_SHIFTRS_III(32,32,5, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
        bufp->chgIData(oldp+2451,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+2452,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
        bufp->chgIData(oldp+2453,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2454,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   ^ VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)))),32);
        bufp->chgBit(oldp+2455,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+2456,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+2457,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+2458,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+2459,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+2460,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U])),32);
        bufp->chgBit(oldp+2461,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+2462,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+2463,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+2464,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2465,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+2466,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2467,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+2468,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2469,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+2470,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+2471,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+2472,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+2473,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+2474,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+2475,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+2476,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+2477,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+2478,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+2479,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+2480,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+2481,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+2482,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+2483,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+2484,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+2485,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+2486,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+2487,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+2488,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+2489,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U])),32);
        bufp->chgBit(oldp+2490,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+2491,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2492,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+2493,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+2494,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+2495,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+2496,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+2497,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+2498,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+2499,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+2500,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+2501,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+2502,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+2503,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+2504,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+2505,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+2506,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+2507,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+2508,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+2509,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+2510,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+2511,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+2512,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])),32);
        bufp->chgBit(oldp+2513,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+2514,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+2515,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2516,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+2517,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+2518,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+2519,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+2520,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[5U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+2521,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+2522,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+2523,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+2524,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+2525,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[5U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+2526,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+2527,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+2528,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+2529,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]
                                    : 0U)),32);
        bufp->chgBit(oldp+2530,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+2531,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+2532,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+2533,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2534,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+2535,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2536,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+2537,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2538,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+2539,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+2540,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+2541,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+2542,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+2543,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+2544,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+2545,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+2546,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+2547,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+2548,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+2549,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+2550,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2551,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+2552,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2553,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+2554,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+2555,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+2556,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+2557,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+2558,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+2559,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+2560,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+2561,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+2562,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2563,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+2564,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2565,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+2566,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2567,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+2568,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2569,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+2570,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2571,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+2572,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2573,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+2574,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2575,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+2576,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2577,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+2578,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2579,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+2580,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2581,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+2582,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2583,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+2584,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2585,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+2586,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2587,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+2588,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2589,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+2590,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2591,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+2592,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2593,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+2594,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+2595,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+2596,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+2597,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+2598,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2599,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2600,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+2601,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2602,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+2603,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2604,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+2605,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2606,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+2607,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2608,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+2609,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2610,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+2611,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2612,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+2613,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2614,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+2615,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2616,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+2617,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2618,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+2619,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2620,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+2621,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2622,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+2623,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2624,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2625,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+2626,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2627,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+2628,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       ^ VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+2629,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+2630,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+2631,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])),7);
        bufp->chgIData(oldp+2632,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])),32);
        bufp->chgIData(oldp+2633,(VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 0x14U))),32);
        bufp->chgIData(oldp+2634,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+2635,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   & VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2636,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])),32);
        bufp->chgIData(oldp+2637,(VL_EXTENDS_II(32,13, 
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
        bufp->chgBit(oldp+2638,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                 == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
        bufp->chgBit(oldp+2639,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
        bufp->chgBit(oldp+2640,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                 >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
        bufp->chgBit(oldp+2641,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+2642,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+2643,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                 != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
        bufp->chgIData(oldp+2644,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)),32);
        bufp->chgCData(oldp+2645,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+2646,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])),2);
        bufp->chgIData(oldp+2647,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+2648,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 0xdU))),3);
        bufp->chgIData(oldp+2649,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+2650,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+2651,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+2652,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+2653,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+2654,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+2655,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+2656,(VL_EXTENDS_II(32,9, 
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
        bufp->chgBit(oldp+2657,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])));
        bufp->chgBit(oldp+2658,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])));
        bufp->chgIData(oldp+2659,(VL_EXTENDS_II(32,12, 
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
        bufp->chgIData(oldp+2660,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+2661,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                             << 1U)) 
                                   | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                >> 7U)) 
                                      | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+2662,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+2663,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                             << 4U)) 
                                   | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                >> 7U)) 
                                      | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 2U))))),32);
        bufp->chgIData(oldp+2664,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+2665,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[5U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+2666,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+2667,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+2668,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                             >> 1U)) 
                                   | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                               >> 7U)))),32);
        bufp->chgIData(oldp+2669,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+2670,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                    ? 0xffffffffU : 
                                   (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))),32);
        bufp->chgIData(oldp+2671,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
        bufp->chgIData(oldp+2672,(VL_EXTENDS_II(32,21, 
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
        bufp->chgCData(oldp+2673,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+2674,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+2675,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+2676,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])),32);
        bufp->chgIData(oldp+2677,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2678,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2679,((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])) 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2680,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   | VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2681,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]
                                    : (((0x80000000U 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]) 
                                        & (0xffffffffU 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                        ? 0U : VL_MODDIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))),32);
        bufp->chgIData(oldp+2682,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]
                                    : VL_MODDIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
        bufp->chgIData(oldp+2683,(VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+2684,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+2685,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])),6);
        bufp->chgIData(oldp+2686,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
        bufp->chgCData(oldp+2687,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+2688,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 0x14U))),6);
        bufp->chgIData(oldp+2689,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2690,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+2691,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                             VL_EXTENDS_II(32,12, 
                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                            >> 0x14U)))),32);
        bufp->chgIData(oldp+2692,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   < VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2693,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+2694,(VL_SHIFTRS_III(32,32,5, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
        bufp->chgIData(oldp+2695,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+2696,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
        bufp->chgIData(oldp+2697,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2698,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   ^ VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)))),32);
        bufp->chgBit(oldp+2699,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+2700,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+2701,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+2702,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+2703,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+2704,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[6U])),32);
        bufp->chgBit(oldp+2705,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+2706,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+2707,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+2708,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2709,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+2710,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2711,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+2712,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[6U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2713,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+2714,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+2715,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+2716,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+2717,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+2718,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+2719,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+2720,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+2721,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+2722,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+2723,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+2724,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+2725,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+2726,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+2727,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+2728,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+2729,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+2730,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+2731,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+2732,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+2733,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[6U])),32);
        bufp->chgBit(oldp+2734,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+2735,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2736,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+2737,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+2738,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+2739,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+2740,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+2741,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+2742,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+2743,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+2744,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+2745,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+2746,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+2747,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+2748,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+2749,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+2750,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+2751,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+2752,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+2753,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+2754,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+2755,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+2756,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])),32);
        bufp->chgBit(oldp+2757,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+2758,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+2759,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2760,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+2761,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+2762,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+2763,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+2764,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[6U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+2765,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+2766,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+2767,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+2768,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+2769,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[6U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+2770,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+2771,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+2772,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+2773,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]
                                    : 0U)),32);
        bufp->chgBit(oldp+2774,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+2775,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+2776,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+2777,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2778,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+2779,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2780,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+2781,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2782,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+2783,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+2784,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+2785,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+2786,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+2787,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+2788,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+2789,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+2790,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+2791,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+2792,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+2793,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+2794,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2795,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+2796,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2797,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+2798,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+2799,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+2800,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+2801,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+2802,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+2803,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+2804,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+2805,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+2806,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2807,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+2808,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2809,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+2810,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2811,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+2812,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2813,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+2814,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2815,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+2816,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2817,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+2818,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2819,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+2820,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2821,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+2822,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2823,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+2824,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2825,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+2826,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2827,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+2828,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2829,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+2830,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2831,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+2832,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2833,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+2834,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2835,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+2836,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2837,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+2838,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+2839,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+2840,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+2841,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+2842,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2843,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2844,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+2845,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2846,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+2847,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2848,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+2849,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2850,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+2851,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2852,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+2853,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2854,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+2855,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2856,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+2857,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2858,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+2859,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2860,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+2861,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2862,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+2863,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2864,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+2865,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2866,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+2867,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2868,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2869,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+2870,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2871,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+2872,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       ^ VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+2873,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+2874,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+2875,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])),7);
        bufp->chgIData(oldp+2876,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])),32);
        bufp->chgIData(oldp+2877,(VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 0x14U))),32);
        bufp->chgIData(oldp+2878,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+2879,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   & VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2880,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])),32);
        bufp->chgIData(oldp+2881,(VL_EXTENDS_II(32,13, 
                                                ((0x1000U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 0x13U)) 
                                                 | ((0x800U 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                             >> 7U))))))),32);
        bufp->chgBit(oldp+2882,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
        bufp->chgBit(oldp+2883,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
        bufp->chgBit(oldp+2884,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
        bufp->chgBit(oldp+2885,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+2886,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+2887,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
        bufp->chgIData(oldp+2888,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U], 0x10U)),32);
        bufp->chgCData(oldp+2889,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+2890,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])),2);
        bufp->chgIData(oldp+2891,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+2892,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                         >> 0xdU))),3);
        bufp->chgIData(oldp+2893,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+2894,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+2895,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+2896,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+2897,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+2898,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+2899,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+2900,(VL_EXTENDS_II(32,9, 
                                                ((0x100U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 4U)) 
                                                 | ((0xc0U 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                        << 1U)) 
                                                    | ((0x20U 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                           << 3U)) 
                                                       | ((0x18U 
                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                              >> 7U)) 
                                                          | (6U 
                                                             & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                                >> 2U)))))))),32);
        bufp->chgBit(oldp+2901,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])));
        bufp->chgBit(oldp+2902,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])));
        bufp->chgIData(oldp+2903,(VL_EXTENDS_II(32,12, 
                                                ((0x800U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 1U)) 
                                                 | ((0x400U 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                        << 2U)) 
                                                    | ((0x300U 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                           >> 1U)) 
                                                       | ((0x80U 
                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                              << 1U)) 
                                                          | ((0x40U 
                                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                                 >> 1U)) 
                                                             | ((0x20U 
                                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                                    << 3U)) 
                                                                | ((0x10U 
                                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                                       >> 7U)) 
                                                                   | (0xeU 
                                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                                         >> 2U))))))))))),32);
        bufp->chgIData(oldp+2904,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+2905,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                             << 1U)) 
                                   | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                >> 7U)) 
                                      | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+2906,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+2907,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                             << 4U)) 
                                   | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                >> 7U)) 
                                      | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 2U))))),32);
        bufp->chgIData(oldp+2908,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+2909,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[6U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+2910,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+2911,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+2912,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                             >> 1U)) 
                                   | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                               >> 7U)))),32);
        bufp->chgIData(oldp+2913,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+2914,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                    ? 0xffffffffU : 
                                   (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])))),32);
        bufp->chgIData(oldp+2915,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
        bufp->chgIData(oldp+2916,(VL_EXTENDS_II(32,21, 
                                                ((0x100000U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U]) 
                                                    | ((0x800U 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                             >> 0x14U))))))),32);
        bufp->chgCData(oldp+2917,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+2918,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+2919,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+2920,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])),32);
        bufp->chgIData(oldp+2921,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2922,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2923,((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])) 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2924,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   | VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2925,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]
                                    : (((0x80000000U 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]) 
                                        & (0xffffffffU 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                        ? 0U : VL_MODDIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])))),32);
        bufp->chgIData(oldp+2926,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]
                                    : VL_MODDIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
        bufp->chgIData(oldp+2927,(VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+2928,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+2929,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])),6);
        bufp->chgIData(oldp+2930,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
        bufp->chgCData(oldp+2931,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+2932,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 0x14U))),6);
        bufp->chgIData(oldp+2933,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2934,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+2935,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                             VL_EXTENDS_II(32,12, 
                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                            >> 0x14U)))),32);
        bufp->chgIData(oldp+2936,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   < VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2937,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+2938,(VL_SHIFTRS_III(32,32,5, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
        bufp->chgIData(oldp+2939,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+2940,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
        bufp->chgIData(oldp+2941,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2942,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   ^ VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                    >> 0x14U)))),32);
        bufp->chgBit(oldp+2943,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+2944,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+2945,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+2946,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+2947,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+2948,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[7U])),32);
        bufp->chgBit(oldp+2949,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+2950,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+2951,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+2952,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2953,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+2954,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2955,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+2956,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[7U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2957,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+2958,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+2959,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+2960,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+2961,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+2962,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+2963,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+2964,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+2965,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+2966,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+2967,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+2968,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+2969,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+2970,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+2971,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+2972,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+2973,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+2974,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+2975,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+2976,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+2977,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[7U])),32);
        bufp->chgBit(oldp+2978,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+2979,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2980,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+2981,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+2982,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+2983,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+2984,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+2985,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+2986,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+2987,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+2988,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+2989,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+2990,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+2991,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+2992,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+2993,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+2994,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+2995,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+2996,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+2997,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+2998,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+2999,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+3000,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])),32);
        bufp->chgBit(oldp+3001,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+3002,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+3003,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+3004,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+3005,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+3006,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+3007,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+3008,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[7U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+3009,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+3010,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+3011,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+3012,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+3013,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[7U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+3014,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+3015,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+3016,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+3017,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]
                                    : 0U)),32);
        bufp->chgBit(oldp+3018,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+3019,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+3020,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+3021,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+3022,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+3023,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+3024,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+3025,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+3026,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+3027,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+3028,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+3029,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+3030,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+3031,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+3032,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+3033,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+3034,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+3035,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+3036,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+3037,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+3038,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                        ? 0xffffffffU
                                        : (((0x80000000U 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]) 
                                            & (0xffffffffU 
                                               == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                            ? 0x80000000U
                                            : VL_DIVS_III(32, 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))
                                    : 0U)),32);
        bufp->chgBit(oldp+3039,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+3040,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+3041,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+3042,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+3043,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+3044,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+3045,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+3046,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+3047,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+3048,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+3049,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+3050,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+3051,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+3052,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+3053,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+3054,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+3055,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+3056,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+3057,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+3058,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+3059,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+3060,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])
                                    : 0U)),32);
        bufp->chgBit(oldp+3061,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+3062,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+3063,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+3064,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+3065,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+3066,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                    : 0U)),32);
        bufp->chgBit(oldp+3067,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+3068,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U] 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+3069,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+3070,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+3071,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+3072,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+3073,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+3074,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+3075,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+3076,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3077,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+3078,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]
                                        : (((0x80000000U 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]) 
                                            & (0xffffffffU 
                                               == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                            ? 0U : 
                                           VL_MODDIVS_III(32, 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))
                                    : 0U)),32);
        bufp->chgBit(oldp+3079,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+3080,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+3081,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+3082,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+3083,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+3084,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+3085,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+3086,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+3087,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+3088,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+3089,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+3090,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+3091,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3092,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+3093,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+3094,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+3095,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3096,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+3097,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3098,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+3099,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+3100,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+3101,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+3102,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+3103,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3104,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+3105,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+3106,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+3107,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3108,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+3109,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+3110,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+3111,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+3112,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+3113,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+3114,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+3115,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+3116,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                       ^ VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+3117,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+3118,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+3119,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])),7);
        bufp->chgIData(oldp+3120,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])),32);
        bufp->chgIData(oldp+3121,(VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 0x14U))),32);
        bufp->chgIData(oldp+3122,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+3123,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   & VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+3124,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])),32);
        bufp->chgIData(oldp+3125,(VL_EXTENDS_II(32,13, 
                                                ((0x1000U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                     >> 0x13U)) 
                                                 | ((0x800U 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                             >> 7U))))))),32);
        bufp->chgBit(oldp+3126,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                 == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
        bufp->chgBit(oldp+3127,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
        bufp->chgBit(oldp+3128,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                 >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
        bufp->chgBit(oldp+3129,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+3130,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+3131,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                 != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
        bufp->chgIData(oldp+3132,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U], 0x10U)),32);
        bufp->chgCData(oldp+3133,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+3134,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])),2);
        bufp->chgIData(oldp+3135,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+3136,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                         >> 0xdU))),3);
        bufp->chgIData(oldp+3137,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+3138,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+3139,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+3140,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+3141,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+3142,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+3143,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+3144,(VL_EXTENDS_II(32,9, 
                                                ((0x100U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                     >> 4U)) 
                                                 | ((0xc0U 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                        << 1U)) 
                                                    | ((0x20U 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                           << 3U)) 
                                                       | ((0x18U 
                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                              >> 7U)) 
                                                          | (6U 
                                                             & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                                >> 2U)))))))),32);
        bufp->chgBit(oldp+3145,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])));
        bufp->chgBit(oldp+3146,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])));
        bufp->chgIData(oldp+3147,(VL_EXTENDS_II(32,12, 
                                                ((0x800U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                     >> 1U)) 
                                                 | ((0x400U 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                        << 2U)) 
                                                    | ((0x300U 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                           >> 1U)) 
                                                       | ((0x80U 
                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                              << 1U)) 
                                                          | ((0x40U 
                                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                                 >> 1U)) 
                                                             | ((0x20U 
                                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                                    << 3U)) 
                                                                | ((0x10U 
                                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                                       >> 7U)) 
                                                                   | (0xeU 
                                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                                         >> 2U))))))))))),32);
        bufp->chgIData(oldp+3148,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+3149,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                             << 1U)) 
                                   | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                >> 7U)) 
                                      | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+3150,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+3151,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                             << 4U)) 
                                   | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                >> 7U)) 
                                      | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 2U))))),32);
        bufp->chgIData(oldp+3152,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+3153,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[7U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+3154,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+3155,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+3156,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                             >> 1U)) 
                                   | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                               >> 7U)))),32);
        bufp->chgIData(oldp+3157,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+3158,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                    ? 0xffffffffU : 
                                   (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))),32);
        bufp->chgIData(oldp+3159,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
        bufp->chgIData(oldp+3160,(VL_EXTENDS_II(32,21, 
                                                ((0x100000U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U]) 
                                                    | ((0x800U 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                             >> 0x14U))))))),32);
        bufp->chgCData(oldp+3161,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+3162,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+3163,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+3164,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])),32);
        bufp->chgIData(oldp+3165,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+3166,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+3167,((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])) 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+3168,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   | VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+3169,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]
                                    : (((0x80000000U 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]) 
                                        & (0xffffffffU 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                        ? 0U : VL_MODDIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))),32);
        bufp->chgIData(oldp+3170,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]
                                    : VL_MODDIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
        bufp->chgIData(oldp+3171,(VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+3172,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+3173,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])),6);
        bufp->chgIData(oldp+3174,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
        bufp->chgCData(oldp+3175,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+3176,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 0x14U))),6);
        bufp->chgIData(oldp+3177,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+3178,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+3179,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                             VL_EXTENDS_II(32,12, 
                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                            >> 0x14U)))),32);
        bufp->chgIData(oldp+3180,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   < VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+3181,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+3182,(VL_SHIFTRS_III(32,32,5, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
        bufp->chgIData(oldp+3183,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+3184,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
        bufp->chgIData(oldp+3185,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+3186,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   ^ VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                    >> 0x14U)))),32);
    }
    bufp->chgBit(oldp+3187,(vlSelf->clk));
    bufp->chgBit(oldp+3188,(vlSelf->rst));
    bufp->chgBit(oldp+3189,(vlSelf->dut_rst));
    bufp->chgIData(oldp+3190,(vlSelf->imem_rdata),32);
    bufp->chgBit(oldp+3191,(vlSelf->imem_resp));
    bufp->chgIData(oldp+3192,(vlSelf->imem_addr),32);
    bufp->chgBit(oldp+3193,(vlSelf->imem_read));
    bufp->chgIData(oldp+3194,(vlSelf->dmem_rdata),32);
    bufp->chgBit(oldp+3195,(vlSelf->dmem_resp));
    bufp->chgIData(oldp+3196,(vlSelf->dmem_addr),32);
    bufp->chgBit(oldp+3197,(vlSelf->dmem_read));
    bufp->chgBit(oldp+3198,(vlSelf->dmem_write));
    bufp->chgCData(oldp+3199,(vlSelf->dmem_wmask),4);
    bufp->chgIData(oldp+3200,(vlSelf->dmem_wdata),32);
    bufp->chgIData(oldp+3201,(vlSelf->golden_imem_rdata),32);
    bufp->chgBit(oldp+3202,(vlSelf->golden_imem_resp));
    bufp->chgIData(oldp+3203,(vlSelf->golden_imem_addr),32);
    bufp->chgBit(oldp+3204,(vlSelf->golden_imem_read));
    bufp->chgIData(oldp+3205,(vlSelf->golden_dmem_rdata),32);
    bufp->chgBit(oldp+3206,(vlSelf->golden_dmem_resp));
    bufp->chgIData(oldp+3207,(vlSelf->golden_dmem_addr),32);
    bufp->chgBit(oldp+3208,(vlSelf->golden_dmem_read));
    bufp->chgBit(oldp+3209,(vlSelf->golden_dmem_write));
    bufp->chgCData(oldp+3210,(vlSelf->golden_dmem_wmask),4);
    bufp->chgIData(oldp+3211,(vlSelf->golden_dmem_wdata),32);
    bufp->chgBit(oldp+3212,(vlSelf->halt));
    bufp->chgBit(oldp+3213,(vlSelf->error));
    bufp->chgBit(oldp+3214,(vlSelf->any_commit));
    bufp->chgBit(oldp+3215,(vlSelf->mispredict_o));
    bufp->chgBit(oldp+3216,(vlSelf->eoc_enable));
    bufp->chgQData(oldp+3217,(vlSelf->dut_order),64);
    bufp->chgIData(oldp+3219,(vlSelf->dut_pc),32);
    bufp->chgIData(oldp+3220,(vlSelf->dut_inst),32);
    bufp->chgCData(oldp+3221,(vlSelf->dut_rd_addr),5);
    bufp->chgIData(oldp+3222,(vlSelf->dut_rd_wdata),32);
    bufp->chgIData(oldp+3223,(vlSelf->dut_mem_addr),32);
    bufp->chgCData(oldp+3224,(vlSelf->dut_mem_rmask),4);
    bufp->chgCData(oldp+3225,(vlSelf->dut_mem_wmask),4);
    bufp->chgIData(oldp+3226,(vlSelf->dut_mem_rdata),32);
    bufp->chgIData(oldp+3227,(vlSelf->dut_mem_wdata),32);
    bufp->chgBit(oldp+3228,(vlSelf->golden_commit));
    bufp->chgQData(oldp+3229,(vlSelf->golden_order),64);
    bufp->chgIData(oldp+3231,(vlSelf->golden_pc),32);
    bufp->chgIData(oldp+3232,(vlSelf->golden_inst),32);
    bufp->chgCData(oldp+3233,(vlSelf->golden_rd_addr),5);
    bufp->chgIData(oldp+3234,(vlSelf->golden_rd_wdata),32);
    bufp->chgIData(oldp+3235,(vlSelf->golden_mem_addr),32);
    bufp->chgCData(oldp+3236,(vlSelf->golden_mem_rmask),4);
    bufp->chgCData(oldp+3237,(vlSelf->golden_mem_wmask),4);
    bufp->chgIData(oldp+3238,(vlSelf->golden_mem_rdata),32);
    bufp->chgIData(oldp+3239,(vlSelf->golden_mem_wdata),32);
    bufp->chgBit(oldp+3240,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetchq_full) 
                                      & (IData)(vlSelf->imem_resp))))));
    bufp->chgBit(oldp+3241,(vlSymsp->TOP__top_tb.__Vcellinp__dut__rst));
    bufp->chgBit(oldp+3242,(((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__LDorST_i)
                              ? ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__LDorST_i) 
                                 && (((((~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem_empty_i)) 
                                        & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem_ROB_data_i[0xbU] 
                                           >> 0x10U)) 
                                       & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__READY_i)) 
                                      & (~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__store_committed))) 
                                     & (~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__store_match))))
                              : ((((~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem_empty_i)) 
                                   & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem_ROB_data_i[0xbU] 
                                      >> 0x10U)) & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__READY_i)) 
                                 & (IData)(vlSelf->dmem_resp)))));
    bufp->chgBit(oldp+3243,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_rob_full));
    bufp->chgBit(oldp+3244,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_alu_full));
    bufp->chgBit(oldp+3245,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_cmp_full));
    bufp->chgBit(oldp+3246,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_load_full));
    bufp->chgBit(oldp+3247,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_store_full));
    bufp->chgBit(oldp+3248,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_jump_full));
    bufp->chgBit(oldp+3249,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_mul_full));
    bufp->chgBit(oldp+3250,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_no_free_pr));
}
