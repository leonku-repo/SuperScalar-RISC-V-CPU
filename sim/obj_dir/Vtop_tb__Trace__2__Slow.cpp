// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_1(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
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
    bufp->fullIData(oldp+3973,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xdU][5U] << 0x11U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xdU][4U] >> 0xfU))),32);
    bufp->fullIData(oldp+3974,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xdU][4U] << 0x11U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xdU][3U] >> 0xfU))),32);
    bufp->fullCData(oldp+3975,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                        [0xdU][3U] 
                                        >> 0xbU))),4);
    bufp->fullCData(oldp+3976,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                        [0xdU][3U] 
                                        >> 7U))),4);
    bufp->fullIData(oldp+3977,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xdU][3U] << 0x19U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xdU][2U] >> 7U))),32);
    bufp->fullIData(oldp+3978,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xdU][2U] << 0x19U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xdU][1U] >> 7U))),32);
    bufp->fullBit(oldp+3979,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xdU][1U] >> 6U))));
    bufp->fullBit(oldp+3980,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xdU][1U] >> 5U))));
    bufp->fullBit(oldp+3981,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xdU][1U] >> 4U))));
    bufp->fullBit(oldp+3982,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xdU][1U] >> 3U))));
    bufp->fullIData(oldp+3983,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xdU][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xdU][0U] >> 3U))),32);
    bufp->fullBit(oldp+3984,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xdU][0U] >> 2U))));
    bufp->fullCData(oldp+3985,((3U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                [0xdU][0U])),2);
    bufp->fullBit(oldp+3986,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xeU][0xbU] >> 0x12U))));
    bufp->fullBit(oldp+3987,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xeU][0xbU] >> 0x11U))));
    bufp->fullBit(oldp+3988,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xeU][0xbU] >> 0x10U))));
    bufp->fullCData(oldp+3989,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                         [0xeU][0xbU] 
                                         >> 0xbU))),5);
    bufp->fullCData(oldp+3990,((0x3fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                         [0xeU][0xbU] 
                                         >> 5U))),6);
    bufp->fullCData(oldp+3991,((0x3fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                          [0xeU][0xbU] 
                                          << 1U) | 
                                         (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                          [0xeU][0xaU] 
                                          >> 0x1fU)))),6);
    bufp->fullIData(oldp+3992,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xeU][0xaU] << 1U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xeU][9U] >> 0x1fU))),32);
    bufp->fullIData(oldp+3993,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xeU][9U] << 1U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xeU][8U] >> 0x1fU))),32);
    bufp->fullIData(oldp+3994,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xeU][8U] << 1U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xeU][7U] >> 0x1fU))),32);
    bufp->fullBit(oldp+3995,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xeU][7U] >> 0x1eU))));
    bufp->fullBit(oldp+3996,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xeU][7U] >> 0x1dU))));
    bufp->fullCData(oldp+3997,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                         [0xeU][7U] 
                                         >> 0x18U))),5);
    bufp->fullCData(oldp+3998,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                         [0xeU][7U] 
                                         >> 0x13U))),5);
    bufp->fullIData(oldp+3999,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xeU][7U] << 0xdU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xeU][6U] >> 0x13U))),32);
    bufp->fullIData(oldp+4000,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xeU][6U] << 0xdU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xeU][5U] >> 0x13U))),32);
    bufp->fullCData(oldp+4001,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                        [0xeU][5U] 
                                        >> 0xfU))),4);
    bufp->fullIData(oldp+4002,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xeU][5U] << 0x11U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xeU][4U] >> 0xfU))),32);
    bufp->fullIData(oldp+4003,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xeU][4U] << 0x11U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xeU][3U] >> 0xfU))),32);
    bufp->fullCData(oldp+4004,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                        [0xeU][3U] 
                                        >> 0xbU))),4);
    bufp->fullCData(oldp+4005,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                        [0xeU][3U] 
                                        >> 7U))),4);
    bufp->fullIData(oldp+4006,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xeU][3U] << 0x19U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xeU][2U] >> 7U))),32);
    bufp->fullIData(oldp+4007,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xeU][2U] << 0x19U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xeU][1U] >> 7U))),32);
    bufp->fullBit(oldp+4008,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xeU][1U] >> 6U))));
    bufp->fullBit(oldp+4009,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xeU][1U] >> 5U))));
    bufp->fullBit(oldp+4010,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xeU][1U] >> 4U))));
    bufp->fullBit(oldp+4011,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xeU][1U] >> 3U))));
    bufp->fullIData(oldp+4012,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xeU][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xeU][0U] >> 3U))),32);
    bufp->fullBit(oldp+4013,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xeU][0U] >> 2U))));
    bufp->fullCData(oldp+4014,((3U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                [0xeU][0U])),2);
    bufp->fullBit(oldp+4015,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xfU][0xbU] >> 0x12U))));
    bufp->fullBit(oldp+4016,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xfU][0xbU] >> 0x11U))));
    bufp->fullBit(oldp+4017,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xfU][0xbU] >> 0x10U))));
    bufp->fullCData(oldp+4018,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                         [0xfU][0xbU] 
                                         >> 0xbU))),5);
    bufp->fullCData(oldp+4019,((0x3fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                         [0xfU][0xbU] 
                                         >> 5U))),6);
    bufp->fullCData(oldp+4020,((0x3fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                          [0xfU][0xbU] 
                                          << 1U) | 
                                         (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                          [0xfU][0xaU] 
                                          >> 0x1fU)))),6);
    bufp->fullIData(oldp+4021,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xfU][0xaU] << 1U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xfU][9U] >> 0x1fU))),32);
    bufp->fullIData(oldp+4022,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xfU][9U] << 1U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xfU][8U] >> 0x1fU))),32);
    bufp->fullIData(oldp+4023,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xfU][8U] << 1U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xfU][7U] >> 0x1fU))),32);
    bufp->fullBit(oldp+4024,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xfU][7U] >> 0x1eU))));
    bufp->fullBit(oldp+4025,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xfU][7U] >> 0x1dU))));
    bufp->fullCData(oldp+4026,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                         [0xfU][7U] 
                                         >> 0x18U))),5);
    bufp->fullCData(oldp+4027,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                         [0xfU][7U] 
                                         >> 0x13U))),5);
    bufp->fullIData(oldp+4028,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xfU][7U] << 0xdU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xfU][6U] >> 0x13U))),32);
    bufp->fullIData(oldp+4029,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xfU][6U] << 0xdU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xfU][5U] >> 0x13U))),32);
    bufp->fullCData(oldp+4030,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                        [0xfU][5U] 
                                        >> 0xfU))),4);
    bufp->fullIData(oldp+4031,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xfU][5U] << 0x11U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xfU][4U] >> 0xfU))),32);
    bufp->fullIData(oldp+4032,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xfU][4U] << 0x11U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xfU][3U] >> 0xfU))),32);
    bufp->fullCData(oldp+4033,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                        [0xfU][3U] 
                                        >> 0xbU))),4);
    bufp->fullCData(oldp+4034,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                        [0xfU][3U] 
                                        >> 7U))),4);
    bufp->fullIData(oldp+4035,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xfU][3U] << 0x19U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xfU][2U] >> 7U))),32);
    bufp->fullIData(oldp+4036,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xfU][2U] << 0x19U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xfU][1U] >> 7U))),32);
    bufp->fullBit(oldp+4037,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xfU][1U] >> 6U))));
    bufp->fullBit(oldp+4038,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xfU][1U] >> 5U))));
    bufp->fullBit(oldp+4039,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xfU][1U] >> 4U))));
    bufp->fullBit(oldp+4040,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xfU][1U] >> 3U))));
    bufp->fullIData(oldp+4041,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                 [0xfU][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                   [0xfU][0U] >> 3U))),32);
    bufp->fullBit(oldp+4042,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                    [0xfU][0U] >> 2U))));
    bufp->fullCData(oldp+4043,((3U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
                                [0xfU][0U])),2);
    bufp->fullIData(oldp+4044,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [0U] >> 0x1aU))),32);
    bufp->fullCData(oldp+4045,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4046,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4047,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4048,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0U] >> 0xfU)))));
    bufp->fullBit(oldp+4049,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0U] >> 0xeU)))));
    bufp->fullCData(oldp+4050,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4051,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4052,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0U] >> 1U)))));
    bufp->fullBit(oldp+4053,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [0U]))));
    bufp->fullIData(oldp+4054,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [1U] >> 0x1aU))),32);
    bufp->fullCData(oldp+4055,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [1U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4056,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [1U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4057,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [1U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4058,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [1U] >> 0xfU)))));
    bufp->fullBit(oldp+4059,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [1U] >> 0xeU)))));
    bufp->fullCData(oldp+4060,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [1U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4061,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [1U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4062,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [1U] >> 1U)))));
    bufp->fullBit(oldp+4063,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [1U]))));
    bufp->fullIData(oldp+4064,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [2U] >> 0x1aU))),32);
    bufp->fullCData(oldp+4065,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [2U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4066,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [2U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4067,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [2U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4068,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [2U] >> 0xfU)))));
    bufp->fullBit(oldp+4069,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [2U] >> 0xeU)))));
    bufp->fullCData(oldp+4070,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [2U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4071,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [2U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4072,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [2U] >> 1U)))));
    bufp->fullBit(oldp+4073,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [2U]))));
    bufp->fullIData(oldp+4074,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [3U] >> 0x1aU))),32);
    bufp->fullCData(oldp+4075,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [3U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4076,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [3U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4077,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [3U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4078,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [3U] >> 0xfU)))));
    bufp->fullBit(oldp+4079,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [3U] >> 0xeU)))));
    bufp->fullCData(oldp+4080,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [3U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4081,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [3U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4082,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [3U] >> 1U)))));
    bufp->fullBit(oldp+4083,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [3U]))));
    bufp->fullIData(oldp+4084,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [4U] >> 0x1aU))),32);
    bufp->fullCData(oldp+4085,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [4U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4086,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [4U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4087,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [4U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4088,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [4U] >> 0xfU)))));
    bufp->fullBit(oldp+4089,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [4U] >> 0xeU)))));
    bufp->fullCData(oldp+4090,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [4U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4091,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [4U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4092,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [4U] >> 1U)))));
    bufp->fullBit(oldp+4093,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [4U]))));
    bufp->fullIData(oldp+4094,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [5U] >> 0x1aU))),32);
    bufp->fullCData(oldp+4095,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [5U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4096,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [5U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4097,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [5U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4098,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [5U] >> 0xfU)))));
    bufp->fullBit(oldp+4099,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [5U] >> 0xeU)))));
    bufp->fullCData(oldp+4100,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [5U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4101,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [5U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4102,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [5U] >> 1U)))));
    bufp->fullBit(oldp+4103,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [5U]))));
    bufp->fullIData(oldp+4104,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [6U] >> 0x1aU))),32);
    bufp->fullCData(oldp+4105,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [6U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4106,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [6U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4107,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [6U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4108,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [6U] >> 0xfU)))));
    bufp->fullBit(oldp+4109,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [6U] >> 0xeU)))));
    bufp->fullCData(oldp+4110,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [6U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4111,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [6U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4112,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [6U] >> 1U)))));
    bufp->fullBit(oldp+4113,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [6U]))));
    bufp->fullIData(oldp+4114,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [7U] >> 0x1aU))),32);
    bufp->fullCData(oldp+4115,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [7U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4116,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [7U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4117,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [7U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4118,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [7U] >> 0xfU)))));
    bufp->fullBit(oldp+4119,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [7U] >> 0xeU)))));
    bufp->fullCData(oldp+4120,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [7U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4121,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [7U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4122,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [7U] >> 1U)))));
    bufp->fullBit(oldp+4123,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [7U]))));
    bufp->fullIData(oldp+4124,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [8U] >> 0x1aU))),32);
    bufp->fullCData(oldp+4125,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [8U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4126,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [8U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4127,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [8U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4128,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [8U] >> 0xfU)))));
    bufp->fullBit(oldp+4129,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [8U] >> 0xeU)))));
    bufp->fullCData(oldp+4130,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [8U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4131,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [8U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4132,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [8U] >> 1U)))));
    bufp->fullBit(oldp+4133,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [8U]))));
    bufp->fullIData(oldp+4134,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [9U] >> 0x1aU))),32);
    bufp->fullCData(oldp+4135,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [9U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4136,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [9U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4137,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [9U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4138,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [9U] >> 0xfU)))));
    bufp->fullBit(oldp+4139,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [9U] >> 0xeU)))));
    bufp->fullCData(oldp+4140,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [9U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4141,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [9U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4142,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [9U] >> 1U)))));
    bufp->fullBit(oldp+4143,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [9U]))));
    bufp->fullIData(oldp+4144,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [0xaU] >> 0x1aU))),32);
    bufp->fullCData(oldp+4145,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xaU] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4146,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xaU] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4147,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xaU] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4148,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xaU] 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+4149,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xaU] 
                                            >> 0xeU)))));
    bufp->fullCData(oldp+4150,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xaU] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4151,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xaU] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4152,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xaU] 
                                            >> 1U)))));
    bufp->fullBit(oldp+4153,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [0xaU]))));
    bufp->fullIData(oldp+4154,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [0xbU] >> 0x1aU))),32);
    bufp->fullCData(oldp+4155,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xbU] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4156,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xbU] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4157,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xbU] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4158,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xbU] 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+4159,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xbU] 
                                            >> 0xeU)))));
    bufp->fullCData(oldp+4160,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xbU] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4161,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xbU] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4162,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xbU] 
                                            >> 1U)))));
    bufp->fullBit(oldp+4163,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [0xbU]))));
    bufp->fullIData(oldp+4164,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [0xcU] >> 0x1aU))),32);
    bufp->fullCData(oldp+4165,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xcU] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4166,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xcU] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4167,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xcU] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4168,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xcU] 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+4169,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xcU] 
                                            >> 0xeU)))));
    bufp->fullCData(oldp+4170,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xcU] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4171,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xcU] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4172,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xcU] 
                                            >> 1U)))));
    bufp->fullBit(oldp+4173,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [0xcU]))));
    bufp->fullIData(oldp+4174,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [0xdU] >> 0x1aU))),32);
    bufp->fullCData(oldp+4175,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xdU] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4176,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xdU] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4177,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xdU] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4178,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xdU] 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+4179,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xdU] 
                                            >> 0xeU)))));
    bufp->fullCData(oldp+4180,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xdU] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4181,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xdU] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4182,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xdU] 
                                            >> 1U)))));
    bufp->fullBit(oldp+4183,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [0xdU]))));
    bufp->fullIData(oldp+4184,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [0xeU] >> 0x1aU))),32);
    bufp->fullCData(oldp+4185,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xeU] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4186,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xeU] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4187,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xeU] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4188,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xeU] 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+4189,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xeU] 
                                            >> 0xeU)))));
    bufp->fullCData(oldp+4190,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xeU] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4191,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xeU] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4192,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xeU] 
                                            >> 1U)))));
    bufp->fullBit(oldp+4193,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [0xeU]))));
    bufp->fullIData(oldp+4194,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [0xfU] >> 0x1aU))),32);
    bufp->fullCData(oldp+4195,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xfU] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4196,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xfU] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4197,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xfU] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4198,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xfU] 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+4199,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xfU] 
                                            >> 0xeU)))));
    bufp->fullCData(oldp+4200,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xfU] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4201,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xfU] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4202,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xfU] 
                                            >> 1U)))));
    bufp->fullBit(oldp+4203,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [0xfU]))));
    bufp->fullBit(oldp+4204,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[0]));
    bufp->fullBit(oldp+4205,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[1]));
    bufp->fullBit(oldp+4206,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[2]));
    bufp->fullBit(oldp+4207,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[3]));
    bufp->fullBit(oldp+4208,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[4]));
    bufp->fullBit(oldp+4209,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[5]));
    bufp->fullBit(oldp+4210,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[6]));
    bufp->fullBit(oldp+4211,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[7]));
    bufp->fullBit(oldp+4212,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[8]));
    bufp->fullBit(oldp+4213,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[9]));
    bufp->fullBit(oldp+4214,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[10]));
    bufp->fullBit(oldp+4215,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[11]));
    bufp->fullBit(oldp+4216,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[12]));
    bufp->fullBit(oldp+4217,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[13]));
    bufp->fullBit(oldp+4218,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[14]));
    bufp->fullBit(oldp+4219,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[15]));
    bufp->fullBit(oldp+4220,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[0]));
    bufp->fullBit(oldp+4221,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[1]));
    bufp->fullBit(oldp+4222,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[2]));
    bufp->fullBit(oldp+4223,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[3]));
    bufp->fullBit(oldp+4224,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[4]));
    bufp->fullBit(oldp+4225,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[5]));
    bufp->fullBit(oldp+4226,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[6]));
    bufp->fullBit(oldp+4227,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[7]));
    bufp->fullBit(oldp+4228,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[8]));
    bufp->fullBit(oldp+4229,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[9]));
    bufp->fullBit(oldp+4230,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[10]));
    bufp->fullBit(oldp+4231,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[11]));
    bufp->fullBit(oldp+4232,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[12]));
    bufp->fullBit(oldp+4233,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[13]));
    bufp->fullBit(oldp+4234,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[14]));
    bufp->fullBit(oldp+4235,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[15]));
    bufp->fullCData(oldp+4236,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__wrPtr),5);
    bufp->fullCData(oldp+4237,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rdPtr),5);
    bufp->fullSData(oldp+4238,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__committed),16);
    bufp->fullIData(oldp+4239,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__unnamedblk5__DOT__i),32);
    bufp->fullCData(oldp+4240,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask),4);
    bufp->fullBit(oldp+4241,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__store_match));
    bufp->fullBit(oldp+4242,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__store_committed));
    bufp->fullIData(oldp+4243,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__prf_addr),32);
    bufp->fullBit(oldp+4244,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__valid[0]));
    bufp->fullBit(oldp+4245,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__valid[1]));
    bufp->fullBit(oldp+4246,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__valid[2]));
    bufp->fullBit(oldp+4247,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__valid[3]));
    bufp->fullBit(oldp+4248,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [0U][0xbU] >> 0x12U))));
    bufp->fullBit(oldp+4249,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [0U][0xbU] >> 0x11U))));
    bufp->fullBit(oldp+4250,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [0U][0xbU] >> 0x10U))));
    bufp->fullCData(oldp+4251,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [0U][0xbU] 
                                         >> 0xbU))),5);
    bufp->fullCData(oldp+4252,((0x3fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [0U][0xbU] 
                                         >> 5U))),6);
    bufp->fullCData(oldp+4253,((0x3fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [0U][0xbU] 
                                          << 1U) | 
                                         (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [0U][0xaU] 
                                          >> 0x1fU)))),6);
    bufp->fullIData(oldp+4254,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][0xaU] << 1U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][9U] >> 0x1fU))),32);
    bufp->fullIData(oldp+4255,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][9U] << 1U) | 
                                (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][8U] >> 0x1fU))),32);
    bufp->fullIData(oldp+4256,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][8U] << 1U) | 
                                (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][7U] >> 0x1fU))),32);
    bufp->fullBit(oldp+4257,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [0U][7U] >> 0x1eU))));
    bufp->fullBit(oldp+4258,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [0U][7U] >> 0x1dU))));
    bufp->fullCData(oldp+4259,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [0U][7U] >> 0x18U))),5);
    bufp->fullCData(oldp+4260,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [0U][7U] >> 0x13U))),5);
    bufp->fullIData(oldp+4261,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][7U] << 0xdU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][6U] >> 0x13U))),32);
    bufp->fullIData(oldp+4262,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][6U] << 0xdU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][5U] >> 0x13U))),32);
    bufp->fullCData(oldp+4263,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [0U][5U] >> 0xfU))),4);
    bufp->fullIData(oldp+4264,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][5U] << 0x11U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][4U] >> 0xfU))),32);
    bufp->fullIData(oldp+4265,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][4U] << 0x11U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][3U] >> 0xfU))),32);
    bufp->fullCData(oldp+4266,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [0U][3U] >> 0xbU))),4);
    bufp->fullCData(oldp+4267,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [0U][3U] >> 7U))),4);
    bufp->fullIData(oldp+4268,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][3U] << 0x19U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][2U] >> 7U))),32);
    bufp->fullIData(oldp+4269,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][2U] << 0x19U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][1U] >> 7U))),32);
    bufp->fullBit(oldp+4270,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [0U][1U] >> 6U))));
    bufp->fullBit(oldp+4271,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [0U][1U] >> 5U))));
    bufp->fullBit(oldp+4272,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [0U][1U] >> 4U))));
    bufp->fullBit(oldp+4273,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [0U][1U] >> 3U))));
    bufp->fullIData(oldp+4274,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4275,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [0U][0U] >> 2U))));
    bufp->fullCData(oldp+4276,((3U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                [0U][0U])),2);
    bufp->fullBit(oldp+4277,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [1U][0xbU] >> 0x12U))));
    bufp->fullBit(oldp+4278,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [1U][0xbU] >> 0x11U))));
    bufp->fullBit(oldp+4279,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [1U][0xbU] >> 0x10U))));
    bufp->fullCData(oldp+4280,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [1U][0xbU] 
                                         >> 0xbU))),5);
    bufp->fullCData(oldp+4281,((0x3fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [1U][0xbU] 
                                         >> 5U))),6);
    bufp->fullCData(oldp+4282,((0x3fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [1U][0xbU] 
                                          << 1U) | 
                                         (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [1U][0xaU] 
                                          >> 0x1fU)))),6);
    bufp->fullIData(oldp+4283,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][0xaU] << 1U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][9U] >> 0x1fU))),32);
    bufp->fullIData(oldp+4284,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][9U] << 1U) | 
                                (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][8U] >> 0x1fU))),32);
    bufp->fullIData(oldp+4285,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][8U] << 1U) | 
                                (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][7U] >> 0x1fU))),32);
    bufp->fullBit(oldp+4286,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [1U][7U] >> 0x1eU))));
    bufp->fullBit(oldp+4287,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [1U][7U] >> 0x1dU))));
    bufp->fullCData(oldp+4288,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [1U][7U] >> 0x18U))),5);
    bufp->fullCData(oldp+4289,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [1U][7U] >> 0x13U))),5);
    bufp->fullIData(oldp+4290,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][7U] << 0xdU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][6U] >> 0x13U))),32);
    bufp->fullIData(oldp+4291,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][6U] << 0xdU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][5U] >> 0x13U))),32);
    bufp->fullCData(oldp+4292,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [1U][5U] >> 0xfU))),4);
    bufp->fullIData(oldp+4293,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][5U] << 0x11U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][4U] >> 0xfU))),32);
    bufp->fullIData(oldp+4294,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][4U] << 0x11U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][3U] >> 0xfU))),32);
    bufp->fullCData(oldp+4295,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [1U][3U] >> 0xbU))),4);
    bufp->fullCData(oldp+4296,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [1U][3U] >> 7U))),4);
    bufp->fullIData(oldp+4297,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][3U] << 0x19U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][2U] >> 7U))),32);
    bufp->fullIData(oldp+4298,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][2U] << 0x19U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][1U] >> 7U))),32);
    bufp->fullBit(oldp+4299,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [1U][1U] >> 6U))));
    bufp->fullBit(oldp+4300,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [1U][1U] >> 5U))));
    bufp->fullBit(oldp+4301,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [1U][1U] >> 4U))));
    bufp->fullBit(oldp+4302,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [1U][1U] >> 3U))));
    bufp->fullIData(oldp+4303,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4304,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [1U][0U] >> 2U))));
    bufp->fullCData(oldp+4305,((3U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                [1U][0U])),2);
    bufp->fullBit(oldp+4306,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [2U][0xbU] >> 0x12U))));
    bufp->fullBit(oldp+4307,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [2U][0xbU] >> 0x11U))));
    bufp->fullBit(oldp+4308,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [2U][0xbU] >> 0x10U))));
    bufp->fullCData(oldp+4309,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [2U][0xbU] 
                                         >> 0xbU))),5);
    bufp->fullCData(oldp+4310,((0x3fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [2U][0xbU] 
                                         >> 5U))),6);
    bufp->fullCData(oldp+4311,((0x3fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [2U][0xbU] 
                                          << 1U) | 
                                         (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [2U][0xaU] 
                                          >> 0x1fU)))),6);
    bufp->fullIData(oldp+4312,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][0xaU] << 1U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][9U] >> 0x1fU))),32);
    bufp->fullIData(oldp+4313,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][9U] << 1U) | 
                                (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][8U] >> 0x1fU))),32);
    bufp->fullIData(oldp+4314,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][8U] << 1U) | 
                                (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][7U] >> 0x1fU))),32);
    bufp->fullBit(oldp+4315,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [2U][7U] >> 0x1eU))));
    bufp->fullBit(oldp+4316,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [2U][7U] >> 0x1dU))));
    bufp->fullCData(oldp+4317,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [2U][7U] >> 0x18U))),5);
    bufp->fullCData(oldp+4318,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [2U][7U] >> 0x13U))),5);
    bufp->fullIData(oldp+4319,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][7U] << 0xdU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][6U] >> 0x13U))),32);
    bufp->fullIData(oldp+4320,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][6U] << 0xdU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][5U] >> 0x13U))),32);
    bufp->fullCData(oldp+4321,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [2U][5U] >> 0xfU))),4);
    bufp->fullIData(oldp+4322,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][5U] << 0x11U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][4U] >> 0xfU))),32);
    bufp->fullIData(oldp+4323,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][4U] << 0x11U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][3U] >> 0xfU))),32);
    bufp->fullCData(oldp+4324,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [2U][3U] >> 0xbU))),4);
    bufp->fullCData(oldp+4325,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [2U][3U] >> 7U))),4);
    bufp->fullIData(oldp+4326,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][3U] << 0x19U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][2U] >> 7U))),32);
    bufp->fullIData(oldp+4327,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][2U] << 0x19U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][1U] >> 7U))),32);
    bufp->fullBit(oldp+4328,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [2U][1U] >> 6U))));
    bufp->fullBit(oldp+4329,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [2U][1U] >> 5U))));
    bufp->fullBit(oldp+4330,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [2U][1U] >> 4U))));
    bufp->fullBit(oldp+4331,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [2U][1U] >> 3U))));
    bufp->fullIData(oldp+4332,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4333,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [2U][0U] >> 2U))));
    bufp->fullCData(oldp+4334,((3U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                [2U][0U])),2);
    bufp->fullBit(oldp+4335,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [3U][0xbU] >> 0x12U))));
    bufp->fullBit(oldp+4336,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [3U][0xbU] >> 0x11U))));
    bufp->fullBit(oldp+4337,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [3U][0xbU] >> 0x10U))));
    bufp->fullCData(oldp+4338,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [3U][0xbU] 
                                         >> 0xbU))),5);
    bufp->fullCData(oldp+4339,((0x3fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [3U][0xbU] 
                                         >> 5U))),6);
    bufp->fullCData(oldp+4340,((0x3fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [3U][0xbU] 
                                          << 1U) | 
                                         (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [3U][0xaU] 
                                          >> 0x1fU)))),6);
    bufp->fullIData(oldp+4341,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][0xaU] << 1U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][9U] >> 0x1fU))),32);
    bufp->fullIData(oldp+4342,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][9U] << 1U) | 
                                (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][8U] >> 0x1fU))),32);
    bufp->fullIData(oldp+4343,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][8U] << 1U) | 
                                (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][7U] >> 0x1fU))),32);
    bufp->fullBit(oldp+4344,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [3U][7U] >> 0x1eU))));
    bufp->fullBit(oldp+4345,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [3U][7U] >> 0x1dU))));
    bufp->fullCData(oldp+4346,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [3U][7U] >> 0x18U))),5);
    bufp->fullCData(oldp+4347,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [3U][7U] >> 0x13U))),5);
    bufp->fullIData(oldp+4348,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][7U] << 0xdU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][6U] >> 0x13U))),32);
    bufp->fullIData(oldp+4349,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][6U] << 0xdU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][5U] >> 0x13U))),32);
    bufp->fullCData(oldp+4350,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [3U][5U] >> 0xfU))),4);
    bufp->fullIData(oldp+4351,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][5U] << 0x11U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][4U] >> 0xfU))),32);
    bufp->fullIData(oldp+4352,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][4U] << 0x11U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][3U] >> 0xfU))),32);
    bufp->fullCData(oldp+4353,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [3U][3U] >> 0xbU))),4);
    bufp->fullCData(oldp+4354,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [3U][3U] >> 7U))),4);
    bufp->fullIData(oldp+4355,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][3U] << 0x19U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][2U] >> 7U))),32);
    bufp->fullIData(oldp+4356,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][2U] << 0x19U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][1U] >> 7U))),32);
    bufp->fullBit(oldp+4357,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [3U][1U] >> 6U))));
    bufp->fullBit(oldp+4358,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [3U][1U] >> 5U))));
    bufp->fullBit(oldp+4359,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [3U][1U] >> 4U))));
    bufp->fullBit(oldp+4360,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [3U][1U] >> 3U))));
    bufp->fullIData(oldp+4361,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4362,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [3U][0U] >> 2U))));
    bufp->fullCData(oldp+4363,((3U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                [3U][0U])),2);
    bufp->fullIData(oldp+4364,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                        [0U] >> 0x1aU))),32);
    bufp->fullCData(oldp+4365,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [0U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4366,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [0U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4367,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [0U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4368,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [0U] >> 0xfU)))));
    bufp->fullBit(oldp+4369,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [0U] >> 0xeU)))));
    bufp->fullCData(oldp+4370,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                 [0U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4371,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                 [0U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4372,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [0U] >> 1U)))));
    bufp->fullBit(oldp+4373,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                           [0U]))));
    bufp->fullIData(oldp+4374,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                        [1U] >> 0x1aU))),32);
    bufp->fullCData(oldp+4375,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [1U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4376,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [1U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4377,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [1U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4378,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [1U] >> 0xfU)))));
    bufp->fullBit(oldp+4379,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [1U] >> 0xeU)))));
    bufp->fullCData(oldp+4380,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                 [1U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4381,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                 [1U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4382,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [1U] >> 1U)))));
    bufp->fullBit(oldp+4383,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                           [1U]))));
    bufp->fullIData(oldp+4384,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                        [2U] >> 0x1aU))),32);
    bufp->fullCData(oldp+4385,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [2U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4386,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [2U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4387,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [2U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4388,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [2U] >> 0xfU)))));
    bufp->fullBit(oldp+4389,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [2U] >> 0xeU)))));
    bufp->fullCData(oldp+4390,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                 [2U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4391,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                 [2U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4392,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [2U] >> 1U)))));
    bufp->fullBit(oldp+4393,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                           [2U]))));
    bufp->fullIData(oldp+4394,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                        [3U] >> 0x1aU))),32);
    bufp->fullCData(oldp+4395,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [3U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4396,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [3U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4397,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [3U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4398,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [3U] >> 0xfU)))));
    bufp->fullBit(oldp+4399,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [3U] >> 0xeU)))));
    bufp->fullCData(oldp+4400,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                 [3U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4401,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                 [3U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4402,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [3U] >> 1U)))));
    bufp->fullBit(oldp+4403,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                           [3U]))));
    bufp->fullBit(oldp+4404,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready[0]));
    bufp->fullBit(oldp+4405,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready[1]));
    bufp->fullBit(oldp+4406,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready[2]));
    bufp->fullBit(oldp+4407,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready[3]));
    bufp->fullBit(oldp+4408,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready[0]));
    bufp->fullBit(oldp+4409,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready[1]));
    bufp->fullBit(oldp+4410,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready[2]));
    bufp->fullBit(oldp+4411,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready[3]));
    bufp->fullCData(oldp+4412,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__wr_idx),2);
    bufp->fullCData(oldp+4413,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx),2);
    bufp->fullBit(oldp+4414,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__wr_idx_valid));
    bufp->fullBit(oldp+4415,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx_valid));
    bufp->fullIData(oldp+4416,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__unnamedblk7__DOT__i),32);
    bufp->fullIData(oldp+4417,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__unnamedblk8__DOT__i),32);
    bufp->fullQData(oldp+4418,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss),64);
    bufp->fullQData(oldp+4420,(((QData)((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
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
    bufp->fullWData(oldp+4422,(__Vtemp_9),65);
    VL_EXTENDS_WI(65,32, __Vtemp_12, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val);
    __Vtemp_13[0U] = __Vtemp_12[0U];
    __Vtemp_13[1U] = __Vtemp_12[1U];
    __Vtemp_13[2U] = (1U & __Vtemp_12[2U]);
    VL_EXTENDS_WQ(65,33, __Vtemp_15, (QData)((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)));
    __Vtemp_16[0U] = __Vtemp_15[0U];
    __Vtemp_16[1U] = __Vtemp_15[1U];
    __Vtemp_16[2U] = (1U & __Vtemp_15[2U]);
    VL_MULS_WWW(65, __Vtemp_17, __Vtemp_13, __Vtemp_16);
    bufp->fullIData(oldp+4425,(((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                               >> 0x12U)))
                                 ? ((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
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
                                 : ((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
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
    bufp->fullIData(oldp+4426,(((0U == vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                 ? 0xffffffffU : ((IData)(vlSymsp->TOP__top_tb__dut.cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                   ? 0x80000000U
                                                   : 
                                                  VL_DIVS_III(32, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)))),32);
    bufp->fullIData(oldp+4427,(((0U == vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                 ? 0xffffffffU : VL_DIV_III(32, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val))),32);
    bufp->fullBit(oldp+4428,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetchq_full));
    bufp->fullIData(oldp+4429,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_target),32);
    bufp->fullBit(oldp+4430,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp));
    bufp->fullBit(oldp+4431,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_valid));
    bufp->fullBit(oldp+4432,(((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp) 
                              & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_valid))));
    bufp->fullBit(oldp+4433,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_hit));
    bufp->fullBit(oldp+4434,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__commit_pred_taken));
    bufp->fullBit(oldp+4435,(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT____Vcellinp__tage_predictor__update_valid));
    bufp->fullCData(oldp+4436,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[0]),3);
    bufp->fullCData(oldp+4437,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[1]),3);
    bufp->fullCData(oldp+4438,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[2]),3);
    bufp->fullCData(oldp+4439,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[3]),3);
    bufp->fullCData(oldp+4440,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[4]),3);
    bufp->fullCData(oldp+4441,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[5]),3);
    bufp->fullCData(oldp+4442,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[6]),3);
    bufp->fullCData(oldp+4443,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[7]),3);
    bufp->fullCData(oldp+4444,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[8]),3);
    bufp->fullCData(oldp+4445,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[9]),3);
    bufp->fullCData(oldp+4446,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[10]),3);
    bufp->fullCData(oldp+4447,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[11]),3);
    bufp->fullCData(oldp+4448,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[12]),3);
    bufp->fullCData(oldp+4449,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[13]),3);
    bufp->fullCData(oldp+4450,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[14]),3);
    bufp->fullCData(oldp+4451,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[15]),3);
    bufp->fullCData(oldp+4452,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                        >> 2U))),4);
    bufp->fullCData(oldp+4453,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[0xaU] 
                                        >> 1U))),4);
    bufp->fullCData(oldp+4454,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_way),2);
    bufp->fullCData(oldp+4455,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_way),2);
    bufp->fullCData(oldp+4456,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_install_way),2);
    bufp->fullBit(oldp+4457,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_found));
    bufp->fullBit(oldp+4458,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_found));
    bufp->fullIData(oldp+4459,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk2__DOT__w),32);
    bufp->fullIData(oldp+4460,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk3__DOT__w),32);
    bufp->fullIData(oldp+4461,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk4__DOT__s),32);
    bufp->fullIData(oldp+4462,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__w),32);
    bufp->fullWData(oldp+4463,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_cand_ctr[0]),65);
    bufp->fullWData(oldp+4466,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_cand_ctr[1]),65);
    bufp->fullWData(oldp+4469,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_cand_ctr[2]),65);
    bufp->fullWData(oldp+4472,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_cand_ctr[3]),65);
    bufp->fullWData(oldp+4475,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_cand_ctr[4]),65);
    bufp->fullWData(oldp+4478,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_ctr[0]),65);
    bufp->fullWData(oldp+4481,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_ctr[1]),65);
    bufp->fullWData(oldp+4484,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_ctr[2]),65);
    bufp->fullWData(oldp+4487,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_ctr[3]),65);
    bufp->fullWData(oldp+4490,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_ctr[4]),65);
    bufp->fullWData(oldp+4493,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_ctr[0]),65);
    bufp->fullWData(oldp+4496,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_ctr[1]),65);
    bufp->fullWData(oldp+4499,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_ctr[2]),65);
    bufp->fullWData(oldp+4502,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_ctr[3]),65);
    bufp->fullWData(oldp+4505,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_ctr[4]),65);
    bufp->fullWData(oldp+4508,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mispred_ctr[0]),65);
    bufp->fullWData(oldp+4511,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mispred_ctr[1]),65);
    bufp->fullWData(oldp+4514,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mispred_ctr[2]),65);
    bufp->fullWData(oldp+4517,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mispred_ctr[3]),65);
    bufp->fullWData(oldp+4520,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mispred_ctr[4]),65);
    bufp->fullWData(oldp+4523,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_u_match_ctr[0]),65);
    bufp->fullWData(oldp+4526,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_u_match_ctr[1]),65);
    bufp->fullWData(oldp+4529,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_u_match_ctr[2]),65);
    bufp->fullWData(oldp+4532,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_u_match_ctr[3]),65);
    bufp->fullWData(oldp+4535,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_u_match_ctr[4]),65);
    bufp->fullWData(oldp+4538,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_match_ctr[0]),65);
    bufp->fullWData(oldp+4541,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_match_ctr[1]),65);
    bufp->fullWData(oldp+4544,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_match_ctr[2]),65);
    bufp->fullWData(oldp+4547,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_match_ctr[3]),65);
    bufp->fullWData(oldp+4550,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_match_ctr[4]),65);
    bufp->fullWData(oldp+4553,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__T4_fail_alloc_ctr),65);
    bufp->fullIData(oldp+4556,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist),32);
    bufp->fullIData(oldp+4557,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__phist),32);
    bufp->fullCData(oldp+4558,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lfsr),8);
    bufp->fullCData(oldp+4559,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_bp_idx),7);
    bufp->fullCData(oldp+4560,((0x7fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                          >> 0x19U) 
                                         ^ ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                             >> 5U) 
                                            ^ (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                               >> 0xdU))))),7);
    bufp->fullSData(oldp+4561,(((IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h9247e85f__0) 
                                ^ (3U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist))),9);
    bufp->fullSData(oldp+4562,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag),9);
    bufp->fullSData(oldp+4563,(((IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h9247e85f__0) 
                                ^ (0xfU & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist))),9);
    bufp->fullSData(oldp+4564,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag),9);
    bufp->fullSData(oldp+4565,(((IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h9247e85f__0) 
                                ^ (0xffU & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist))),9);
    bufp->fullSData(oldp+4566,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag),9);
    bufp->fullSData(oldp+4567,(((IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h9247e85f__0) 
                                ^ (IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h083e6cc3__0))),9);
    bufp->fullSData(oldp+4568,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag),9);
    bufp->fullIData(oldp+4569,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_2),32);
    bufp->fullIData(oldp+4570,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_3),32);
    bufp->fullIData(oldp+4571,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_4),32);
    bufp->fullBit(oldp+4572,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__bp_table
                                    [(0x7fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                                >> 0x19U) 
                                               ^ ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                                   >> 5U) 
                                                  ^ 
                                                  (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                                   >> 0xdU))))] 
                                    >> 1U))));
    bufp->fullBit(oldp+4573,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u));
    bufp->fullBit(oldp+4574,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u));
    bufp->fullBit(oldp+4575,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u));
    bufp->fullBit(oldp+4576,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u));
    bufp->fullBit(oldp+4577,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag));
    bufp->fullBit(oldp+4578,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag));
    bufp->fullBit(oldp+4579,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag));
    bufp->fullBit(oldp+4580,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag));
    bufp->fullIData(oldp+4581,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u),32);
    bufp->fullIData(oldp+4582,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u),32);
    bufp->fullIData(oldp+4583,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u),32);
    bufp->fullIData(oldp+4584,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u),32);
    bufp->fullIData(oldp+4585,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag),32);
    bufp->fullIData(oldp+4586,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag),32);
    bufp->fullIData(oldp+4587,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag),32);
    bufp->fullIData(oldp+4588,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag),32);
    bufp->fullCData(oldp+4589,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp),3);
    bufp->fullIData(oldp+4590,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp),32);
    bufp->fullBit(oldp+4591,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp));
    bufp->fullBit(oldp+4592,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp));
    bufp->fullBit(oldp+4593,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp));
    bufp->fullIData(oldp+4594,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp),32);
    bufp->fullIData(oldp+4595,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag),32);
    bufp->fullIData(oldp+4596,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag),32);
    bufp->fullIData(oldp+4597,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag),32);
    bufp->fullBit(oldp+4598,(((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp) 
                              != (1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table
                                        [(0x3fU & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag)] 
                                        >> 1U)))));
    bufp->fullBit(oldp+4599,(((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp) 
                              != (1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table
                                        [(0x3fU & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag)] 
                                        >> 1U)))));
    bufp->fullBit(oldp+4600,(((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp) 
                              != (1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table
                                        [(0x3fU & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag)] 
                                        >> 1U)))));
    bufp->fullIData(oldp+4601,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0U][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0U][4U] >> 9U))),32);
    bufp->fullCData(oldp+4602,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0U][4U] >> 6U))),3);
    bufp->fullIData(oldp+4603,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0U][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0U][3U] >> 6U))),32);
    bufp->fullBit(oldp+4604,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0U][3U] >> 5U))));
    bufp->fullBit(oldp+4605,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0U][3U] >> 4U))));
    bufp->fullBit(oldp+4606,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0U][3U] >> 3U))));
    bufp->fullIData(oldp+4607,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0U][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0U][2U] >> 3U))),32);
    bufp->fullIData(oldp+4608,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0U][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0U][1U] >> 3U))),32);
    bufp->fullIData(oldp+4609,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4610,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0U][0U] >> 2U))));
    bufp->fullBit(oldp+4611,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0U][0U] >> 1U))));
    bufp->fullBit(oldp+4612,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [0U][0U])));
    bufp->fullIData(oldp+4613,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [1U][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [1U][4U] >> 9U))),32);
    bufp->fullCData(oldp+4614,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [1U][4U] >> 6U))),3);
    bufp->fullIData(oldp+4615,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [1U][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [1U][3U] >> 6U))),32);
    bufp->fullBit(oldp+4616,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [1U][3U] >> 5U))));
    bufp->fullBit(oldp+4617,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [1U][3U] >> 4U))));
    bufp->fullBit(oldp+4618,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [1U][3U] >> 3U))));
    bufp->fullIData(oldp+4619,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [1U][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [1U][2U] >> 3U))),32);
    bufp->fullIData(oldp+4620,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [1U][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [1U][1U] >> 3U))),32);
    bufp->fullIData(oldp+4621,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [1U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [1U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4622,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [1U][0U] >> 2U))));
    bufp->fullBit(oldp+4623,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [1U][0U] >> 1U))));
    bufp->fullBit(oldp+4624,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [1U][0U])));
    bufp->fullIData(oldp+4625,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [2U][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [2U][4U] >> 9U))),32);
    bufp->fullCData(oldp+4626,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [2U][4U] >> 6U))),3);
    bufp->fullIData(oldp+4627,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [2U][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [2U][3U] >> 6U))),32);
    bufp->fullBit(oldp+4628,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [2U][3U] >> 5U))));
    bufp->fullBit(oldp+4629,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [2U][3U] >> 4U))));
    bufp->fullBit(oldp+4630,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [2U][3U] >> 3U))));
    bufp->fullIData(oldp+4631,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [2U][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [2U][2U] >> 3U))),32);
    bufp->fullIData(oldp+4632,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [2U][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [2U][1U] >> 3U))),32);
    bufp->fullIData(oldp+4633,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [2U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [2U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4634,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [2U][0U] >> 2U))));
    bufp->fullBit(oldp+4635,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [2U][0U] >> 1U))));
    bufp->fullBit(oldp+4636,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [2U][0U])));
    bufp->fullIData(oldp+4637,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [3U][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [3U][4U] >> 9U))),32);
    bufp->fullCData(oldp+4638,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [3U][4U] >> 6U))),3);
    bufp->fullIData(oldp+4639,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [3U][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [3U][3U] >> 6U))),32);
    bufp->fullBit(oldp+4640,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [3U][3U] >> 5U))));
    bufp->fullBit(oldp+4641,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [3U][3U] >> 4U))));
    bufp->fullBit(oldp+4642,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [3U][3U] >> 3U))));
    bufp->fullIData(oldp+4643,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [3U][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [3U][2U] >> 3U))),32);
    bufp->fullIData(oldp+4644,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [3U][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [3U][1U] >> 3U))),32);
    bufp->fullIData(oldp+4645,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [3U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [3U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4646,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [3U][0U] >> 2U))));
    bufp->fullBit(oldp+4647,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [3U][0U] >> 1U))));
    bufp->fullBit(oldp+4648,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [3U][0U])));
    bufp->fullIData(oldp+4649,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [4U][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [4U][4U] >> 9U))),32);
    bufp->fullCData(oldp+4650,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [4U][4U] >> 6U))),3);
    bufp->fullIData(oldp+4651,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [4U][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [4U][3U] >> 6U))),32);
    bufp->fullBit(oldp+4652,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [4U][3U] >> 5U))));
    bufp->fullBit(oldp+4653,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [4U][3U] >> 4U))));
    bufp->fullBit(oldp+4654,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [4U][3U] >> 3U))));
    bufp->fullIData(oldp+4655,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [4U][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [4U][2U] >> 3U))),32);
    bufp->fullIData(oldp+4656,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [4U][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [4U][1U] >> 3U))),32);
    bufp->fullIData(oldp+4657,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [4U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [4U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4658,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [4U][0U] >> 2U))));
    bufp->fullBit(oldp+4659,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [4U][0U] >> 1U))));
    bufp->fullBit(oldp+4660,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [4U][0U])));
    bufp->fullIData(oldp+4661,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [5U][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [5U][4U] >> 9U))),32);
    bufp->fullCData(oldp+4662,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [5U][4U] >> 6U))),3);
    bufp->fullIData(oldp+4663,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [5U][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [5U][3U] >> 6U))),32);
    bufp->fullBit(oldp+4664,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [5U][3U] >> 5U))));
    bufp->fullBit(oldp+4665,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [5U][3U] >> 4U))));
    bufp->fullBit(oldp+4666,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [5U][3U] >> 3U))));
    bufp->fullIData(oldp+4667,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [5U][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [5U][2U] >> 3U))),32);
    bufp->fullIData(oldp+4668,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [5U][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [5U][1U] >> 3U))),32);
    bufp->fullIData(oldp+4669,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [5U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [5U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4670,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [5U][0U] >> 2U))));
    bufp->fullBit(oldp+4671,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [5U][0U] >> 1U))));
    bufp->fullBit(oldp+4672,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [5U][0U])));
    bufp->fullIData(oldp+4673,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [6U][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [6U][4U] >> 9U))),32);
    bufp->fullCData(oldp+4674,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [6U][4U] >> 6U))),3);
    bufp->fullIData(oldp+4675,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [6U][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [6U][3U] >> 6U))),32);
    bufp->fullBit(oldp+4676,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [6U][3U] >> 5U))));
    bufp->fullBit(oldp+4677,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [6U][3U] >> 4U))));
    bufp->fullBit(oldp+4678,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [6U][3U] >> 3U))));
    bufp->fullIData(oldp+4679,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [6U][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [6U][2U] >> 3U))),32);
    bufp->fullIData(oldp+4680,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [6U][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [6U][1U] >> 3U))),32);
    bufp->fullIData(oldp+4681,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [6U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [6U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4682,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [6U][0U] >> 2U))));
    bufp->fullBit(oldp+4683,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [6U][0U] >> 1U))));
    bufp->fullBit(oldp+4684,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [6U][0U])));
    bufp->fullIData(oldp+4685,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [7U][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [7U][4U] >> 9U))),32);
    bufp->fullCData(oldp+4686,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [7U][4U] >> 6U))),3);
    bufp->fullIData(oldp+4687,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [7U][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [7U][3U] >> 6U))),32);
    bufp->fullBit(oldp+4688,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [7U][3U] >> 5U))));
    bufp->fullBit(oldp+4689,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [7U][3U] >> 4U))));
    bufp->fullBit(oldp+4690,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [7U][3U] >> 3U))));
    bufp->fullIData(oldp+4691,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [7U][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [7U][2U] >> 3U))),32);
    bufp->fullIData(oldp+4692,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [7U][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [7U][1U] >> 3U))),32);
    bufp->fullIData(oldp+4693,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [7U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [7U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4694,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [7U][0U] >> 2U))));
    bufp->fullBit(oldp+4695,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [7U][0U] >> 1U))));
    bufp->fullBit(oldp+4696,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [7U][0U])));
    bufp->fullIData(oldp+4697,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [8U][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [8U][4U] >> 9U))),32);
    bufp->fullCData(oldp+4698,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [8U][4U] >> 6U))),3);
    bufp->fullIData(oldp+4699,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [8U][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [8U][3U] >> 6U))),32);
    bufp->fullBit(oldp+4700,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [8U][3U] >> 5U))));
    bufp->fullBit(oldp+4701,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [8U][3U] >> 4U))));
    bufp->fullBit(oldp+4702,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [8U][3U] >> 3U))));
    bufp->fullIData(oldp+4703,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [8U][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [8U][2U] >> 3U))),32);
    bufp->fullIData(oldp+4704,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [8U][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [8U][1U] >> 3U))),32);
    bufp->fullIData(oldp+4705,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [8U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [8U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4706,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [8U][0U] >> 2U))));
    bufp->fullBit(oldp+4707,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [8U][0U] >> 1U))));
    bufp->fullBit(oldp+4708,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [8U][0U])));
    bufp->fullIData(oldp+4709,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [9U][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [9U][4U] >> 9U))),32);
    bufp->fullCData(oldp+4710,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [9U][4U] >> 6U))),3);
    bufp->fullIData(oldp+4711,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [9U][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [9U][3U] >> 6U))),32);
    bufp->fullBit(oldp+4712,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [9U][3U] >> 5U))));
    bufp->fullBit(oldp+4713,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [9U][3U] >> 4U))));
    bufp->fullBit(oldp+4714,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [9U][3U] >> 3U))));
    bufp->fullIData(oldp+4715,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [9U][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [9U][2U] >> 3U))),32);
    bufp->fullIData(oldp+4716,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [9U][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [9U][1U] >> 3U))),32);
    bufp->fullIData(oldp+4717,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [9U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [9U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4718,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [9U][0U] >> 2U))));
    bufp->fullBit(oldp+4719,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [9U][0U] >> 1U))));
    bufp->fullBit(oldp+4720,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [9U][0U])));
    bufp->fullIData(oldp+4721,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xaU][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xaU][4U] >> 9U))),32);
    bufp->fullCData(oldp+4722,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xaU][4U] >> 6U))),3);
    bufp->fullIData(oldp+4723,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xaU][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xaU][3U] >> 6U))),32);
    bufp->fullBit(oldp+4724,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xaU][3U] >> 5U))));
    bufp->fullBit(oldp+4725,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xaU][3U] >> 4U))));
    bufp->fullBit(oldp+4726,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xaU][3U] >> 3U))));
    bufp->fullIData(oldp+4727,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xaU][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xaU][2U] >> 3U))),32);
    bufp->fullIData(oldp+4728,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xaU][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xaU][1U] >> 3U))),32);
    bufp->fullIData(oldp+4729,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xaU][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xaU][0U] >> 3U))),32);
    bufp->fullBit(oldp+4730,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xaU][0U] >> 2U))));
    bufp->fullBit(oldp+4731,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xaU][0U] >> 1U))));
    bufp->fullBit(oldp+4732,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [0xaU][0U])));
    bufp->fullIData(oldp+4733,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xbU][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xbU][4U] >> 9U))),32);
    bufp->fullCData(oldp+4734,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xbU][4U] >> 6U))),3);
    bufp->fullIData(oldp+4735,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xbU][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xbU][3U] >> 6U))),32);
    bufp->fullBit(oldp+4736,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xbU][3U] >> 5U))));
    bufp->fullBit(oldp+4737,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xbU][3U] >> 4U))));
    bufp->fullBit(oldp+4738,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xbU][3U] >> 3U))));
    bufp->fullIData(oldp+4739,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xbU][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xbU][2U] >> 3U))),32);
    bufp->fullIData(oldp+4740,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xbU][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xbU][1U] >> 3U))),32);
    bufp->fullIData(oldp+4741,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xbU][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xbU][0U] >> 3U))),32);
    bufp->fullBit(oldp+4742,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xbU][0U] >> 2U))));
    bufp->fullBit(oldp+4743,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xbU][0U] >> 1U))));
    bufp->fullBit(oldp+4744,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [0xbU][0U])));
    bufp->fullIData(oldp+4745,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xcU][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xcU][4U] >> 9U))),32);
    bufp->fullCData(oldp+4746,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xcU][4U] >> 6U))),3);
    bufp->fullIData(oldp+4747,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xcU][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xcU][3U] >> 6U))),32);
    bufp->fullBit(oldp+4748,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xcU][3U] >> 5U))));
    bufp->fullBit(oldp+4749,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xcU][3U] >> 4U))));
    bufp->fullBit(oldp+4750,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xcU][3U] >> 3U))));
    bufp->fullIData(oldp+4751,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xcU][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xcU][2U] >> 3U))),32);
    bufp->fullIData(oldp+4752,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xcU][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xcU][1U] >> 3U))),32);
    bufp->fullIData(oldp+4753,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xcU][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xcU][0U] >> 3U))),32);
    bufp->fullBit(oldp+4754,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xcU][0U] >> 2U))));
    bufp->fullBit(oldp+4755,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xcU][0U] >> 1U))));
    bufp->fullBit(oldp+4756,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [0xcU][0U])));
    bufp->fullIData(oldp+4757,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xdU][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xdU][4U] >> 9U))),32);
    bufp->fullCData(oldp+4758,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xdU][4U] >> 6U))),3);
    bufp->fullIData(oldp+4759,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xdU][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xdU][3U] >> 6U))),32);
    bufp->fullBit(oldp+4760,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xdU][3U] >> 5U))));
    bufp->fullBit(oldp+4761,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xdU][3U] >> 4U))));
    bufp->fullBit(oldp+4762,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xdU][3U] >> 3U))));
    bufp->fullIData(oldp+4763,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xdU][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xdU][2U] >> 3U))),32);
    bufp->fullIData(oldp+4764,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xdU][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xdU][1U] >> 3U))),32);
    bufp->fullIData(oldp+4765,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xdU][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xdU][0U] >> 3U))),32);
    bufp->fullBit(oldp+4766,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xdU][0U] >> 2U))));
    bufp->fullBit(oldp+4767,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xdU][0U] >> 1U))));
    bufp->fullBit(oldp+4768,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [0xdU][0U])));
    bufp->fullIData(oldp+4769,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xeU][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xeU][4U] >> 9U))),32);
    bufp->fullCData(oldp+4770,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xeU][4U] >> 6U))),3);
    bufp->fullIData(oldp+4771,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xeU][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xeU][3U] >> 6U))),32);
    bufp->fullBit(oldp+4772,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xeU][3U] >> 5U))));
    bufp->fullBit(oldp+4773,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xeU][3U] >> 4U))));
    bufp->fullBit(oldp+4774,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xeU][3U] >> 3U))));
    bufp->fullIData(oldp+4775,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xeU][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xeU][2U] >> 3U))),32);
    bufp->fullIData(oldp+4776,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xeU][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xeU][1U] >> 3U))),32);
    bufp->fullIData(oldp+4777,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xeU][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xeU][0U] >> 3U))),32);
    bufp->fullBit(oldp+4778,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xeU][0U] >> 2U))));
    bufp->fullBit(oldp+4779,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xeU][0U] >> 1U))));
    bufp->fullBit(oldp+4780,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [0xeU][0U])));
    bufp->fullIData(oldp+4781,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xfU][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xfU][4U] >> 9U))),32);
    bufp->fullCData(oldp+4782,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xfU][4U] >> 6U))),3);
    bufp->fullIData(oldp+4783,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xfU][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xfU][3U] >> 6U))),32);
    bufp->fullBit(oldp+4784,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xfU][3U] >> 5U))));
    bufp->fullBit(oldp+4785,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xfU][3U] >> 4U))));
    bufp->fullBit(oldp+4786,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xfU][3U] >> 3U))));
    bufp->fullIData(oldp+4787,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xfU][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xfU][2U] >> 3U))),32);
    bufp->fullIData(oldp+4788,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xfU][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xfU][1U] >> 3U))),32);
    bufp->fullIData(oldp+4789,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xfU][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xfU][0U] >> 3U))),32);
    bufp->fullBit(oldp+4790,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xfU][0U] >> 2U))));
    bufp->fullBit(oldp+4791,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xfU][0U] >> 1U))));
    bufp->fullBit(oldp+4792,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [0xfU][0U])));
    bufp->fullIData(oldp+4793,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[5U] 
                                 << 0x17U) | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U] 
                                              >> 9U))),32);
    bufp->fullCData(oldp+4794,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U] 
                                      >> 6U))),3);
    bufp->fullIData(oldp+4795,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U] 
                                 << 0x1aU) | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[3U] 
                                              >> 6U))),32);
    bufp->fullBit(oldp+4796,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[3U] 
                                    >> 5U))));
    bufp->fullBit(oldp+4797,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[3U] 
                                    >> 4U))));
    bufp->fullBit(oldp+4798,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[3U] 
                                    >> 3U))));
    bufp->fullIData(oldp+4799,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[3U] 
                                 << 0x1dU) | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[2U] 
                                              >> 3U))),32);
    bufp->fullIData(oldp+4800,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[2U] 
                                 << 0x1dU) | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[1U] 
                                              >> 3U))),32);
    bufp->fullIData(oldp+4801,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[1U] 
                                 << 0x1dU) | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[0U] 
                                              >> 3U))),32);
    bufp->fullBit(oldp+4802,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[0U] 
                                    >> 2U))));
    bufp->fullBit(oldp+4803,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[0U] 
                                    >> 1U))));
    bufp->fullBit(oldp+4804,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[0U])));
    bufp->fullCData(oldp+4805,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtr),5);
    bufp->fullCData(oldp+4806,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr),5);
    bufp->fullCData(oldp+4807,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtrNext),5);
    bufp->fullBit(oldp+4808,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__full));
    bufp->fullBit(oldp+4809,((((1U & ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtr) 
                                      >> 4U)) == (1U 
                                                  & ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr) 
                                                     >> 4U))) 
                              & (IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_hc4999392__0))));
    bufp->fullBit(oldp+4810,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__fifo_valid_pop));
    bufp->fullBit(oldp+4811,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T1));
    bufp->fullBit(oldp+4812,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T2));
    bufp->fullBit(oldp+4813,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T3));
    bufp->fullBit(oldp+4814,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T4));
    bufp->fullBit(oldp+4815,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1));
    bufp->fullBit(oldp+4816,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2));
    bufp->fullBit(oldp+4817,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3));
    bufp->fullBit(oldp+4818,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4));
    bufp->fullBit(oldp+4819,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1));
    bufp->fullBit(oldp+4820,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2));
    bufp->fullBit(oldp+4821,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3));
    bufp->fullBit(oldp+4822,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4));
    bufp->fullIData(oldp+4823,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T1),32);
    bufp->fullIData(oldp+4824,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T2),32);
    bufp->fullIData(oldp+4825,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T3),32);
    bufp->fullIData(oldp+4826,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T4),32);
    bufp->fullCData(oldp+4827,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T1),6);
    bufp->fullCData(oldp+4828,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T2),6);
    bufp->fullCData(oldp+4829,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T3),6);
    bufp->fullCData(oldp+4830,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T4),6);
    bufp->fullBit(oldp+4831,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[0]));
    bufp->fullBit(oldp+4832,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[1]));
    bufp->fullBit(oldp+4833,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[2]));
    bufp->fullBit(oldp+4834,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[3]));
    bufp->fullCData(oldp+4835,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position),3);
    bufp->fullBit(oldp+4836,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__decrement_all_u));
    bufp->fullIData(oldp+4837,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1),32);
    bufp->fullIData(oldp+4838,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2),32);
    bufp->fullIData(oldp+4839,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3),32);
    bufp->fullIData(oldp+4840,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4),32);
    bufp->fullIData(oldp+4841,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count),32);
    bufp->fullIData(oldp+4842,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__target_q),32);
    bufp->fullIData(oldp+4843,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+4844,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk10__DOT__i),32);
    bufp->fullIData(oldp+4845,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk11__DOT__i),32);
    bufp->fullIData(oldp+4846,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk12__DOT__i),32);
    bufp->fullIData(oldp+4847,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk13__DOT__i),32);
    bufp->fullIData(oldp+4848,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk14__DOT__i),32);
    bufp->fullIData(oldp+4849,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk15__DOT__i),32);
    bufp->fullIData(oldp+4850,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk16__DOT__i),32);
    bufp->fullIData(oldp+4851,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk17__DOT__i),32);
    bufp->fullIData(oldp+4852,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk18__DOT__i),32);
    bufp->fullIData(oldp+4853,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk19__DOT__i),32);
    bufp->fullIData(oldp+4854,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk20__DOT__i),32);
    bufp->fullIData(oldp+4855,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk21__DOT__i),32);
    bufp->fullIData(oldp+4856,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk22__DOT__i),32);
    bufp->fullIData(oldp+4857,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk23__DOT__i),32);
    bufp->fullIData(oldp+4858,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk24__DOT__i),32);
    bufp->fullIData(oldp+4859,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk25__DOT__i),32);
    bufp->fullIData(oldp+4860,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk26__DOT__i),32);
    bufp->fullIData(oldp+4861,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk27__DOT__i),32);
    bufp->fullIData(oldp+4862,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk28__DOT__i),32);
    bufp->fullIData(oldp+4863,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+4864,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk7__DOT__i),32);
    bufp->fullIData(oldp+4865,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk8__DOT__i),32);
    bufp->fullIData(oldp+4866,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk9__DOT__i),32);
    bufp->fullBit(oldp+4867,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__stale_in_flight));
    bufp->fullBit(oldp+4868,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_empty));
    bufp->fullBit(oldp+4869,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_empty));
    bufp->fullBit(oldp+4870,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_empty));
    bufp->fullBit(oldp+4871,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_empty));
    bufp->fullBit(oldp+4872,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_full));
    bufp->fullBit(oldp+4873,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_full));
    bufp->fullBit(oldp+4874,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_full));
    bufp->fullBit(oldp+4875,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_full));
    bufp->fullBit(oldp+4876,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[0]));
    bufp->fullBit(oldp+4877,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[1]));
    bufp->fullBit(oldp+4878,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[2]));
    bufp->fullBit(oldp+4879,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[3]));
    bufp->fullBit(oldp+4880,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[4]));
    bufp->fullBit(oldp+4881,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[5]));
    bufp->fullBit(oldp+4882,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[6]));
    bufp->fullBit(oldp+4883,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[7]));
    bufp->fullCData(oldp+4884,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__wrPtr),4);
    bufp->fullCData(oldp+4885,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__rdPtr),4);
    bufp->fullIData(oldp+4886,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+4887,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[0]),32);
    bufp->fullIData(oldp+4888,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[1]),32);
    bufp->fullIData(oldp+4889,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[2]),32);
    bufp->fullIData(oldp+4890,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[3]),32);
    bufp->fullIData(oldp+4891,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[4]),32);
    bufp->fullIData(oldp+4892,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[5]),32);
    bufp->fullIData(oldp+4893,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[6]),32);
    bufp->fullIData(oldp+4894,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[7]),32);
    bufp->fullCData(oldp+4895,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__wrPtr),4);
    bufp->fullCData(oldp+4896,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__rdPtr),4);
    bufp->fullIData(oldp+4897,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+4898,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[0]),32);
    bufp->fullIData(oldp+4899,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[1]),32);
    bufp->fullIData(oldp+4900,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[2]),32);
    bufp->fullIData(oldp+4901,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[3]),32);
    bufp->fullIData(oldp+4902,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[4]),32);
    bufp->fullIData(oldp+4903,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[5]),32);
    bufp->fullIData(oldp+4904,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[6]),32);
    bufp->fullIData(oldp+4905,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[7]),32);
    bufp->fullCData(oldp+4906,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__wrPtr),4);
    bufp->fullCData(oldp+4907,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__rdPtr),4);
    bufp->fullIData(oldp+4908,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+4909,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[0]),32);
    bufp->fullIData(oldp+4910,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[1]),32);
    bufp->fullIData(oldp+4911,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[2]),32);
    bufp->fullIData(oldp+4912,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[3]),32);
    bufp->fullIData(oldp+4913,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[4]),32);
    bufp->fullIData(oldp+4914,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[5]),32);
    bufp->fullIData(oldp+4915,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[6]),32);
    bufp->fullIData(oldp+4916,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[7]),32);
    bufp->fullCData(oldp+4917,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__wrPtr),4);
    bufp->fullCData(oldp+4918,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__rdPtr),4);
    bufp->fullIData(oldp+4919,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+4920,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[0]),6);
    bufp->fullCData(oldp+4921,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[1]),6);
    bufp->fullCData(oldp+4922,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[2]),6);
    bufp->fullCData(oldp+4923,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[3]),6);
    bufp->fullCData(oldp+4924,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[4]),6);
    bufp->fullCData(oldp+4925,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[5]),6);
    bufp->fullCData(oldp+4926,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[6]),6);
    bufp->fullCData(oldp+4927,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[7]),6);
    bufp->fullCData(oldp+4928,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[8]),6);
    bufp->fullCData(oldp+4929,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[9]),6);
    bufp->fullCData(oldp+4930,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[10]),6);
    bufp->fullCData(oldp+4931,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[11]),6);
    bufp->fullCData(oldp+4932,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[12]),6);
    bufp->fullCData(oldp+4933,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[13]),6);
    bufp->fullCData(oldp+4934,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[14]),6);
    bufp->fullCData(oldp+4935,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[15]),6);
    bufp->fullCData(oldp+4936,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[16]),6);
    bufp->fullCData(oldp+4937,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[17]),6);
    bufp->fullCData(oldp+4938,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[18]),6);
    bufp->fullCData(oldp+4939,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[19]),6);
    bufp->fullCData(oldp+4940,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[20]),6);
    bufp->fullCData(oldp+4941,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[21]),6);
    bufp->fullCData(oldp+4942,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[22]),6);
    bufp->fullCData(oldp+4943,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[23]),6);
    bufp->fullCData(oldp+4944,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[24]),6);
    bufp->fullCData(oldp+4945,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[25]),6);
    bufp->fullCData(oldp+4946,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[26]),6);
    bufp->fullCData(oldp+4947,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[27]),6);
    bufp->fullCData(oldp+4948,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[28]),6);
    bufp->fullCData(oldp+4949,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[29]),6);
    bufp->fullCData(oldp+4950,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[30]),6);
    bufp->fullCData(oldp+4951,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__recover_srat_i[31]),6);
    bufp->fullBit(oldp+4952,(vlSymsp->TOP__top_tb__dut.__Vcellinp__cpu_midcore__commit_update));
    bufp->fullCData(oldp+4953,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[0]),6);
    bufp->fullCData(oldp+4954,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[1]),6);
    bufp->fullCData(oldp+4955,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[2]),6);
    bufp->fullCData(oldp+4956,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[3]),6);
    bufp->fullCData(oldp+4957,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[4]),6);
    bufp->fullCData(oldp+4958,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[5]),6);
    bufp->fullCData(oldp+4959,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[6]),6);
    bufp->fullCData(oldp+4960,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[7]),6);
    bufp->fullCData(oldp+4961,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[8]),6);
    bufp->fullCData(oldp+4962,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[9]),6);
    bufp->fullCData(oldp+4963,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[10]),6);
    bufp->fullCData(oldp+4964,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[11]),6);
    bufp->fullCData(oldp+4965,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[12]),6);
    bufp->fullCData(oldp+4966,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[13]),6);
    bufp->fullCData(oldp+4967,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[14]),6);
    bufp->fullCData(oldp+4968,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[15]),6);
    bufp->fullCData(oldp+4969,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[16]),6);
    bufp->fullCData(oldp+4970,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[17]),6);
    bufp->fullCData(oldp+4971,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[18]),6);
    bufp->fullCData(oldp+4972,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[19]),6);
    bufp->fullCData(oldp+4973,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[20]),6);
    bufp->fullCData(oldp+4974,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[21]),6);
    bufp->fullCData(oldp+4975,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[22]),6);
    bufp->fullCData(oldp+4976,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[23]),6);
    bufp->fullCData(oldp+4977,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[24]),6);
    bufp->fullCData(oldp+4978,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[25]),6);
    bufp->fullCData(oldp+4979,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[26]),6);
    bufp->fullCData(oldp+4980,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[27]),6);
    bufp->fullCData(oldp+4981,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[28]),6);
    bufp->fullCData(oldp+4982,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[29]),6);
    bufp->fullCData(oldp+4983,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[30]),6);
    bufp->fullCData(oldp+4984,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__cp_dispatch_srat[31]),6);
    bufp->fullBit(oldp+4985,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                    >> 0x12U))));
    bufp->fullBit(oldp+4986,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                    >> 0x11U))));
    bufp->fullBit(oldp+4987,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                    >> 0x10U))));
    bufp->fullCData(oldp+4988,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                         >> 0xbU))),5);
    bufp->fullCData(oldp+4989,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                         >> 5U))),6);
    bufp->fullCData(oldp+4990,((0x3fU & ((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                          << 1U) | 
                                         (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xaU] 
                                          >> 0x1fU)))),6);
    bufp->fullIData(oldp+4991,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xaU] 
                                 << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[9U] 
                                           >> 0x1fU))),32);
    bufp->fullIData(oldp+4992,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[9U] 
                                 << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[8U] 
                                           >> 0x1fU))),32);
    bufp->fullIData(oldp+4993,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[8U] 
                                 << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                           >> 0x1fU))),32);
    bufp->fullBit(oldp+4994,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+4995,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                    >> 0x1dU))));
    bufp->fullCData(oldp+4996,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                         >> 0x18U))),5);
    bufp->fullCData(oldp+4997,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                         >> 0x13U))),5);
    bufp->fullIData(oldp+4998,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                 << 0xdU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[6U] 
                                             >> 0x13U))),32);
    bufp->fullIData(oldp+4999,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[6U] 
                                 << 0xdU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[5U] 
                                             >> 0x13U))),32);
    bufp->fullCData(oldp+5000,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[5U] 
                                        >> 0xfU))),4);
    bufp->fullIData(oldp+5001,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[5U] 
                                 << 0x11U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[4U] 
                                              >> 0xfU))),32);
    bufp->fullIData(oldp+5002,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[4U] 
                                 << 0x11U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[3U] 
                                              >> 0xfU))),32);
    bufp->fullCData(oldp+5003,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[3U] 
                                        >> 0xbU))),4);
    bufp->fullCData(oldp+5004,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[3U] 
                                        >> 7U))),4);
    bufp->fullIData(oldp+5005,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[3U] 
                                 << 0x19U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[2U] 
                                              >> 7U))),32);
    bufp->fullIData(oldp+5006,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[2U] 
                                 << 0x19U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                              >> 7U))),32);
    bufp->fullBit(oldp+5007,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                    >> 6U))));
    bufp->fullBit(oldp+5008,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                    >> 5U))));
    bufp->fullBit(oldp+5009,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                    >> 4U))));
    bufp->fullBit(oldp+5010,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                    >> 3U))));
    bufp->fullIData(oldp+5011,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                 << 0x1dU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0U] 
                                              >> 3U))),32);
    bufp->fullBit(oldp+5012,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0U] 
                                    >> 2U))));
    bufp->fullCData(oldp+5013,((3U & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0U])),2);
    bufp->fullBit(oldp+5014,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                    >> 0x12U))));
    bufp->fullBit(oldp+5015,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                    >> 0x11U))));
    bufp->fullBit(oldp+5016,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                    >> 0x10U))));
    bufp->fullCData(oldp+5017,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                         >> 0xbU))),5);
    bufp->fullCData(oldp+5018,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                         >> 5U))),6);
    bufp->fullCData(oldp+5019,((0x3fU & ((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                          << 1U) | 
                                         (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xaU] 
                                          >> 0x1fU)))),6);
    bufp->fullIData(oldp+5020,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xaU] 
                                 << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[9U] 
                                           >> 0x1fU))),32);
    bufp->fullIData(oldp+5021,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[9U] 
                                 << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[8U] 
                                           >> 0x1fU))),32);
    bufp->fullIData(oldp+5022,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[8U] 
                                 << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                           >> 0x1fU))),32);
    bufp->fullBit(oldp+5023,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+5024,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                    >> 0x1dU))));
    bufp->fullCData(oldp+5025,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                         >> 0x18U))),5);
    bufp->fullCData(oldp+5026,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                         >> 0x13U))),5);
    bufp->fullIData(oldp+5027,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                 << 0xdU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[6U] 
                                             >> 0x13U))),32);
    bufp->fullIData(oldp+5028,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[6U] 
                                 << 0xdU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[5U] 
                                             >> 0x13U))),32);
    bufp->fullCData(oldp+5029,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[5U] 
                                        >> 0xfU))),4);
    bufp->fullIData(oldp+5030,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[5U] 
                                 << 0x11U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[4U] 
                                              >> 0xfU))),32);
    bufp->fullIData(oldp+5031,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[4U] 
                                 << 0x11U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[3U] 
                                              >> 0xfU))),32);
    bufp->fullCData(oldp+5032,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[3U] 
                                        >> 0xbU))),4);
    bufp->fullCData(oldp+5033,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[3U] 
                                        >> 7U))),4);
    bufp->fullIData(oldp+5034,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[3U] 
                                 << 0x19U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[2U] 
                                              >> 7U))),32);
    bufp->fullIData(oldp+5035,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[2U] 
                                 << 0x19U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                              >> 7U))),32);
    bufp->fullBit(oldp+5036,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                    >> 6U))));
    bufp->fullBit(oldp+5037,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                    >> 5U))));
    bufp->fullBit(oldp+5038,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                    >> 4U))));
    bufp->fullBit(oldp+5039,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                    >> 3U))));
    bufp->fullIData(oldp+5040,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                 << 0x1dU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0U] 
                                              >> 3U))),32);
    bufp->fullBit(oldp+5041,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0U] 
                                    >> 2U))));
    bufp->fullCData(oldp+5042,((3U & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0U])),2);
    bufp->fullBit(oldp+5043,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                    >> 0x12U))));
    bufp->fullBit(oldp+5044,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                    >> 0x11U))));
    bufp->fullBit(oldp+5045,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                    >> 0x10U))));
    bufp->fullCData(oldp+5046,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                         >> 0xbU))),5);
    bufp->fullCData(oldp+5047,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                         >> 5U))),6);
    bufp->fullCData(oldp+5048,((0x3fU & ((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                          << 1U) | 
                                         (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xaU] 
                                          >> 0x1fU)))),6);
    bufp->fullIData(oldp+5049,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xaU] 
                                 << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[9U] 
                                           >> 0x1fU))),32);
    bufp->fullIData(oldp+5050,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[9U] 
                                 << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[8U] 
                                           >> 0x1fU))),32);
    bufp->fullIData(oldp+5051,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[8U] 
                                 << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                           >> 0x1fU))),32);
    bufp->fullBit(oldp+5052,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+5053,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                    >> 0x1dU))));
    bufp->fullCData(oldp+5054,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                         >> 0x18U))),5);
    bufp->fullCData(oldp+5055,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                         >> 0x13U))),5);
    bufp->fullIData(oldp+5056,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                 << 0xdU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[6U] 
                                             >> 0x13U))),32);
    bufp->fullIData(oldp+5057,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[6U] 
                                 << 0xdU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[5U] 
                                             >> 0x13U))),32);
    bufp->fullCData(oldp+5058,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[5U] 
                                        >> 0xfU))),4);
    bufp->fullIData(oldp+5059,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[5U] 
                                 << 0x11U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[4U] 
                                              >> 0xfU))),32);
    bufp->fullIData(oldp+5060,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[4U] 
                                 << 0x11U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[3U] 
                                              >> 0xfU))),32);
    bufp->fullCData(oldp+5061,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[3U] 
                                        >> 0xbU))),4);
    bufp->fullCData(oldp+5062,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[3U] 
                                        >> 7U))),4);
    bufp->fullIData(oldp+5063,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[3U] 
                                 << 0x19U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[2U] 
                                              >> 7U))),32);
    bufp->fullIData(oldp+5064,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[2U] 
                                 << 0x19U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                              >> 7U))),32);
    bufp->fullBit(oldp+5065,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                    >> 6U))));
    bufp->fullBit(oldp+5066,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                    >> 5U))));
    bufp->fullBit(oldp+5067,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                    >> 4U))));
    bufp->fullBit(oldp+5068,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                    >> 3U))));
    bufp->fullIData(oldp+5069,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                 << 0x1dU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0U] 
                                              >> 3U))),32);
    bufp->fullBit(oldp+5070,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0U] 
                                    >> 2U))));
    bufp->fullCData(oldp+5071,((3U & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0U])),2);
    bufp->fullBit(oldp+5072,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                    >> 0x12U))));
    bufp->fullBit(oldp+5073,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                    >> 0x11U))));
    bufp->fullBit(oldp+5074,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                    >> 0x10U))));
    bufp->fullCData(oldp+5075,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                         >> 0xbU))),5);
    bufp->fullCData(oldp+5076,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                         >> 5U))),6);
    bufp->fullCData(oldp+5077,((0x3fU & ((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                          << 1U) | 
                                         (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xaU] 
                                          >> 0x1fU)))),6);
    bufp->fullIData(oldp+5078,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xaU] 
                                 << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[9U] 
                                           >> 0x1fU))),32);
    bufp->fullIData(oldp+5079,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[9U] 
                                 << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[8U] 
                                           >> 0x1fU))),32);
    bufp->fullIData(oldp+5080,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[8U] 
                                 << 1U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                           >> 0x1fU))),32);
    bufp->fullBit(oldp+5081,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+5082,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                    >> 0x1dU))));
    bufp->fullCData(oldp+5083,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                         >> 0x18U))),5);
    bufp->fullCData(oldp+5084,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                         >> 0x13U))),5);
    bufp->fullIData(oldp+5085,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                 << 0xdU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[6U] 
                                             >> 0x13U))),32);
    bufp->fullIData(oldp+5086,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[6U] 
                                 << 0xdU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[5U] 
                                             >> 0x13U))),32);
    bufp->fullIData(oldp+5087,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[5U] 
                                 << 0x11U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[4U] 
                                              >> 0xfU))),32);
    bufp->fullIData(oldp+5088,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[4U] 
                                 << 0x11U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[3U] 
                                              >> 0xfU))),32);
    bufp->fullCData(oldp+5089,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[3U] 
                                        >> 0xbU))),4);
    bufp->fullCData(oldp+5090,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[3U] 
                                        >> 7U))),4);
    bufp->fullIData(oldp+5091,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[3U] 
                                 << 0x19U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[2U] 
                                              >> 7U))),32);
    bufp->fullIData(oldp+5092,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[2U] 
                                 << 0x19U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                              >> 7U))),32);
    bufp->fullBit(oldp+5093,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                    >> 6U))));
    bufp->fullBit(oldp+5094,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                    >> 5U))));
    bufp->fullBit(oldp+5095,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                    >> 4U))));
    bufp->fullBit(oldp+5096,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                    >> 3U))));
    bufp->fullIData(oldp+5097,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                 << 0x1dU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0U] 
                                              >> 3U))),32);
    bufp->fullBit(oldp+5098,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0U] 
                                    >> 2U))));
    bufp->fullCData(oldp+5099,((3U & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0U])),2);
    bufp->fullIData(oldp+5100,((IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                        >> 0x1aU))),32);
    bufp->fullCData(oldp+5101,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+5102,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+5103,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+5104,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+5105,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                            >> 0xeU)))));
    bufp->fullCData(oldp+5106,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+5107,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+5108,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                            >> 1U)))));
    bufp->fullBit(oldp+5109,((1U & (IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o))));
    bufp->fullIData(oldp+5110,((IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                        >> 0x1aU))),32);
    bufp->fullCData(oldp+5111,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+5112,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+5113,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+5114,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+5115,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                            >> 0xeU)))));
    bufp->fullCData(oldp+5116,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+5117,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+5118,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                            >> 1U)))));
    bufp->fullBit(oldp+5119,((1U & (IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg))));
    bufp->fullIData(oldp+5120,((IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                        >> 0x1aU))),32);
    bufp->fullCData(oldp+5121,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+5122,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+5123,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+5124,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+5125,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                            >> 0xeU)))));
    bufp->fullCData(oldp+5126,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+5127,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+5128,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                            >> 1U)))));
    bufp->fullBit(oldp+5129,((1U & (IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg))));
    bufp->fullCData(oldp+5130,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_lookup_rs1),5);
    bufp->fullCData(oldp+5131,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+5132,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                         >> 7U))),5);
    bufp->fullCData(oldp+5133,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[0]),6);
    bufp->fullCData(oldp+5134,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[1]),6);
    bufp->fullCData(oldp+5135,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[2]),6);
    bufp->fullCData(oldp+5136,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[3]),6);
    bufp->fullCData(oldp+5137,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[4]),6);
    bufp->fullCData(oldp+5138,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[5]),6);
    bufp->fullCData(oldp+5139,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[6]),6);
    bufp->fullCData(oldp+5140,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[7]),6);
    bufp->fullCData(oldp+5141,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[8]),6);
    bufp->fullCData(oldp+5142,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[9]),6);
    bufp->fullCData(oldp+5143,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[10]),6);
    bufp->fullCData(oldp+5144,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[11]),6);
    bufp->fullCData(oldp+5145,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[12]),6);
    bufp->fullCData(oldp+5146,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[13]),6);
    bufp->fullCData(oldp+5147,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[14]),6);
    bufp->fullCData(oldp+5148,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[15]),6);
    bufp->fullCData(oldp+5149,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[16]),6);
    bufp->fullCData(oldp+5150,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[17]),6);
    bufp->fullCData(oldp+5151,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[18]),6);
    bufp->fullCData(oldp+5152,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[19]),6);
    bufp->fullCData(oldp+5153,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[20]),6);
    bufp->fullCData(oldp+5154,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[21]),6);
    bufp->fullCData(oldp+5155,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[22]),6);
    bufp->fullCData(oldp+5156,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[23]),6);
    bufp->fullCData(oldp+5157,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[24]),6);
    bufp->fullCData(oldp+5158,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[25]),6);
    bufp->fullCData(oldp+5159,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[26]),6);
    bufp->fullCData(oldp+5160,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[27]),6);
    bufp->fullCData(oldp+5161,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[28]),6);
    bufp->fullCData(oldp+5162,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[29]),6);
    bufp->fullCData(oldp+5163,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[30]),6);
    bufp->fullCData(oldp+5164,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_o[31]),6);
    bufp->fullCData(oldp+5165,(((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                               >> 0xfU)))
                                 ? (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                     >> 8U)))
                                 : 0U)),6);
    bufp->fullCData(oldp+5166,(((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                               >> 0xeU)))
                                 ? (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                     >> 2U)))
                                 : 0U)),6);
    bufp->fullBit(oldp+5167,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__busy_table__DOT__bt 
                                            >> ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                            >> 0xfU)))
                                                 ? 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                            >> 8U)))
                                                 : 0U))))));
    bufp->fullBit(oldp+5168,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__busy_table__DOT__bt 
                                            >> ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                            >> 0xeU)))
                                                 ? 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                            >> 2U)))
                                                 : 0U))))));
    bufp->fullCData(oldp+5169,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_pr),6);
    bufp->fullBit(oldp+5170,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_pr_valid));
    bufp->fullBit(oldp+5171,((IData)((0x50000U == (0x50000U 
                                                   & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU])))));
    bufp->fullCData(oldp+5172,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__rename_update_ar),5);
    bufp->fullBit(oldp+5173,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__is_br_or_jump));
    bufp->fullQData(oldp+5174,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__busy_table__DOT__bt),64);
    bufp->fullCData(oldp+5176,((vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+5177,((0x7fU & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)),7);
    bufp->fullIData(oldp+5178,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__i_imm),32);
    bufp->fullIData(oldp+5179,((((- (IData)((vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                             >> 0x1fU))) 
                                 << 0xbU) | ((0x7e0U 
                                              & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+5180,((((- (IData)((vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
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
    bufp->fullIData(oldp+5181,((0xfffff000U & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)),32);
    bufp->fullIData(oldp+5182,((((- (IData)((vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                             >> 0x1fU))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst) 
                                              | ((0x800U 
                                                  & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                       >> 0x14U)))))),32);
    bufp->fullCData(oldp+5183,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                      >> 0xcU))),3);
    bufp->fullBit(oldp+5184,((((IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.decode__DOT____VdfgTmp_h90d7ced5__0) 
                               | ((3U == (0x7fU & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                  | ((0x6fU == (0x7fU 
                                                & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                     | ((0x67U == (0x7fU 
                                                   & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                        | (IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.decode__DOT____VdfgExtracted_hf4d07035__0))))) 
                              & (0U != (0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                 >> 7U))))));
    bufp->fullBit(oldp+5185,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__rs1_valid));
    bufp->fullBit(oldp+5186,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__rs2_valid));
    bufp->fullBit(oldp+5187,((0x63U == (0x7fU & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst))));
    bufp->fullIData(oldp+5188,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__imm_o),32);
    bufp->fullCData(oldp+5189,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__dispatch_to),3);
    bufp->fullCData(oldp+5190,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__alu_op),4);
    bufp->fullBit(oldp+5191,(((0x6fU == (0x7fU & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                              | (0x67U == (0x7fU & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)))));
    bufp->fullQData(oldp+5192,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list),64);
    bufp->fullCData(oldp+5194,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[0]),6);
    bufp->fullCData(oldp+5195,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[1]),6);
    bufp->fullCData(oldp+5196,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[2]),6);
    bufp->fullCData(oldp+5197,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[3]),6);
    bufp->fullCData(oldp+5198,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[4]),6);
    bufp->fullCData(oldp+5199,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[5]),6);
    bufp->fullCData(oldp+5200,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[6]),6);
    bufp->fullCData(oldp+5201,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[7]),6);
    bufp->fullCData(oldp+5202,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[8]),6);
    bufp->fullCData(oldp+5203,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[9]),6);
    bufp->fullCData(oldp+5204,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[10]),6);
    bufp->fullCData(oldp+5205,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[11]),6);
    bufp->fullCData(oldp+5206,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[12]),6);
    bufp->fullCData(oldp+5207,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[13]),6);
    bufp->fullCData(oldp+5208,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[14]),6);
    bufp->fullCData(oldp+5209,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[15]),6);
    bufp->fullCData(oldp+5210,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[16]),6);
    bufp->fullCData(oldp+5211,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[17]),6);
    bufp->fullCData(oldp+5212,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[18]),6);
    bufp->fullCData(oldp+5213,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[19]),6);
    bufp->fullCData(oldp+5214,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[20]),6);
    bufp->fullCData(oldp+5215,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[21]),6);
    bufp->fullCData(oldp+5216,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[22]),6);
    bufp->fullCData(oldp+5217,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[23]),6);
    bufp->fullCData(oldp+5218,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[24]),6);
    bufp->fullCData(oldp+5219,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[25]),6);
    bufp->fullCData(oldp+5220,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[26]),6);
    bufp->fullCData(oldp+5221,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[27]),6);
    bufp->fullCData(oldp+5222,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[28]),6);
    bufp->fullCData(oldp+5223,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[29]),6);
    bufp->fullCData(oldp+5224,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[30]),6);
    bufp->fullCData(oldp+5225,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[31]),6);
    bufp->fullIData(oldp+5226,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+5227,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[0]));
    bufp->fullBit(oldp+5228,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[1]));
    bufp->fullBit(oldp+5229,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[2]));
    bufp->fullBit(oldp+5230,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[3]));
    bufp->fullBit(oldp+5231,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[4]));
    bufp->fullBit(oldp+5232,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[5]));
    bufp->fullBit(oldp+5233,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[6]));
    bufp->fullBit(oldp+5234,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[7]));
    bufp->fullQData(oldp+5235,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[0]),64);
    bufp->fullQData(oldp+5237,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[1]),64);
    bufp->fullQData(oldp+5239,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[2]),64);
    bufp->fullQData(oldp+5241,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[3]),64);
    bufp->fullQData(oldp+5243,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[4]),64);
    bufp->fullQData(oldp+5245,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[5]),64);
    bufp->fullQData(oldp+5247,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[6]),64);
    bufp->fullQData(oldp+5249,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[7]),64);
    bufp->fullIData(oldp+5251,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[0]),32);
    bufp->fullIData(oldp+5252,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[1]),32);
    bufp->fullIData(oldp+5253,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[2]),32);
    bufp->fullIData(oldp+5254,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[3]),32);
    bufp->fullIData(oldp+5255,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[4]),32);
    bufp->fullIData(oldp+5256,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[5]),32);
    bufp->fullIData(oldp+5257,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[6]),32);
    bufp->fullIData(oldp+5258,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[7]),32);
    bufp->fullBit(oldp+5259,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[0]));
    bufp->fullBit(oldp+5260,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[1]));
    bufp->fullBit(oldp+5261,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[2]));
    bufp->fullBit(oldp+5262,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[3]));
    bufp->fullBit(oldp+5263,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[4]));
    bufp->fullBit(oldp+5264,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[5]));
    bufp->fullBit(oldp+5265,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[6]));
    bufp->fullBit(oldp+5266,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[7]));
    bufp->fullCData(oldp+5267,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[0]),5);
    bufp->fullCData(oldp+5268,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[1]),5);
    bufp->fullCData(oldp+5269,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[2]),5);
    bufp->fullCData(oldp+5270,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[3]),5);
    bufp->fullCData(oldp+5271,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[4]),5);
    bufp->fullCData(oldp+5272,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[5]),5);
    bufp->fullCData(oldp+5273,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[6]),5);
    bufp->fullCData(oldp+5274,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[7]),5);
    bufp->fullCData(oldp+5275,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[0]),5);
    bufp->fullCData(oldp+5276,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[1]),5);
    bufp->fullCData(oldp+5277,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[2]),5);
    bufp->fullCData(oldp+5278,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[3]),5);
    bufp->fullCData(oldp+5279,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[4]),5);
    bufp->fullCData(oldp+5280,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[5]),5);
    bufp->fullCData(oldp+5281,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[6]),5);
    bufp->fullCData(oldp+5282,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[7]),5);
    bufp->fullIData(oldp+5283,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[0]),32);
    bufp->fullIData(oldp+5284,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[1]),32);
    bufp->fullIData(oldp+5285,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[2]),32);
    bufp->fullIData(oldp+5286,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[3]),32);
    bufp->fullIData(oldp+5287,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[4]),32);
    bufp->fullIData(oldp+5288,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[5]),32);
    bufp->fullIData(oldp+5289,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[6]),32);
    bufp->fullIData(oldp+5290,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[7]),32);
    bufp->fullIData(oldp+5291,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[0]),32);
    bufp->fullIData(oldp+5292,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[1]),32);
    bufp->fullIData(oldp+5293,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[2]),32);
    bufp->fullIData(oldp+5294,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[3]),32);
    bufp->fullIData(oldp+5295,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[4]),32);
    bufp->fullIData(oldp+5296,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[5]),32);
    bufp->fullIData(oldp+5297,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[6]),32);
    bufp->fullIData(oldp+5298,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[7]),32);
    bufp->fullCData(oldp+5299,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[0]),5);
    bufp->fullCData(oldp+5300,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[1]),5);
    bufp->fullCData(oldp+5301,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[2]),5);
    bufp->fullCData(oldp+5302,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[3]),5);
    bufp->fullCData(oldp+5303,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[4]),5);
    bufp->fullCData(oldp+5304,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[5]),5);
    bufp->fullCData(oldp+5305,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[6]),5);
    bufp->fullCData(oldp+5306,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[7]),5);
    bufp->fullIData(oldp+5307,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[0]),32);
    bufp->fullIData(oldp+5308,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[1]),32);
    bufp->fullIData(oldp+5309,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[2]),32);
    bufp->fullIData(oldp+5310,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[3]),32);
    bufp->fullIData(oldp+5311,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[4]),32);
    bufp->fullIData(oldp+5312,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[5]),32);
    bufp->fullIData(oldp+5313,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[6]),32);
    bufp->fullIData(oldp+5314,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[7]),32);
    bufp->fullIData(oldp+5315,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[0]),32);
    bufp->fullIData(oldp+5316,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[1]),32);
    bufp->fullIData(oldp+5317,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[2]),32);
    bufp->fullIData(oldp+5318,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[3]),32);
    bufp->fullIData(oldp+5319,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[4]),32);
    bufp->fullIData(oldp+5320,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[5]),32);
    bufp->fullIData(oldp+5321,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[6]),32);
    bufp->fullIData(oldp+5322,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[7]),32);
    bufp->fullIData(oldp+5323,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[0]),32);
    bufp->fullIData(oldp+5324,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[1]),32);
    bufp->fullIData(oldp+5325,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[2]),32);
    bufp->fullIData(oldp+5326,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[3]),32);
    bufp->fullIData(oldp+5327,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[4]),32);
    bufp->fullIData(oldp+5328,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[5]),32);
    bufp->fullIData(oldp+5329,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[6]),32);
    bufp->fullIData(oldp+5330,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[7]),32);
    bufp->fullIData(oldp+5331,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[0]),32);
    bufp->fullIData(oldp+5332,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[1]),32);
    bufp->fullIData(oldp+5333,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[2]),32);
    bufp->fullIData(oldp+5334,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[3]),32);
    bufp->fullIData(oldp+5335,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[4]),32);
    bufp->fullIData(oldp+5336,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[5]),32);
    bufp->fullIData(oldp+5337,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[6]),32);
    bufp->fullIData(oldp+5338,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[7]),32);
    bufp->fullCData(oldp+5339,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[0]),4);
    bufp->fullCData(oldp+5340,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[1]),4);
    bufp->fullCData(oldp+5341,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[2]),4);
    bufp->fullCData(oldp+5342,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[3]),4);
    bufp->fullCData(oldp+5343,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[4]),4);
    bufp->fullCData(oldp+5344,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[5]),4);
    bufp->fullCData(oldp+5345,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[6]),4);
    bufp->fullCData(oldp+5346,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[7]),4);
    bufp->fullCData(oldp+5347,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[0]),4);
    bufp->fullCData(oldp+5348,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[1]),4);
    bufp->fullCData(oldp+5349,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[2]),4);
    bufp->fullCData(oldp+5350,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[3]),4);
    bufp->fullCData(oldp+5351,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[4]),4);
    bufp->fullCData(oldp+5352,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[5]),4);
    bufp->fullCData(oldp+5353,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[6]),4);
    bufp->fullCData(oldp+5354,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[7]),4);
    bufp->fullIData(oldp+5355,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[0]),32);
    bufp->fullIData(oldp+5356,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[1]),32);
    bufp->fullIData(oldp+5357,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[2]),32);
    bufp->fullIData(oldp+5358,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[3]),32);
    bufp->fullIData(oldp+5359,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[4]),32);
    bufp->fullIData(oldp+5360,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[5]),32);
    bufp->fullIData(oldp+5361,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[6]),32);
    bufp->fullIData(oldp+5362,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[7]),32);
    bufp->fullIData(oldp+5363,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[0]),32);
    bufp->fullIData(oldp+5364,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[1]),32);
    bufp->fullIData(oldp+5365,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[2]),32);
    bufp->fullIData(oldp+5366,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[3]),32);
    bufp->fullIData(oldp+5367,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[4]),32);
    bufp->fullIData(oldp+5368,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[5]),32);
    bufp->fullIData(oldp+5369,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[6]),32);
    bufp->fullIData(oldp+5370,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[7]),32);
    bufp->fullBit(oldp+5371,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+5372,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+5373,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+5374,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 7U))),5);
    bufp->fullIData(oldp+5375,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+5376,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[0U])),32);
    bufp->fullBit(oldp+5377,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+5378,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result
                                 : 0U)),32);
    bufp->fullBit(oldp+5379,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+5380,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5381,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+5382,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                    & VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5383,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+5384,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[0U] 
                                    + (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5385,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+5386,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+5387,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+5388,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+5389,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+5390,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+5391,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+5392,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+5393,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+5394,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+5395,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+5396,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+5397,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+5398,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+5399,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+5400,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+5401,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+5402,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+5403,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+5404,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 2U))),5);
    bufp->fullIData(oldp+5405,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[0U])),32);
    bufp->fullBit(oldp+5406,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+5407,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                    + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5408,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+5409,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                    + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                 : 0U)),32);
    bufp->fullBit(oldp+5410,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+5411,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 2U)))),5);
    bufp->fullIData(oldp+5412,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+5413,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+5414,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))),5);
    bufp->fullIData(oldp+5415,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+5416,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+5417,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+5418,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+5419,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+5420,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+5421,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+5422,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+5423,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+5424,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+5425,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+5426,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+5427,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+5428,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])),32);
    bufp->fullBit(oldp+5429,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+5430,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+5431,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+5432,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+5433,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                 : 0U)),32);
    bufp->fullBit(oldp+5434,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+5435,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+5436,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[0U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+5437,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+5438,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+5439,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+5440,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+5441,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[0U], 
                                                 VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                 : 0U)),32);
    bufp->fullIData(oldp+5442,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+5443,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+5444,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+5445,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]
                                 : 0U)),32);
    bufp->fullBit(oldp+5446,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+5447,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+5448,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+5449,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+5450,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+5451,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+5452,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+5453,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+5454,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+5455,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+5456,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+5457,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+5458,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+5459,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+5460,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+5461,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+5462,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+5463,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+5464,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+5465,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+5466,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                     ? 0xffffffffU : 
                                    (((0x80000000U 
                                       == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]) 
                                      & (0xffffffffU 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                      ? 0x80000000U
                                      : VL_DIVS_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])))
                                 : 0U)),32);
    bufp->fullBit(oldp+5467,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+5468,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                     ? 0xffffffffU : 
                                    VL_DIV_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5469,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+5470,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+5471,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+5472,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+5473,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+5474,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+5475,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+5476,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullIData(oldp+5477,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+5478,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+5479,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+5480,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+5481,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+5482,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+5483,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,16, 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullCData(oldp+5484,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+5485,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+5486,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+5487,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+5488,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])
                                 : 0U)),32);
    bufp->fullBit(oldp+5489,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+5490,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+5491,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result
                                 : 0U)),32);
    bufp->fullCData(oldp+5492,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+5493,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+5494,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                    * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                 : 0U)),32);
    bufp->fullBit(oldp+5495,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+5496,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
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
    bufp->fullBit(oldp+5497,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+5498,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__VdfgTmp_hb1a4827e__0 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+5499,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+5500,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (IData)((((QData)((IData)(
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])) 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+5501,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+5502,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5503,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+5504,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                    | VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5505,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+5506,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
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
    bufp->fullBit(oldp+5507,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+5508,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                     ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]
                                     : VL_MODDIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5509,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+5510,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+5511,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+5512,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+5513,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+5514,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+5515,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+5516,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+5517,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                    << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5518,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+5519,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5520,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+5521,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_blt__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+5522,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+5523,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                              VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                             >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5524,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+5525,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                    < VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5526,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+5527,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_bltu__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+5528,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+5529,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,5, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                  (0x1fU 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5530,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+5531,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                      >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5532,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+5533,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                    >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5534,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+5535,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5536,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+5537,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5538,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+5539,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+5540,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+5541,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+5542,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5543,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+5544,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                    ^ VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullCData(oldp+5545,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+5546,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+5547,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])),7);
    bufp->fullIData(oldp+5548,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])),32);
    bufp->fullIData(oldp+5549,(VL_EXTENDS_II(32,12, 
                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                              >> 0x14U))),32);
    bufp->fullIData(oldp+5550,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+5551,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                & VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5552,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])),32);
    bufp->fullIData(oldp+5553,(VL_EXTENDS_II(32,13, 
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
    bufp->fullBit(oldp+5554,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                              == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
    bufp->fullBit(oldp+5555,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
    bufp->fullBit(oldp+5556,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                              >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
    bufp->fullBit(oldp+5557,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+5558,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+5559,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                              != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
    bufp->fullIData(oldp+5560,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U], 0x10U)),32);
    bufp->fullCData(oldp+5561,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                        >> 0xcU))),4);
    bufp->fullCData(oldp+5562,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])),2);
    bufp->fullIData(oldp+5563,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+5564,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                      >> 0xdU))),3);
    bufp->fullIData(oldp+5565,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+5566,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+5567,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+5568,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+5569,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 0xaU))),6);
    bufp->fullCData(oldp+5570,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                      >> 5U))),2);
    bufp->fullCData(oldp+5571,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+5572,(VL_EXTENDS_II(32,9, 
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
    bufp->fullBit(oldp+5573,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])));
    bufp->fullBit(oldp+5574,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])));
    bufp->fullIData(oldp+5575,(VL_EXTENDS_II(32,12, 
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
    bufp->fullIData(oldp+5576,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+5577,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                          << 1U)) | 
                                ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                           >> 7U)) 
                                 | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                          >> 4U))))),32);
    bufp->fullIData(oldp+5578,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+5579,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                          << 4U)) | 
                                ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                           >> 7U)) 
                                 | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                             >> 2U))))),32);
    bufp->fullIData(oldp+5580,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+5581,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[0U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+5582,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+5583,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+5584,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                          >> 1U)) | 
                                (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                          >> 7U)))),32);
    bufp->fullIData(oldp+5585,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+5586,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                 ? 0xffffffffU : ((
                                                   (0x80000000U 
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
    bufp->fullIData(oldp+5587,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                 ? 0xffffffffU : VL_DIV_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
    bufp->fullIData(oldp+5588,(VL_EXTENDS_II(32,21, 
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
    bufp->fullCData(oldp+5589,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+5590,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+5591,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+5592,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])),32);
    bufp->fullIData(oldp+5593,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U] 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+5594,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+5595,((IData)((((QData)((IData)(
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])) 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+5596,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                | VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5597,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]
                                 : (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                     ? 0U : VL_MODDIVS_III(32, 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])))),32);
    bufp->fullIData(oldp+5598,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]
                                 : VL_MODDIV_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
    bufp->fullIData(oldp+5599,(VL_EXTENDS_II(32,12, 
                                             ((0xfe0U 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                    >> 7U))))),32);
    bufp->fullIData(oldp+5600,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+5601,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])),6);
    bufp->fullIData(oldp+5602,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
    bufp->fullCData(oldp+5603,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                >> 0x1aU)),7);
    bufp->fullCData(oldp+5604,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 0x14U))),6);
    bufp->fullIData(oldp+5605,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5606,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+5607,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                          VL_EXTENDS_II(32,12, 
                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                         >> 0x14U)))),32);
    bufp->fullIData(oldp+5608,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                < VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5609,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+5610,(VL_SHIFTRS_III(32,32,5, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                              (0x1fU 
                                               & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
    bufp->fullIData(oldp+5611,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+5612,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
    bufp->fullIData(oldp+5613,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5614,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                ^ VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 0x14U)))),32);
    bufp->fullBit(oldp+5615,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+5616,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+5617,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+5618,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 7U))),5);
    bufp->fullIData(oldp+5619,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+5620,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[1U])),32);
    bufp->fullBit(oldp+5621,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+5622,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result
                                 : 0U)),32);
    bufp->fullBit(oldp+5623,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+5624,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5625,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+5626,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                    & VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5627,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+5628,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[1U] 
                                    + (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5629,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+5630,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+5631,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+5632,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+5633,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+5634,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+5635,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+5636,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+5637,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+5638,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+5639,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+5640,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+5641,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+5642,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+5643,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+5644,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+5645,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+5646,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+5647,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+5648,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 2U))),5);
    bufp->fullIData(oldp+5649,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[1U])),32);
    bufp->fullBit(oldp+5650,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+5651,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                    + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5652,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+5653,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                    + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                 : 0U)),32);
    bufp->fullBit(oldp+5654,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+5655,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 2U)))),5);
    bufp->fullIData(oldp+5656,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+5657,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+5658,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))),5);
    bufp->fullIData(oldp+5659,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+5660,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+5661,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+5662,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+5663,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+5664,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+5665,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+5666,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+5667,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+5668,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+5669,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+5670,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+5671,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+5672,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])),32);
    bufp->fullBit(oldp+5673,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+5674,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+5675,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+5676,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+5677,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                 : 0U)),32);
    bufp->fullBit(oldp+5678,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+5679,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+5680,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[1U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+5681,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+5682,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+5683,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+5684,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+5685,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[1U], 
                                                 VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                 : 0U)),32);
    bufp->fullIData(oldp+5686,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+5687,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+5688,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+5689,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]
                                 : 0U)),32);
    bufp->fullBit(oldp+5690,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+5691,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+5692,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+5693,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+5694,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+5695,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+5696,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+5697,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+5698,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+5699,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+5700,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+5701,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+5702,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+5703,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+5704,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+5705,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+5706,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+5707,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+5708,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+5709,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+5710,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                     ? 0xffffffffU : 
                                    (((0x80000000U 
                                       == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]) 
                                      & (0xffffffffU 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                      ? 0x80000000U
                                      : VL_DIVS_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])))
                                 : 0U)),32);
    bufp->fullBit(oldp+5711,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+5712,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                     ? 0xffffffffU : 
                                    VL_DIV_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5713,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+5714,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+5715,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+5716,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+5717,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+5718,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+5719,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+5720,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullIData(oldp+5721,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+5722,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+5723,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+5724,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+5725,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+5726,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+5727,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,16, 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullCData(oldp+5728,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+5729,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+5730,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+5731,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+5732,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])
                                 : 0U)),32);
    bufp->fullBit(oldp+5733,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+5734,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+5735,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result
                                 : 0U)),32);
    bufp->fullCData(oldp+5736,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+5737,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+5738,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                    * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                 : 0U)),32);
    bufp->fullBit(oldp+5739,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+5740,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
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
    bufp->fullBit(oldp+5741,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+5742,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__VdfgTmp_hb1a4827e__0 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+5743,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+5744,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (IData)((((QData)((IData)(
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])) 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+5745,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+5746,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5747,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+5748,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                    | VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5749,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+5750,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
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
    bufp->fullBit(oldp+5751,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+5752,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                     ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]
                                     : VL_MODDIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5753,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+5754,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+5755,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+5756,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+5757,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+5758,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+5759,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+5760,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+5761,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                    << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5762,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+5763,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5764,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+5765,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_blt__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+5766,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+5767,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                              VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                             >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5768,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+5769,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                    < VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5770,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+5771,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_bltu__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+5772,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+5773,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,5, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                  (0x1fU 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5774,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+5775,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                      >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5776,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+5777,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                    >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5778,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+5779,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5780,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+5781,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5782,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+5783,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+5784,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+5785,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+5786,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5787,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+5788,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                    ^ VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullCData(oldp+5789,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+5790,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+5791,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])),7);
    bufp->fullIData(oldp+5792,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])),32);
    bufp->fullIData(oldp+5793,(VL_EXTENDS_II(32,12, 
                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                              >> 0x14U))),32);
    bufp->fullIData(oldp+5794,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+5795,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                & VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5796,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])),32);
    bufp->fullIData(oldp+5797,(VL_EXTENDS_II(32,13, 
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
    bufp->fullBit(oldp+5798,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                              == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
    bufp->fullBit(oldp+5799,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
    bufp->fullBit(oldp+5800,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                              >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
    bufp->fullBit(oldp+5801,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+5802,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+5803,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                              != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
    bufp->fullIData(oldp+5804,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U], 0x10U)),32);
    bufp->fullCData(oldp+5805,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                        >> 0xcU))),4);
    bufp->fullCData(oldp+5806,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])),2);
    bufp->fullIData(oldp+5807,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+5808,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                      >> 0xdU))),3);
    bufp->fullIData(oldp+5809,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+5810,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+5811,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+5812,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+5813,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 0xaU))),6);
    bufp->fullCData(oldp+5814,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                      >> 5U))),2);
    bufp->fullCData(oldp+5815,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+5816,(VL_EXTENDS_II(32,9, 
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
    bufp->fullBit(oldp+5817,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])));
    bufp->fullBit(oldp+5818,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])));
    bufp->fullIData(oldp+5819,(VL_EXTENDS_II(32,12, 
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
    bufp->fullIData(oldp+5820,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+5821,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                          << 1U)) | 
                                ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                           >> 7U)) 
                                 | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                          >> 4U))))),32);
    bufp->fullIData(oldp+5822,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+5823,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                          << 4U)) | 
                                ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                           >> 7U)) 
                                 | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                             >> 2U))))),32);
    bufp->fullIData(oldp+5824,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+5825,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[1U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+5826,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+5827,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+5828,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                          >> 1U)) | 
                                (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                          >> 7U)))),32);
    bufp->fullIData(oldp+5829,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+5830,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                 ? 0xffffffffU : ((
                                                   (0x80000000U 
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
    bufp->fullIData(oldp+5831,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                 ? 0xffffffffU : VL_DIV_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
    bufp->fullIData(oldp+5832,(VL_EXTENDS_II(32,21, 
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
    bufp->fullCData(oldp+5833,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+5834,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+5835,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+5836,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])),32);
    bufp->fullIData(oldp+5837,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U] 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+5838,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+5839,((IData)((((QData)((IData)(
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])) 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+5840,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                | VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5841,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]
                                 : (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                     ? 0U : VL_MODDIVS_III(32, 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])))),32);
    bufp->fullIData(oldp+5842,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]
                                 : VL_MODDIV_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
    bufp->fullIData(oldp+5843,(VL_EXTENDS_II(32,12, 
                                             ((0xfe0U 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                    >> 7U))))),32);
    bufp->fullIData(oldp+5844,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+5845,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])),6);
    bufp->fullIData(oldp+5846,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
    bufp->fullCData(oldp+5847,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                >> 0x1aU)),7);
    bufp->fullCData(oldp+5848,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 0x14U))),6);
    bufp->fullIData(oldp+5849,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5850,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+5851,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                          VL_EXTENDS_II(32,12, 
                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                         >> 0x14U)))),32);
    bufp->fullIData(oldp+5852,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                < VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5853,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+5854,(VL_SHIFTRS_III(32,32,5, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                              (0x1fU 
                                               & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
    bufp->fullIData(oldp+5855,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+5856,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
    bufp->fullIData(oldp+5857,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5858,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                ^ VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 0x14U)))),32);
    bufp->fullBit(oldp+5859,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+5860,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+5861,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+5862,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 7U))),5);
    bufp->fullIData(oldp+5863,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+5864,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[2U])),32);
    bufp->fullBit(oldp+5865,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+5866,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result
                                 : 0U)),32);
    bufp->fullBit(oldp+5867,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+5868,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5869,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+5870,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                    & VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5871,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+5872,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[2U] 
                                    + (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5873,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+5874,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+5875,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+5876,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+5877,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+5878,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+5879,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+5880,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+5881,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+5882,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+5883,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+5884,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+5885,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+5886,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+5887,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+5888,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+5889,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+5890,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+5891,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+5892,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 2U))),5);
    bufp->fullIData(oldp+5893,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[2U])),32);
    bufp->fullBit(oldp+5894,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+5895,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                    + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5896,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+5897,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                    + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                 : 0U)),32);
    bufp->fullBit(oldp+5898,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+5899,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 2U)))),5);
    bufp->fullIData(oldp+5900,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+5901,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+5902,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))),5);
    bufp->fullIData(oldp+5903,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+5904,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+5905,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+5906,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+5907,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+5908,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+5909,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+5910,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+5911,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+5912,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+5913,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+5914,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+5915,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+5916,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])),32);
    bufp->fullBit(oldp+5917,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+5918,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+5919,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+5920,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+5921,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                 : 0U)),32);
    bufp->fullBit(oldp+5922,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+5923,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+5924,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[2U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+5925,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+5926,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+5927,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+5928,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+5929,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[2U], 
                                                 VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                 : 0U)),32);
    bufp->fullIData(oldp+5930,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+5931,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+5932,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+5933,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]
                                 : 0U)),32);
    bufp->fullBit(oldp+5934,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+5935,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+5936,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+5937,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+5938,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+5939,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+5940,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+5941,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+5942,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+5943,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+5944,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+5945,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+5946,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+5947,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+5948,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+5949,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+5950,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+5951,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+5952,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+5953,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+5954,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                     ? 0xffffffffU : 
                                    (((0x80000000U 
                                       == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]) 
                                      & (0xffffffffU 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                      ? 0x80000000U
                                      : VL_DIVS_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])))
                                 : 0U)),32);
    bufp->fullBit(oldp+5955,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+5956,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                     ? 0xffffffffU : 
                                    VL_DIV_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5957,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+5958,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+5959,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+5960,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+5961,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+5962,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+5963,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+5964,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullIData(oldp+5965,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+5966,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+5967,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+5968,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+5969,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+5970,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+5971,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,16, 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullCData(oldp+5972,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+5973,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+5974,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+5975,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+5976,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])
                                 : 0U)),32);
    bufp->fullBit(oldp+5977,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+5978,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+5979,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result
                                 : 0U)),32);
    bufp->fullCData(oldp+5980,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+5981,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+5982,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                    * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                 : 0U)),32);
    bufp->fullBit(oldp+5983,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+5984,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
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
    bufp->fullBit(oldp+5985,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+5986,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__VdfgTmp_hb1a4827e__0 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+5987,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+5988,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (IData)((((QData)((IData)(
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])) 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+5989,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+5990,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5991,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+5992,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                    | VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5993,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+5994,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
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
    bufp->fullBit(oldp+5995,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+5996,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                     ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]
                                     : VL_MODDIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5997,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+5998,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+5999,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+6000,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+6001,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+6002,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+6003,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+6004,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+6005,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                    << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6006,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+6007,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6008,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+6009,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_blt__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+6010,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+6011,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                              VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                             >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6012,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+6013,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                    < VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6014,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+6015,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_bltu__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+6016,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+6017,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,5, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                  (0x1fU 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6018,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+6019,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                      >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6020,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+6021,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                    >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6022,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+6023,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6024,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+6025,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6026,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+6027,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+6028,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+6029,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+6030,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6031,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+6032,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                    ^ VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullCData(oldp+6033,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+6034,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+6035,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])),7);
    bufp->fullIData(oldp+6036,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])),32);
    bufp->fullIData(oldp+6037,(VL_EXTENDS_II(32,12, 
                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                              >> 0x14U))),32);
    bufp->fullIData(oldp+6038,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+6039,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                & VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6040,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])),32);
    bufp->fullIData(oldp+6041,(VL_EXTENDS_II(32,13, 
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
    bufp->fullBit(oldp+6042,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                              == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
    bufp->fullBit(oldp+6043,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
    bufp->fullBit(oldp+6044,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                              >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
    bufp->fullBit(oldp+6045,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+6046,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+6047,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                              != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
    bufp->fullIData(oldp+6048,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U], 0x10U)),32);
    bufp->fullCData(oldp+6049,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                        >> 0xcU))),4);
    bufp->fullCData(oldp+6050,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])),2);
    bufp->fullIData(oldp+6051,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+6052,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                      >> 0xdU))),3);
    bufp->fullIData(oldp+6053,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+6054,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+6055,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+6056,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+6057,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 0xaU))),6);
    bufp->fullCData(oldp+6058,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                      >> 5U))),2);
    bufp->fullCData(oldp+6059,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+6060,(VL_EXTENDS_II(32,9, 
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
    bufp->fullBit(oldp+6061,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])));
    bufp->fullBit(oldp+6062,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])));
    bufp->fullIData(oldp+6063,(VL_EXTENDS_II(32,12, 
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
    bufp->fullIData(oldp+6064,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+6065,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                          << 1U)) | 
                                ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                           >> 7U)) 
                                 | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                          >> 4U))))),32);
    bufp->fullIData(oldp+6066,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+6067,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                          << 4U)) | 
                                ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                           >> 7U)) 
                                 | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                             >> 2U))))),32);
    bufp->fullIData(oldp+6068,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+6069,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[2U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+6070,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+6071,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+6072,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                          >> 1U)) | 
                                (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                          >> 7U)))),32);
    bufp->fullIData(oldp+6073,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+6074,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                 ? 0xffffffffU : ((
                                                   (0x80000000U 
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
    bufp->fullIData(oldp+6075,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                 ? 0xffffffffU : VL_DIV_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
    bufp->fullIData(oldp+6076,(VL_EXTENDS_II(32,21, 
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
    bufp->fullCData(oldp+6077,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+6078,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+6079,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+6080,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])),32);
    bufp->fullIData(oldp+6081,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U] 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6082,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6083,((IData)((((QData)((IData)(
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])) 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6084,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                | VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6085,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]
                                 : (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                     ? 0U : VL_MODDIVS_III(32, 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])))),32);
    bufp->fullIData(oldp+6086,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]
                                 : VL_MODDIV_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
    bufp->fullIData(oldp+6087,(VL_EXTENDS_II(32,12, 
                                             ((0xfe0U 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                    >> 7U))))),32);
    bufp->fullIData(oldp+6088,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+6089,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])),6);
    bufp->fullIData(oldp+6090,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
    bufp->fullCData(oldp+6091,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                >> 0x1aU)),7);
    bufp->fullCData(oldp+6092,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 0x14U))),6);
    bufp->fullIData(oldp+6093,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6094,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+6095,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                          VL_EXTENDS_II(32,12, 
                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                         >> 0x14U)))),32);
    bufp->fullIData(oldp+6096,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                < VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6097,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+6098,(VL_SHIFTRS_III(32,32,5, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                              (0x1fU 
                                               & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
    bufp->fullIData(oldp+6099,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+6100,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
    bufp->fullIData(oldp+6101,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6102,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                ^ VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 0x14U)))),32);
    bufp->fullBit(oldp+6103,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+6104,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+6105,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+6106,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 7U))),5);
    bufp->fullIData(oldp+6107,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+6108,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U])),32);
    bufp->fullBit(oldp+6109,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+6110,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result
                                 : 0U)),32);
    bufp->fullBit(oldp+6111,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+6112,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6113,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+6114,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                    & VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6115,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+6116,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U] 
                                    + (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6117,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+6118,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+6119,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+6120,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+6121,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+6122,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+6123,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+6124,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+6125,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+6126,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+6127,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+6128,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+6129,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+6130,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+6131,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+6132,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+6133,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+6134,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+6135,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+6136,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 2U))),5);
    bufp->fullIData(oldp+6137,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U])),32);
    bufp->fullBit(oldp+6138,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+6139,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                    + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6140,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+6141,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                    + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                 : 0U)),32);
    bufp->fullBit(oldp+6142,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+6143,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 2U)))),5);
    bufp->fullIData(oldp+6144,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+6145,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+6146,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))),5);
    bufp->fullIData(oldp+6147,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+6148,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+6149,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+6150,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+6151,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+6152,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+6153,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+6154,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+6155,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+6156,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+6157,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+6158,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+6159,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+6160,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])),32);
    bufp->fullBit(oldp+6161,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+6162,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+6163,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+6164,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+6165,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                 : 0U)),32);
    bufp->fullBit(oldp+6166,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+6167,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+6168,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[3U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+6169,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+6170,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+6171,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+6172,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+6173,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[3U], 
                                                 VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                 : 0U)),32);
    bufp->fullIData(oldp+6174,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+6175,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+6176,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+6177,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]
                                 : 0U)),32);
    bufp->fullBit(oldp+6178,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+6179,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+6180,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+6181,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+6182,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+6183,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+6184,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+6185,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+6186,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+6187,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+6188,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+6189,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+6190,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+6191,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+6192,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+6193,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+6194,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+6195,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+6196,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+6197,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+6198,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                     ? 0xffffffffU : 
                                    (((0x80000000U 
                                       == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]) 
                                      & (0xffffffffU 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                      ? 0x80000000U
                                      : VL_DIVS_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))
                                 : 0U)),32);
    bufp->fullBit(oldp+6199,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+6200,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                     ? 0xffffffffU : 
                                    VL_DIV_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6201,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+6202,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+6203,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+6204,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+6205,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+6206,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+6207,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+6208,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullIData(oldp+6209,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+6210,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6211,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+6212,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+6213,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+6214,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+6215,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,16, 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullCData(oldp+6216,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6217,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+6218,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+6219,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+6220,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])
                                 : 0U)),32);
    bufp->fullBit(oldp+6221,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+6222,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+6223,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result
                                 : 0U)),32);
    bufp->fullCData(oldp+6224,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6225,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+6226,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                    * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                 : 0U)),32);
    bufp->fullBit(oldp+6227,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+6228,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
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
    bufp->fullBit(oldp+6229,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+6230,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__VdfgTmp_hb1a4827e__0 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+6231,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+6232,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (IData)((((QData)((IData)(
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])) 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+6233,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+6234,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6235,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+6236,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                    | VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6237,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+6238,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
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
    bufp->fullBit(oldp+6239,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+6240,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                     ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]
                                     : VL_MODDIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6241,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+6242,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+6243,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+6244,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+6245,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+6246,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+6247,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+6248,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+6249,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                    << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6250,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+6251,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6252,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+6253,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_blt__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+6254,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+6255,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                              VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                             >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6256,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+6257,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                    < VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6258,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+6259,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_bltu__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+6260,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+6261,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,5, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                  (0x1fU 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6262,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+6263,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6264,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+6265,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                    >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6266,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+6267,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6268,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+6269,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6270,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+6271,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+6272,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+6273,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+6274,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6275,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+6276,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                    ^ VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullCData(oldp+6277,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+6278,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+6279,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])),7);
    bufp->fullIData(oldp+6280,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])),32);
    bufp->fullIData(oldp+6281,(VL_EXTENDS_II(32,12, 
                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                              >> 0x14U))),32);
    bufp->fullIData(oldp+6282,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+6283,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                & VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6284,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])),32);
    bufp->fullIData(oldp+6285,(VL_EXTENDS_II(32,13, 
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
    bufp->fullBit(oldp+6286,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                              == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
    bufp->fullBit(oldp+6287,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
    bufp->fullBit(oldp+6288,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                              >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
    bufp->fullBit(oldp+6289,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+6290,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+6291,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                              != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
    bufp->fullIData(oldp+6292,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)),32);
    bufp->fullCData(oldp+6293,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                        >> 0xcU))),4);
    bufp->fullCData(oldp+6294,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])),2);
    bufp->fullIData(oldp+6295,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+6296,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                      >> 0xdU))),3);
    bufp->fullIData(oldp+6297,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+6298,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+6299,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+6300,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+6301,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 0xaU))),6);
    bufp->fullCData(oldp+6302,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                      >> 5U))),2);
    bufp->fullCData(oldp+6303,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+6304,(VL_EXTENDS_II(32,9, 
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
    bufp->fullBit(oldp+6305,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])));
    bufp->fullBit(oldp+6306,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])));
    bufp->fullIData(oldp+6307,(VL_EXTENDS_II(32,12, 
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
    bufp->fullIData(oldp+6308,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+6309,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                          << 1U)) | 
                                ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                           >> 7U)) 
                                 | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                          >> 4U))))),32);
    bufp->fullIData(oldp+6310,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+6311,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                          << 4U)) | 
                                ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                           >> 7U)) 
                                 | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                             >> 2U))))),32);
    bufp->fullIData(oldp+6312,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+6313,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[3U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+6314,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+6315,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+6316,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                          >> 1U)) | 
                                (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                          >> 7U)))),32);
    bufp->fullIData(oldp+6317,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+6318,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                 ? 0xffffffffU : ((
                                                   (0x80000000U 
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
    bufp->fullIData(oldp+6319,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                 ? 0xffffffffU : VL_DIV_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
    bufp->fullIData(oldp+6320,(VL_EXTENDS_II(32,21, 
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
    bufp->fullCData(oldp+6321,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+6322,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+6323,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+6324,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])),32);
    bufp->fullIData(oldp+6325,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U] 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6326,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6327,((IData)((((QData)((IData)(
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])) 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6328,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                | VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6329,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]
                                 : (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                     ? 0U : VL_MODDIVS_III(32, 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))),32);
    bufp->fullIData(oldp+6330,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]
                                 : VL_MODDIV_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
    bufp->fullIData(oldp+6331,(VL_EXTENDS_II(32,12, 
                                             ((0xfe0U 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 7U))))),32);
    bufp->fullIData(oldp+6332,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+6333,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])),6);
    bufp->fullIData(oldp+6334,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
    bufp->fullCData(oldp+6335,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                >> 0x1aU)),7);
    bufp->fullCData(oldp+6336,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 0x14U))),6);
    bufp->fullIData(oldp+6337,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6338,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+6339,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                          VL_EXTENDS_II(32,12, 
                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                         >> 0x14U)))),32);
    bufp->fullIData(oldp+6340,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                < VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6341,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+6342,(VL_SHIFTRS_III(32,32,5, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                              (0x1fU 
                                               & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
    bufp->fullIData(oldp+6343,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+6344,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
    bufp->fullIData(oldp+6345,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6346,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                ^ VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 0x14U)))),32);
    bufp->fullBit(oldp+6347,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+6348,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+6349,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+6350,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 7U))),5);
    bufp->fullIData(oldp+6351,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+6352,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U])),32);
    bufp->fullBit(oldp+6353,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+6354,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result
                                 : 0U)),32);
    bufp->fullBit(oldp+6355,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+6356,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6357,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+6358,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                    & VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6359,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+6360,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U] 
                                    + (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6361,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+6362,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+6363,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+6364,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+6365,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+6366,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+6367,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+6368,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+6369,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+6370,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+6371,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+6372,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+6373,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+6374,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+6375,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+6376,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+6377,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+6378,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+6379,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+6380,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 2U))),5);
    bufp->fullIData(oldp+6381,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U])),32);
    bufp->fullBit(oldp+6382,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+6383,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                    + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6384,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+6385,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                    + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                 : 0U)),32);
    bufp->fullBit(oldp+6386,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+6387,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 2U)))),5);
    bufp->fullIData(oldp+6388,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+6389,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+6390,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))),5);
    bufp->fullIData(oldp+6391,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+6392,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+6393,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+6394,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+6395,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+6396,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+6397,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+6398,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+6399,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+6400,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+6401,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+6402,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+6403,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+6404,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])),32);
    bufp->fullBit(oldp+6405,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+6406,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+6407,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+6408,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+6409,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                 : 0U)),32);
    bufp->fullBit(oldp+6410,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+6411,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+6412,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[4U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+6413,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+6414,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+6415,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+6416,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+6417,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[4U], 
                                                 VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                 : 0U)),32);
    bufp->fullIData(oldp+6418,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+6419,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+6420,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+6421,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]
                                 : 0U)),32);
    bufp->fullBit(oldp+6422,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+6423,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+6424,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+6425,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+6426,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+6427,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+6428,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+6429,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+6430,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+6431,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+6432,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+6433,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+6434,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+6435,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+6436,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+6437,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+6438,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+6439,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+6440,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+6441,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+6442,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                     ? 0xffffffffU : 
                                    (((0x80000000U 
                                       == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]) 
                                      & (0xffffffffU 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                      ? 0x80000000U
                                      : VL_DIVS_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))
                                 : 0U)),32);
    bufp->fullBit(oldp+6443,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+6444,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                     ? 0xffffffffU : 
                                    VL_DIV_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6445,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+6446,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+6447,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+6448,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+6449,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+6450,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+6451,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+6452,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullIData(oldp+6453,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+6454,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6455,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+6456,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+6457,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+6458,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+6459,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,16, 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullCData(oldp+6460,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6461,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+6462,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+6463,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+6464,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])
                                 : 0U)),32);
    bufp->fullBit(oldp+6465,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+6466,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+6467,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result
                                 : 0U)),32);
    bufp->fullCData(oldp+6468,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6469,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+6470,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                    * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                 : 0U)),32);
    bufp->fullBit(oldp+6471,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+6472,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
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
    bufp->fullBit(oldp+6473,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+6474,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__VdfgTmp_hb1a4827e__0 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+6475,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+6476,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (IData)((((QData)((IData)(
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])) 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+6477,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+6478,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6479,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+6480,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                    | VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6481,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+6482,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
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
    bufp->fullBit(oldp+6483,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+6484,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                     ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]
                                     : VL_MODDIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6485,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+6486,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+6487,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+6488,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+6489,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+6490,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+6491,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+6492,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+6493,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                    << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6494,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+6495,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6496,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+6497,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_blt__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+6498,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+6499,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                              VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                             >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6500,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+6501,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                    < VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6502,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+6503,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_bltu__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+6504,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+6505,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,5, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                  (0x1fU 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6506,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+6507,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6508,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+6509,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                    >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6510,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+6511,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6512,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+6513,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6514,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+6515,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+6516,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+6517,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+6518,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6519,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+6520,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                    ^ VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullCData(oldp+6521,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+6522,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+6523,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])),7);
    bufp->fullIData(oldp+6524,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])),32);
    bufp->fullIData(oldp+6525,(VL_EXTENDS_II(32,12, 
                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                              >> 0x14U))),32);
    bufp->fullIData(oldp+6526,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+6527,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                & VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6528,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])),32);
    bufp->fullIData(oldp+6529,(VL_EXTENDS_II(32,13, 
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
    bufp->fullBit(oldp+6530,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                              == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
    bufp->fullBit(oldp+6531,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
    bufp->fullBit(oldp+6532,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                              >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
    bufp->fullBit(oldp+6533,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+6534,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+6535,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                              != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
    bufp->fullIData(oldp+6536,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)),32);
    bufp->fullCData(oldp+6537,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                        >> 0xcU))),4);
    bufp->fullCData(oldp+6538,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])),2);
    bufp->fullIData(oldp+6539,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+6540,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                      >> 0xdU))),3);
    bufp->fullIData(oldp+6541,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+6542,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+6543,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+6544,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+6545,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 0xaU))),6);
    bufp->fullCData(oldp+6546,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                      >> 5U))),2);
    bufp->fullCData(oldp+6547,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+6548,(VL_EXTENDS_II(32,9, 
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
    bufp->fullBit(oldp+6549,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])));
    bufp->fullBit(oldp+6550,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])));
    bufp->fullIData(oldp+6551,(VL_EXTENDS_II(32,12, 
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
    bufp->fullIData(oldp+6552,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+6553,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                          << 1U)) | 
                                ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                           >> 7U)) 
                                 | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                          >> 4U))))),32);
    bufp->fullIData(oldp+6554,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+6555,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                          << 4U)) | 
                                ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                           >> 7U)) 
                                 | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                             >> 2U))))),32);
    bufp->fullIData(oldp+6556,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+6557,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[4U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+6558,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+6559,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+6560,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                          >> 1U)) | 
                                (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                          >> 7U)))),32);
    bufp->fullIData(oldp+6561,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+6562,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                 ? 0xffffffffU : ((
                                                   (0x80000000U 
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
    bufp->fullIData(oldp+6563,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                 ? 0xffffffffU : VL_DIV_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
    bufp->fullIData(oldp+6564,(VL_EXTENDS_II(32,21, 
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
    bufp->fullCData(oldp+6565,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+6566,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+6567,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+6568,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])),32);
    bufp->fullIData(oldp+6569,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U] 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6570,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6571,((IData)((((QData)((IData)(
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])) 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6572,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                | VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6573,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]
                                 : (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                     ? 0U : VL_MODDIVS_III(32, 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))),32);
    bufp->fullIData(oldp+6574,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]
                                 : VL_MODDIV_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
    bufp->fullIData(oldp+6575,(VL_EXTENDS_II(32,12, 
                                             ((0xfe0U 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 7U))))),32);
    bufp->fullIData(oldp+6576,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+6577,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])),6);
    bufp->fullIData(oldp+6578,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
    bufp->fullCData(oldp+6579,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                >> 0x1aU)),7);
    bufp->fullCData(oldp+6580,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 0x14U))),6);
    bufp->fullIData(oldp+6581,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6582,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+6583,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                          VL_EXTENDS_II(32,12, 
                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                         >> 0x14U)))),32);
    bufp->fullIData(oldp+6584,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                < VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6585,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+6586,(VL_SHIFTRS_III(32,32,5, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                              (0x1fU 
                                               & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
    bufp->fullIData(oldp+6587,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+6588,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
    bufp->fullIData(oldp+6589,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6590,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                ^ VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 0x14U)))),32);
    bufp->fullBit(oldp+6591,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+6592,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+6593,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+6594,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 7U))),5);
    bufp->fullIData(oldp+6595,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+6596,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U])),32);
    bufp->fullBit(oldp+6597,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+6598,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result
                                 : 0U)),32);
    bufp->fullBit(oldp+6599,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+6600,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6601,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+6602,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                    & VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6603,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+6604,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U] 
                                    + (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6605,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+6606,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+6607,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+6608,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+6609,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+6610,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+6611,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+6612,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+6613,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+6614,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+6615,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+6616,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+6617,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+6618,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+6619,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+6620,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+6621,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+6622,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+6623,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+6624,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 2U))),5);
    bufp->fullIData(oldp+6625,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U])),32);
    bufp->fullBit(oldp+6626,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+6627,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                    + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6628,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+6629,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                    + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                 : 0U)),32);
    bufp->fullBit(oldp+6630,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+6631,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 2U)))),5);
    bufp->fullIData(oldp+6632,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+6633,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+6634,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))),5);
    bufp->fullIData(oldp+6635,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+6636,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+6637,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+6638,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+6639,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+6640,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+6641,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+6642,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+6643,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+6644,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+6645,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+6646,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+6647,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+6648,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])),32);
    bufp->fullBit(oldp+6649,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+6650,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+6651,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+6652,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+6653,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                 : 0U)),32);
    bufp->fullBit(oldp+6654,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+6655,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+6656,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[5U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+6657,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+6658,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+6659,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+6660,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+6661,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[5U], 
                                                 VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                 : 0U)),32);
    bufp->fullIData(oldp+6662,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+6663,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+6664,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+6665,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]
                                 : 0U)),32);
    bufp->fullBit(oldp+6666,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+6667,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+6668,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+6669,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+6670,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+6671,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+6672,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+6673,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+6674,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+6675,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+6676,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+6677,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+6678,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+6679,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+6680,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+6681,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+6682,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+6683,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+6684,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+6685,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+6686,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                     ? 0xffffffffU : 
                                    (((0x80000000U 
                                       == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]) 
                                      & (0xffffffffU 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                      ? 0x80000000U
                                      : VL_DIVS_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))
                                 : 0U)),32);
    bufp->fullBit(oldp+6687,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+6688,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                     ? 0xffffffffU : 
                                    VL_DIV_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6689,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+6690,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+6691,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+6692,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+6693,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+6694,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+6695,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+6696,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullIData(oldp+6697,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+6698,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6699,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+6700,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+6701,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+6702,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+6703,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,16, 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullCData(oldp+6704,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6705,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+6706,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+6707,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+6708,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])
                                 : 0U)),32);
    bufp->fullBit(oldp+6709,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+6710,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+6711,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result
                                 : 0U)),32);
    bufp->fullCData(oldp+6712,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6713,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+6714,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                    * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                 : 0U)),32);
    bufp->fullBit(oldp+6715,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+6716,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
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
    bufp->fullBit(oldp+6717,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+6718,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__VdfgTmp_hb1a4827e__0 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+6719,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+6720,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (IData)((((QData)((IData)(
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])) 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+6721,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+6722,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6723,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+6724,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                    | VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6725,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+6726,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
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
    bufp->fullBit(oldp+6727,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+6728,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                     ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]
                                     : VL_MODDIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6729,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+6730,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+6731,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+6732,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+6733,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+6734,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+6735,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+6736,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+6737,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                    << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6738,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+6739,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6740,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+6741,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_blt__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+6742,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+6743,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                              VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                             >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6744,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+6745,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                    < VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6746,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+6747,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_bltu__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+6748,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+6749,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,5, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                  (0x1fU 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6750,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+6751,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6752,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+6753,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                    >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6754,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+6755,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6756,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+6757,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6758,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+6759,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+6760,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+6761,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+6762,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6763,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+6764,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                    ^ VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullCData(oldp+6765,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+6766,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+6767,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])),7);
    bufp->fullIData(oldp+6768,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])),32);
    bufp->fullIData(oldp+6769,(VL_EXTENDS_II(32,12, 
                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                              >> 0x14U))),32);
    bufp->fullIData(oldp+6770,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+6771,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                & VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6772,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])),32);
    bufp->fullIData(oldp+6773,(VL_EXTENDS_II(32,13, 
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
    bufp->fullBit(oldp+6774,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                              == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
    bufp->fullBit(oldp+6775,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
    bufp->fullBit(oldp+6776,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                              >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
    bufp->fullBit(oldp+6777,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+6778,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+6779,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                              != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
    bufp->fullIData(oldp+6780,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)),32);
    bufp->fullCData(oldp+6781,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                        >> 0xcU))),4);
    bufp->fullCData(oldp+6782,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])),2);
    bufp->fullIData(oldp+6783,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+6784,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                      >> 0xdU))),3);
    bufp->fullIData(oldp+6785,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+6786,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+6787,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+6788,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+6789,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 0xaU))),6);
    bufp->fullCData(oldp+6790,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                      >> 5U))),2);
    bufp->fullCData(oldp+6791,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+6792,(VL_EXTENDS_II(32,9, 
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
    bufp->fullBit(oldp+6793,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])));
    bufp->fullBit(oldp+6794,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])));
    bufp->fullIData(oldp+6795,(VL_EXTENDS_II(32,12, 
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
    bufp->fullIData(oldp+6796,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+6797,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                          << 1U)) | 
                                ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                           >> 7U)) 
                                 | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                          >> 4U))))),32);
    bufp->fullIData(oldp+6798,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+6799,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                          << 4U)) | 
                                ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                           >> 7U)) 
                                 | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                             >> 2U))))),32);
    bufp->fullIData(oldp+6800,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+6801,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[5U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+6802,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+6803,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+6804,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                          >> 1U)) | 
                                (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                          >> 7U)))),32);
    bufp->fullIData(oldp+6805,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+6806,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                 ? 0xffffffffU : ((
                                                   (0x80000000U 
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
    bufp->fullIData(oldp+6807,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                 ? 0xffffffffU : VL_DIV_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
    bufp->fullIData(oldp+6808,(VL_EXTENDS_II(32,21, 
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
    bufp->fullCData(oldp+6809,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+6810,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+6811,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+6812,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])),32);
    bufp->fullIData(oldp+6813,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U] 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6814,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6815,((IData)((((QData)((IData)(
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])) 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6816,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                | VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6817,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]
                                 : (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                     ? 0U : VL_MODDIVS_III(32, 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))),32);
    bufp->fullIData(oldp+6818,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]
                                 : VL_MODDIV_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
    bufp->fullIData(oldp+6819,(VL_EXTENDS_II(32,12, 
                                             ((0xfe0U 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 7U))))),32);
    bufp->fullIData(oldp+6820,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+6821,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])),6);
    bufp->fullIData(oldp+6822,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
    bufp->fullCData(oldp+6823,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                >> 0x1aU)),7);
    bufp->fullCData(oldp+6824,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 0x14U))),6);
    bufp->fullIData(oldp+6825,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6826,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+6827,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                          VL_EXTENDS_II(32,12, 
                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                         >> 0x14U)))),32);
    bufp->fullIData(oldp+6828,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                < VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6829,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+6830,(VL_SHIFTRS_III(32,32,5, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                              (0x1fU 
                                               & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
    bufp->fullIData(oldp+6831,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+6832,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
    bufp->fullIData(oldp+6833,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6834,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                ^ VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 0x14U)))),32);
    bufp->fullBit(oldp+6835,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+6836,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+6837,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+6838,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                         >> 7U))),5);
    bufp->fullIData(oldp+6839,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+6840,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[6U])),32);
    bufp->fullBit(oldp+6841,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+6842,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result
                                 : 0U)),32);
    bufp->fullBit(oldp+6843,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+6844,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6845,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+6846,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                    & VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6847,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+6848,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[6U] 
                                    + (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6849,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+6850,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+6851,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+6852,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+6853,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+6854,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+6855,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+6856,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+6857,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+6858,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+6859,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+6860,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+6861,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+6862,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+6863,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+6864,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+6865,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+6866,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+6867,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+6868,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                         >> 2U))),5);
    bufp->fullIData(oldp+6869,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[6U])),32);
    bufp->fullBit(oldp+6870,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+6871,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                    + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6872,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+6873,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                    + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                 : 0U)),32);
    bufp->fullBit(oldp+6874,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+6875,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 2U)))),5);
    bufp->fullIData(oldp+6876,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+6877,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+6878,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))),5);
    bufp->fullIData(oldp+6879,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+6880,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+6881,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+6882,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+6883,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+6884,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+6885,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+6886,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+6887,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+6888,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+6889,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+6890,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+6891,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+6892,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])),32);
    bufp->fullBit(oldp+6893,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+6894,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+6895,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+6896,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+6897,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                 : 0U)),32);
    bufp->fullBit(oldp+6898,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+6899,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+6900,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[6U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+6901,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+6902,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+6903,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+6904,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+6905,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[6U], 
                                                 VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                 : 0U)),32);
    bufp->fullIData(oldp+6906,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+6907,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+6908,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+6909,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]
                                 : 0U)),32);
    bufp->fullBit(oldp+6910,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+6911,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+6912,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+6913,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+6914,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+6915,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+6916,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+6917,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+6918,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+6919,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+6920,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+6921,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+6922,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+6923,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+6924,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+6925,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+6926,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+6927,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+6928,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+6929,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+6930,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                     ? 0xffffffffU : 
                                    (((0x80000000U 
                                       == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]) 
                                      & (0xffffffffU 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                      ? 0x80000000U
                                      : VL_DIVS_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])))
                                 : 0U)),32);
    bufp->fullBit(oldp+6931,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+6932,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                     ? 0xffffffffU : 
                                    VL_DIV_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6933,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+6934,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+6935,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+6936,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+6937,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+6938,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+6939,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+6940,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullIData(oldp+6941,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+6942,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6943,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+6944,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+6945,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+6946,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+6947,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,16, 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullCData(oldp+6948,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6949,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+6950,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+6951,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+6952,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])
                                 : 0U)),32);
    bufp->fullBit(oldp+6953,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+6954,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+6955,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result
                                 : 0U)),32);
    bufp->fullCData(oldp+6956,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6957,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+6958,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                    * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                 : 0U)),32);
    bufp->fullBit(oldp+6959,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+6960,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
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
    bufp->fullBit(oldp+6961,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+6962,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__VdfgTmp_hb1a4827e__0 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+6963,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+6964,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (IData)((((QData)((IData)(
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])) 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+6965,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+6966,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6967,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+6968,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                    | VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6969,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+6970,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
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
    bufp->fullBit(oldp+6971,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+6972,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                     ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]
                                     : VL_MODDIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6973,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+6974,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+6975,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+6976,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+6977,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+6978,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+6979,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+6980,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+6981,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                    << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6982,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+6983,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6984,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+6985,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_blt__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+6986,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+6987,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                              VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                             >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6988,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+6989,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                    < VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6990,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+6991,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_bltu__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+6992,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+6993,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,5, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                  (0x1fU 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6994,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+6995,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                      >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6996,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+6997,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                    >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6998,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+6999,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+7000,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+7001,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+7002,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+7003,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+7004,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+7005,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+7006,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+7007,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+7008,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                    ^ VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullCData(oldp+7009,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+7010,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+7011,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])),7);
    bufp->fullIData(oldp+7012,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])),32);
    bufp->fullIData(oldp+7013,(VL_EXTENDS_II(32,12, 
                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                              >> 0x14U))),32);
    bufp->fullIData(oldp+7014,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+7015,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                & VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+7016,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])),32);
    bufp->fullIData(oldp+7017,(VL_EXTENDS_II(32,13, 
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
    bufp->fullBit(oldp+7018,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                              == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
    bufp->fullBit(oldp+7019,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
    bufp->fullBit(oldp+7020,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                              >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
    bufp->fullBit(oldp+7021,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+7022,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+7023,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                              != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
    bufp->fullIData(oldp+7024,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U], 0x10U)),32);
    bufp->fullCData(oldp+7025,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                        >> 0xcU))),4);
    bufp->fullCData(oldp+7026,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])),2);
    bufp->fullIData(oldp+7027,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+7028,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                      >> 0xdU))),3);
    bufp->fullIData(oldp+7029,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+7030,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+7031,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+7032,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+7033,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                         >> 0xaU))),6);
    bufp->fullCData(oldp+7034,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                      >> 5U))),2);
    bufp->fullCData(oldp+7035,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+7036,(VL_EXTENDS_II(32,9, 
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
    bufp->fullBit(oldp+7037,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])));
    bufp->fullBit(oldp+7038,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])));
    bufp->fullIData(oldp+7039,(VL_EXTENDS_II(32,12, 
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
    bufp->fullIData(oldp+7040,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+7041,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                          << 1U)) | 
                                ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                           >> 7U)) 
                                 | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                          >> 4U))))),32);
    bufp->fullIData(oldp+7042,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+7043,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                          << 4U)) | 
                                ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                           >> 7U)) 
                                 | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                             >> 2U))))),32);
    bufp->fullIData(oldp+7044,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+7045,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[6U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+7046,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+7047,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+7048,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                          >> 1U)) | 
                                (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                          >> 7U)))),32);
    bufp->fullIData(oldp+7049,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+7050,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                 ? 0xffffffffU : ((
                                                   (0x80000000U 
                                                    == 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]) 
                                                   & (0xffffffffU 
                                                      == 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                                   ? 0x80000000U
                                                   : 
                                                  VL_DIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])))),32);
    bufp->fullIData(oldp+7051,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                 ? 0xffffffffU : VL_DIV_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
    bufp->fullIData(oldp+7052,(VL_EXTENDS_II(32,21, 
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
    bufp->fullCData(oldp+7053,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+7054,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+7055,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+7056,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])),32);
    bufp->fullIData(oldp+7057,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U] 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+7058,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+7059,((IData)((((QData)((IData)(
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])) 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+7060,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                | VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+7061,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]
                                 : (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                     ? 0U : VL_MODDIVS_III(32, 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])))),32);
    bufp->fullIData(oldp+7062,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]
                                 : VL_MODDIV_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
    bufp->fullIData(oldp+7063,(VL_EXTENDS_II(32,12, 
                                             ((0xfe0U 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                    >> 7U))))),32);
    bufp->fullIData(oldp+7064,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+7065,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])),6);
    bufp->fullIData(oldp+7066,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
    bufp->fullCData(oldp+7067,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                >> 0x1aU)),7);
    bufp->fullCData(oldp+7068,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                         >> 0x14U))),6);
    bufp->fullIData(oldp+7069,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+7070,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+7071,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                          VL_EXTENDS_II(32,12, 
                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                         >> 0x14U)))),32);
    bufp->fullIData(oldp+7072,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                < VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+7073,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+7074,(VL_SHIFTRS_III(32,32,5, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                              (0x1fU 
                                               & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
    bufp->fullIData(oldp+7075,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+7076,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
    bufp->fullIData(oldp+7077,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+7078,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                ^ VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 0x14U)))),32);
    bufp->fullBit(oldp+7079,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+7080,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+7081,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+7082,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                         >> 7U))),5);
    bufp->fullIData(oldp+7083,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+7084,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[7U])),32);
    bufp->fullBit(oldp+7085,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+7086,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result
                                 : 0U)),32);
    bufp->fullBit(oldp+7087,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+7088,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+7089,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+7090,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                    & VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+7091,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+7092,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[7U] 
                                    + (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+7093,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+7094,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+7095,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+7096,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+7097,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+7098,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+7099,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+7100,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+7101,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+7102,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+7103,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+7104,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+7105,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+7106,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+7107,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+7108,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+7109,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+7110,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+7111,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+7112,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                         >> 2U))),5);
    bufp->fullIData(oldp+7113,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[7U])),32);
    bufp->fullBit(oldp+7114,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+7115,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                    + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                 : 0U)),32);
    bufp->fullBit(oldp+7116,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+7117,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                    + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                 : 0U)),32);
    bufp->fullBit(oldp+7118,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+7119,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 2U)))),5);
    bufp->fullIData(oldp+7120,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+7121,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+7122,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))),5);
    bufp->fullIData(oldp+7123,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+7124,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+7125,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+7126,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+7127,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+7128,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+7129,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+7130,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+7131,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+7132,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+7133,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+7134,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+7135,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+7136,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])),32);
    bufp->fullBit(oldp+7137,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+7138,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+7139,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+7140,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+7141,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                 : 0U)),32);
    bufp->fullBit(oldp+7142,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+7143,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+7144,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[7U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+7145,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+7146,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+7147,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+7148,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+7149,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[7U], 
                                                 VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                 : 0U)),32);
    bufp->fullIData(oldp+7150,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+7151,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+7152,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+7153,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]
                                 : 0U)),32);
    bufp->fullBit(oldp+7154,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+7155,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+7156,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+7157,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+7158,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+7159,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+7160,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+7161,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+7162,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+7163,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+7164,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+7165,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+7166,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+7167,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+7168,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+7169,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+7170,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+7171,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+7172,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+7173,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+7174,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                     ? 0xffffffffU : 
                                    (((0x80000000U 
                                       == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]) 
                                      & (0xffffffffU 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                      ? 0x80000000U
                                      : VL_DIVS_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))
                                 : 0U)),32);
    bufp->fullBit(oldp+7175,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+7176,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                     ? 0xffffffffU : 
                                    VL_DIV_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+7177,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+7178,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+7179,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+7180,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+7181,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+7182,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+7183,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+7184,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullIData(oldp+7185,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+7186,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+7187,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+7188,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+7189,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+7190,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+7191,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,16, 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullCData(oldp+7192,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+7193,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+7194,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+7195,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+7196,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])
                                 : 0U)),32);
    bufp->fullBit(oldp+7197,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+7198,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+7199,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result
                                 : 0U)),32);
    bufp->fullCData(oldp+7200,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+7201,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+7202,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                    * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                 : 0U)),32);
    bufp->fullBit(oldp+7203,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+7204,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__VdfgTmp_hb1a4827e__0 
                                             * (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U] 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+7205,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+7206,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__VdfgTmp_hb1a4827e__0 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+7207,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+7208,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (IData)((((QData)((IData)(
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])) 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+7209,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+7210,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+7211,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+7212,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                    | VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+7213,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+7214,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                     ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]
                                     : (((0x80000000U 
                                          == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]) 
                                         & (0xffffffffU 
                                            == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                         ? 0U : VL_MODDIVS_III(32, 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))
                                 : 0U)),32);
    bufp->fullBit(oldp+7215,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+7216,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                     ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]
                                     : VL_MODDIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+7217,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+7218,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+7219,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+7220,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+7221,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+7222,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+7223,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+7224,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+7225,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                    << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+7226,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+7227,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+7228,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+7229,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_blt__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+7230,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+7231,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                              VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                             >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+7232,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+7233,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                    < VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+7234,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+7235,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_bltu__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+7236,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+7237,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,5, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                  (0x1fU 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+7238,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+7239,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                      >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+7240,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+7241,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                    >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+7242,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+7243,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+7244,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+7245,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+7246,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+7247,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+7248,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+7249,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+7250,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+7251,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+7252,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                    ^ VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullCData(oldp+7253,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+7254,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+7255,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])),7);
    bufp->fullIData(oldp+7256,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])),32);
    bufp->fullIData(oldp+7257,(VL_EXTENDS_II(32,12, 
                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                              >> 0x14U))),32);
    bufp->fullIData(oldp+7258,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+7259,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                & VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+7260,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])),32);
    bufp->fullIData(oldp+7261,(VL_EXTENDS_II(32,13, 
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
    bufp->fullBit(oldp+7262,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                              == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
    bufp->fullBit(oldp+7263,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
    bufp->fullBit(oldp+7264,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                              >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
    bufp->fullBit(oldp+7265,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+7266,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+7267,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                              != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
    bufp->fullIData(oldp+7268,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U], 0x10U)),32);
    bufp->fullCData(oldp+7269,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                        >> 0xcU))),4);
    bufp->fullCData(oldp+7270,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])),2);
    bufp->fullIData(oldp+7271,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+7272,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                      >> 0xdU))),3);
    bufp->fullIData(oldp+7273,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+7274,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+7275,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+7276,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+7277,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                         >> 0xaU))),6);
    bufp->fullCData(oldp+7278,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                      >> 5U))),2);
    bufp->fullCData(oldp+7279,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+7280,(VL_EXTENDS_II(32,9, 
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
    bufp->fullBit(oldp+7281,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])));
    bufp->fullBit(oldp+7282,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])));
    bufp->fullIData(oldp+7283,(VL_EXTENDS_II(32,12, 
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
    bufp->fullIData(oldp+7284,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+7285,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                          << 1U)) | 
                                ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                           >> 7U)) 
                                 | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                          >> 4U))))),32);
    bufp->fullIData(oldp+7286,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+7287,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                          << 4U)) | 
                                ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                           >> 7U)) 
                                 | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                             >> 2U))))),32);
    bufp->fullIData(oldp+7288,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+7289,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[7U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+7290,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+7291,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+7292,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                          >> 1U)) | 
                                (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                          >> 7U)))),32);
    bufp->fullIData(oldp+7293,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+7294,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                 ? 0xffffffffU : ((
                                                   (0x80000000U 
                                                    == 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]) 
                                                   & (0xffffffffU 
                                                      == 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                                   ? 0x80000000U
                                                   : 
                                                  VL_DIVS_III(32, 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))),32);
    bufp->fullIData(oldp+7295,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                 ? 0xffffffffU : VL_DIV_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
    bufp->fullIData(oldp+7296,(VL_EXTENDS_II(32,21, 
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
    bufp->fullCData(oldp+7297,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+7298,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+7299,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+7300,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])),32);
    bufp->fullIData(oldp+7301,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U] 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+7302,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+7303,((IData)((((QData)((IData)(
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])) 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+7304,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                | VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+7305,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]
                                 : (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                     ? 0U : VL_MODDIVS_III(32, 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))),32);
    bufp->fullIData(oldp+7306,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]
                                 : VL_MODDIV_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
    bufp->fullIData(oldp+7307,(VL_EXTENDS_II(32,12, 
                                             ((0xfe0U 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                    >> 7U))))),32);
    bufp->fullIData(oldp+7308,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+7309,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])),6);
    bufp->fullIData(oldp+7310,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
    bufp->fullCData(oldp+7311,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                >> 0x1aU)),7);
    bufp->fullCData(oldp+7312,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                         >> 0x14U))),6);
    bufp->fullIData(oldp+7313,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+7314,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+7315,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                          VL_EXTENDS_II(32,12, 
                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                         >> 0x14U)))),32);
    bufp->fullIData(oldp+7316,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                < VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+7317,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+7318,(VL_SHIFTRS_III(32,32,5, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                              (0x1fU 
                                               & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
    bufp->fullIData(oldp+7319,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+7320,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
    bufp->fullIData(oldp+7321,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+7322,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                ^ VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 0x14U)))),32);
    bufp->fullBit(oldp+7323,(vlSelf->clk));
    bufp->fullBit(oldp+7324,(vlSelf->rst));
    bufp->fullBit(oldp+7325,(vlSelf->dut_rst));
    bufp->fullIData(oldp+7326,(vlSelf->imem_rdata),32);
    bufp->fullBit(oldp+7327,(vlSelf->imem_resp));
    bufp->fullIData(oldp+7328,(vlSelf->imem_addr),32);
    bufp->fullBit(oldp+7329,(vlSelf->imem_read));
    bufp->fullIData(oldp+7330,(vlSelf->dmem_rdata),32);
    bufp->fullBit(oldp+7331,(vlSelf->dmem_resp));
    bufp->fullIData(oldp+7332,(vlSelf->dmem_addr),32);
    bufp->fullBit(oldp+7333,(vlSelf->dmem_read));
    bufp->fullBit(oldp+7334,(vlSelf->dmem_write));
    bufp->fullCData(oldp+7335,(vlSelf->dmem_wmask),4);
    bufp->fullIData(oldp+7336,(vlSelf->dmem_wdata),32);
    bufp->fullIData(oldp+7337,(vlSelf->golden_imem_rdata),32);
    bufp->fullBit(oldp+7338,(vlSelf->golden_imem_resp));
    bufp->fullIData(oldp+7339,(vlSelf->golden_imem_addr),32);
    bufp->fullBit(oldp+7340,(vlSelf->golden_imem_read));
    bufp->fullIData(oldp+7341,(vlSelf->golden_dmem_rdata),32);
    bufp->fullBit(oldp+7342,(vlSelf->golden_dmem_resp));
    bufp->fullIData(oldp+7343,(vlSelf->golden_dmem_addr),32);
    bufp->fullBit(oldp+7344,(vlSelf->golden_dmem_read));
    bufp->fullBit(oldp+7345,(vlSelf->golden_dmem_write));
    bufp->fullCData(oldp+7346,(vlSelf->golden_dmem_wmask),4);
    bufp->fullIData(oldp+7347,(vlSelf->golden_dmem_wdata),32);
    bufp->fullBit(oldp+7348,(vlSelf->halt));
    bufp->fullBit(oldp+7349,(vlSelf->error));
    bufp->fullBit(oldp+7350,(vlSelf->any_commit));
    bufp->fullBit(oldp+7351,(vlSelf->mispredict_o));
    bufp->fullBit(oldp+7352,(vlSelf->eoc_enable));
    bufp->fullQData(oldp+7353,(vlSelf->dut_order),64);
    bufp->fullIData(oldp+7355,(vlSelf->dut_pc),32);
    bufp->fullIData(oldp+7356,(vlSelf->dut_inst),32);
    bufp->fullCData(oldp+7357,(vlSelf->dut_rd_addr),5);
    bufp->fullIData(oldp+7358,(vlSelf->dut_rd_wdata),32);
    bufp->fullIData(oldp+7359,(vlSelf->dut_mem_addr),32);
    bufp->fullCData(oldp+7360,(vlSelf->dut_mem_rmask),4);
    bufp->fullCData(oldp+7361,(vlSelf->dut_mem_wmask),4);
    bufp->fullIData(oldp+7362,(vlSelf->dut_mem_rdata),32);
    bufp->fullIData(oldp+7363,(vlSelf->dut_mem_wdata),32);
    bufp->fullBit(oldp+7364,(vlSelf->golden_commit));
    bufp->fullQData(oldp+7365,(vlSelf->golden_order),64);
    bufp->fullIData(oldp+7367,(vlSelf->golden_pc),32);
    bufp->fullIData(oldp+7368,(vlSelf->golden_inst),32);
    bufp->fullCData(oldp+7369,(vlSelf->golden_rd_addr),5);
    bufp->fullIData(oldp+7370,(vlSelf->golden_rd_wdata),32);
    bufp->fullIData(oldp+7371,(vlSelf->golden_mem_addr),32);
    bufp->fullCData(oldp+7372,(vlSelf->golden_mem_rmask),4);
    bufp->fullCData(oldp+7373,(vlSelf->golden_mem_wmask),4);
    bufp->fullIData(oldp+7374,(vlSelf->golden_mem_rdata),32);
    bufp->fullIData(oldp+7375,(vlSelf->golden_mem_wdata),32);
    bufp->fullBit(oldp+7376,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetchq_full) 
                                       & (IData)(vlSelf->imem_resp))))));
    bufp->fullBit(oldp+7377,(vlSymsp->TOP__top_tb.__Vcellinp__dut__rst));
    bufp->fullBit(oldp+7378,(((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__LDorST_i)
                               ? ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__LDorST_i) 
                                  && (((((~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem_empty_i)) 
                                         & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem_ROB_data_i[0xbU] 
                                            >> 0x12U)) 
                                        & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__READY_i)) 
                                       & (~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__store_committed))) 
                                      & (~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__store_match))))
                               : ((((~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem_empty_i)) 
                                    & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem_ROB_data_i[0xbU] 
                                       >> 0x12U)) & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__READY_i)) 
                                  & (IData)(vlSelf->dmem_resp)))));
}
