// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


void Vtop_tb___024root__trace_chg_0_sub_1(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 3973);
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
        bufp->chgIData(oldp+0,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xdU][5U] << 0x11U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xdU][4U] >> 0xfU))),32);
        bufp->chgIData(oldp+1,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xdU][4U] << 0x11U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xdU][3U] >> 0xfU))),32);
        bufp->chgCData(oldp+2,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                        [0xdU][3U] 
                                        >> 0xbU))),4);
        bufp->chgCData(oldp+3,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                        [0xdU][3U] 
                                        >> 7U))),4);
        bufp->chgIData(oldp+4,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xdU][3U] << 0x19U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xdU][2U] >> 7U))),32);
        bufp->chgIData(oldp+5,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xdU][2U] << 0x19U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xdU][1U] >> 7U))),32);
        bufp->chgBit(oldp+6,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xdU][1U] >> 6U))));
        bufp->chgBit(oldp+7,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xdU][1U] >> 5U))));
        bufp->chgBit(oldp+8,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xdU][1U] >> 4U))));
        bufp->chgBit(oldp+9,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xdU][1U] >> 3U))));
        bufp->chgIData(oldp+10,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [0xdU][1U] << 0x1dU) 
                                 | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xdU][0U] >> 3U))),32);
        bufp->chgBit(oldp+11,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                     [0xdU][0U] >> 2U))));
        bufp->chgCData(oldp+12,((3U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xdU][0U])),2);
        bufp->chgBit(oldp+13,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                     [0xeU][0xbU] >> 0x12U))));
        bufp->chgBit(oldp+14,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                     [0xeU][0xbU] >> 0x11U))));
        bufp->chgBit(oldp+15,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                     [0xeU][0xbU] >> 0x10U))));
        bufp->chgCData(oldp+16,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                          [0xeU][0xbU] 
                                          >> 0xbU))),5);
        bufp->chgCData(oldp+17,((0x3fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                          [0xeU][0xbU] 
                                          >> 5U))),6);
        bufp->chgCData(oldp+18,((0x3fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                           [0xeU][0xbU] 
                                           << 1U) | 
                                          (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                           [0xeU][0xaU] 
                                           >> 0x1fU)))),6);
        bufp->chgIData(oldp+19,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [0xeU][0xaU] << 1U) 
                                 | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xeU][9U] >> 0x1fU))),32);
        bufp->chgIData(oldp+20,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [0xeU][9U] << 1U) 
                                 | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xeU][8U] >> 0x1fU))),32);
        bufp->chgIData(oldp+21,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [0xeU][8U] << 1U) 
                                 | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xeU][7U] >> 0x1fU))),32);
        bufp->chgBit(oldp+22,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                     [0xeU][7U] >> 0x1eU))));
        bufp->chgBit(oldp+23,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                     [0xeU][7U] >> 0x1dU))));
        bufp->chgCData(oldp+24,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                          [0xeU][7U] 
                                          >> 0x18U))),5);
        bufp->chgCData(oldp+25,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                          [0xeU][7U] 
                                          >> 0x13U))),5);
        bufp->chgIData(oldp+26,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [0xeU][7U] << 0xdU) 
                                 | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xeU][6U] >> 0x13U))),32);
        bufp->chgIData(oldp+27,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [0xeU][6U] << 0xdU) 
                                 | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xeU][5U] >> 0x13U))),32);
        bufp->chgCData(oldp+28,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                         [0xeU][5U] 
                                         >> 0xfU))),4);
        bufp->chgIData(oldp+29,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [0xeU][5U] << 0x11U) 
                                 | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xeU][4U] >> 0xfU))),32);
        bufp->chgIData(oldp+30,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [0xeU][4U] << 0x11U) 
                                 | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xeU][3U] >> 0xfU))),32);
        bufp->chgCData(oldp+31,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                         [0xeU][3U] 
                                         >> 0xbU))),4);
        bufp->chgCData(oldp+32,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                         [0xeU][3U] 
                                         >> 7U))),4);
        bufp->chgIData(oldp+33,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [0xeU][3U] << 0x19U) 
                                 | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xeU][2U] >> 7U))),32);
        bufp->chgIData(oldp+34,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [0xeU][2U] << 0x19U) 
                                 | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xeU][1U] >> 7U))),32);
        bufp->chgBit(oldp+35,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                     [0xeU][1U] >> 6U))));
        bufp->chgBit(oldp+36,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                     [0xeU][1U] >> 5U))));
        bufp->chgBit(oldp+37,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                     [0xeU][1U] >> 4U))));
        bufp->chgBit(oldp+38,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                     [0xeU][1U] >> 3U))));
        bufp->chgIData(oldp+39,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [0xeU][1U] << 0x1dU) 
                                 | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xeU][0U] >> 3U))),32);
        bufp->chgBit(oldp+40,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                     [0xeU][0U] >> 2U))));
        bufp->chgCData(oldp+41,((3U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xeU][0U])),2);
        bufp->chgBit(oldp+42,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                     [0xfU][0xbU] >> 0x12U))));
        bufp->chgBit(oldp+43,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                     [0xfU][0xbU] >> 0x11U))));
        bufp->chgBit(oldp+44,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                     [0xfU][0xbU] >> 0x10U))));
        bufp->chgCData(oldp+45,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                          [0xfU][0xbU] 
                                          >> 0xbU))),5);
        bufp->chgCData(oldp+46,((0x3fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                          [0xfU][0xbU] 
                                          >> 5U))),6);
        bufp->chgCData(oldp+47,((0x3fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                           [0xfU][0xbU] 
                                           << 1U) | 
                                          (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                           [0xfU][0xaU] 
                                           >> 0x1fU)))),6);
        bufp->chgIData(oldp+48,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [0xfU][0xaU] << 1U) 
                                 | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xfU][9U] >> 0x1fU))),32);
        bufp->chgIData(oldp+49,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [0xfU][9U] << 1U) 
                                 | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xfU][8U] >> 0x1fU))),32);
        bufp->chgIData(oldp+50,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [0xfU][8U] << 1U) 
                                 | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xfU][7U] >> 0x1fU))),32);
        bufp->chgBit(oldp+51,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                     [0xfU][7U] >> 0x1eU))));
        bufp->chgBit(oldp+52,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                     [0xfU][7U] >> 0x1dU))));
        bufp->chgCData(oldp+53,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                          [0xfU][7U] 
                                          >> 0x18U))),5);
        bufp->chgCData(oldp+54,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                          [0xfU][7U] 
                                          >> 0x13U))),5);
        bufp->chgIData(oldp+55,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [0xfU][7U] << 0xdU) 
                                 | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xfU][6U] >> 0x13U))),32);
        bufp->chgIData(oldp+56,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [0xfU][6U] << 0xdU) 
                                 | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xfU][5U] >> 0x13U))),32);
        bufp->chgCData(oldp+57,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                         [0xfU][5U] 
                                         >> 0xfU))),4);
        bufp->chgIData(oldp+58,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [0xfU][5U] << 0x11U) 
                                 | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xfU][4U] >> 0xfU))),32);
        bufp->chgIData(oldp+59,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [0xfU][4U] << 0x11U) 
                                 | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xfU][3U] >> 0xfU))),32);
        bufp->chgCData(oldp+60,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                         [0xfU][3U] 
                                         >> 0xbU))),4);
        bufp->chgCData(oldp+61,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                         [0xfU][3U] 
                                         >> 7U))),4);
        bufp->chgIData(oldp+62,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [0xfU][3U] << 0x19U) 
                                 | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xfU][2U] >> 7U))),32);
        bufp->chgIData(oldp+63,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [0xfU][2U] << 0x19U) 
                                 | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xfU][1U] >> 7U))),32);
        bufp->chgBit(oldp+64,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                     [0xfU][1U] >> 6U))));
        bufp->chgBit(oldp+65,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                     [0xfU][1U] >> 5U))));
        bufp->chgBit(oldp+66,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                     [0xfU][1U] >> 4U))));
        bufp->chgBit(oldp+67,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                     [0xfU][1U] >> 3U))));
        bufp->chgIData(oldp+68,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                  [0xfU][1U] << 0x1dU) 
                                 | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xfU][0U] >> 3U))),32);
        bufp->chgBit(oldp+69,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                     [0xfU][0U] >> 2U))));
        bufp->chgCData(oldp+70,((3U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xfU][0U])),2);
        bufp->chgIData(oldp+71,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                         [0U] >> 0x1aU))),32);
        bufp->chgCData(oldp+72,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [0U] 
                                               >> 0x17U)))),3);
        bufp->chgCData(oldp+73,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0U] 
                                                 >> 0x13U)))),4);
        bufp->chgCData(oldp+74,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [0U] 
                                               >> 0x10U)))),3);
        bufp->chgBit(oldp+75,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [0U] >> 0xfU)))));
        bufp->chgBit(oldp+76,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [0U] >> 0xeU)))));
        bufp->chgCData(oldp+77,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [0U] 
                                                  >> 8U)))),6);
        bufp->chgCData(oldp+78,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [0U] 
                                                  >> 2U)))),6);
        bufp->chgBit(oldp+79,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [0U] >> 1U)))));
        bufp->chgBit(oldp+80,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0U]))));
        bufp->chgIData(oldp+81,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                         [1U] >> 0x1aU))),32);
        bufp->chgCData(oldp+82,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [1U] 
                                               >> 0x17U)))),3);
        bufp->chgCData(oldp+83,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [1U] 
                                                 >> 0x13U)))),4);
        bufp->chgCData(oldp+84,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [1U] 
                                               >> 0x10U)))),3);
        bufp->chgBit(oldp+85,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [1U] >> 0xfU)))));
        bufp->chgBit(oldp+86,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [1U] >> 0xeU)))));
        bufp->chgCData(oldp+87,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [1U] 
                                                  >> 8U)))),6);
        bufp->chgCData(oldp+88,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [1U] 
                                                  >> 2U)))),6);
        bufp->chgBit(oldp+89,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [1U] >> 1U)))));
        bufp->chgBit(oldp+90,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [1U]))));
        bufp->chgIData(oldp+91,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                         [2U] >> 0x1aU))),32);
        bufp->chgCData(oldp+92,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [2U] 
                                               >> 0x17U)))),3);
        bufp->chgCData(oldp+93,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [2U] 
                                                 >> 0x13U)))),4);
        bufp->chgCData(oldp+94,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                               [2U] 
                                               >> 0x10U)))),3);
        bufp->chgBit(oldp+95,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [2U] >> 0xfU)))));
        bufp->chgBit(oldp+96,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [2U] >> 0xeU)))));
        bufp->chgCData(oldp+97,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [2U] 
                                                  >> 8U)))),6);
        bufp->chgCData(oldp+98,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [2U] 
                                                  >> 2U)))),6);
        bufp->chgBit(oldp+99,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [2U] >> 1U)))));
        bufp->chgBit(oldp+100,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [2U]))));
        bufp->chgIData(oldp+101,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                          [3U] >> 0x1aU))),32);
        bufp->chgCData(oldp+102,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [3U] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+103,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [3U] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+104,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [3U] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+105,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [3U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+106,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [3U] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+107,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [3U] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+108,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [3U] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+109,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [3U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+110,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [3U]))));
        bufp->chgIData(oldp+111,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                          [4U] >> 0x1aU))),32);
        bufp->chgCData(oldp+112,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [4U] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+113,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [4U] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+114,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [4U] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+115,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [4U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+116,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [4U] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+117,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [4U] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+118,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [4U] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+119,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [4U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+120,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [4U]))));
        bufp->chgIData(oldp+121,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                          [5U] >> 0x1aU))),32);
        bufp->chgCData(oldp+122,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [5U] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+123,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [5U] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+124,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [5U] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+125,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [5U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+126,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [5U] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+127,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [5U] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+128,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [5U] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+129,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [5U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+130,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [5U]))));
        bufp->chgIData(oldp+131,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                          [6U] >> 0x1aU))),32);
        bufp->chgCData(oldp+132,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [6U] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+133,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [6U] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+134,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [6U] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+135,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [6U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+136,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [6U] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+137,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [6U] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+138,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [6U] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+139,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [6U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+140,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [6U]))));
        bufp->chgIData(oldp+141,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                          [7U] >> 0x1aU))),32);
        bufp->chgCData(oldp+142,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [7U] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+143,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [7U] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+144,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [7U] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+145,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [7U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+146,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [7U] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+147,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [7U] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+148,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [7U] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+149,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [7U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+150,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [7U]))));
        bufp->chgIData(oldp+151,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                          [8U] >> 0x1aU))),32);
        bufp->chgCData(oldp+152,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [8U] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+153,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [8U] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+154,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [8U] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+155,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [8U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+156,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [8U] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+157,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [8U] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+158,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [8U] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+159,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [8U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+160,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [8U]))));
        bufp->chgIData(oldp+161,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                          [9U] >> 0x1aU))),32);
        bufp->chgCData(oldp+162,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [9U] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+163,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [9U] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+164,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [9U] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+165,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [9U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+166,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [9U] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+167,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [9U] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+168,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [9U] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+169,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [9U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+170,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [9U]))));
        bufp->chgIData(oldp+171,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                          [0xaU] >> 0x1aU))),32);
        bufp->chgCData(oldp+172,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xaU] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+173,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [0xaU] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+174,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xaU] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+175,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xaU] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+176,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xaU] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+177,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [0xaU] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+178,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [0xaU] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+179,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xaU] 
                                              >> 1U)))));
        bufp->chgBit(oldp+180,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [0xaU]))));
        bufp->chgIData(oldp+181,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                          [0xbU] >> 0x1aU))),32);
        bufp->chgCData(oldp+182,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xbU] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+183,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [0xbU] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+184,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xbU] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+185,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xbU] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+186,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xbU] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+187,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [0xbU] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+188,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [0xbU] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+189,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xbU] 
                                              >> 1U)))));
        bufp->chgBit(oldp+190,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [0xbU]))));
        bufp->chgIData(oldp+191,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                          [0xcU] >> 0x1aU))),32);
        bufp->chgCData(oldp+192,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xcU] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+193,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [0xcU] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+194,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xcU] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+195,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xcU] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+196,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xcU] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+197,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [0xcU] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+198,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [0xcU] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+199,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xcU] 
                                              >> 1U)))));
        bufp->chgBit(oldp+200,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [0xcU]))));
        bufp->chgIData(oldp+201,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                          [0xdU] >> 0x1aU))),32);
        bufp->chgCData(oldp+202,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xdU] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+203,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [0xdU] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+204,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xdU] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+205,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xdU] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+206,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xdU] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+207,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [0xdU] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+208,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [0xdU] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+209,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xdU] 
                                              >> 1U)))));
        bufp->chgBit(oldp+210,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [0xdU]))));
        bufp->chgIData(oldp+211,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                          [0xeU] >> 0x1aU))),32);
        bufp->chgCData(oldp+212,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xeU] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+213,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [0xeU] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+214,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xeU] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+215,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xeU] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+216,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xeU] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+217,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [0xeU] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+218,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [0xeU] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+219,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xeU] 
                                              >> 1U)))));
        bufp->chgBit(oldp+220,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [0xeU]))));
        bufp->chgIData(oldp+221,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                          [0xfU] >> 0x1aU))),32);
        bufp->chgCData(oldp+222,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xfU] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+223,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                  [0xfU] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+224,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xfU] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+225,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xfU] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+226,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xfU] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+227,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [0xfU] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+228,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                   [0xfU] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+229,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xfU] 
                                              >> 1U)))));
        bufp->chgBit(oldp+230,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                             [0xfU]))));
        bufp->chgBit(oldp+231,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[0]));
        bufp->chgBit(oldp+232,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[1]));
        bufp->chgBit(oldp+233,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[2]));
        bufp->chgBit(oldp+234,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[3]));
        bufp->chgBit(oldp+235,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[4]));
        bufp->chgBit(oldp+236,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[5]));
        bufp->chgBit(oldp+237,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[6]));
        bufp->chgBit(oldp+238,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[7]));
        bufp->chgBit(oldp+239,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[8]));
        bufp->chgBit(oldp+240,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[9]));
        bufp->chgBit(oldp+241,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[10]));
        bufp->chgBit(oldp+242,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[11]));
        bufp->chgBit(oldp+243,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[12]));
        bufp->chgBit(oldp+244,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[13]));
        bufp->chgBit(oldp+245,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[14]));
        bufp->chgBit(oldp+246,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[15]));
        bufp->chgBit(oldp+247,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[0]));
        bufp->chgBit(oldp+248,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[1]));
        bufp->chgBit(oldp+249,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[2]));
        bufp->chgBit(oldp+250,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[3]));
        bufp->chgBit(oldp+251,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[4]));
        bufp->chgBit(oldp+252,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[5]));
        bufp->chgBit(oldp+253,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[6]));
        bufp->chgBit(oldp+254,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[7]));
        bufp->chgBit(oldp+255,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[8]));
        bufp->chgBit(oldp+256,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[9]));
        bufp->chgBit(oldp+257,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[10]));
        bufp->chgBit(oldp+258,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[11]));
        bufp->chgBit(oldp+259,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[12]));
        bufp->chgBit(oldp+260,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[13]));
        bufp->chgBit(oldp+261,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[14]));
        bufp->chgBit(oldp+262,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[15]));
        bufp->chgCData(oldp+263,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__wrPtr),5);
        bufp->chgCData(oldp+264,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rdPtr),5);
        bufp->chgSData(oldp+265,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__committed),16);
        bufp->chgIData(oldp+266,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__unnamedblk5__DOT__i),32);
        bufp->chgCData(oldp+267,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask),4);
        bufp->chgBit(oldp+268,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__store_match));
        bufp->chgBit(oldp+269,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__store_committed));
        bufp->chgBit(oldp+270,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__flush));
        bufp->chgIData(oldp+271,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__prf_addr),32);
        bufp->chgBit(oldp+272,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__valid[0]));
        bufp->chgBit(oldp+273,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__valid[1]));
        bufp->chgBit(oldp+274,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__valid[2]));
        bufp->chgBit(oldp+275,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__valid[3]));
        bufp->chgBit(oldp+276,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [0U][0xbU] >> 0x12U))));
        bufp->chgBit(oldp+277,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [0U][0xbU] >> 0x11U))));
        bufp->chgBit(oldp+278,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [0U][0xbU] >> 0x10U))));
        bufp->chgCData(oldp+279,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [0U][0xbU] 
                                           >> 0xbU))),5);
        bufp->chgCData(oldp+280,((0x3fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [0U][0xbU] 
                                           >> 5U))),6);
        bufp->chgCData(oldp+281,((0x3fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                            [0U][0xbU] 
                                            << 1U) 
                                           | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                              [0U][0xaU] 
                                              >> 0x1fU)))),6);
        bufp->chgIData(oldp+282,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][0xaU] << 1U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [0U][9U] >> 0x1fU))),32);
        bufp->chgIData(oldp+283,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][9U] << 1U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [0U][8U] >> 0x1fU))),32);
        bufp->chgIData(oldp+284,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][8U] << 1U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [0U][7U] >> 0x1fU))),32);
        bufp->chgBit(oldp+285,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [0U][7U] >> 0x1eU))));
        bufp->chgBit(oldp+286,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [0U][7U] >> 0x1dU))));
        bufp->chgCData(oldp+287,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [0U][7U] 
                                           >> 0x18U))),5);
        bufp->chgCData(oldp+288,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [0U][7U] 
                                           >> 0x13U))),5);
        bufp->chgIData(oldp+289,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][7U] << 0xdU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [0U][6U] >> 0x13U))),32);
        bufp->chgIData(oldp+290,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][6U] << 0xdU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [0U][5U] >> 0x13U))),32);
        bufp->chgCData(oldp+291,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [0U][5U] 
                                          >> 0xfU))),4);
        bufp->chgIData(oldp+292,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][5U] << 0x11U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [0U][4U] >> 0xfU))),32);
        bufp->chgIData(oldp+293,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][4U] << 0x11U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [0U][3U] >> 0xfU))),32);
        bufp->chgCData(oldp+294,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [0U][3U] 
                                          >> 0xbU))),4);
        bufp->chgCData(oldp+295,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [0U][3U] 
                                          >> 7U))),4);
        bufp->chgIData(oldp+296,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][3U] << 0x19U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [0U][2U] >> 7U))),32);
        bufp->chgIData(oldp+297,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][2U] << 0x19U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [0U][1U] >> 7U))),32);
        bufp->chgBit(oldp+298,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [0U][1U] >> 6U))));
        bufp->chgBit(oldp+299,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [0U][1U] >> 5U))));
        bufp->chgBit(oldp+300,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [0U][1U] >> 4U))));
        bufp->chgBit(oldp+301,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [0U][1U] >> 3U))));
        bufp->chgIData(oldp+302,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [0U][0U] >> 3U))),32);
        bufp->chgBit(oldp+303,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [0U][0U] >> 2U))));
        bufp->chgCData(oldp+304,((3U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                  [0U][0U])),2);
        bufp->chgBit(oldp+305,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [1U][0xbU] >> 0x12U))));
        bufp->chgBit(oldp+306,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [1U][0xbU] >> 0x11U))));
        bufp->chgBit(oldp+307,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [1U][0xbU] >> 0x10U))));
        bufp->chgCData(oldp+308,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [1U][0xbU] 
                                           >> 0xbU))),5);
        bufp->chgCData(oldp+309,((0x3fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [1U][0xbU] 
                                           >> 5U))),6);
        bufp->chgCData(oldp+310,((0x3fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                            [1U][0xbU] 
                                            << 1U) 
                                           | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                              [1U][0xaU] 
                                              >> 0x1fU)))),6);
        bufp->chgIData(oldp+311,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][0xaU] << 1U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [1U][9U] >> 0x1fU))),32);
        bufp->chgIData(oldp+312,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][9U] << 1U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [1U][8U] >> 0x1fU))),32);
        bufp->chgIData(oldp+313,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][8U] << 1U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [1U][7U] >> 0x1fU))),32);
        bufp->chgBit(oldp+314,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [1U][7U] >> 0x1eU))));
        bufp->chgBit(oldp+315,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [1U][7U] >> 0x1dU))));
        bufp->chgCData(oldp+316,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [1U][7U] 
                                           >> 0x18U))),5);
        bufp->chgCData(oldp+317,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [1U][7U] 
                                           >> 0x13U))),5);
        bufp->chgIData(oldp+318,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][7U] << 0xdU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [1U][6U] >> 0x13U))),32);
        bufp->chgIData(oldp+319,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][6U] << 0xdU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [1U][5U] >> 0x13U))),32);
        bufp->chgCData(oldp+320,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [1U][5U] 
                                          >> 0xfU))),4);
        bufp->chgIData(oldp+321,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][5U] << 0x11U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [1U][4U] >> 0xfU))),32);
        bufp->chgIData(oldp+322,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][4U] << 0x11U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [1U][3U] >> 0xfU))),32);
        bufp->chgCData(oldp+323,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [1U][3U] 
                                          >> 0xbU))),4);
        bufp->chgCData(oldp+324,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [1U][3U] 
                                          >> 7U))),4);
        bufp->chgIData(oldp+325,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][3U] << 0x19U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [1U][2U] >> 7U))),32);
        bufp->chgIData(oldp+326,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][2U] << 0x19U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [1U][1U] >> 7U))),32);
        bufp->chgBit(oldp+327,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [1U][1U] >> 6U))));
        bufp->chgBit(oldp+328,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [1U][1U] >> 5U))));
        bufp->chgBit(oldp+329,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [1U][1U] >> 4U))));
        bufp->chgBit(oldp+330,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [1U][1U] >> 3U))));
        bufp->chgIData(oldp+331,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [1U][0U] >> 3U))),32);
        bufp->chgBit(oldp+332,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [1U][0U] >> 2U))));
        bufp->chgCData(oldp+333,((3U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                  [1U][0U])),2);
        bufp->chgBit(oldp+334,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [2U][0xbU] >> 0x12U))));
        bufp->chgBit(oldp+335,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [2U][0xbU] >> 0x11U))));
        bufp->chgBit(oldp+336,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [2U][0xbU] >> 0x10U))));
        bufp->chgCData(oldp+337,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [2U][0xbU] 
                                           >> 0xbU))),5);
        bufp->chgCData(oldp+338,((0x3fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [2U][0xbU] 
                                           >> 5U))),6);
        bufp->chgCData(oldp+339,((0x3fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                            [2U][0xbU] 
                                            << 1U) 
                                           | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                              [2U][0xaU] 
                                              >> 0x1fU)))),6);
        bufp->chgIData(oldp+340,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][0xaU] << 1U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [2U][9U] >> 0x1fU))),32);
        bufp->chgIData(oldp+341,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][9U] << 1U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [2U][8U] >> 0x1fU))),32);
        bufp->chgIData(oldp+342,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][8U] << 1U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [2U][7U] >> 0x1fU))),32);
        bufp->chgBit(oldp+343,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [2U][7U] >> 0x1eU))));
        bufp->chgBit(oldp+344,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [2U][7U] >> 0x1dU))));
        bufp->chgCData(oldp+345,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [2U][7U] 
                                           >> 0x18U))),5);
        bufp->chgCData(oldp+346,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [2U][7U] 
                                           >> 0x13U))),5);
        bufp->chgIData(oldp+347,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][7U] << 0xdU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [2U][6U] >> 0x13U))),32);
        bufp->chgIData(oldp+348,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][6U] << 0xdU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [2U][5U] >> 0x13U))),32);
        bufp->chgCData(oldp+349,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [2U][5U] 
                                          >> 0xfU))),4);
        bufp->chgIData(oldp+350,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][5U] << 0x11U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [2U][4U] >> 0xfU))),32);
        bufp->chgIData(oldp+351,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][4U] << 0x11U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [2U][3U] >> 0xfU))),32);
        bufp->chgCData(oldp+352,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [2U][3U] 
                                          >> 0xbU))),4);
        bufp->chgCData(oldp+353,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [2U][3U] 
                                          >> 7U))),4);
        bufp->chgIData(oldp+354,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][3U] << 0x19U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [2U][2U] >> 7U))),32);
        bufp->chgIData(oldp+355,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][2U] << 0x19U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [2U][1U] >> 7U))),32);
        bufp->chgBit(oldp+356,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [2U][1U] >> 6U))));
        bufp->chgBit(oldp+357,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [2U][1U] >> 5U))));
        bufp->chgBit(oldp+358,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [2U][1U] >> 4U))));
        bufp->chgBit(oldp+359,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [2U][1U] >> 3U))));
        bufp->chgIData(oldp+360,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [2U][0U] >> 3U))),32);
        bufp->chgBit(oldp+361,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [2U][0U] >> 2U))));
        bufp->chgCData(oldp+362,((3U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                  [2U][0U])),2);
        bufp->chgBit(oldp+363,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [3U][0xbU] >> 0x12U))));
        bufp->chgBit(oldp+364,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [3U][0xbU] >> 0x11U))));
        bufp->chgBit(oldp+365,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [3U][0xbU] >> 0x10U))));
        bufp->chgCData(oldp+366,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [3U][0xbU] 
                                           >> 0xbU))),5);
        bufp->chgCData(oldp+367,((0x3fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [3U][0xbU] 
                                           >> 5U))),6);
        bufp->chgCData(oldp+368,((0x3fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                            [3U][0xbU] 
                                            << 1U) 
                                           | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                              [3U][0xaU] 
                                              >> 0x1fU)))),6);
        bufp->chgIData(oldp+369,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][0xaU] << 1U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [3U][9U] >> 0x1fU))),32);
        bufp->chgIData(oldp+370,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][9U] << 1U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [3U][8U] >> 0x1fU))),32);
        bufp->chgIData(oldp+371,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][8U] << 1U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [3U][7U] >> 0x1fU))),32);
        bufp->chgBit(oldp+372,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [3U][7U] >> 0x1eU))));
        bufp->chgBit(oldp+373,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [3U][7U] >> 0x1dU))));
        bufp->chgCData(oldp+374,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [3U][7U] 
                                           >> 0x18U))),5);
        bufp->chgCData(oldp+375,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                           [3U][7U] 
                                           >> 0x13U))),5);
        bufp->chgIData(oldp+376,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][7U] << 0xdU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [3U][6U] >> 0x13U))),32);
        bufp->chgIData(oldp+377,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][6U] << 0xdU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [3U][5U] >> 0x13U))),32);
        bufp->chgCData(oldp+378,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [3U][5U] 
                                          >> 0xfU))),4);
        bufp->chgIData(oldp+379,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][5U] << 0x11U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [3U][4U] >> 0xfU))),32);
        bufp->chgIData(oldp+380,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][4U] << 0x11U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [3U][3U] >> 0xfU))),32);
        bufp->chgCData(oldp+381,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [3U][3U] 
                                          >> 0xbU))),4);
        bufp->chgCData(oldp+382,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [3U][3U] 
                                          >> 7U))),4);
        bufp->chgIData(oldp+383,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][3U] << 0x19U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [3U][2U] >> 7U))),32);
        bufp->chgIData(oldp+384,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][2U] << 0x19U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [3U][1U] >> 7U))),32);
        bufp->chgBit(oldp+385,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [3U][1U] >> 6U))));
        bufp->chgBit(oldp+386,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [3U][1U] >> 5U))));
        bufp->chgBit(oldp+387,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [3U][1U] >> 4U))));
        bufp->chgBit(oldp+388,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [3U][1U] >> 3U))));
        bufp->chgIData(oldp+389,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                     [3U][0U] >> 3U))),32);
        bufp->chgBit(oldp+390,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                      [3U][0U] >> 2U))));
        bufp->chgCData(oldp+391,((3U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                  [3U][0U])),2);
        bufp->chgIData(oldp+392,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                          [0U] >> 0x1aU))),32);
        bufp->chgCData(oldp+393,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [0U] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+394,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                  [0U] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+395,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [0U] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+396,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [0U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+397,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [0U] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+398,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                   [0U] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+399,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                   [0U] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+400,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [0U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+401,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                             [0U]))));
        bufp->chgIData(oldp+402,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                          [1U] >> 0x1aU))),32);
        bufp->chgCData(oldp+403,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [1U] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+404,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                  [1U] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+405,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [1U] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+406,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [1U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+407,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [1U] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+408,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                   [1U] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+409,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                   [1U] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+410,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [1U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+411,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                             [1U]))));
        bufp->chgIData(oldp+412,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                          [2U] >> 0x1aU))),32);
        bufp->chgCData(oldp+413,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [2U] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+414,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                  [2U] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+415,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [2U] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+416,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [2U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+417,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [2U] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+418,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                   [2U] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+419,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                   [2U] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+420,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [2U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+421,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                             [2U]))));
        bufp->chgIData(oldp+422,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                          [3U] >> 0x1aU))),32);
        bufp->chgCData(oldp+423,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [3U] 
                                                >> 0x17U)))),3);
        bufp->chgCData(oldp+424,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                  [3U] 
                                                  >> 0x13U)))),4);
        bufp->chgCData(oldp+425,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [3U] 
                                                >> 0x10U)))),3);
        bufp->chgBit(oldp+426,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [3U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+427,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [3U] 
                                              >> 0xeU)))));
        bufp->chgCData(oldp+428,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                   [3U] 
                                                   >> 8U)))),6);
        bufp->chgCData(oldp+429,((0x3fU & (IData)((
                                                   vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                   [3U] 
                                                   >> 2U)))),6);
        bufp->chgBit(oldp+430,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [3U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+431,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                             [3U]))));
        bufp->chgBit(oldp+432,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready[0]));
        bufp->chgBit(oldp+433,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready[1]));
        bufp->chgBit(oldp+434,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready[2]));
        bufp->chgBit(oldp+435,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready[3]));
        bufp->chgBit(oldp+436,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready[0]));
        bufp->chgBit(oldp+437,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready[1]));
        bufp->chgBit(oldp+438,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready[2]));
        bufp->chgBit(oldp+439,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready[3]));
        bufp->chgCData(oldp+440,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__wr_idx),2);
        bufp->chgCData(oldp+441,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx),2);
        bufp->chgBit(oldp+442,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__wr_idx_valid));
        bufp->chgBit(oldp+443,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx_valid));
        bufp->chgIData(oldp+444,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+445,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__unnamedblk8__DOT__i),32);
        bufp->chgQData(oldp+446,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss),64);
        bufp->chgQData(oldp+448,(((QData)((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
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
        bufp->chgWData(oldp+450,(__Vtemp_9),65);
        VL_EXTENDS_WI(65,32, __Vtemp_12, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val);
        __Vtemp_13[0U] = __Vtemp_12[0U];
        __Vtemp_13[1U] = __Vtemp_12[1U];
        __Vtemp_13[2U] = (1U & __Vtemp_12[2U]);
        VL_EXTENDS_WQ(65,33, __Vtemp_15, (QData)((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)));
        __Vtemp_16[0U] = __Vtemp_15[0U];
        __Vtemp_16[1U] = __Vtemp_15[1U];
        __Vtemp_16[2U] = (1U & __Vtemp_15[2U]);
        VL_MULS_WWW(65, __Vtemp_17, __Vtemp_13, __Vtemp_16);
        bufp->chgIData(oldp+453,(((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
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
        bufp->chgIData(oldp+454,(((0U == vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                   ? 0xffffffffU : 
                                  ((IData)(vlSymsp->TOP__top_tb__dut.cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                    ? 0x80000000U : 
                                   VL_DIVS_III(32, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)))),32);
        bufp->chgIData(oldp+455,(((0U == vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                   ? 0xffffffffU : 
                                  VL_DIV_III(32, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val))),32);
        bufp->chgBit(oldp+456,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetchq_full));
        bufp->chgIData(oldp+457,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_target),32);
        bufp->chgBit(oldp+458,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp));
        bufp->chgBit(oldp+459,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_valid));
        bufp->chgBit(oldp+460,(((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp) 
                                & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_valid))));
        bufp->chgBit(oldp+461,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_hit));
        bufp->chgBit(oldp+462,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__commit_pred_taken));
        bufp->chgBit(oldp+463,(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT____Vcellinp__tage_predictor__update_valid));
        bufp->chgCData(oldp+464,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[0]),3);
        bufp->chgCData(oldp+465,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[1]),3);
        bufp->chgCData(oldp+466,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[2]),3);
        bufp->chgCData(oldp+467,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[3]),3);
        bufp->chgCData(oldp+468,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[4]),3);
        bufp->chgCData(oldp+469,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[5]),3);
        bufp->chgCData(oldp+470,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[6]),3);
        bufp->chgCData(oldp+471,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[7]),3);
        bufp->chgCData(oldp+472,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[8]),3);
        bufp->chgCData(oldp+473,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[9]),3);
        bufp->chgCData(oldp+474,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[10]),3);
        bufp->chgCData(oldp+475,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[11]),3);
        bufp->chgCData(oldp+476,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[12]),3);
        bufp->chgCData(oldp+477,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[13]),3);
        bufp->chgCData(oldp+478,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[14]),3);
        bufp->chgCData(oldp+479,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[15]),3);
        bufp->chgCData(oldp+480,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                          >> 2U))),4);
        bufp->chgCData(oldp+481,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[0xaU] 
                                          >> 1U))),4);
        bufp->chgCData(oldp+482,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_way),2);
        bufp->chgCData(oldp+483,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_way),2);
        bufp->chgCData(oldp+484,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_install_way),2);
        bufp->chgBit(oldp+485,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_found));
        bufp->chgBit(oldp+486,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_found));
        bufp->chgIData(oldp+487,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk2__DOT__w),32);
        bufp->chgIData(oldp+488,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk3__DOT__w),32);
        bufp->chgIData(oldp+489,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk4__DOT__s),32);
        bufp->chgIData(oldp+490,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__w),32);
        bufp->chgWData(oldp+491,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_cand_ctr[0]),65);
        bufp->chgWData(oldp+494,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_cand_ctr[1]),65);
        bufp->chgWData(oldp+497,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_cand_ctr[2]),65);
        bufp->chgWData(oldp+500,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_cand_ctr[3]),65);
        bufp->chgWData(oldp+503,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_cand_ctr[4]),65);
        bufp->chgWData(oldp+506,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_ctr[0]),65);
        bufp->chgWData(oldp+509,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_ctr[1]),65);
        bufp->chgWData(oldp+512,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_ctr[2]),65);
        bufp->chgWData(oldp+515,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_ctr[3]),65);
        bufp->chgWData(oldp+518,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_ctr[4]),65);
        bufp->chgWData(oldp+521,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_ctr[0]),65);
        bufp->chgWData(oldp+524,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_ctr[1]),65);
        bufp->chgWData(oldp+527,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_ctr[2]),65);
        bufp->chgWData(oldp+530,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_ctr[3]),65);
        bufp->chgWData(oldp+533,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_ctr[4]),65);
        bufp->chgWData(oldp+536,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mispred_ctr[0]),65);
        bufp->chgWData(oldp+539,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mispred_ctr[1]),65);
        bufp->chgWData(oldp+542,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mispred_ctr[2]),65);
        bufp->chgWData(oldp+545,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mispred_ctr[3]),65);
        bufp->chgWData(oldp+548,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mispred_ctr[4]),65);
        bufp->chgWData(oldp+551,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_u_match_ctr[0]),65);
        bufp->chgWData(oldp+554,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_u_match_ctr[1]),65);
        bufp->chgWData(oldp+557,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_u_match_ctr[2]),65);
        bufp->chgWData(oldp+560,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_u_match_ctr[3]),65);
        bufp->chgWData(oldp+563,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_u_match_ctr[4]),65);
        bufp->chgWData(oldp+566,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_match_ctr[0]),65);
        bufp->chgWData(oldp+569,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_match_ctr[1]),65);
        bufp->chgWData(oldp+572,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_match_ctr[2]),65);
        bufp->chgWData(oldp+575,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_match_ctr[3]),65);
        bufp->chgWData(oldp+578,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_match_ctr[4]),65);
        bufp->chgWData(oldp+581,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__T4_fail_alloc_ctr),65);
        bufp->chgIData(oldp+584,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist),32);
        bufp->chgIData(oldp+585,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__phist),32);
        bufp->chgCData(oldp+586,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lfsr),8);
        bufp->chgCData(oldp+587,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_bp_idx),7);
        bufp->chgCData(oldp+588,((0x7fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                            >> 0x19U) 
                                           ^ ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                               >> 5U) 
                                              ^ (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                                 >> 0xdU))))),7);
        bufp->chgSData(oldp+589,(((IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h9247e85f__0) 
                                  ^ (3U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist))),9);
        bufp->chgSData(oldp+590,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag),9);
        bufp->chgSData(oldp+591,(((IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h9247e85f__0) 
                                  ^ (0xfU & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist))),9);
        bufp->chgSData(oldp+592,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag),9);
        bufp->chgSData(oldp+593,(((IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h9247e85f__0) 
                                  ^ (0xffU & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist))),9);
        bufp->chgSData(oldp+594,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag),9);
        bufp->chgSData(oldp+595,(((IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h9247e85f__0) 
                                  ^ (IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h083e6cc3__0))),9);
        bufp->chgSData(oldp+596,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag),9);
        bufp->chgIData(oldp+597,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_2),32);
        bufp->chgIData(oldp+598,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_3),32);
        bufp->chgIData(oldp+599,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_4),32);
        bufp->chgBit(oldp+600,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__bp_table
                                      [(0x7fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                                  >> 0x19U) 
                                                 ^ 
                                                 ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                                   >> 5U) 
                                                  ^ 
                                                  (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                                   >> 0xdU))))] 
                                      >> 1U))));
        bufp->chgBit(oldp+601,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u));
        bufp->chgBit(oldp+602,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u));
        bufp->chgBit(oldp+603,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u));
        bufp->chgBit(oldp+604,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u));
        bufp->chgBit(oldp+605,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag));
        bufp->chgBit(oldp+606,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag));
        bufp->chgBit(oldp+607,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag));
        bufp->chgBit(oldp+608,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag));
        bufp->chgIData(oldp+609,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u),32);
        bufp->chgIData(oldp+610,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u),32);
        bufp->chgIData(oldp+611,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u),32);
        bufp->chgIData(oldp+612,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u),32);
        bufp->chgIData(oldp+613,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag),32);
        bufp->chgIData(oldp+614,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag),32);
        bufp->chgIData(oldp+615,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag),32);
        bufp->chgIData(oldp+616,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag),32);
        bufp->chgCData(oldp+617,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp),3);
        bufp->chgIData(oldp+618,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp),32);
        bufp->chgBit(oldp+619,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp));
        bufp->chgBit(oldp+620,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp));
        bufp->chgBit(oldp+621,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp));
        bufp->chgIData(oldp+622,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp),32);
        bufp->chgIData(oldp+623,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag),32);
        bufp->chgIData(oldp+624,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag),32);
        bufp->chgIData(oldp+625,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag),32);
        bufp->chgBit(oldp+626,(((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp) 
                                != (1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table
                                          [(0x3fU & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag)] 
                                          >> 1U)))));
        bufp->chgBit(oldp+627,(((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp) 
                                != (1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table
                                          [(0x3fU & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag)] 
                                          >> 1U)))));
        bufp->chgBit(oldp+628,(((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp) 
                                != (1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table
                                          [(0x3fU & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag)] 
                                          >> 1U)))));
        bufp->chgIData(oldp+629,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0U][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0U][4U] >> 9U))),32);
        bufp->chgCData(oldp+630,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [0U][4U] >> 6U))),3);
        bufp->chgIData(oldp+631,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0U][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0U][3U] >> 6U))),32);
        bufp->chgBit(oldp+632,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0U][3U] >> 5U))));
        bufp->chgBit(oldp+633,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0U][3U] >> 4U))));
        bufp->chgBit(oldp+634,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0U][3U] >> 3U))));
        bufp->chgIData(oldp+635,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0U][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0U][2U] >> 3U))),32);
        bufp->chgIData(oldp+636,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0U][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0U][1U] >> 3U))),32);
        bufp->chgIData(oldp+637,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0U][0U] >> 3U))),32);
        bufp->chgBit(oldp+638,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0U][0U] >> 2U))));
        bufp->chgBit(oldp+639,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0U][0U] >> 1U))));
        bufp->chgBit(oldp+640,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [0U][0U])));
        bufp->chgIData(oldp+641,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [1U][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [1U][4U] >> 9U))),32);
        bufp->chgCData(oldp+642,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [1U][4U] >> 6U))),3);
        bufp->chgIData(oldp+643,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [1U][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [1U][3U] >> 6U))),32);
        bufp->chgBit(oldp+644,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [1U][3U] >> 5U))));
        bufp->chgBit(oldp+645,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [1U][3U] >> 4U))));
        bufp->chgBit(oldp+646,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [1U][3U] >> 3U))));
        bufp->chgIData(oldp+647,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [1U][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [1U][2U] >> 3U))),32);
        bufp->chgIData(oldp+648,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [1U][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [1U][1U] >> 3U))),32);
        bufp->chgIData(oldp+649,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [1U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [1U][0U] >> 3U))),32);
        bufp->chgBit(oldp+650,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [1U][0U] >> 2U))));
        bufp->chgBit(oldp+651,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [1U][0U] >> 1U))));
        bufp->chgBit(oldp+652,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [1U][0U])));
        bufp->chgIData(oldp+653,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [2U][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [2U][4U] >> 9U))),32);
        bufp->chgCData(oldp+654,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [2U][4U] >> 6U))),3);
        bufp->chgIData(oldp+655,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [2U][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [2U][3U] >> 6U))),32);
        bufp->chgBit(oldp+656,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [2U][3U] >> 5U))));
        bufp->chgBit(oldp+657,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [2U][3U] >> 4U))));
        bufp->chgBit(oldp+658,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [2U][3U] >> 3U))));
        bufp->chgIData(oldp+659,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [2U][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [2U][2U] >> 3U))),32);
        bufp->chgIData(oldp+660,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [2U][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [2U][1U] >> 3U))),32);
        bufp->chgIData(oldp+661,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [2U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [2U][0U] >> 3U))),32);
        bufp->chgBit(oldp+662,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [2U][0U] >> 2U))));
        bufp->chgBit(oldp+663,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [2U][0U] >> 1U))));
        bufp->chgBit(oldp+664,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [2U][0U])));
        bufp->chgIData(oldp+665,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [3U][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [3U][4U] >> 9U))),32);
        bufp->chgCData(oldp+666,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [3U][4U] >> 6U))),3);
        bufp->chgIData(oldp+667,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [3U][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [3U][3U] >> 6U))),32);
        bufp->chgBit(oldp+668,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [3U][3U] >> 5U))));
        bufp->chgBit(oldp+669,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [3U][3U] >> 4U))));
        bufp->chgBit(oldp+670,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [3U][3U] >> 3U))));
        bufp->chgIData(oldp+671,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [3U][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [3U][2U] >> 3U))),32);
        bufp->chgIData(oldp+672,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [3U][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [3U][1U] >> 3U))),32);
        bufp->chgIData(oldp+673,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [3U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [3U][0U] >> 3U))),32);
        bufp->chgBit(oldp+674,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [3U][0U] >> 2U))));
        bufp->chgBit(oldp+675,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [3U][0U] >> 1U))));
        bufp->chgBit(oldp+676,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [3U][0U])));
        bufp->chgIData(oldp+677,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [4U][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [4U][4U] >> 9U))),32);
        bufp->chgCData(oldp+678,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [4U][4U] >> 6U))),3);
        bufp->chgIData(oldp+679,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [4U][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [4U][3U] >> 6U))),32);
        bufp->chgBit(oldp+680,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [4U][3U] >> 5U))));
        bufp->chgBit(oldp+681,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [4U][3U] >> 4U))));
        bufp->chgBit(oldp+682,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [4U][3U] >> 3U))));
        bufp->chgIData(oldp+683,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [4U][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [4U][2U] >> 3U))),32);
        bufp->chgIData(oldp+684,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [4U][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [4U][1U] >> 3U))),32);
        bufp->chgIData(oldp+685,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [4U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [4U][0U] >> 3U))),32);
        bufp->chgBit(oldp+686,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [4U][0U] >> 2U))));
        bufp->chgBit(oldp+687,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [4U][0U] >> 1U))));
        bufp->chgBit(oldp+688,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [4U][0U])));
        bufp->chgIData(oldp+689,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [5U][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [5U][4U] >> 9U))),32);
        bufp->chgCData(oldp+690,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [5U][4U] >> 6U))),3);
        bufp->chgIData(oldp+691,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [5U][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [5U][3U] >> 6U))),32);
        bufp->chgBit(oldp+692,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [5U][3U] >> 5U))));
        bufp->chgBit(oldp+693,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [5U][3U] >> 4U))));
        bufp->chgBit(oldp+694,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [5U][3U] >> 3U))));
        bufp->chgIData(oldp+695,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [5U][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [5U][2U] >> 3U))),32);
        bufp->chgIData(oldp+696,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [5U][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [5U][1U] >> 3U))),32);
        bufp->chgIData(oldp+697,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [5U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [5U][0U] >> 3U))),32);
        bufp->chgBit(oldp+698,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [5U][0U] >> 2U))));
        bufp->chgBit(oldp+699,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [5U][0U] >> 1U))));
        bufp->chgBit(oldp+700,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [5U][0U])));
        bufp->chgIData(oldp+701,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [6U][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [6U][4U] >> 9U))),32);
        bufp->chgCData(oldp+702,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [6U][4U] >> 6U))),3);
        bufp->chgIData(oldp+703,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [6U][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [6U][3U] >> 6U))),32);
        bufp->chgBit(oldp+704,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [6U][3U] >> 5U))));
        bufp->chgBit(oldp+705,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [6U][3U] >> 4U))));
        bufp->chgBit(oldp+706,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [6U][3U] >> 3U))));
        bufp->chgIData(oldp+707,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [6U][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [6U][2U] >> 3U))),32);
        bufp->chgIData(oldp+708,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [6U][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [6U][1U] >> 3U))),32);
        bufp->chgIData(oldp+709,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [6U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [6U][0U] >> 3U))),32);
        bufp->chgBit(oldp+710,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [6U][0U] >> 2U))));
        bufp->chgBit(oldp+711,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [6U][0U] >> 1U))));
        bufp->chgBit(oldp+712,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [6U][0U])));
        bufp->chgIData(oldp+713,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [7U][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [7U][4U] >> 9U))),32);
        bufp->chgCData(oldp+714,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [7U][4U] >> 6U))),3);
        bufp->chgIData(oldp+715,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [7U][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [7U][3U] >> 6U))),32);
        bufp->chgBit(oldp+716,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [7U][3U] >> 5U))));
        bufp->chgBit(oldp+717,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [7U][3U] >> 4U))));
        bufp->chgBit(oldp+718,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [7U][3U] >> 3U))));
        bufp->chgIData(oldp+719,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [7U][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [7U][2U] >> 3U))),32);
        bufp->chgIData(oldp+720,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [7U][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [7U][1U] >> 3U))),32);
        bufp->chgIData(oldp+721,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [7U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [7U][0U] >> 3U))),32);
        bufp->chgBit(oldp+722,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [7U][0U] >> 2U))));
        bufp->chgBit(oldp+723,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [7U][0U] >> 1U))));
        bufp->chgBit(oldp+724,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [7U][0U])));
        bufp->chgIData(oldp+725,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [8U][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [8U][4U] >> 9U))),32);
        bufp->chgCData(oldp+726,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [8U][4U] >> 6U))),3);
        bufp->chgIData(oldp+727,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [8U][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [8U][3U] >> 6U))),32);
        bufp->chgBit(oldp+728,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [8U][3U] >> 5U))));
        bufp->chgBit(oldp+729,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [8U][3U] >> 4U))));
        bufp->chgBit(oldp+730,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [8U][3U] >> 3U))));
        bufp->chgIData(oldp+731,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [8U][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [8U][2U] >> 3U))),32);
        bufp->chgIData(oldp+732,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [8U][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [8U][1U] >> 3U))),32);
        bufp->chgIData(oldp+733,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [8U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [8U][0U] >> 3U))),32);
        bufp->chgBit(oldp+734,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [8U][0U] >> 2U))));
        bufp->chgBit(oldp+735,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [8U][0U] >> 1U))));
        bufp->chgBit(oldp+736,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [8U][0U])));
        bufp->chgIData(oldp+737,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [9U][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [9U][4U] >> 9U))),32);
        bufp->chgCData(oldp+738,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [9U][4U] >> 6U))),3);
        bufp->chgIData(oldp+739,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [9U][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [9U][3U] >> 6U))),32);
        bufp->chgBit(oldp+740,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [9U][3U] >> 5U))));
        bufp->chgBit(oldp+741,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [9U][3U] >> 4U))));
        bufp->chgBit(oldp+742,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [9U][3U] >> 3U))));
        bufp->chgIData(oldp+743,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [9U][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [9U][2U] >> 3U))),32);
        bufp->chgIData(oldp+744,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [9U][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [9U][1U] >> 3U))),32);
        bufp->chgIData(oldp+745,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [9U][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [9U][0U] >> 3U))),32);
        bufp->chgBit(oldp+746,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [9U][0U] >> 2U))));
        bufp->chgBit(oldp+747,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [9U][0U] >> 1U))));
        bufp->chgBit(oldp+748,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [9U][0U])));
        bufp->chgIData(oldp+749,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xaU][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xaU][4U] >> 9U))),32);
        bufp->chgCData(oldp+750,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [0xaU][4U] 
                                        >> 6U))),3);
        bufp->chgIData(oldp+751,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xaU][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xaU][3U] >> 6U))),32);
        bufp->chgBit(oldp+752,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xaU][3U] >> 5U))));
        bufp->chgBit(oldp+753,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xaU][3U] >> 4U))));
        bufp->chgBit(oldp+754,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xaU][3U] >> 3U))));
        bufp->chgIData(oldp+755,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xaU][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xaU][2U] >> 3U))),32);
        bufp->chgIData(oldp+756,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xaU][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xaU][1U] >> 3U))),32);
        bufp->chgIData(oldp+757,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xaU][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xaU][0U] >> 3U))),32);
        bufp->chgBit(oldp+758,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xaU][0U] >> 2U))));
        bufp->chgBit(oldp+759,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xaU][0U] >> 1U))));
        bufp->chgBit(oldp+760,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [0xaU][0U])));
        bufp->chgIData(oldp+761,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xbU][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xbU][4U] >> 9U))),32);
        bufp->chgCData(oldp+762,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [0xbU][4U] 
                                        >> 6U))),3);
        bufp->chgIData(oldp+763,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xbU][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xbU][3U] >> 6U))),32);
        bufp->chgBit(oldp+764,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xbU][3U] >> 5U))));
        bufp->chgBit(oldp+765,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xbU][3U] >> 4U))));
        bufp->chgBit(oldp+766,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xbU][3U] >> 3U))));
        bufp->chgIData(oldp+767,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xbU][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xbU][2U] >> 3U))),32);
        bufp->chgIData(oldp+768,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xbU][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xbU][1U] >> 3U))),32);
        bufp->chgIData(oldp+769,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xbU][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xbU][0U] >> 3U))),32);
        bufp->chgBit(oldp+770,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xbU][0U] >> 2U))));
        bufp->chgBit(oldp+771,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xbU][0U] >> 1U))));
        bufp->chgBit(oldp+772,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [0xbU][0U])));
        bufp->chgIData(oldp+773,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xcU][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xcU][4U] >> 9U))),32);
        bufp->chgCData(oldp+774,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [0xcU][4U] 
                                        >> 6U))),3);
        bufp->chgIData(oldp+775,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xcU][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xcU][3U] >> 6U))),32);
        bufp->chgBit(oldp+776,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xcU][3U] >> 5U))));
        bufp->chgBit(oldp+777,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xcU][3U] >> 4U))));
        bufp->chgBit(oldp+778,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xcU][3U] >> 3U))));
        bufp->chgIData(oldp+779,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xcU][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xcU][2U] >> 3U))),32);
        bufp->chgIData(oldp+780,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xcU][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xcU][1U] >> 3U))),32);
        bufp->chgIData(oldp+781,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xcU][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xcU][0U] >> 3U))),32);
        bufp->chgBit(oldp+782,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xcU][0U] >> 2U))));
        bufp->chgBit(oldp+783,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xcU][0U] >> 1U))));
        bufp->chgBit(oldp+784,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [0xcU][0U])));
        bufp->chgIData(oldp+785,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xdU][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xdU][4U] >> 9U))),32);
        bufp->chgCData(oldp+786,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [0xdU][4U] 
                                        >> 6U))),3);
        bufp->chgIData(oldp+787,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xdU][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xdU][3U] >> 6U))),32);
        bufp->chgBit(oldp+788,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xdU][3U] >> 5U))));
        bufp->chgBit(oldp+789,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xdU][3U] >> 4U))));
        bufp->chgBit(oldp+790,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xdU][3U] >> 3U))));
        bufp->chgIData(oldp+791,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xdU][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xdU][2U] >> 3U))),32);
        bufp->chgIData(oldp+792,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xdU][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xdU][1U] >> 3U))),32);
        bufp->chgIData(oldp+793,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xdU][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xdU][0U] >> 3U))),32);
        bufp->chgBit(oldp+794,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xdU][0U] >> 2U))));
        bufp->chgBit(oldp+795,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xdU][0U] >> 1U))));
        bufp->chgBit(oldp+796,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [0xdU][0U])));
        bufp->chgIData(oldp+797,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xeU][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xeU][4U] >> 9U))),32);
        bufp->chgCData(oldp+798,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [0xeU][4U] 
                                        >> 6U))),3);
        bufp->chgIData(oldp+799,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xeU][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xeU][3U] >> 6U))),32);
        bufp->chgBit(oldp+800,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xeU][3U] >> 5U))));
        bufp->chgBit(oldp+801,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xeU][3U] >> 4U))));
        bufp->chgBit(oldp+802,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xeU][3U] >> 3U))));
        bufp->chgIData(oldp+803,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xeU][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xeU][2U] >> 3U))),32);
        bufp->chgIData(oldp+804,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xeU][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xeU][1U] >> 3U))),32);
        bufp->chgIData(oldp+805,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xeU][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xeU][0U] >> 3U))),32);
        bufp->chgBit(oldp+806,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xeU][0U] >> 2U))));
        bufp->chgBit(oldp+807,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xeU][0U] >> 1U))));
        bufp->chgBit(oldp+808,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [0xeU][0U])));
        bufp->chgIData(oldp+809,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xfU][5U] << 0x17U) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xfU][4U] >> 9U))),32);
        bufp->chgCData(oldp+810,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                        [0xfU][4U] 
                                        >> 6U))),3);
        bufp->chgIData(oldp+811,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xfU][4U] << 0x1aU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xfU][3U] >> 6U))),32);
        bufp->chgBit(oldp+812,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xfU][3U] >> 5U))));
        bufp->chgBit(oldp+813,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xfU][3U] >> 4U))));
        bufp->chgBit(oldp+814,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xfU][3U] >> 3U))));
        bufp->chgIData(oldp+815,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xfU][3U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xfU][2U] >> 3U))),32);
        bufp->chgIData(oldp+816,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xfU][2U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xfU][1U] >> 3U))),32);
        bufp->chgIData(oldp+817,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xfU][1U] << 0x1dU) 
                                  | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                     [0xfU][0U] >> 3U))),32);
        bufp->chgBit(oldp+818,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xfU][0U] >> 2U))));
        bufp->chgBit(oldp+819,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xfU][0U] >> 1U))));
        bufp->chgBit(oldp+820,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                [0xfU][0U])));
        bufp->chgIData(oldp+821,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[5U] 
                                   << 0x17U) | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U] 
                                                >> 9U))),32);
        bufp->chgCData(oldp+822,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U] 
                                        >> 6U))),3);
        bufp->chgIData(oldp+823,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U] 
                                   << 0x1aU) | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[3U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+824,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[3U] 
                                      >> 5U))));
        bufp->chgBit(oldp+825,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[3U] 
                                      >> 4U))));
        bufp->chgBit(oldp+826,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[3U] 
                                      >> 3U))));
        bufp->chgIData(oldp+827,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[3U] 
                                   << 0x1dU) | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[2U] 
                                                >> 3U))),32);
        bufp->chgIData(oldp+828,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[2U] 
                                   << 0x1dU) | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[1U] 
                                                >> 3U))),32);
        bufp->chgIData(oldp+829,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[1U] 
                                   << 0x1dU) | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[0U] 
                                                >> 3U))),32);
        bufp->chgBit(oldp+830,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+831,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+832,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[0U])));
        bufp->chgCData(oldp+833,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtr),5);
        bufp->chgCData(oldp+834,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr),5);
        bufp->chgCData(oldp+835,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtrNext),5);
        bufp->chgBit(oldp+836,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__full));
        bufp->chgBit(oldp+837,((((1U & ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtr) 
                                        >> 4U)) == 
                                 (1U & ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr) 
                                        >> 4U))) & (IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_hc4999392__0))));
        bufp->chgBit(oldp+838,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__fifo_valid_pop));
        bufp->chgBit(oldp+839,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T1));
        bufp->chgBit(oldp+840,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T2));
        bufp->chgBit(oldp+841,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T3));
        bufp->chgBit(oldp+842,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T4));
        bufp->chgBit(oldp+843,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1));
        bufp->chgBit(oldp+844,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2));
        bufp->chgBit(oldp+845,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3));
        bufp->chgBit(oldp+846,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4));
        bufp->chgBit(oldp+847,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1));
        bufp->chgBit(oldp+848,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2));
        bufp->chgBit(oldp+849,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3));
        bufp->chgBit(oldp+850,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4));
        bufp->chgIData(oldp+851,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T1),32);
        bufp->chgIData(oldp+852,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T2),32);
        bufp->chgIData(oldp+853,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T3),32);
        bufp->chgIData(oldp+854,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T4),32);
        bufp->chgCData(oldp+855,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T1),6);
        bufp->chgCData(oldp+856,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T2),6);
        bufp->chgCData(oldp+857,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T3),6);
        bufp->chgCData(oldp+858,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T4),6);
        bufp->chgBit(oldp+859,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[0]));
        bufp->chgBit(oldp+860,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[1]));
        bufp->chgBit(oldp+861,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[2]));
        bufp->chgBit(oldp+862,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[3]));
        bufp->chgCData(oldp+863,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position),3);
        bufp->chgBit(oldp+864,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__decrement_all_u));
        bufp->chgIData(oldp+865,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1),32);
        bufp->chgIData(oldp+866,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2),32);
        bufp->chgIData(oldp+867,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3),32);
        bufp->chgIData(oldp+868,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4),32);
        bufp->chgIData(oldp+869,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count),32);
        bufp->chgIData(oldp+870,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__target_q),32);
        bufp->chgIData(oldp+871,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+872,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk10__DOT__i),32);
        bufp->chgIData(oldp+873,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk11__DOT__i),32);
        bufp->chgIData(oldp+874,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk12__DOT__i),32);
        bufp->chgIData(oldp+875,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk13__DOT__i),32);
        bufp->chgIData(oldp+876,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk14__DOT__i),32);
        bufp->chgIData(oldp+877,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk15__DOT__i),32);
        bufp->chgIData(oldp+878,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk16__DOT__i),32);
        bufp->chgIData(oldp+879,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk17__DOT__i),32);
        bufp->chgIData(oldp+880,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk18__DOT__i),32);
        bufp->chgIData(oldp+881,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk19__DOT__i),32);
        bufp->chgIData(oldp+882,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk20__DOT__i),32);
        bufp->chgIData(oldp+883,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk21__DOT__i),32);
        bufp->chgIData(oldp+884,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk22__DOT__i),32);
        bufp->chgIData(oldp+885,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk23__DOT__i),32);
        bufp->chgIData(oldp+886,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk24__DOT__i),32);
        bufp->chgIData(oldp+887,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk25__DOT__i),32);
        bufp->chgIData(oldp+888,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk26__DOT__i),32);
        bufp->chgIData(oldp+889,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk27__DOT__i),32);
        bufp->chgIData(oldp+890,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk28__DOT__i),32);
        bufp->chgIData(oldp+891,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+892,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+893,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk8__DOT__i),32);
        bufp->chgIData(oldp+894,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk9__DOT__i),32);
        bufp->chgBit(oldp+895,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__stale_in_flight));
        bufp->chgBit(oldp+896,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_empty));
        bufp->chgBit(oldp+897,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_empty));
        bufp->chgBit(oldp+898,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_empty));
        bufp->chgBit(oldp+899,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_empty));
        bufp->chgBit(oldp+900,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_full));
        bufp->chgBit(oldp+901,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_full));
        bufp->chgBit(oldp+902,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_full));
        bufp->chgBit(oldp+903,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_full));
        bufp->chgBit(oldp+904,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[0]));
        bufp->chgBit(oldp+905,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[1]));
        bufp->chgBit(oldp+906,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[2]));
        bufp->chgBit(oldp+907,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[3]));
        bufp->chgBit(oldp+908,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[4]));
        bufp->chgBit(oldp+909,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[5]));
        bufp->chgBit(oldp+910,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[6]));
        bufp->chgBit(oldp+911,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[7]));
        bufp->chgCData(oldp+912,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__wrPtr),4);
        bufp->chgCData(oldp+913,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__rdPtr),4);
        bufp->chgIData(oldp+914,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+915,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[0]),32);
        bufp->chgIData(oldp+916,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[1]),32);
        bufp->chgIData(oldp+917,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[2]),32);
        bufp->chgIData(oldp+918,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[3]),32);
        bufp->chgIData(oldp+919,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[4]),32);
        bufp->chgIData(oldp+920,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[5]),32);
        bufp->chgIData(oldp+921,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[6]),32);
        bufp->chgIData(oldp+922,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[7]),32);
        bufp->chgCData(oldp+923,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__wrPtr),4);
        bufp->chgCData(oldp+924,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__rdPtr),4);
        bufp->chgIData(oldp+925,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+926,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[0]),32);
        bufp->chgIData(oldp+927,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[1]),32);
        bufp->chgIData(oldp+928,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[2]),32);
        bufp->chgIData(oldp+929,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[3]),32);
        bufp->chgIData(oldp+930,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[4]),32);
        bufp->chgIData(oldp+931,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[5]),32);
        bufp->chgIData(oldp+932,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[6]),32);
        bufp->chgIData(oldp+933,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[7]),32);
        bufp->chgCData(oldp+934,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__wrPtr),4);
        bufp->chgCData(oldp+935,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__rdPtr),4);
        bufp->chgIData(oldp+936,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+937,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[0]),32);
        bufp->chgIData(oldp+938,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[1]),32);
        bufp->chgIData(oldp+939,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[2]),32);
        bufp->chgIData(oldp+940,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[3]),32);
        bufp->chgIData(oldp+941,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[4]),32);
        bufp->chgIData(oldp+942,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[5]),32);
        bufp->chgIData(oldp+943,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[6]),32);
        bufp->chgIData(oldp+944,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[7]),32);
        bufp->chgCData(oldp+945,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__wrPtr),4);
        bufp->chgCData(oldp+946,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__rdPtr),4);
        bufp->chgIData(oldp+947,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+948,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0]),6);
        bufp->chgCData(oldp+949,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[1]),6);
        bufp->chgCData(oldp+950,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[2]),6);
        bufp->chgCData(oldp+951,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[3]),6);
        bufp->chgCData(oldp+952,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[4]),6);
        bufp->chgCData(oldp+953,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[5]),6);
        bufp->chgCData(oldp+954,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[6]),6);
        bufp->chgCData(oldp+955,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[7]),6);
        bufp->chgCData(oldp+956,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[8]),6);
        bufp->chgCData(oldp+957,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[9]),6);
        bufp->chgCData(oldp+958,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[10]),6);
        bufp->chgCData(oldp+959,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[11]),6);
        bufp->chgCData(oldp+960,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[12]),6);
        bufp->chgCData(oldp+961,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[13]),6);
        bufp->chgCData(oldp+962,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[14]),6);
        bufp->chgCData(oldp+963,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[15]),6);
        bufp->chgCData(oldp+964,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[16]),6);
        bufp->chgCData(oldp+965,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[17]),6);
        bufp->chgCData(oldp+966,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[18]),6);
        bufp->chgCData(oldp+967,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[19]),6);
        bufp->chgCData(oldp+968,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[20]),6);
        bufp->chgCData(oldp+969,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[21]),6);
        bufp->chgCData(oldp+970,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[22]),6);
        bufp->chgCData(oldp+971,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[23]),6);
        bufp->chgCData(oldp+972,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[24]),6);
        bufp->chgCData(oldp+973,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[25]),6);
        bufp->chgCData(oldp+974,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[26]),6);
        bufp->chgCData(oldp+975,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[27]),6);
        bufp->chgCData(oldp+976,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[28]),6);
        bufp->chgCData(oldp+977,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[29]),6);
        bufp->chgCData(oldp+978,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[30]),6);
        bufp->chgCData(oldp+979,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[31]),6);
        bufp->chgBit(oldp+980,(vlSymsp->TOP__top_tb__dut.__Vcellinp__cpu_midcore__commit_update));
        bufp->chgCData(oldp+981,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[0]),6);
        bufp->chgCData(oldp+982,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[1]),6);
        bufp->chgCData(oldp+983,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[2]),6);
        bufp->chgCData(oldp+984,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[3]),6);
        bufp->chgCData(oldp+985,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[4]),6);
        bufp->chgCData(oldp+986,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[5]),6);
        bufp->chgCData(oldp+987,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[6]),6);
        bufp->chgCData(oldp+988,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[7]),6);
        bufp->chgCData(oldp+989,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[8]),6);
        bufp->chgCData(oldp+990,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[9]),6);
        bufp->chgCData(oldp+991,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[10]),6);
        bufp->chgCData(oldp+992,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[11]),6);
        bufp->chgCData(oldp+993,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[12]),6);
        bufp->chgCData(oldp+994,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[13]),6);
        bufp->chgCData(oldp+995,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[14]),6);
        bufp->chgCData(oldp+996,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[15]),6);
        bufp->chgCData(oldp+997,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[16]),6);
        bufp->chgCData(oldp+998,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[17]),6);
        bufp->chgCData(oldp+999,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[18]),6);
        bufp->chgCData(oldp+1000,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[19]),6);
        bufp->chgCData(oldp+1001,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[20]),6);
        bufp->chgCData(oldp+1002,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[21]),6);
        bufp->chgCData(oldp+1003,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[22]),6);
        bufp->chgCData(oldp+1004,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[23]),6);
        bufp->chgCData(oldp+1005,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[24]),6);
        bufp->chgCData(oldp+1006,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[25]),6);
        bufp->chgCData(oldp+1007,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[26]),6);
        bufp->chgCData(oldp+1008,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[27]),6);
        bufp->chgCData(oldp+1009,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[28]),6);
        bufp->chgCData(oldp+1010,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[29]),6);
        bufp->chgCData(oldp+1011,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[30]),6);
        bufp->chgCData(oldp+1012,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[31]),6);
        bufp->chgBit(oldp+1013,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1014,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1015,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                       >> 0x10U))));
        bufp->chgCData(oldp+1016,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                            >> 0xbU))),5);
        bufp->chgCData(oldp+1017,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                            >> 5U))),6);
        bufp->chgCData(oldp+1018,((0x3fU & ((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                             << 1U) 
                                            | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xaU] 
                                               >> 0x1fU)))),6);
        bufp->chgIData(oldp+1019,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xaU] 
                                    << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[9U] 
                                              >> 0x1fU))),32);
        bufp->chgIData(oldp+1020,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[9U] 
                                    << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[8U] 
                                              >> 0x1fU))),32);
        bufp->chgIData(oldp+1021,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[8U] 
                                    << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                              >> 0x1fU))),32);
        bufp->chgBit(oldp+1022,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1023,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                       >> 0x1dU))));
        bufp->chgCData(oldp+1024,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                            >> 0x18U))),5);
        bufp->chgCData(oldp+1025,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                            >> 0x13U))),5);
        bufp->chgIData(oldp+1026,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                    << 0xdU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[6U] 
                                                >> 0x13U))),32);
        bufp->chgIData(oldp+1027,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[6U] 
                                    << 0xdU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[5U] 
                                                >> 0x13U))),32);
        bufp->chgCData(oldp+1028,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[5U] 
                                           >> 0xfU))),4);
        bufp->chgIData(oldp+1029,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[5U] 
                                    << 0x11U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[4U] 
                                                 >> 0xfU))),32);
        bufp->chgIData(oldp+1030,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[4U] 
                                    << 0x11U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[3U] 
                                                 >> 0xfU))),32);
        bufp->chgCData(oldp+1031,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[3U] 
                                           >> 0xbU))),4);
        bufp->chgCData(oldp+1032,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[3U] 
                                           >> 7U))),4);
        bufp->chgIData(oldp+1033,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[3U] 
                                    << 0x19U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[2U] 
                                                 >> 7U))),32);
        bufp->chgIData(oldp+1034,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[2U] 
                                    << 0x19U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                                 >> 7U))),32);
        bufp->chgBit(oldp+1035,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                       >> 6U))));
        bufp->chgBit(oldp+1036,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                       >> 5U))));
        bufp->chgBit(oldp+1037,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                       >> 4U))));
        bufp->chgBit(oldp+1038,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                       >> 3U))));
        bufp->chgIData(oldp+1039,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                    << 0x1dU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0U] 
                                                 >> 3U))),32);
        bufp->chgBit(oldp+1040,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0U] 
                                       >> 2U))));
        bufp->chgCData(oldp+1041,((3U & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0U])),2);
        bufp->chgBit(oldp+1042,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1043,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1044,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                       >> 0x10U))));
        bufp->chgCData(oldp+1045,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                            >> 0xbU))),5);
        bufp->chgCData(oldp+1046,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                            >> 5U))),6);
        bufp->chgCData(oldp+1047,((0x3fU & ((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                             << 1U) 
                                            | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xaU] 
                                               >> 0x1fU)))),6);
        bufp->chgIData(oldp+1048,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xaU] 
                                    << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[9U] 
                                              >> 0x1fU))),32);
        bufp->chgIData(oldp+1049,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[9U] 
                                    << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[8U] 
                                              >> 0x1fU))),32);
        bufp->chgIData(oldp+1050,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[8U] 
                                    << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                              >> 0x1fU))),32);
        bufp->chgBit(oldp+1051,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1052,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                       >> 0x1dU))));
        bufp->chgCData(oldp+1053,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                            >> 0x18U))),5);
        bufp->chgCData(oldp+1054,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                            >> 0x13U))),5);
        bufp->chgIData(oldp+1055,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                    << 0xdU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[6U] 
                                                >> 0x13U))),32);
        bufp->chgIData(oldp+1056,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[6U] 
                                    << 0xdU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[5U] 
                                                >> 0x13U))),32);
        bufp->chgCData(oldp+1057,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[5U] 
                                           >> 0xfU))),4);
        bufp->chgIData(oldp+1058,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[5U] 
                                    << 0x11U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[4U] 
                                                 >> 0xfU))),32);
        bufp->chgIData(oldp+1059,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[4U] 
                                    << 0x11U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[3U] 
                                                 >> 0xfU))),32);
        bufp->chgCData(oldp+1060,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[3U] 
                                           >> 0xbU))),4);
        bufp->chgCData(oldp+1061,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[3U] 
                                           >> 7U))),4);
        bufp->chgIData(oldp+1062,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[3U] 
                                    << 0x19U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[2U] 
                                                 >> 7U))),32);
        bufp->chgIData(oldp+1063,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[2U] 
                                    << 0x19U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                                 >> 7U))),32);
        bufp->chgBit(oldp+1064,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                       >> 6U))));
        bufp->chgBit(oldp+1065,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                       >> 5U))));
        bufp->chgBit(oldp+1066,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                       >> 4U))));
        bufp->chgBit(oldp+1067,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                       >> 3U))));
        bufp->chgIData(oldp+1068,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                    << 0x1dU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0U] 
                                                 >> 3U))),32);
        bufp->chgBit(oldp+1069,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0U] 
                                       >> 2U))));
        bufp->chgCData(oldp+1070,((3U & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0U])),2);
        bufp->chgBit(oldp+1071,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1072,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1073,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                       >> 0x10U))));
        bufp->chgCData(oldp+1074,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                            >> 0xbU))),5);
        bufp->chgCData(oldp+1075,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                            >> 5U))),6);
        bufp->chgCData(oldp+1076,((0x3fU & ((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                             << 1U) 
                                            | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xaU] 
                                               >> 0x1fU)))),6);
        bufp->chgIData(oldp+1077,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xaU] 
                                    << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[9U] 
                                              >> 0x1fU))),32);
        bufp->chgIData(oldp+1078,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[9U] 
                                    << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[8U] 
                                              >> 0x1fU))),32);
        bufp->chgIData(oldp+1079,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[8U] 
                                    << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                              >> 0x1fU))),32);
        bufp->chgBit(oldp+1080,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1081,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                       >> 0x1dU))));
        bufp->chgCData(oldp+1082,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                            >> 0x18U))),5);
        bufp->chgCData(oldp+1083,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                            >> 0x13U))),5);
        bufp->chgIData(oldp+1084,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                    << 0xdU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[6U] 
                                                >> 0x13U))),32);
        bufp->chgIData(oldp+1085,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[6U] 
                                    << 0xdU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[5U] 
                                                >> 0x13U))),32);
        bufp->chgCData(oldp+1086,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[5U] 
                                           >> 0xfU))),4);
        bufp->chgIData(oldp+1087,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[5U] 
                                    << 0x11U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[4U] 
                                                 >> 0xfU))),32);
        bufp->chgIData(oldp+1088,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[4U] 
                                    << 0x11U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[3U] 
                                                 >> 0xfU))),32);
        bufp->chgCData(oldp+1089,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[3U] 
                                           >> 0xbU))),4);
        bufp->chgCData(oldp+1090,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[3U] 
                                           >> 7U))),4);
        bufp->chgIData(oldp+1091,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[3U] 
                                    << 0x19U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[2U] 
                                                 >> 7U))),32);
        bufp->chgIData(oldp+1092,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[2U] 
                                    << 0x19U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                                 >> 7U))),32);
        bufp->chgBit(oldp+1093,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                       >> 6U))));
        bufp->chgBit(oldp+1094,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                       >> 5U))));
        bufp->chgBit(oldp+1095,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                       >> 4U))));
        bufp->chgBit(oldp+1096,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                       >> 3U))));
        bufp->chgIData(oldp+1097,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                    << 0x1dU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0U] 
                                                 >> 3U))),32);
        bufp->chgBit(oldp+1098,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0U] 
                                       >> 2U))));
        bufp->chgCData(oldp+1099,((3U & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0U])),2);
        bufp->chgBit(oldp+1100,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1101,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1102,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                       >> 0x10U))));
        bufp->chgCData(oldp+1103,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                            >> 0xbU))),5);
        bufp->chgCData(oldp+1104,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                            >> 5U))),6);
        bufp->chgCData(oldp+1105,((0x3fU & ((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                             << 1U) 
                                            | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xaU] 
                                               >> 0x1fU)))),6);
        bufp->chgIData(oldp+1106,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xaU] 
                                    << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[9U] 
                                              >> 0x1fU))),32);
        bufp->chgIData(oldp+1107,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[9U] 
                                    << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[8U] 
                                              >> 0x1fU))),32);
        bufp->chgIData(oldp+1108,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[8U] 
                                    << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                              >> 0x1fU))),32);
        bufp->chgBit(oldp+1109,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1110,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                       >> 0x1dU))));
        bufp->chgCData(oldp+1111,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                            >> 0x18U))),5);
        bufp->chgCData(oldp+1112,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                            >> 0x13U))),5);
        bufp->chgIData(oldp+1113,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                    << 0xdU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[6U] 
                                                >> 0x13U))),32);
        bufp->chgIData(oldp+1114,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[6U] 
                                    << 0xdU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[5U] 
                                                >> 0x13U))),32);
        bufp->chgIData(oldp+1115,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[5U] 
                                    << 0x11U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[4U] 
                                                 >> 0xfU))),32);
        bufp->chgIData(oldp+1116,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[4U] 
                                    << 0x11U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[3U] 
                                                 >> 0xfU))),32);
        bufp->chgCData(oldp+1117,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[3U] 
                                           >> 0xbU))),4);
        bufp->chgCData(oldp+1118,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[3U] 
                                           >> 7U))),4);
        bufp->chgIData(oldp+1119,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[3U] 
                                    << 0x19U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[2U] 
                                                 >> 7U))),32);
        bufp->chgIData(oldp+1120,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[2U] 
                                    << 0x19U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                                 >> 7U))),32);
        bufp->chgBit(oldp+1121,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                       >> 6U))));
        bufp->chgBit(oldp+1122,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                       >> 5U))));
        bufp->chgBit(oldp+1123,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                       >> 4U))));
        bufp->chgBit(oldp+1124,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                       >> 3U))));
        bufp->chgIData(oldp+1125,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                    << 0x1dU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0U] 
                                                 >> 3U))),32);
        bufp->chgBit(oldp+1126,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0U] 
                                       >> 2U))));
        bufp->chgCData(oldp+1127,((3U & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0U])),2);
        bufp->chgIData(oldp+1128,((IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                           >> 0x1aU))),32);
        bufp->chgCData(oldp+1129,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                                 >> 0x17U)))),3);
        bufp->chgCData(oldp+1130,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                                   >> 0x13U)))),4);
        bufp->chgCData(oldp+1131,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                                 >> 0x10U)))),3);
        bufp->chgBit(oldp+1132,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1133,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                               >> 0xeU)))));
        bufp->chgCData(oldp+1134,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                                    >> 8U)))),6);
        bufp->chgCData(oldp+1135,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                                    >> 2U)))),6);
        bufp->chgBit(oldp+1136,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                               >> 1U)))));
        bufp->chgBit(oldp+1137,((1U & (IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o))));
        bufp->chgIData(oldp+1138,((IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                           >> 0x1aU))),32);
        bufp->chgCData(oldp+1139,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                 >> 0x17U)))),3);
        bufp->chgCData(oldp+1140,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                   >> 0x13U)))),4);
        bufp->chgCData(oldp+1141,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                 >> 0x10U)))),3);
        bufp->chgBit(oldp+1142,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1143,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                               >> 0xeU)))));
        bufp->chgCData(oldp+1144,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                    >> 8U)))),6);
        bufp->chgCData(oldp+1145,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                    >> 2U)))),6);
        bufp->chgBit(oldp+1146,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                               >> 1U)))));
        bufp->chgBit(oldp+1147,((1U & (IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg))));
        bufp->chgIData(oldp+1148,((IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                           >> 0x1aU))),32);
        bufp->chgCData(oldp+1149,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                                 >> 0x17U)))),3);
        bufp->chgCData(oldp+1150,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                                   >> 0x13U)))),4);
        bufp->chgCData(oldp+1151,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                                 >> 0x10U)))),3);
        bufp->chgBit(oldp+1152,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1153,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                               >> 0xeU)))));
        bufp->chgCData(oldp+1154,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                                    >> 8U)))),6);
        bufp->chgCData(oldp+1155,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                                    >> 2U)))),6);
        bufp->chgBit(oldp+1156,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                               >> 1U)))));
        bufp->chgBit(oldp+1157,((1U & (IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg))));
        bufp->chgCData(oldp+1158,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_lookup_rs1),5);
        bufp->chgCData(oldp+1159,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+1160,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                            >> 7U))),5);
        bufp->chgCData(oldp+1161,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[0]),6);
        bufp->chgCData(oldp+1162,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[1]),6);
        bufp->chgCData(oldp+1163,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[2]),6);
        bufp->chgCData(oldp+1164,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[3]),6);
        bufp->chgCData(oldp+1165,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[4]),6);
        bufp->chgCData(oldp+1166,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[5]),6);
        bufp->chgCData(oldp+1167,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[6]),6);
        bufp->chgCData(oldp+1168,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[7]),6);
        bufp->chgCData(oldp+1169,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[8]),6);
        bufp->chgCData(oldp+1170,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[9]),6);
        bufp->chgCData(oldp+1171,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[10]),6);
        bufp->chgCData(oldp+1172,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[11]),6);
        bufp->chgCData(oldp+1173,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[12]),6);
        bufp->chgCData(oldp+1174,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[13]),6);
        bufp->chgCData(oldp+1175,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[14]),6);
        bufp->chgCData(oldp+1176,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[15]),6);
        bufp->chgCData(oldp+1177,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[16]),6);
        bufp->chgCData(oldp+1178,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[17]),6);
        bufp->chgCData(oldp+1179,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[18]),6);
        bufp->chgCData(oldp+1180,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[19]),6);
        bufp->chgCData(oldp+1181,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[20]),6);
        bufp->chgCData(oldp+1182,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[21]),6);
        bufp->chgCData(oldp+1183,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[22]),6);
        bufp->chgCData(oldp+1184,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[23]),6);
        bufp->chgCData(oldp+1185,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[24]),6);
        bufp->chgCData(oldp+1186,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[25]),6);
        bufp->chgCData(oldp+1187,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[26]),6);
        bufp->chgCData(oldp+1188,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[27]),6);
        bufp->chgCData(oldp+1189,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[28]),6);
        bufp->chgCData(oldp+1190,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[29]),6);
        bufp->chgCData(oldp+1191,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[30]),6);
        bufp->chgCData(oldp+1192,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[31]),6);
        bufp->chgCData(oldp+1193,(((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                  >> 0xfU)))
                                    ? (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                        >> 8U)))
                                    : 0U)),6);
        bufp->chgCData(oldp+1194,(((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                  >> 0xeU)))
                                    ? (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                        >> 2U)))
                                    : 0U)),6);
        bufp->chgBit(oldp+1195,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__busy_table__DOT__bt 
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
        bufp->chgBit(oldp+1196,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__busy_table__DOT__bt 
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
        bufp->chgCData(oldp+1197,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_pr),6);
        bufp->chgBit(oldp+1198,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_pr_valid));
        bufp->chgBit(oldp+1199,((IData)((0x50000U == 
                                         (0x50000U 
                                          & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU])))));
        bufp->chgCData(oldp+1200,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__rename_update_ar),5);
        bufp->chgBit(oldp+1201,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__is_br_or_jump));
        bufp->chgQData(oldp+1202,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__busy_table__DOT__bt),64);
        bufp->chgCData(oldp+1204,((vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+1205,((0x7fU & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)),7);
        bufp->chgIData(oldp+1206,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__i_imm),32);
        bufp->chgIData(oldp+1207,((((- (IData)((vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                >> 0x1fU))) 
                                    << 0xbU) | ((0x7e0U 
                                                 & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                      >> 7U))))),32);
        bufp->chgIData(oldp+1208,((((- (IData)((vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
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
        bufp->chgIData(oldp+1209,((0xfffff000U & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)),32);
        bufp->chgIData(oldp+1210,((((- (IData)((vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst) 
                                                 | ((0x800U 
                                                     & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                          >> 0x14U)))))),32);
        bufp->chgCData(oldp+1211,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                         >> 0xcU))),3);
        bufp->chgBit(oldp+1212,((((IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.decode__DOT____VdfgTmp_h90d7ced5__0) 
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
        bufp->chgBit(oldp+1213,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__rs1_valid));
        bufp->chgBit(oldp+1214,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__rs2_valid));
        bufp->chgBit(oldp+1215,((0x63U == (0x7fU & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst))));
        bufp->chgIData(oldp+1216,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__imm_o),32);
        bufp->chgCData(oldp+1217,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__dispatch_to),3);
        bufp->chgCData(oldp+1218,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__alu_op),4);
        bufp->chgBit(oldp+1219,(((0x6fU == (0x7fU & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                 | (0x67U == (0x7fU 
                                              & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)))));
        bufp->chgQData(oldp+1220,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list),64);
        bufp->chgCData(oldp+1222,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[0]),6);
        bufp->chgCData(oldp+1223,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[1]),6);
        bufp->chgCData(oldp+1224,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[2]),6);
        bufp->chgCData(oldp+1225,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[3]),6);
        bufp->chgCData(oldp+1226,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[4]),6);
        bufp->chgCData(oldp+1227,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[5]),6);
        bufp->chgCData(oldp+1228,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[6]),6);
        bufp->chgCData(oldp+1229,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[7]),6);
        bufp->chgCData(oldp+1230,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[8]),6);
        bufp->chgCData(oldp+1231,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[9]),6);
        bufp->chgCData(oldp+1232,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[10]),6);
        bufp->chgCData(oldp+1233,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[11]),6);
        bufp->chgCData(oldp+1234,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[12]),6);
        bufp->chgCData(oldp+1235,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[13]),6);
        bufp->chgCData(oldp+1236,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[14]),6);
        bufp->chgCData(oldp+1237,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[15]),6);
        bufp->chgCData(oldp+1238,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[16]),6);
        bufp->chgCData(oldp+1239,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[17]),6);
        bufp->chgCData(oldp+1240,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[18]),6);
        bufp->chgCData(oldp+1241,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[19]),6);
        bufp->chgCData(oldp+1242,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[20]),6);
        bufp->chgCData(oldp+1243,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[21]),6);
        bufp->chgCData(oldp+1244,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[22]),6);
        bufp->chgCData(oldp+1245,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[23]),6);
        bufp->chgCData(oldp+1246,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[24]),6);
        bufp->chgCData(oldp+1247,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[25]),6);
        bufp->chgCData(oldp+1248,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[26]),6);
        bufp->chgCData(oldp+1249,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[27]),6);
        bufp->chgCData(oldp+1250,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[28]),6);
        bufp->chgCData(oldp+1251,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[29]),6);
        bufp->chgCData(oldp+1252,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[30]),6);
        bufp->chgCData(oldp+1253,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[31]),6);
        bufp->chgIData(oldp+1254,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1255,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[0]));
        bufp->chgBit(oldp+1256,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[1]));
        bufp->chgBit(oldp+1257,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[2]));
        bufp->chgBit(oldp+1258,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[3]));
        bufp->chgBit(oldp+1259,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[4]));
        bufp->chgBit(oldp+1260,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[5]));
        bufp->chgBit(oldp+1261,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[6]));
        bufp->chgBit(oldp+1262,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[7]));
        bufp->chgQData(oldp+1263,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[0]),64);
        bufp->chgQData(oldp+1265,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[1]),64);
        bufp->chgQData(oldp+1267,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[2]),64);
        bufp->chgQData(oldp+1269,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[3]),64);
        bufp->chgQData(oldp+1271,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[4]),64);
        bufp->chgQData(oldp+1273,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[5]),64);
        bufp->chgQData(oldp+1275,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[6]),64);
        bufp->chgQData(oldp+1277,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[7]),64);
        bufp->chgIData(oldp+1279,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[0]),32);
        bufp->chgIData(oldp+1280,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[1]),32);
        bufp->chgIData(oldp+1281,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[2]),32);
        bufp->chgIData(oldp+1282,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[3]),32);
        bufp->chgIData(oldp+1283,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[4]),32);
        bufp->chgIData(oldp+1284,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[5]),32);
        bufp->chgIData(oldp+1285,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[6]),32);
        bufp->chgIData(oldp+1286,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[7]),32);
        bufp->chgBit(oldp+1287,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[0]));
        bufp->chgBit(oldp+1288,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[1]));
        bufp->chgBit(oldp+1289,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[2]));
        bufp->chgBit(oldp+1290,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[3]));
        bufp->chgBit(oldp+1291,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[4]));
        bufp->chgBit(oldp+1292,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[5]));
        bufp->chgBit(oldp+1293,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[6]));
        bufp->chgBit(oldp+1294,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[7]));
        bufp->chgCData(oldp+1295,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[0]),5);
        bufp->chgCData(oldp+1296,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[1]),5);
        bufp->chgCData(oldp+1297,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[2]),5);
        bufp->chgCData(oldp+1298,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[3]),5);
        bufp->chgCData(oldp+1299,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[4]),5);
        bufp->chgCData(oldp+1300,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[5]),5);
        bufp->chgCData(oldp+1301,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[6]),5);
        bufp->chgCData(oldp+1302,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[7]),5);
        bufp->chgCData(oldp+1303,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[0]),5);
        bufp->chgCData(oldp+1304,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[1]),5);
        bufp->chgCData(oldp+1305,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[2]),5);
        bufp->chgCData(oldp+1306,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[3]),5);
        bufp->chgCData(oldp+1307,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[4]),5);
        bufp->chgCData(oldp+1308,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[5]),5);
        bufp->chgCData(oldp+1309,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[6]),5);
        bufp->chgCData(oldp+1310,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[7]),5);
        bufp->chgIData(oldp+1311,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[0]),32);
        bufp->chgIData(oldp+1312,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[1]),32);
        bufp->chgIData(oldp+1313,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[2]),32);
        bufp->chgIData(oldp+1314,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[3]),32);
        bufp->chgIData(oldp+1315,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[4]),32);
        bufp->chgIData(oldp+1316,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[5]),32);
        bufp->chgIData(oldp+1317,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[6]),32);
        bufp->chgIData(oldp+1318,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[7]),32);
        bufp->chgIData(oldp+1319,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[0]),32);
        bufp->chgIData(oldp+1320,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[1]),32);
        bufp->chgIData(oldp+1321,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[2]),32);
        bufp->chgIData(oldp+1322,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[3]),32);
        bufp->chgIData(oldp+1323,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[4]),32);
        bufp->chgIData(oldp+1324,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[5]),32);
        bufp->chgIData(oldp+1325,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[6]),32);
        bufp->chgIData(oldp+1326,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[7]),32);
        bufp->chgCData(oldp+1327,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[0]),5);
        bufp->chgCData(oldp+1328,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[1]),5);
        bufp->chgCData(oldp+1329,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[2]),5);
        bufp->chgCData(oldp+1330,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[3]),5);
        bufp->chgCData(oldp+1331,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[4]),5);
        bufp->chgCData(oldp+1332,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[5]),5);
        bufp->chgCData(oldp+1333,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[6]),5);
        bufp->chgCData(oldp+1334,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[7]),5);
        bufp->chgIData(oldp+1335,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[0]),32);
        bufp->chgIData(oldp+1336,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[1]),32);
        bufp->chgIData(oldp+1337,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[2]),32);
        bufp->chgIData(oldp+1338,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[3]),32);
        bufp->chgIData(oldp+1339,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[4]),32);
        bufp->chgIData(oldp+1340,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[5]),32);
        bufp->chgIData(oldp+1341,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[6]),32);
        bufp->chgIData(oldp+1342,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[7]),32);
        bufp->chgIData(oldp+1343,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[0]),32);
        bufp->chgIData(oldp+1344,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[1]),32);
        bufp->chgIData(oldp+1345,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[2]),32);
        bufp->chgIData(oldp+1346,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[3]),32);
        bufp->chgIData(oldp+1347,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[4]),32);
        bufp->chgIData(oldp+1348,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[5]),32);
        bufp->chgIData(oldp+1349,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[6]),32);
        bufp->chgIData(oldp+1350,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[7]),32);
        bufp->chgIData(oldp+1351,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[0]),32);
        bufp->chgIData(oldp+1352,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[1]),32);
        bufp->chgIData(oldp+1353,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[2]),32);
        bufp->chgIData(oldp+1354,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[3]),32);
        bufp->chgIData(oldp+1355,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[4]),32);
        bufp->chgIData(oldp+1356,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[5]),32);
        bufp->chgIData(oldp+1357,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[6]),32);
        bufp->chgIData(oldp+1358,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[7]),32);
        bufp->chgIData(oldp+1359,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[0]),32);
        bufp->chgIData(oldp+1360,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[1]),32);
        bufp->chgIData(oldp+1361,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[2]),32);
        bufp->chgIData(oldp+1362,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[3]),32);
        bufp->chgIData(oldp+1363,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[4]),32);
        bufp->chgIData(oldp+1364,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[5]),32);
        bufp->chgIData(oldp+1365,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[6]),32);
        bufp->chgIData(oldp+1366,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[7]),32);
        bufp->chgCData(oldp+1367,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[0]),4);
        bufp->chgCData(oldp+1368,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[1]),4);
        bufp->chgCData(oldp+1369,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[2]),4);
        bufp->chgCData(oldp+1370,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[3]),4);
        bufp->chgCData(oldp+1371,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[4]),4);
        bufp->chgCData(oldp+1372,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[5]),4);
        bufp->chgCData(oldp+1373,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[6]),4);
        bufp->chgCData(oldp+1374,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[7]),4);
        bufp->chgCData(oldp+1375,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[0]),4);
        bufp->chgCData(oldp+1376,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[1]),4);
        bufp->chgCData(oldp+1377,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[2]),4);
        bufp->chgCData(oldp+1378,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[3]),4);
        bufp->chgCData(oldp+1379,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[4]),4);
        bufp->chgCData(oldp+1380,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[5]),4);
        bufp->chgCData(oldp+1381,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[6]),4);
        bufp->chgCData(oldp+1382,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[7]),4);
        bufp->chgIData(oldp+1383,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[0]),32);
        bufp->chgIData(oldp+1384,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[1]),32);
        bufp->chgIData(oldp+1385,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[2]),32);
        bufp->chgIData(oldp+1386,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[3]),32);
        bufp->chgIData(oldp+1387,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[4]),32);
        bufp->chgIData(oldp+1388,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[5]),32);
        bufp->chgIData(oldp+1389,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[6]),32);
        bufp->chgIData(oldp+1390,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[7]),32);
        bufp->chgIData(oldp+1391,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[0]),32);
        bufp->chgIData(oldp+1392,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[1]),32);
        bufp->chgIData(oldp+1393,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[2]),32);
        bufp->chgIData(oldp+1394,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[3]),32);
        bufp->chgIData(oldp+1395,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[4]),32);
        bufp->chgIData(oldp+1396,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[5]),32);
        bufp->chgIData(oldp+1397,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[6]),32);
        bufp->chgIData(oldp+1398,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[7]),32);
        bufp->chgBit(oldp+1399,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+1400,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1401,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+1402,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+1403,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+1404,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[0U])),32);
        bufp->chgBit(oldp+1405,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+1406,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+1407,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+1408,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1409,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+1410,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1411,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+1412,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[0U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1413,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+1414,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+1415,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+1416,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+1417,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+1418,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+1419,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+1420,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+1421,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+1422,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+1423,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+1424,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+1425,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+1426,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+1427,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+1428,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+1429,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+1430,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+1431,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+1432,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+1433,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[0U])),32);
        bufp->chgBit(oldp+1434,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+1435,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1436,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+1437,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+1438,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+1439,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+1440,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+1441,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+1442,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+1443,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+1444,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+1445,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+1446,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+1447,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+1448,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+1449,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+1450,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+1451,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+1452,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+1453,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+1454,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+1455,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+1456,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])),32);
        bufp->chgBit(oldp+1457,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+1458,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+1459,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+1460,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+1461,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+1462,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+1463,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+1464,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[0U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+1465,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+1466,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+1467,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+1468,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+1469,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[0U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+1470,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+1471,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+1472,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+1473,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]
                                    : 0U)),32);
        bufp->chgBit(oldp+1474,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+1475,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+1476,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+1477,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+1478,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+1479,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+1480,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+1481,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+1482,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+1483,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+1484,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+1485,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+1486,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+1487,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+1488,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+1489,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+1490,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+1491,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+1492,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+1493,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+1494,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+1495,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+1496,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1497,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+1498,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+1499,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+1500,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+1501,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+1502,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+1503,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+1504,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+1505,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+1506,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+1507,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+1508,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+1509,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+1510,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+1511,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+1512,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+1513,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+1514,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+1515,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+1516,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])
                                    : 0U)),32);
        bufp->chgBit(oldp+1517,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+1518,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+1519,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+1520,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+1521,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+1522,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                    : 0U)),32);
        bufp->chgBit(oldp+1523,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+1524,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+1525,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+1526,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+1527,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+1528,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+1529,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+1530,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1531,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+1532,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1533,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+1534,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+1535,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+1536,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1537,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+1538,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+1539,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+1540,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+1541,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+1542,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+1543,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+1544,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+1545,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1546,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+1547,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1548,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+1549,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+1550,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+1551,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1552,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+1553,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1554,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+1555,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+1556,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+1557,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1558,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+1559,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1560,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+1561,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1562,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+1563,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1564,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+1565,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1566,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+1567,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+1568,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+1569,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+1570,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1571,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+1572,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                       ^ VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+1573,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+1574,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+1575,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])),7);
        bufp->chgIData(oldp+1576,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])),32);
        bufp->chgIData(oldp+1577,(VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 0x14U))),32);
        bufp->chgIData(oldp+1578,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+1579,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   & VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1580,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])),32);
        bufp->chgIData(oldp+1581,(VL_EXTENDS_II(32,13, 
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
        bufp->chgBit(oldp+1582,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                 == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
        bufp->chgBit(oldp+1583,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
        bufp->chgBit(oldp+1584,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                 >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
        bufp->chgBit(oldp+1585,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+1586,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+1587,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                 != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
        bufp->chgIData(oldp+1588,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U], 0x10U)),32);
        bufp->chgCData(oldp+1589,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+1590,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])),2);
        bufp->chgIData(oldp+1591,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+1592,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 0xdU))),3);
        bufp->chgIData(oldp+1593,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+1594,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+1595,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+1596,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+1597,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1598,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+1599,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+1600,(VL_EXTENDS_II(32,9, 
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
        bufp->chgBit(oldp+1601,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])));
        bufp->chgBit(oldp+1602,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])));
        bufp->chgIData(oldp+1603,(VL_EXTENDS_II(32,12, 
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
        bufp->chgIData(oldp+1604,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+1605,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                             << 1U)) 
                                   | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                >> 7U)) 
                                      | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+1606,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+1607,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                             << 4U)) 
                                   | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                >> 7U)) 
                                      | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 2U))))),32);
        bufp->chgIData(oldp+1608,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+1609,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[0U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+1610,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+1611,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+1612,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                             >> 1U)) 
                                   | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                               >> 7U)))),32);
        bufp->chgIData(oldp+1613,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+1614,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                    ? 0xffffffffU : 
                                   (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])))),32);
        bufp->chgIData(oldp+1615,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
        bufp->chgIData(oldp+1616,(VL_EXTENDS_II(32,21, 
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
        bufp->chgCData(oldp+1617,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+1618,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+1619,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+1620,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])),32);
        bufp->chgIData(oldp+1621,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1622,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1623,((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])) 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1624,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   | VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1625,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]
                                    : (((0x80000000U 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]) 
                                        & (0xffffffffU 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                        ? 0U : VL_MODDIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])))),32);
        bufp->chgIData(oldp+1626,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]
                                    : VL_MODDIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
        bufp->chgIData(oldp+1627,(VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+1628,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+1629,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])),6);
        bufp->chgIData(oldp+1630,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
        bufp->chgCData(oldp+1631,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+1632,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 0x14U))),6);
        bufp->chgIData(oldp+1633,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1634,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+1635,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                             VL_EXTENDS_II(32,12, 
                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                            >> 0x14U)))),32);
        bufp->chgIData(oldp+1636,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   < VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1637,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+1638,(VL_SHIFTRS_III(32,32,5, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
        bufp->chgIData(oldp+1639,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+1640,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
        bufp->chgIData(oldp+1641,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1642,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                   ^ VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                    >> 0x14U)))),32);
        bufp->chgBit(oldp+1643,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+1644,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1645,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+1646,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+1647,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+1648,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[1U])),32);
        bufp->chgBit(oldp+1649,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+1650,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+1651,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+1652,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1653,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+1654,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1655,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+1656,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[1U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1657,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+1658,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+1659,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+1660,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+1661,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+1662,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+1663,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+1664,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+1665,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+1666,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+1667,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+1668,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+1669,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+1670,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+1671,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+1672,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+1673,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+1674,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+1675,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+1676,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+1677,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[1U])),32);
        bufp->chgBit(oldp+1678,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+1679,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1680,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+1681,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+1682,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+1683,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+1684,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+1685,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+1686,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+1687,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+1688,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+1689,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+1690,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+1691,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+1692,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+1693,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+1694,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+1695,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+1696,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+1697,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+1698,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+1699,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+1700,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])),32);
        bufp->chgBit(oldp+1701,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+1702,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+1703,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+1704,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+1705,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+1706,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+1707,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+1708,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[1U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+1709,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+1710,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+1711,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+1712,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+1713,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[1U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+1714,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+1715,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+1716,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+1717,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]
                                    : 0U)),32);
        bufp->chgBit(oldp+1718,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+1719,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+1720,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+1721,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+1722,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+1723,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+1724,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+1725,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+1726,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+1727,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+1728,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+1729,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+1730,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+1731,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+1732,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+1733,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+1734,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+1735,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+1736,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+1737,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+1738,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+1739,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+1740,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1741,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+1742,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+1743,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+1744,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+1745,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+1746,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+1747,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+1748,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+1749,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+1750,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+1751,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+1752,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+1753,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+1754,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+1755,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+1756,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+1757,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+1758,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+1759,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+1760,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])
                                    : 0U)),32);
        bufp->chgBit(oldp+1761,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+1762,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+1763,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+1764,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+1765,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+1766,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                    : 0U)),32);
        bufp->chgBit(oldp+1767,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+1768,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+1769,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+1770,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+1771,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+1772,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+1773,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+1774,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1775,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+1776,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1777,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+1778,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+1779,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+1780,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1781,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+1782,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+1783,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+1784,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+1785,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+1786,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+1787,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+1788,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+1789,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1790,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+1791,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1792,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+1793,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+1794,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+1795,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1796,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+1797,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1798,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+1799,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+1800,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+1801,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1802,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+1803,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1804,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+1805,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1806,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+1807,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1808,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+1809,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1810,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+1811,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+1812,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+1813,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+1814,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1815,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+1816,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                       ^ VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+1817,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+1818,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+1819,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])),7);
        bufp->chgIData(oldp+1820,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])),32);
        bufp->chgIData(oldp+1821,(VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 0x14U))),32);
        bufp->chgIData(oldp+1822,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+1823,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   & VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1824,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])),32);
        bufp->chgIData(oldp+1825,(VL_EXTENDS_II(32,13, 
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
        bufp->chgBit(oldp+1826,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                 == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
        bufp->chgBit(oldp+1827,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
        bufp->chgBit(oldp+1828,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                 >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
        bufp->chgBit(oldp+1829,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+1830,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+1831,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                 != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
        bufp->chgIData(oldp+1832,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U], 0x10U)),32);
        bufp->chgCData(oldp+1833,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+1834,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])),2);
        bufp->chgIData(oldp+1835,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+1836,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 0xdU))),3);
        bufp->chgIData(oldp+1837,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+1838,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+1839,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+1840,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+1841,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1842,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+1843,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+1844,(VL_EXTENDS_II(32,9, 
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
        bufp->chgBit(oldp+1845,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])));
        bufp->chgBit(oldp+1846,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])));
        bufp->chgIData(oldp+1847,(VL_EXTENDS_II(32,12, 
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
        bufp->chgIData(oldp+1848,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+1849,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                             << 1U)) 
                                   | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                >> 7U)) 
                                      | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+1850,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+1851,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                             << 4U)) 
                                   | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                >> 7U)) 
                                      | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 2U))))),32);
        bufp->chgIData(oldp+1852,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+1853,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[1U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+1854,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+1855,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+1856,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                             >> 1U)) 
                                   | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                               >> 7U)))),32);
        bufp->chgIData(oldp+1857,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+1858,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                    ? 0xffffffffU : 
                                   (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])))),32);
        bufp->chgIData(oldp+1859,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
        bufp->chgIData(oldp+1860,(VL_EXTENDS_II(32,21, 
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
        bufp->chgCData(oldp+1861,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+1862,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+1863,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+1864,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])),32);
        bufp->chgIData(oldp+1865,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1866,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1867,((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])) 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1868,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   | VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1869,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]
                                    : (((0x80000000U 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]) 
                                        & (0xffffffffU 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                        ? 0U : VL_MODDIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])))),32);
        bufp->chgIData(oldp+1870,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]
                                    : VL_MODDIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
        bufp->chgIData(oldp+1871,(VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+1872,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+1873,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])),6);
        bufp->chgIData(oldp+1874,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
        bufp->chgCData(oldp+1875,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+1876,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 0x14U))),6);
        bufp->chgIData(oldp+1877,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1878,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+1879,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                             VL_EXTENDS_II(32,12, 
                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                            >> 0x14U)))),32);
        bufp->chgIData(oldp+1880,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   < VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1881,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+1882,(VL_SHIFTRS_III(32,32,5, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
        bufp->chgIData(oldp+1883,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+1884,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
        bufp->chgIData(oldp+1885,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+1886,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                   ^ VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                    >> 0x14U)))),32);
        bufp->chgBit(oldp+1887,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+1888,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1889,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+1890,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+1891,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+1892,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[2U])),32);
        bufp->chgBit(oldp+1893,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+1894,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+1895,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+1896,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+1897,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+1898,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1899,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+1900,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[2U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1901,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+1902,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+1903,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+1904,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+1905,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+1906,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+1907,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+1908,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+1909,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+1910,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+1911,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+1912,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+1913,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+1914,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+1915,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+1916,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+1917,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+1918,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+1919,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+1920,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+1921,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[2U])),32);
        bufp->chgBit(oldp+1922,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+1923,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+1924,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+1925,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+1926,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+1927,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+1928,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+1929,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+1930,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+1931,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+1932,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+1933,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+1934,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+1935,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+1936,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+1937,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+1938,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+1939,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+1940,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+1941,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+1942,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+1943,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+1944,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])),32);
        bufp->chgBit(oldp+1945,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+1946,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+1947,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+1948,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+1949,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+1950,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+1951,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+1952,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[2U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+1953,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+1954,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+1955,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+1956,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+1957,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[2U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+1958,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+1959,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+1960,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+1961,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]
                                    : 0U)),32);
        bufp->chgBit(oldp+1962,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+1963,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+1964,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+1965,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+1966,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+1967,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+1968,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+1969,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+1970,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+1971,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+1972,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+1973,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+1974,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+1975,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+1976,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+1977,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+1978,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+1979,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+1980,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+1981,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+1982,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+1983,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+1984,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+1985,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+1986,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+1987,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+1988,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+1989,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+1990,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+1991,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+1992,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+1993,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+1994,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+1995,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+1996,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+1997,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+1998,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+1999,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+2000,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2001,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+2002,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2003,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+2004,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2005,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+2006,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2007,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+2008,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2009,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+2010,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2011,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+2012,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2013,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+2014,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2015,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+2016,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2017,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+2018,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2019,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+2020,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2021,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+2022,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2023,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+2024,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2025,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+2026,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+2027,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+2028,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+2029,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+2030,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2031,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2032,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+2033,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2034,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+2035,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2036,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+2037,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2038,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+2039,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2040,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+2041,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2042,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+2043,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2044,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+2045,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2046,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+2047,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2048,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+2049,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2050,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+2051,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2052,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+2053,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2054,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+2055,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2056,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2057,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+2058,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2059,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+2060,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                       ^ VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+2061,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+2062,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+2063,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])),7);
        bufp->chgIData(oldp+2064,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])),32);
        bufp->chgIData(oldp+2065,(VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 0x14U))),32);
        bufp->chgIData(oldp+2066,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+2067,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   & VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2068,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])),32);
        bufp->chgIData(oldp+2069,(VL_EXTENDS_II(32,13, 
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
        bufp->chgBit(oldp+2070,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                 == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
        bufp->chgBit(oldp+2071,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
        bufp->chgBit(oldp+2072,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                 >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
        bufp->chgBit(oldp+2073,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+2074,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+2075,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                 != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
        bufp->chgIData(oldp+2076,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U], 0x10U)),32);
        bufp->chgCData(oldp+2077,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+2078,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])),2);
        bufp->chgIData(oldp+2079,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+2080,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 0xdU))),3);
        bufp->chgIData(oldp+2081,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+2082,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+2083,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+2084,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+2085,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+2086,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+2087,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+2088,(VL_EXTENDS_II(32,9, 
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
        bufp->chgBit(oldp+2089,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])));
        bufp->chgBit(oldp+2090,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])));
        bufp->chgIData(oldp+2091,(VL_EXTENDS_II(32,12, 
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
        bufp->chgIData(oldp+2092,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+2093,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                             << 1U)) 
                                   | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                >> 7U)) 
                                      | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+2094,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+2095,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                             << 4U)) 
                                   | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                >> 7U)) 
                                      | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 2U))))),32);
        bufp->chgIData(oldp+2096,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+2097,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[2U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+2098,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+2099,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+2100,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                             >> 1U)) 
                                   | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                               >> 7U)))),32);
        bufp->chgIData(oldp+2101,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+2102,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                    ? 0xffffffffU : 
                                   (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])))),32);
        bufp->chgIData(oldp+2103,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
        bufp->chgIData(oldp+2104,(VL_EXTENDS_II(32,21, 
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
        bufp->chgCData(oldp+2105,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+2106,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+2107,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+2108,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])),32);
        bufp->chgIData(oldp+2109,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2110,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2111,((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])) 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2112,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   | VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2113,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]
                                    : (((0x80000000U 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]) 
                                        & (0xffffffffU 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                        ? 0U : VL_MODDIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])))),32);
        bufp->chgIData(oldp+2114,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]
                                    : VL_MODDIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
        bufp->chgIData(oldp+2115,(VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+2116,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+2117,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])),6);
        bufp->chgIData(oldp+2118,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
        bufp->chgCData(oldp+2119,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+2120,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 0x14U))),6);
        bufp->chgIData(oldp+2121,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2122,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+2123,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                             VL_EXTENDS_II(32,12, 
                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                            >> 0x14U)))),32);
        bufp->chgIData(oldp+2124,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   < VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2125,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+2126,(VL_SHIFTRS_III(32,32,5, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
        bufp->chgIData(oldp+2127,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+2128,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
        bufp->chgIData(oldp+2129,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2130,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                   ^ VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                    >> 0x14U)))),32);
        bufp->chgBit(oldp+2131,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+2132,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+2133,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+2134,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+2135,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+2136,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U])),32);
        bufp->chgBit(oldp+2137,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+2138,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+2139,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+2140,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2141,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+2142,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2143,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+2144,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2145,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+2146,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+2147,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+2148,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+2149,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+2150,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+2151,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+2152,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+2153,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+2154,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+2155,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+2156,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+2157,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+2158,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+2159,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+2160,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+2161,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+2162,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+2163,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+2164,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+2165,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U])),32);
        bufp->chgBit(oldp+2166,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+2167,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2168,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+2169,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+2170,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+2171,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+2172,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+2173,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+2174,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+2175,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+2176,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+2177,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+2178,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+2179,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+2180,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+2181,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+2182,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+2183,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+2184,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+2185,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+2186,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+2187,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+2188,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])),32);
        bufp->chgBit(oldp+2189,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+2190,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+2191,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2192,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+2193,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+2194,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+2195,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+2196,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[3U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+2197,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+2198,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+2199,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+2200,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+2201,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[3U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+2202,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+2203,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+2204,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+2205,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]
                                    : 0U)),32);
        bufp->chgBit(oldp+2206,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+2207,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+2208,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+2209,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2210,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+2211,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2212,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+2213,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2214,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+2215,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+2216,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+2217,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+2218,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+2219,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+2220,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+2221,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+2222,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+2223,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+2224,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+2225,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+2226,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2227,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+2228,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2229,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+2230,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+2231,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+2232,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+2233,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+2234,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+2235,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+2236,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+2237,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+2238,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2239,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+2240,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2241,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+2242,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2243,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+2244,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2245,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+2246,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2247,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+2248,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2249,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+2250,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2251,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+2252,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2253,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+2254,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2255,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+2256,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2257,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+2258,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2259,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+2260,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2261,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+2262,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2263,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+2264,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2265,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+2266,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2267,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+2268,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2269,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+2270,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+2271,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+2272,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+2273,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+2274,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2275,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2276,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+2277,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2278,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+2279,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2280,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+2281,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2282,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+2283,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2284,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+2285,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2286,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+2287,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2288,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+2289,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2290,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+2291,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2292,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+2293,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2294,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+2295,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2296,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+2297,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2298,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+2299,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2300,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2301,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+2302,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2303,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+2304,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                       ^ VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+2305,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+2306,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+2307,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])),7);
        bufp->chgIData(oldp+2308,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])),32);
        bufp->chgIData(oldp+2309,(VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 0x14U))),32);
        bufp->chgIData(oldp+2310,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+2311,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   & VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2312,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])),32);
        bufp->chgIData(oldp+2313,(VL_EXTENDS_II(32,13, 
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
        bufp->chgBit(oldp+2314,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                 == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
        bufp->chgBit(oldp+2315,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
        bufp->chgBit(oldp+2316,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                 >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
        bufp->chgBit(oldp+2317,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+2318,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+2319,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                 != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
        bufp->chgIData(oldp+2320,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)),32);
        bufp->chgCData(oldp+2321,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+2322,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])),2);
        bufp->chgIData(oldp+2323,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+2324,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 0xdU))),3);
        bufp->chgIData(oldp+2325,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+2326,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+2327,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+2328,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+2329,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+2330,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+2331,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+2332,(VL_EXTENDS_II(32,9, 
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
        bufp->chgBit(oldp+2333,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])));
        bufp->chgBit(oldp+2334,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])));
        bufp->chgIData(oldp+2335,(VL_EXTENDS_II(32,12, 
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
        bufp->chgIData(oldp+2336,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+2337,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                             << 1U)) 
                                   | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                >> 7U)) 
                                      | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+2338,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+2339,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                             << 4U)) 
                                   | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                >> 7U)) 
                                      | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 2U))))),32);
        bufp->chgIData(oldp+2340,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+2341,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[3U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+2342,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+2343,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+2344,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                             >> 1U)) 
                                   | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                               >> 7U)))),32);
        bufp->chgIData(oldp+2345,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+2346,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                    ? 0xffffffffU : 
                                   (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))),32);
        bufp->chgIData(oldp+2347,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
        bufp->chgIData(oldp+2348,(VL_EXTENDS_II(32,21, 
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
        bufp->chgCData(oldp+2349,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+2350,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+2351,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+2352,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])),32);
        bufp->chgIData(oldp+2353,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2354,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2355,((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])) 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2356,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   | VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2357,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]
                                    : (((0x80000000U 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]) 
                                        & (0xffffffffU 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                        ? 0U : VL_MODDIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))),32);
        bufp->chgIData(oldp+2358,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]
                                    : VL_MODDIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
        bufp->chgIData(oldp+2359,(VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+2360,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+2361,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])),6);
        bufp->chgIData(oldp+2362,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
        bufp->chgCData(oldp+2363,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+2364,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 0x14U))),6);
        bufp->chgIData(oldp+2365,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2366,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+2367,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                             VL_EXTENDS_II(32,12, 
                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                            >> 0x14U)))),32);
        bufp->chgIData(oldp+2368,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   < VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2369,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+2370,(VL_SHIFTRS_III(32,32,5, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
        bufp->chgIData(oldp+2371,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+2372,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
        bufp->chgIData(oldp+2373,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2374,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                   ^ VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)))),32);
        bufp->chgBit(oldp+2375,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+2376,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+2377,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+2378,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+2379,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+2380,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U])),32);
        bufp->chgBit(oldp+2381,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+2382,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+2383,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+2384,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2385,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+2386,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2387,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+2388,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2389,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+2390,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+2391,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+2392,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+2393,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+2394,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+2395,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+2396,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+2397,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+2398,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+2399,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+2400,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+2401,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+2402,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+2403,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+2404,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+2405,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+2406,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+2407,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+2408,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+2409,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U])),32);
        bufp->chgBit(oldp+2410,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+2411,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2412,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+2413,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+2414,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+2415,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+2416,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+2417,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+2418,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+2419,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+2420,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+2421,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+2422,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+2423,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+2424,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+2425,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+2426,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+2427,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+2428,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+2429,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+2430,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+2431,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+2432,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])),32);
        bufp->chgBit(oldp+2433,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+2434,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+2435,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2436,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+2437,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+2438,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+2439,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+2440,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[4U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+2441,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+2442,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+2443,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+2444,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+2445,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[4U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+2446,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+2447,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+2448,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+2449,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]
                                    : 0U)),32);
        bufp->chgBit(oldp+2450,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+2451,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+2452,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+2453,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2454,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+2455,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2456,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+2457,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2458,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+2459,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+2460,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+2461,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+2462,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+2463,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+2464,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+2465,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+2466,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+2467,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+2468,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+2469,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+2470,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2471,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+2472,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2473,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+2474,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+2475,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+2476,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+2477,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+2478,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+2479,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+2480,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+2481,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+2482,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2483,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+2484,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2485,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+2486,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2487,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+2488,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2489,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+2490,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2491,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+2492,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2493,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+2494,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2495,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+2496,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2497,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+2498,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2499,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+2500,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2501,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+2502,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2503,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+2504,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2505,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+2506,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2507,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+2508,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2509,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+2510,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2511,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+2512,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2513,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+2514,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+2515,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+2516,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+2517,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+2518,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2519,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2520,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+2521,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2522,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+2523,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2524,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+2525,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2526,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+2527,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2528,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+2529,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2530,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+2531,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2532,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+2533,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2534,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+2535,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2536,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+2537,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2538,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+2539,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2540,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+2541,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2542,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+2543,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2544,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2545,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+2546,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2547,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+2548,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                       ^ VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+2549,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+2550,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+2551,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])),7);
        bufp->chgIData(oldp+2552,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])),32);
        bufp->chgIData(oldp+2553,(VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 0x14U))),32);
        bufp->chgIData(oldp+2554,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+2555,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   & VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2556,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])),32);
        bufp->chgIData(oldp+2557,(VL_EXTENDS_II(32,13, 
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
        bufp->chgBit(oldp+2558,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                 == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
        bufp->chgBit(oldp+2559,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
        bufp->chgBit(oldp+2560,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                 >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
        bufp->chgBit(oldp+2561,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+2562,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+2563,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                 != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
        bufp->chgIData(oldp+2564,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)),32);
        bufp->chgCData(oldp+2565,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+2566,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])),2);
        bufp->chgIData(oldp+2567,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+2568,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 0xdU))),3);
        bufp->chgIData(oldp+2569,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+2570,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+2571,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+2572,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+2573,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+2574,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+2575,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+2576,(VL_EXTENDS_II(32,9, 
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
        bufp->chgBit(oldp+2577,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])));
        bufp->chgBit(oldp+2578,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])));
        bufp->chgIData(oldp+2579,(VL_EXTENDS_II(32,12, 
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
        bufp->chgIData(oldp+2580,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+2581,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                             << 1U)) 
                                   | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                >> 7U)) 
                                      | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+2582,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+2583,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                             << 4U)) 
                                   | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                >> 7U)) 
                                      | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 2U))))),32);
        bufp->chgIData(oldp+2584,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+2585,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[4U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+2586,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+2587,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+2588,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                             >> 1U)) 
                                   | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                               >> 7U)))),32);
        bufp->chgIData(oldp+2589,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+2590,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                    ? 0xffffffffU : 
                                   (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))),32);
        bufp->chgIData(oldp+2591,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
        bufp->chgIData(oldp+2592,(VL_EXTENDS_II(32,21, 
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
        bufp->chgCData(oldp+2593,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+2594,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+2595,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+2596,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])),32);
        bufp->chgIData(oldp+2597,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2598,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2599,((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])) 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2600,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   | VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2601,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]
                                    : (((0x80000000U 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]) 
                                        & (0xffffffffU 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                        ? 0U : VL_MODDIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))),32);
        bufp->chgIData(oldp+2602,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]
                                    : VL_MODDIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
        bufp->chgIData(oldp+2603,(VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+2604,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+2605,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])),6);
        bufp->chgIData(oldp+2606,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
        bufp->chgCData(oldp+2607,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+2608,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 0x14U))),6);
        bufp->chgIData(oldp+2609,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2610,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+2611,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                             VL_EXTENDS_II(32,12, 
                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                            >> 0x14U)))),32);
        bufp->chgIData(oldp+2612,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   < VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2613,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+2614,(VL_SHIFTRS_III(32,32,5, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
        bufp->chgIData(oldp+2615,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+2616,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
        bufp->chgIData(oldp+2617,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2618,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                   ^ VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)))),32);
        bufp->chgBit(oldp+2619,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+2620,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+2621,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+2622,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+2623,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+2624,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U])),32);
        bufp->chgBit(oldp+2625,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+2626,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+2627,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+2628,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2629,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+2630,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2631,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+2632,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2633,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+2634,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+2635,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+2636,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+2637,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+2638,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+2639,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+2640,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+2641,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+2642,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+2643,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+2644,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+2645,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+2646,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+2647,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+2648,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+2649,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+2650,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+2651,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+2652,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+2653,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U])),32);
        bufp->chgBit(oldp+2654,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+2655,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2656,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+2657,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+2658,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+2659,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+2660,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+2661,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+2662,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+2663,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+2664,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+2665,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+2666,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+2667,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+2668,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+2669,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+2670,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+2671,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+2672,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+2673,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+2674,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+2675,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+2676,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])),32);
        bufp->chgBit(oldp+2677,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+2678,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+2679,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2680,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+2681,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+2682,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+2683,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+2684,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[5U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+2685,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+2686,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+2687,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+2688,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+2689,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[5U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+2690,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+2691,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+2692,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+2693,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]
                                    : 0U)),32);
        bufp->chgBit(oldp+2694,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+2695,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+2696,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+2697,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2698,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+2699,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2700,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+2701,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2702,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+2703,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+2704,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+2705,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+2706,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+2707,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+2708,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+2709,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+2710,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+2711,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+2712,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+2713,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+2714,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2715,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+2716,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2717,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+2718,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+2719,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+2720,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+2721,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+2722,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+2723,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+2724,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+2725,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+2726,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2727,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+2728,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2729,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+2730,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2731,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+2732,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2733,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+2734,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2735,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+2736,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2737,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+2738,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2739,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+2740,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2741,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+2742,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2743,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+2744,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2745,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+2746,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2747,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+2748,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2749,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+2750,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2751,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+2752,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2753,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+2754,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2755,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+2756,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2757,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+2758,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+2759,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+2760,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+2761,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+2762,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2763,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2764,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+2765,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2766,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+2767,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2768,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+2769,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2770,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+2771,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2772,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+2773,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2774,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+2775,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+2776,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+2777,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2778,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+2779,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2780,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+2781,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2782,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+2783,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2784,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+2785,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2786,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+2787,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+2788,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+2789,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+2790,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2791,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+2792,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                       ^ VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+2793,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+2794,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+2795,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])),7);
        bufp->chgIData(oldp+2796,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])),32);
        bufp->chgIData(oldp+2797,(VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 0x14U))),32);
        bufp->chgIData(oldp+2798,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+2799,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   & VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2800,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])),32);
        bufp->chgIData(oldp+2801,(VL_EXTENDS_II(32,13, 
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
        bufp->chgBit(oldp+2802,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                 == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
        bufp->chgBit(oldp+2803,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
        bufp->chgBit(oldp+2804,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                 >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
        bufp->chgBit(oldp+2805,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+2806,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+2807,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                 != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
        bufp->chgIData(oldp+2808,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)),32);
        bufp->chgCData(oldp+2809,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+2810,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])),2);
        bufp->chgIData(oldp+2811,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+2812,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 0xdU))),3);
        bufp->chgIData(oldp+2813,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+2814,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+2815,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+2816,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+2817,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+2818,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+2819,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+2820,(VL_EXTENDS_II(32,9, 
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
        bufp->chgBit(oldp+2821,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])));
        bufp->chgBit(oldp+2822,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])));
        bufp->chgIData(oldp+2823,(VL_EXTENDS_II(32,12, 
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
        bufp->chgIData(oldp+2824,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+2825,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                             << 1U)) 
                                   | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                >> 7U)) 
                                      | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+2826,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+2827,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                             << 4U)) 
                                   | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                >> 7U)) 
                                      | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 2U))))),32);
        bufp->chgIData(oldp+2828,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+2829,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[5U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+2830,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+2831,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+2832,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                             >> 1U)) 
                                   | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                               >> 7U)))),32);
        bufp->chgIData(oldp+2833,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+2834,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                    ? 0xffffffffU : 
                                   (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))),32);
        bufp->chgIData(oldp+2835,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
        bufp->chgIData(oldp+2836,(VL_EXTENDS_II(32,21, 
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
        bufp->chgCData(oldp+2837,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+2838,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+2839,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+2840,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])),32);
        bufp->chgIData(oldp+2841,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2842,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2843,((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])) 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+2844,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   | VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2845,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]
                                    : (((0x80000000U 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]) 
                                        & (0xffffffffU 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                        ? 0U : VL_MODDIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))),32);
        bufp->chgIData(oldp+2846,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]
                                    : VL_MODDIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
        bufp->chgIData(oldp+2847,(VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+2848,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+2849,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])),6);
        bufp->chgIData(oldp+2850,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
        bufp->chgCData(oldp+2851,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+2852,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 0x14U))),6);
        bufp->chgIData(oldp+2853,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2854,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+2855,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                             VL_EXTENDS_II(32,12, 
                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                            >> 0x14U)))),32);
        bufp->chgIData(oldp+2856,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   < VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2857,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+2858,(VL_SHIFTRS_III(32,32,5, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
        bufp->chgIData(oldp+2859,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+2860,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
        bufp->chgIData(oldp+2861,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+2862,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                   ^ VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)))),32);
        bufp->chgBit(oldp+2863,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+2864,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+2865,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+2866,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+2867,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+2868,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[6U])),32);
        bufp->chgBit(oldp+2869,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+2870,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+2871,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+2872,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2873,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+2874,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2875,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+2876,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[6U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2877,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+2878,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+2879,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+2880,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+2881,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+2882,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+2883,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+2884,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+2885,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+2886,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+2887,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+2888,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+2889,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+2890,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+2891,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+2892,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+2893,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+2894,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+2895,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+2896,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+2897,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[6U])),32);
        bufp->chgBit(oldp+2898,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+2899,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2900,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+2901,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+2902,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+2903,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+2904,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+2905,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+2906,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+2907,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+2908,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+2909,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+2910,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+2911,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+2912,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+2913,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+2914,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+2915,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+2916,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+2917,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+2918,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+2919,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+2920,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])),32);
        bufp->chgBit(oldp+2921,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+2922,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+2923,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2924,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+2925,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+2926,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+2927,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+2928,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[6U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+2929,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+2930,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+2931,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+2932,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+2933,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[6U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+2934,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+2935,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+2936,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+2937,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]
                                    : 0U)),32);
        bufp->chgBit(oldp+2938,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+2939,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+2940,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+2941,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+2942,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+2943,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2944,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+2945,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+2946,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+2947,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+2948,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+2949,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+2950,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+2951,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+2952,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+2953,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+2954,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+2955,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+2956,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+2957,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+2958,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2959,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+2960,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+2961,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+2962,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+2963,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+2964,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+2965,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+2966,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+2967,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+2968,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+2969,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+2970,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2971,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+2972,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2973,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+2974,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2975,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+2976,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2977,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+2978,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2979,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+2980,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2981,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+2982,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+2983,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+2984,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+2985,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+2986,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                    : 0U)),32);
        bufp->chgBit(oldp+2987,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+2988,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2989,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+2990,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2991,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+2992,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+2993,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+2994,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+2995,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+2996,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+2997,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+2998,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+2999,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+3000,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+3001,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+3002,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+3003,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+3004,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+3005,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+3006,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+3007,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+3008,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+3009,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+3010,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+3011,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3012,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+3013,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+3014,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+3015,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3016,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+3017,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3018,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+3019,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+3020,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+3021,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+3022,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+3023,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3024,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+3025,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+3026,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+3027,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3028,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+3029,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+3030,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+3031,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+3032,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+3033,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+3034,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+3035,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+3036,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                       ^ VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+3037,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+3038,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+3039,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])),7);
        bufp->chgIData(oldp+3040,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])),32);
        bufp->chgIData(oldp+3041,(VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 0x14U))),32);
        bufp->chgIData(oldp+3042,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+3043,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   & VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+3044,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])),32);
        bufp->chgIData(oldp+3045,(VL_EXTENDS_II(32,13, 
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
        bufp->chgBit(oldp+3046,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
        bufp->chgBit(oldp+3047,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
        bufp->chgBit(oldp+3048,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
        bufp->chgBit(oldp+3049,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+3050,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+3051,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
        bufp->chgIData(oldp+3052,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U], 0x10U)),32);
        bufp->chgCData(oldp+3053,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+3054,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])),2);
        bufp->chgIData(oldp+3055,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+3056,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                         >> 0xdU))),3);
        bufp->chgIData(oldp+3057,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+3058,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+3059,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+3060,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+3061,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+3062,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+3063,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+3064,(VL_EXTENDS_II(32,9, 
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
        bufp->chgBit(oldp+3065,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])));
        bufp->chgBit(oldp+3066,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])));
        bufp->chgIData(oldp+3067,(VL_EXTENDS_II(32,12, 
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
        bufp->chgIData(oldp+3068,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+3069,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                             << 1U)) 
                                   | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                >> 7U)) 
                                      | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+3070,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+3071,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                             << 4U)) 
                                   | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                >> 7U)) 
                                      | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 2U))))),32);
        bufp->chgIData(oldp+3072,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+3073,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[6U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+3074,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+3075,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+3076,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                             >> 1U)) 
                                   | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                               >> 7U)))),32);
        bufp->chgIData(oldp+3077,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+3078,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                    ? 0xffffffffU : 
                                   (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])))),32);
        bufp->chgIData(oldp+3079,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
        bufp->chgIData(oldp+3080,(VL_EXTENDS_II(32,21, 
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
        bufp->chgCData(oldp+3081,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+3082,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+3083,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+3084,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])),32);
        bufp->chgIData(oldp+3085,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+3086,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+3087,((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])) 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+3088,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   | VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+3089,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]
                                    : (((0x80000000U 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]) 
                                        & (0xffffffffU 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                        ? 0U : VL_MODDIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])))),32);
        bufp->chgIData(oldp+3090,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]
                                    : VL_MODDIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
        bufp->chgIData(oldp+3091,(VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+3092,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+3093,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])),6);
        bufp->chgIData(oldp+3094,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
        bufp->chgCData(oldp+3095,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+3096,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 0x14U))),6);
        bufp->chgIData(oldp+3097,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+3098,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+3099,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                             VL_EXTENDS_II(32,12, 
                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                            >> 0x14U)))),32);
        bufp->chgIData(oldp+3100,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   < VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+3101,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+3102,(VL_SHIFTRS_III(32,32,5, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
        bufp->chgIData(oldp+3103,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+3104,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
        bufp->chgIData(oldp+3105,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+3106,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                   ^ VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                    >> 0x14U)))),32);
        bufp->chgBit(oldp+3107,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+3108,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+3109,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+3110,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U))),5);
        bufp->chgIData(oldp+3111,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+3112,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[7U])),32);
        bufp->chgBit(oldp+3113,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+3114,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result
                                    : 0U)),32);
        bufp->chgBit(oldp+3115,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+3116,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+3117,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+3118,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                       & VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3119,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+3120,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[7U] 
                                       + (0xfffff000U 
                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+3121,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+3122,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+3123,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+3124,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+3125,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+3126,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+3127,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+3128,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+3129,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+3130,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+3131,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+3132,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+3133,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+3134,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+3135,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+3136,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+3137,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+3138,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+3139,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+3140,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 2U))),5);
        bufp->chgIData(oldp+3141,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[7U])),32);
        bufp->chgBit(oldp+3142,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+3143,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                       + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3144,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+3145,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                       + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                    : 0U)),32);
        bufp->chgBit(oldp+3146,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+3147,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                               >> 2U)))),5);
        bufp->chgIData(oldp+3148,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+3149,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+3150,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                               >> 7U)))),5);
        bufp->chgIData(oldp+3151,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+3152,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+3153,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+3154,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+3155,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+3156,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+3157,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+3158,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+3159,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+3160,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+3161,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+3162,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+3163,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+3164,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])),32);
        bufp->chgBit(oldp+3165,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+3166,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+3167,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+3168,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+3169,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                    : 0U)),32);
        bufp->chgBit(oldp+3170,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+3171,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+3172,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[7U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+3173,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+3174,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+3175,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+3176,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+3177,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[7U], 
                                                    VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                    : 0U)),32);
        bufp->chgIData(oldp+3178,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+3179,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+3180,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+3181,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]
                                    : 0U)),32);
        bufp->chgBit(oldp+3182,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+3183,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+3184,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+3185,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                    : 0U)),32);
        bufp->chgBit(oldp+3186,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+3187,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+3188,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+3189,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+3190,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+3191,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+3192,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+3193,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+3194,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+3195,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+3196,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+3197,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+3198,(VL_SHIFTL_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+3199,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+3200,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+3201,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+3202,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+3203,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+3204,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+3205,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+3206,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+3207,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+3208,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+3209,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+3210,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+3211,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+3212,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,8, 
                                                    (0xffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgIData(oldp+3213,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+3214,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+3215,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+3216,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+3217,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+3218,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+3219,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result))
                                    : 0U)),32);
        bufp->chgCData(oldp+3220,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+3221,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+3222,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)
                                    : 0U)),32);
        bufp->chgBit(oldp+3223,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+3224,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])
                                    : 0U)),32);
        bufp->chgBit(oldp+3225,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+3226,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+3227,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result
                                    : 0U)),32);
        bufp->chgCData(oldp+3228,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+3229,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+3230,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                       * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                    : 0U)),32);
        bufp->chgBit(oldp+3231,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+3232,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+3233,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+3234,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__VdfgTmp_hb1a4827e__0 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+3235,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+3236,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (IData)((((QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])) 
                                                * (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                               >> 0x20U))
                                    : 0U)),32);
        bufp->chgBit(oldp+3237,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+3238,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+3239,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+3240,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                       | VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3241,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+3242,(((0U != (0x1fU & 
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
        bufp->chgBit(oldp+3243,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+3244,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                        ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]
                                        : VL_MODDIV_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+3245,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+3246,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+3247,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+3248,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+3249,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+3250,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+3251,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+3252,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+3253,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                       << (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+3254,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+3255,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? VL_SHIFTL_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3256,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+3257,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_blt__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+3258,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+3259,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? VL_LTS_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                 VL_EXTENDS_II(32,12, 
                                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                                >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3260,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+3261,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                       < VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3262,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+3263,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_bltu__DOT__cond)
                                    : 0U)),32);
        bufp->chgBit(oldp+3264,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+3265,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+3266,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+3267,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                         >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3268,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+3269,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                       >> (0x1fU & 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                    : 0U)),32);
        bufp->chgBit(oldp+3270,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+3271,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? VL_SHIFTR_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgBit(oldp+3272,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+3273,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+3274,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+3275,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+3276,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+3277,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+3278,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                    : 0U)),32);
        bufp->chgBit(oldp+3279,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+3280,(((0U != (0x1fU & 
                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))
                                    ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                       ^ VL_EXTENDS_II(32,12, 
                                                       (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                        >> 0x14U)))
                                    : 0U)),32);
        bufp->chgCData(oldp+3281,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+3282,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+3283,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])),7);
        bufp->chgIData(oldp+3284,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])),32);
        bufp->chgIData(oldp+3285,(VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 0x14U))),32);
        bufp->chgIData(oldp+3286,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+3287,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   & VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+3288,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])),32);
        bufp->chgIData(oldp+3289,(VL_EXTENDS_II(32,13, 
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
        bufp->chgBit(oldp+3290,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                 == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
        bufp->chgBit(oldp+3291,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
        bufp->chgBit(oldp+3292,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                 >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
        bufp->chgBit(oldp+3293,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+3294,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+3295,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                 != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
        bufp->chgIData(oldp+3296,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U], 0x10U)),32);
        bufp->chgCData(oldp+3297,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+3298,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])),2);
        bufp->chgIData(oldp+3299,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+3300,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                         >> 0xdU))),3);
        bufp->chgIData(oldp+3301,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+3302,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+3303,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+3304,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+3305,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+3306,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                         >> 5U))),2);
        bufp->chgCData(oldp+3307,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+3308,(VL_EXTENDS_II(32,9, 
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
        bufp->chgBit(oldp+3309,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])));
        bufp->chgBit(oldp+3310,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])));
        bufp->chgIData(oldp+3311,(VL_EXTENDS_II(32,12, 
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
        bufp->chgIData(oldp+3312,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+3313,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                             << 1U)) 
                                   | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                >> 7U)) 
                                      | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+3314,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+3315,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                             << 4U)) 
                                   | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                >> 7U)) 
                                      | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 2U))))),32);
        bufp->chgIData(oldp+3316,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+3317,(VL_SHIFTR_III(32,32,32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[7U], 
                                                VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+3318,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+3319,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+3320,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                             >> 1U)) 
                                   | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                               >> 7U)))),32);
        bufp->chgIData(oldp+3321,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+3322,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                    ? 0xffffffffU : 
                                   (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))),32);
        bufp->chgIData(oldp+3323,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
        bufp->chgIData(oldp+3324,(VL_EXTENDS_II(32,21, 
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
        bufp->chgCData(oldp+3325,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+3326,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+3327,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+3328,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])),32);
        bufp->chgIData(oldp+3329,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+3330,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__VdfgTmp_hb1a4827e__0 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+3331,((IData)((((QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])) 
                                            * (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+3332,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   | VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+3333,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]
                                    : (((0x80000000U 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]) 
                                        & (0xffffffffU 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                        ? 0U : VL_MODDIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))),32);
        bufp->chgIData(oldp+3334,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                    ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]
                                    : VL_MODDIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
        bufp->chgIData(oldp+3335,(VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+3336,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+3337,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])),6);
        bufp->chgIData(oldp+3338,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
        bufp->chgCData(oldp+3339,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                   >> 0x1aU)),7);
        bufp->chgCData(oldp+3340,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 0x14U))),6);
        bufp->chgIData(oldp+3341,(VL_SHIFTL_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+3342,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+3343,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                             VL_EXTENDS_II(32,12, 
                                                           (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                            >> 0x14U)))),32);
        bufp->chgIData(oldp+3344,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   < VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+3345,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+3346,(VL_SHIFTRS_III(32,32,5, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
        bufp->chgIData(oldp+3347,(VL_SHIFTRS_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+3348,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
        bufp->chgIData(oldp+3349,(VL_SHIFTR_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+3350,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                   ^ VL_EXTENDS_II(32,12, 
                                                   (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                    >> 0x14U)))),32);
    }
    bufp->chgBit(oldp+3351,(vlSelf->clk));
    bufp->chgBit(oldp+3352,(vlSelf->rst));
    bufp->chgBit(oldp+3353,(vlSelf->dut_rst));
    bufp->chgIData(oldp+3354,(vlSelf->imem_rdata),32);
    bufp->chgBit(oldp+3355,(vlSelf->imem_resp));
    bufp->chgIData(oldp+3356,(vlSelf->imem_addr),32);
    bufp->chgBit(oldp+3357,(vlSelf->imem_read));
    bufp->chgIData(oldp+3358,(vlSelf->dmem_rdata),32);
    bufp->chgBit(oldp+3359,(vlSelf->dmem_resp));
    bufp->chgIData(oldp+3360,(vlSelf->dmem_addr),32);
    bufp->chgBit(oldp+3361,(vlSelf->dmem_read));
    bufp->chgBit(oldp+3362,(vlSelf->dmem_write));
    bufp->chgCData(oldp+3363,(vlSelf->dmem_wmask),4);
    bufp->chgIData(oldp+3364,(vlSelf->dmem_wdata),32);
    bufp->chgIData(oldp+3365,(vlSelf->golden_imem_rdata),32);
    bufp->chgBit(oldp+3366,(vlSelf->golden_imem_resp));
    bufp->chgIData(oldp+3367,(vlSelf->golden_imem_addr),32);
    bufp->chgBit(oldp+3368,(vlSelf->golden_imem_read));
    bufp->chgIData(oldp+3369,(vlSelf->golden_dmem_rdata),32);
    bufp->chgBit(oldp+3370,(vlSelf->golden_dmem_resp));
    bufp->chgIData(oldp+3371,(vlSelf->golden_dmem_addr),32);
    bufp->chgBit(oldp+3372,(vlSelf->golden_dmem_read));
    bufp->chgBit(oldp+3373,(vlSelf->golden_dmem_write));
    bufp->chgCData(oldp+3374,(vlSelf->golden_dmem_wmask),4);
    bufp->chgIData(oldp+3375,(vlSelf->golden_dmem_wdata),32);
    bufp->chgBit(oldp+3376,(vlSelf->halt));
    bufp->chgBit(oldp+3377,(vlSelf->error));
    bufp->chgBit(oldp+3378,(vlSelf->any_commit));
    bufp->chgBit(oldp+3379,(vlSelf->mispredict_o));
    bufp->chgBit(oldp+3380,(vlSelf->eoc_enable));
    bufp->chgQData(oldp+3381,(vlSelf->dut_order),64);
    bufp->chgIData(oldp+3383,(vlSelf->dut_pc),32);
    bufp->chgIData(oldp+3384,(vlSelf->dut_inst),32);
    bufp->chgCData(oldp+3385,(vlSelf->dut_rd_addr),5);
    bufp->chgIData(oldp+3386,(vlSelf->dut_rd_wdata),32);
    bufp->chgIData(oldp+3387,(vlSelf->dut_mem_addr),32);
    bufp->chgCData(oldp+3388,(vlSelf->dut_mem_rmask),4);
    bufp->chgCData(oldp+3389,(vlSelf->dut_mem_wmask),4);
    bufp->chgIData(oldp+3390,(vlSelf->dut_mem_rdata),32);
    bufp->chgIData(oldp+3391,(vlSelf->dut_mem_wdata),32);
    bufp->chgBit(oldp+3392,(vlSelf->golden_commit));
    bufp->chgQData(oldp+3393,(vlSelf->golden_order),64);
    bufp->chgIData(oldp+3395,(vlSelf->golden_pc),32);
    bufp->chgIData(oldp+3396,(vlSelf->golden_inst),32);
    bufp->chgCData(oldp+3397,(vlSelf->golden_rd_addr),5);
    bufp->chgIData(oldp+3398,(vlSelf->golden_rd_wdata),32);
    bufp->chgIData(oldp+3399,(vlSelf->golden_mem_addr),32);
    bufp->chgCData(oldp+3400,(vlSelf->golden_mem_rmask),4);
    bufp->chgCData(oldp+3401,(vlSelf->golden_mem_wmask),4);
    bufp->chgIData(oldp+3402,(vlSelf->golden_mem_rdata),32);
    bufp->chgIData(oldp+3403,(vlSelf->golden_mem_wdata),32);
    bufp->chgBit(oldp+3404,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetchq_full) 
                                      & (IData)(vlSelf->imem_resp))))));
    bufp->chgBit(oldp+3405,(vlSymsp->TOP__top_tb.__Vcellinp__dut__rst));
    bufp->chgBit(oldp+3406,(((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__LDorST_i)
                              ? ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__LDorST_i) 
                                 && ((((((~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem_empty_i)) 
                                         & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem_ROB_data_i[0xbU] 
                                            >> 0x12U)) 
                                        & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__READY_i)) 
                                       & (~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__store_committed))) 
                                      & (~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__store_match))) 
                                     & (~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__flush))))
                              : (((((~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem_empty_i)) 
                                    & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem_ROB_data_i[0xbU] 
                                       >> 0x12U)) & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__READY_i)) 
                                  & (IData)(vlSelf->dmem_resp)) 
                                 & (~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__flush))))));
}
