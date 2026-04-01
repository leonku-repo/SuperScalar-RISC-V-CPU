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
    bufp->fullCData(oldp+3854,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [2U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+3855,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [2U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+3856,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [2U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+3857,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [2U] >> 0xfU)))));
    bufp->fullBit(oldp+3858,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [2U] >> 0xeU)))));
    bufp->fullCData(oldp+3859,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [2U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+3860,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [2U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+3861,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [2U] >> 1U)))));
    bufp->fullBit(oldp+3862,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [2U]))));
    bufp->fullIData(oldp+3863,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [3U] >> 0x1aU))),32);
    bufp->fullCData(oldp+3864,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [3U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+3865,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [3U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+3866,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [3U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+3867,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [3U] >> 0xfU)))));
    bufp->fullBit(oldp+3868,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [3U] >> 0xeU)))));
    bufp->fullCData(oldp+3869,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [3U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+3870,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [3U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+3871,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [3U] >> 1U)))));
    bufp->fullBit(oldp+3872,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [3U]))));
    bufp->fullIData(oldp+3873,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [4U] >> 0x1aU))),32);
    bufp->fullCData(oldp+3874,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [4U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+3875,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [4U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+3876,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [4U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+3877,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [4U] >> 0xfU)))));
    bufp->fullBit(oldp+3878,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [4U] >> 0xeU)))));
    bufp->fullCData(oldp+3879,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [4U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+3880,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [4U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+3881,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [4U] >> 1U)))));
    bufp->fullBit(oldp+3882,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [4U]))));
    bufp->fullIData(oldp+3883,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [5U] >> 0x1aU))),32);
    bufp->fullCData(oldp+3884,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [5U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+3885,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [5U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+3886,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [5U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+3887,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [5U] >> 0xfU)))));
    bufp->fullBit(oldp+3888,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [5U] >> 0xeU)))));
    bufp->fullCData(oldp+3889,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [5U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+3890,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [5U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+3891,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [5U] >> 1U)))));
    bufp->fullBit(oldp+3892,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [5U]))));
    bufp->fullIData(oldp+3893,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [6U] >> 0x1aU))),32);
    bufp->fullCData(oldp+3894,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [6U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+3895,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [6U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+3896,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [6U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+3897,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [6U] >> 0xfU)))));
    bufp->fullBit(oldp+3898,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [6U] >> 0xeU)))));
    bufp->fullCData(oldp+3899,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [6U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+3900,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [6U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+3901,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [6U] >> 1U)))));
    bufp->fullBit(oldp+3902,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [6U]))));
    bufp->fullIData(oldp+3903,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [7U] >> 0x1aU))),32);
    bufp->fullCData(oldp+3904,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [7U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+3905,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [7U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+3906,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [7U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+3907,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [7U] >> 0xfU)))));
    bufp->fullBit(oldp+3908,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [7U] >> 0xeU)))));
    bufp->fullCData(oldp+3909,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [7U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+3910,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [7U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+3911,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [7U] >> 1U)))));
    bufp->fullBit(oldp+3912,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [7U]))));
    bufp->fullIData(oldp+3913,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [8U] >> 0x1aU))),32);
    bufp->fullCData(oldp+3914,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [8U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+3915,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [8U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+3916,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [8U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+3917,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [8U] >> 0xfU)))));
    bufp->fullBit(oldp+3918,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [8U] >> 0xeU)))));
    bufp->fullCData(oldp+3919,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [8U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+3920,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [8U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+3921,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [8U] >> 1U)))));
    bufp->fullBit(oldp+3922,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [8U]))));
    bufp->fullIData(oldp+3923,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [9U] >> 0x1aU))),32);
    bufp->fullCData(oldp+3924,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [9U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+3925,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [9U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+3926,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [9U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+3927,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [9U] >> 0xfU)))));
    bufp->fullBit(oldp+3928,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [9U] >> 0xeU)))));
    bufp->fullCData(oldp+3929,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [9U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+3930,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [9U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+3931,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [9U] >> 1U)))));
    bufp->fullBit(oldp+3932,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [9U]))));
    bufp->fullIData(oldp+3933,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [0xaU] >> 0x1aU))),32);
    bufp->fullCData(oldp+3934,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xaU] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+3935,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xaU] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+3936,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xaU] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+3937,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xaU] 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+3938,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xaU] 
                                            >> 0xeU)))));
    bufp->fullCData(oldp+3939,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xaU] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+3940,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xaU] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+3941,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xaU] 
                                            >> 1U)))));
    bufp->fullBit(oldp+3942,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [0xaU]))));
    bufp->fullIData(oldp+3943,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [0xbU] >> 0x1aU))),32);
    bufp->fullCData(oldp+3944,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xbU] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+3945,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xbU] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+3946,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xbU] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+3947,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xbU] 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+3948,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xbU] 
                                            >> 0xeU)))));
    bufp->fullCData(oldp+3949,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xbU] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+3950,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xbU] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+3951,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xbU] 
                                            >> 1U)))));
    bufp->fullBit(oldp+3952,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [0xbU]))));
    bufp->fullIData(oldp+3953,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [0xcU] >> 0x1aU))),32);
    bufp->fullCData(oldp+3954,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xcU] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+3955,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xcU] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+3956,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xcU] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+3957,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xcU] 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+3958,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xcU] 
                                            >> 0xeU)))));
    bufp->fullCData(oldp+3959,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xcU] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+3960,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xcU] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+3961,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xcU] 
                                            >> 1U)))));
    bufp->fullBit(oldp+3962,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [0xcU]))));
    bufp->fullIData(oldp+3963,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [0xdU] >> 0x1aU))),32);
    bufp->fullCData(oldp+3964,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xdU] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+3965,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xdU] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+3966,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xdU] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+3967,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xdU] 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+3968,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xdU] 
                                            >> 0xeU)))));
    bufp->fullCData(oldp+3969,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xdU] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+3970,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xdU] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+3971,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xdU] 
                                            >> 1U)))));
    bufp->fullBit(oldp+3972,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [0xdU]))));
    bufp->fullIData(oldp+3973,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [0xeU] >> 0x1aU))),32);
    bufp->fullCData(oldp+3974,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xeU] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+3975,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xeU] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+3976,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xeU] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+3977,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xeU] 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+3978,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xeU] 
                                            >> 0xeU)))));
    bufp->fullCData(oldp+3979,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xeU] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+3980,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xeU] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+3981,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xeU] 
                                            >> 1U)))));
    bufp->fullBit(oldp+3982,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [0xeU]))));
    bufp->fullIData(oldp+3983,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                        [0xfU] >> 0x1aU))),32);
    bufp->fullCData(oldp+3984,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xfU] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+3985,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                [0xfU] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+3986,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                              [0xfU] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+3987,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xfU] 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+3988,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xfU] 
                                            >> 0xeU)))));
    bufp->fullCData(oldp+3989,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xfU] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+3990,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                                 [0xfU] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+3991,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                            [0xfU] 
                                            >> 1U)))));
    bufp->fullBit(oldp+3992,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
                                           [0xfU]))));
    bufp->fullBit(oldp+3993,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[0]));
    bufp->fullBit(oldp+3994,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[1]));
    bufp->fullBit(oldp+3995,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[2]));
    bufp->fullBit(oldp+3996,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[3]));
    bufp->fullBit(oldp+3997,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[4]));
    bufp->fullBit(oldp+3998,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[5]));
    bufp->fullBit(oldp+3999,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[6]));
    bufp->fullBit(oldp+4000,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[7]));
    bufp->fullBit(oldp+4001,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[8]));
    bufp->fullBit(oldp+4002,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[9]));
    bufp->fullBit(oldp+4003,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[10]));
    bufp->fullBit(oldp+4004,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[11]));
    bufp->fullBit(oldp+4005,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[12]));
    bufp->fullBit(oldp+4006,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[13]));
    bufp->fullBit(oldp+4007,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[14]));
    bufp->fullBit(oldp+4008,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[15]));
    bufp->fullBit(oldp+4009,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[0]));
    bufp->fullBit(oldp+4010,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[1]));
    bufp->fullBit(oldp+4011,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[2]));
    bufp->fullBit(oldp+4012,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[3]));
    bufp->fullBit(oldp+4013,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[4]));
    bufp->fullBit(oldp+4014,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[5]));
    bufp->fullBit(oldp+4015,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[6]));
    bufp->fullBit(oldp+4016,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[7]));
    bufp->fullBit(oldp+4017,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[8]));
    bufp->fullBit(oldp+4018,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[9]));
    bufp->fullBit(oldp+4019,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[10]));
    bufp->fullBit(oldp+4020,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[11]));
    bufp->fullBit(oldp+4021,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[12]));
    bufp->fullBit(oldp+4022,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[13]));
    bufp->fullBit(oldp+4023,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[14]));
    bufp->fullBit(oldp+4024,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[15]));
    bufp->fullCData(oldp+4025,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__wrPtr),5);
    bufp->fullCData(oldp+4026,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__rdPtr),5);
    bufp->fullIData(oldp+4027,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lsq__DOT__unnamedblk3__DOT__i),32);
    bufp->fullCData(oldp+4028,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask),4);
    bufp->fullBit(oldp+4029,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__store_match));
    bufp->fullBit(oldp+4030,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__store_committed));
    bufp->fullIData(oldp+4031,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mem__DOT__prf_addr),32);
    bufp->fullBit(oldp+4032,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__valid[0]));
    bufp->fullBit(oldp+4033,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__valid[1]));
    bufp->fullBit(oldp+4034,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__valid[2]));
    bufp->fullBit(oldp+4035,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__valid[3]));
    bufp->fullBit(oldp+4036,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [0U][0xbU] >> 0x10U))));
    bufp->fullBit(oldp+4037,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [0U][0xbU] >> 0xfU))));
    bufp->fullBit(oldp+4038,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [0U][0xbU] >> 0xeU))));
    bufp->fullCData(oldp+4039,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [0U][0xbU] 
                                         >> 9U))),5);
    bufp->fullCData(oldp+4040,((0x3fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [0U][0xbU] 
                                         >> 3U))),6);
    bufp->fullCData(oldp+4041,((0x3fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [0U][0xbU] 
                                          << 3U) | 
                                         (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [0U][0xaU] 
                                          >> 0x1dU)))),6);
    bufp->fullIData(oldp+4042,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][0xaU] << 3U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][9U] >> 0x1dU))),32);
    bufp->fullIData(oldp+4043,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][9U] << 3U) | 
                                (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][8U] >> 0x1dU))),32);
    bufp->fullIData(oldp+4044,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][8U] << 3U) | 
                                (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][7U] >> 0x1dU))),32);
    bufp->fullBit(oldp+4045,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [0U][7U] >> 0x1cU))));
    bufp->fullBit(oldp+4046,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [0U][7U] >> 0x1bU))));
    bufp->fullCData(oldp+4047,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [0U][7U] >> 0x16U))),5);
    bufp->fullCData(oldp+4048,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [0U][7U] >> 0x11U))),5);
    bufp->fullIData(oldp+4049,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][7U] << 0xfU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][6U] >> 0x11U))),32);
    bufp->fullIData(oldp+4050,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][6U] << 0xfU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][5U] >> 0x11U))),32);
    bufp->fullCData(oldp+4051,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [0U][5U] >> 0xdU))),4);
    bufp->fullIData(oldp+4052,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][5U] << 0x13U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][4U] >> 0xdU))),32);
    bufp->fullIData(oldp+4053,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][4U] << 0x13U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][3U] >> 0xdU))),32);
    bufp->fullCData(oldp+4054,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [0U][3U] >> 9U))),4);
    bufp->fullCData(oldp+4055,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [0U][3U] >> 5U))),4);
    bufp->fullIData(oldp+4056,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][3U] << 0x1bU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][2U] >> 5U))),32);
    bufp->fullIData(oldp+4057,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][2U] << 0x1bU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][1U] >> 5U))),32);
    bufp->fullBit(oldp+4058,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [0U][1U] >> 4U))));
    bufp->fullBit(oldp+4059,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [0U][1U] >> 3U))));
    bufp->fullBit(oldp+4060,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [0U][1U] >> 2U))));
    bufp->fullBit(oldp+4061,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [0U][1U] >> 1U))));
    bufp->fullIData(oldp+4062,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [0U][1U] << 0x1fU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [0U][0U] >> 1U))),32);
    bufp->fullBit(oldp+4063,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                              [0U][0U])));
    bufp->fullBit(oldp+4064,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [1U][0xbU] >> 0x10U))));
    bufp->fullBit(oldp+4065,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [1U][0xbU] >> 0xfU))));
    bufp->fullBit(oldp+4066,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [1U][0xbU] >> 0xeU))));
    bufp->fullCData(oldp+4067,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [1U][0xbU] 
                                         >> 9U))),5);
    bufp->fullCData(oldp+4068,((0x3fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [1U][0xbU] 
                                         >> 3U))),6);
    bufp->fullCData(oldp+4069,((0x3fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [1U][0xbU] 
                                          << 3U) | 
                                         (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [1U][0xaU] 
                                          >> 0x1dU)))),6);
    bufp->fullIData(oldp+4070,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][0xaU] << 3U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][9U] >> 0x1dU))),32);
    bufp->fullIData(oldp+4071,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][9U] << 3U) | 
                                (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][8U] >> 0x1dU))),32);
    bufp->fullIData(oldp+4072,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][8U] << 3U) | 
                                (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][7U] >> 0x1dU))),32);
    bufp->fullBit(oldp+4073,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [1U][7U] >> 0x1cU))));
    bufp->fullBit(oldp+4074,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [1U][7U] >> 0x1bU))));
    bufp->fullCData(oldp+4075,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [1U][7U] >> 0x16U))),5);
    bufp->fullCData(oldp+4076,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [1U][7U] >> 0x11U))),5);
    bufp->fullIData(oldp+4077,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][7U] << 0xfU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][6U] >> 0x11U))),32);
    bufp->fullIData(oldp+4078,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][6U] << 0xfU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][5U] >> 0x11U))),32);
    bufp->fullCData(oldp+4079,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [1U][5U] >> 0xdU))),4);
    bufp->fullIData(oldp+4080,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][5U] << 0x13U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][4U] >> 0xdU))),32);
    bufp->fullIData(oldp+4081,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][4U] << 0x13U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][3U] >> 0xdU))),32);
    bufp->fullCData(oldp+4082,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [1U][3U] >> 9U))),4);
    bufp->fullCData(oldp+4083,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [1U][3U] >> 5U))),4);
    bufp->fullIData(oldp+4084,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][3U] << 0x1bU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][2U] >> 5U))),32);
    bufp->fullIData(oldp+4085,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][2U] << 0x1bU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][1U] >> 5U))),32);
    bufp->fullBit(oldp+4086,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [1U][1U] >> 4U))));
    bufp->fullBit(oldp+4087,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [1U][1U] >> 3U))));
    bufp->fullBit(oldp+4088,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [1U][1U] >> 2U))));
    bufp->fullBit(oldp+4089,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [1U][1U] >> 1U))));
    bufp->fullIData(oldp+4090,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [1U][1U] << 0x1fU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [1U][0U] >> 1U))),32);
    bufp->fullBit(oldp+4091,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                              [1U][0U])));
    bufp->fullBit(oldp+4092,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [2U][0xbU] >> 0x10U))));
    bufp->fullBit(oldp+4093,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [2U][0xbU] >> 0xfU))));
    bufp->fullBit(oldp+4094,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [2U][0xbU] >> 0xeU))));
    bufp->fullCData(oldp+4095,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [2U][0xbU] 
                                         >> 9U))),5);
    bufp->fullCData(oldp+4096,((0x3fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [2U][0xbU] 
                                         >> 3U))),6);
    bufp->fullCData(oldp+4097,((0x3fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [2U][0xbU] 
                                          << 3U) | 
                                         (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [2U][0xaU] 
                                          >> 0x1dU)))),6);
    bufp->fullIData(oldp+4098,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][0xaU] << 3U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][9U] >> 0x1dU))),32);
    bufp->fullIData(oldp+4099,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][9U] << 3U) | 
                                (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][8U] >> 0x1dU))),32);
    bufp->fullIData(oldp+4100,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][8U] << 3U) | 
                                (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][7U] >> 0x1dU))),32);
    bufp->fullBit(oldp+4101,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [2U][7U] >> 0x1cU))));
    bufp->fullBit(oldp+4102,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [2U][7U] >> 0x1bU))));
    bufp->fullCData(oldp+4103,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [2U][7U] >> 0x16U))),5);
    bufp->fullCData(oldp+4104,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [2U][7U] >> 0x11U))),5);
    bufp->fullIData(oldp+4105,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][7U] << 0xfU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][6U] >> 0x11U))),32);
    bufp->fullIData(oldp+4106,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][6U] << 0xfU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][5U] >> 0x11U))),32);
    bufp->fullCData(oldp+4107,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [2U][5U] >> 0xdU))),4);
    bufp->fullIData(oldp+4108,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][5U] << 0x13U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][4U] >> 0xdU))),32);
    bufp->fullIData(oldp+4109,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][4U] << 0x13U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][3U] >> 0xdU))),32);
    bufp->fullCData(oldp+4110,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [2U][3U] >> 9U))),4);
    bufp->fullCData(oldp+4111,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [2U][3U] >> 5U))),4);
    bufp->fullIData(oldp+4112,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][3U] << 0x1bU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][2U] >> 5U))),32);
    bufp->fullIData(oldp+4113,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][2U] << 0x1bU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][1U] >> 5U))),32);
    bufp->fullBit(oldp+4114,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [2U][1U] >> 4U))));
    bufp->fullBit(oldp+4115,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [2U][1U] >> 3U))));
    bufp->fullBit(oldp+4116,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [2U][1U] >> 2U))));
    bufp->fullBit(oldp+4117,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [2U][1U] >> 1U))));
    bufp->fullIData(oldp+4118,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [2U][1U] << 0x1fU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [2U][0U] >> 1U))),32);
    bufp->fullBit(oldp+4119,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                              [2U][0U])));
    bufp->fullBit(oldp+4120,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [3U][0xbU] >> 0x10U))));
    bufp->fullBit(oldp+4121,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [3U][0xbU] >> 0xfU))));
    bufp->fullBit(oldp+4122,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [3U][0xbU] >> 0xeU))));
    bufp->fullCData(oldp+4123,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [3U][0xbU] 
                                         >> 9U))),5);
    bufp->fullCData(oldp+4124,((0x3fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [3U][0xbU] 
                                         >> 3U))),6);
    bufp->fullCData(oldp+4125,((0x3fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [3U][0xbU] 
                                          << 3U) | 
                                         (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                          [3U][0xaU] 
                                          >> 0x1dU)))),6);
    bufp->fullIData(oldp+4126,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][0xaU] << 3U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][9U] >> 0x1dU))),32);
    bufp->fullIData(oldp+4127,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][9U] << 3U) | 
                                (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][8U] >> 0x1dU))),32);
    bufp->fullIData(oldp+4128,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][8U] << 3U) | 
                                (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][7U] >> 0x1dU))),32);
    bufp->fullBit(oldp+4129,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [3U][7U] >> 0x1cU))));
    bufp->fullBit(oldp+4130,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [3U][7U] >> 0x1bU))));
    bufp->fullCData(oldp+4131,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [3U][7U] >> 0x16U))),5);
    bufp->fullCData(oldp+4132,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                         [3U][7U] >> 0x11U))),5);
    bufp->fullIData(oldp+4133,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][7U] << 0xfU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][6U] >> 0x11U))),32);
    bufp->fullIData(oldp+4134,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][6U] << 0xfU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][5U] >> 0x11U))),32);
    bufp->fullCData(oldp+4135,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [3U][5U] >> 0xdU))),4);
    bufp->fullIData(oldp+4136,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][5U] << 0x13U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][4U] >> 0xdU))),32);
    bufp->fullIData(oldp+4137,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][4U] << 0x13U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][3U] >> 0xdU))),32);
    bufp->fullCData(oldp+4138,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [3U][3U] >> 9U))),4);
    bufp->fullCData(oldp+4139,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                        [3U][3U] >> 5U))),4);
    bufp->fullIData(oldp+4140,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][3U] << 0x1bU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][2U] >> 5U))),32);
    bufp->fullIData(oldp+4141,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][2U] << 0x1bU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][1U] >> 5U))),32);
    bufp->fullBit(oldp+4142,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [3U][1U] >> 4U))));
    bufp->fullBit(oldp+4143,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [3U][1U] >> 3U))));
    bufp->fullBit(oldp+4144,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [3U][1U] >> 2U))));
    bufp->fullBit(oldp+4145,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                    [3U][1U] >> 1U))));
    bufp->fullIData(oldp+4146,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                 [3U][1U] << 0x1fU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                                   [3U][0U] >> 1U))),32);
    bufp->fullBit(oldp+4147,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
                              [3U][0U])));
    bufp->fullIData(oldp+4148,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                        [0U] >> 0x1aU))),32);
    bufp->fullCData(oldp+4149,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [0U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4150,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [0U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4151,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [0U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4152,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [0U] >> 0xfU)))));
    bufp->fullBit(oldp+4153,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [0U] >> 0xeU)))));
    bufp->fullCData(oldp+4154,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                 [0U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4155,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                 [0U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4156,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [0U] >> 1U)))));
    bufp->fullBit(oldp+4157,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                           [0U]))));
    bufp->fullIData(oldp+4158,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                        [1U] >> 0x1aU))),32);
    bufp->fullCData(oldp+4159,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [1U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4160,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [1U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4161,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [1U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4162,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [1U] >> 0xfU)))));
    bufp->fullBit(oldp+4163,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [1U] >> 0xeU)))));
    bufp->fullCData(oldp+4164,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                 [1U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4165,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                 [1U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4166,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [1U] >> 1U)))));
    bufp->fullBit(oldp+4167,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                           [1U]))));
    bufp->fullIData(oldp+4168,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                        [2U] >> 0x1aU))),32);
    bufp->fullCData(oldp+4169,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [2U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4170,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [2U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4171,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [2U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4172,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [2U] >> 0xfU)))));
    bufp->fullBit(oldp+4173,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [2U] >> 0xeU)))));
    bufp->fullCData(oldp+4174,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                 [2U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4175,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                 [2U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4176,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [2U] >> 1U)))));
    bufp->fullBit(oldp+4177,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                           [2U]))));
    bufp->fullIData(oldp+4178,((IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                        [3U] >> 0x1aU))),32);
    bufp->fullCData(oldp+4179,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [3U] 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4180,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                [3U] 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4181,((7U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                              [3U] 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4182,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [3U] >> 0xfU)))));
    bufp->fullBit(oldp+4183,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [3U] >> 0xeU)))));
    bufp->fullCData(oldp+4184,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                 [3U] 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4185,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                                 [3U] 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4186,((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                            [3U] >> 1U)))));
    bufp->fullBit(oldp+4187,((1U & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
                                           [3U]))));
    bufp->fullBit(oldp+4188,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready[0]));
    bufp->fullBit(oldp+4189,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready[1]));
    bufp->fullBit(oldp+4190,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready[2]));
    bufp->fullBit(oldp+4191,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready[3]));
    bufp->fullBit(oldp+4192,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready[0]));
    bufp->fullBit(oldp+4193,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready[1]));
    bufp->fullBit(oldp+4194,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready[2]));
    bufp->fullBit(oldp+4195,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready[3]));
    bufp->fullCData(oldp+4196,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__wr_idx),2);
    bufp->fullCData(oldp+4197,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx),2);
    bufp->fullBit(oldp+4198,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__wr_idx_valid));
    bufp->fullBit(oldp+4199,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx_valid));
    bufp->fullIData(oldp+4200,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_rs__DOT__unnamedblk7__DOT__i),32);
    bufp->fullQData(oldp+4201,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss),64);
    bufp->fullQData(oldp+4203,(((QData)((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
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
    bufp->fullWData(oldp+4205,(__Vtemp_9),65);
    VL_EXTENDS_WI(65,32, __Vtemp_12, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val);
    __Vtemp_13[0U] = __Vtemp_12[0U];
    __Vtemp_13[1U] = __Vtemp_12[1U];
    __Vtemp_13[2U] = (1U & __Vtemp_12[2U]);
    VL_EXTENDS_WQ(65,33, __Vtemp_15, (QData)((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)));
    __Vtemp_16[0U] = __Vtemp_15[0U];
    __Vtemp_16[1U] = __Vtemp_15[1U];
    __Vtemp_16[2U] = (1U & __Vtemp_15[2U]);
    VL_MULS_WWW(65, __Vtemp_17, __Vtemp_13, __Vtemp_16);
    bufp->fullIData(oldp+4208,(((1U & (IData)((vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
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
    bufp->fullIData(oldp+4209,(((0U == vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                 ? 0xffffffffU : ((IData)(vlSymsp->TOP__top_tb__dut.cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                   ? 0x80000000U
                                                   : 
                                                  VL_DIVS_III(32, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)))),32);
    bufp->fullIData(oldp+4210,(((0U == vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                 ? 0xffffffffU : VL_DIV_III(32, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__lookup_mul_pr2_val))),32);
    bufp->fullBit(oldp+4211,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetchq_full));
    bufp->fullIData(oldp+4212,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_target),32);
    bufp->fullBit(oldp+4213,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp));
    bufp->fullBit(oldp+4214,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_valid));
    bufp->fullBit(oldp+4215,(((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp) 
                              & (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_valid))));
    bufp->fullBit(oldp+4216,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_hit));
    bufp->fullBit(oldp+4217,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__commit_pred_taken));
    bufp->fullBit(oldp+4218,(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT____Vcellinp__tage_predictor__update_valid));
    bufp->fullCData(oldp+4219,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[0]),3);
    bufp->fullCData(oldp+4220,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[1]),3);
    bufp->fullCData(oldp+4221,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[2]),3);
    bufp->fullCData(oldp+4222,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[3]),3);
    bufp->fullCData(oldp+4223,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[4]),3);
    bufp->fullCData(oldp+4224,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[5]),3);
    bufp->fullCData(oldp+4225,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[6]),3);
    bufp->fullCData(oldp+4226,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[7]),3);
    bufp->fullCData(oldp+4227,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[8]),3);
    bufp->fullCData(oldp+4228,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[9]),3);
    bufp->fullCData(oldp+4229,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[10]),3);
    bufp->fullCData(oldp+4230,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[11]),3);
    bufp->fullCData(oldp+4231,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[12]),3);
    bufp->fullCData(oldp+4232,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[13]),3);
    bufp->fullCData(oldp+4233,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[14]),3);
    bufp->fullCData(oldp+4234,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[15]),3);
    bufp->fullCData(oldp+4235,((0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                        >> 2U))),4);
    bufp->fullCData(oldp+4236,((0xfU & ((vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[0xaU] 
                                         << 1U) | (
                                                   vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[9U] 
                                                   >> 0x1fU)))),4);
    bufp->fullCData(oldp+4237,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_way),2);
    bufp->fullCData(oldp+4238,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_way),2);
    bufp->fullCData(oldp+4239,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_install_way),2);
    bufp->fullBit(oldp+4240,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_found));
    bufp->fullBit(oldp+4241,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_found));
    bufp->fullIData(oldp+4242,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk2__DOT__w),32);
    bufp->fullIData(oldp+4243,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk3__DOT__w),32);
    bufp->fullIData(oldp+4244,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk4__DOT__s),32);
    bufp->fullIData(oldp+4245,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__w),32);
    bufp->fullWData(oldp+4246,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_cand_ctr[0]),65);
    bufp->fullWData(oldp+4249,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_cand_ctr[1]),65);
    bufp->fullWData(oldp+4252,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_cand_ctr[2]),65);
    bufp->fullWData(oldp+4255,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_cand_ctr[3]),65);
    bufp->fullWData(oldp+4258,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_cand_ctr[4]),65);
    bufp->fullWData(oldp+4261,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_ctr[0]),65);
    bufp->fullWData(oldp+4264,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_ctr[1]),65);
    bufp->fullWData(oldp+4267,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_ctr[2]),65);
    bufp->fullWData(oldp+4270,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_ctr[3]),65);
    bufp->fullWData(oldp+4273,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_ctr[4]),65);
    bufp->fullWData(oldp+4276,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_ctr[0]),65);
    bufp->fullWData(oldp+4279,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_ctr[1]),65);
    bufp->fullWData(oldp+4282,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_ctr[2]),65);
    bufp->fullWData(oldp+4285,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_ctr[3]),65);
    bufp->fullWData(oldp+4288,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_ctr[4]),65);
    bufp->fullWData(oldp+4291,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mispred_ctr[0]),65);
    bufp->fullWData(oldp+4294,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mispred_ctr[1]),65);
    bufp->fullWData(oldp+4297,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mispred_ctr[2]),65);
    bufp->fullWData(oldp+4300,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mispred_ctr[3]),65);
    bufp->fullWData(oldp+4303,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mispred_ctr[4]),65);
    bufp->fullWData(oldp+4306,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_u_match_ctr[0]),65);
    bufp->fullWData(oldp+4309,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_u_match_ctr[1]),65);
    bufp->fullWData(oldp+4312,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_u_match_ctr[2]),65);
    bufp->fullWData(oldp+4315,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_u_match_ctr[3]),65);
    bufp->fullWData(oldp+4318,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_u_match_ctr[4]),65);
    bufp->fullWData(oldp+4321,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_match_ctr[0]),65);
    bufp->fullWData(oldp+4324,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_match_ctr[1]),65);
    bufp->fullWData(oldp+4327,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_match_ctr[2]),65);
    bufp->fullWData(oldp+4330,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_match_ctr[3]),65);
    bufp->fullWData(oldp+4333,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_match_ctr[4]),65);
    bufp->fullWData(oldp+4336,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__T4_fail_alloc_ctr),65);
    bufp->fullIData(oldp+4339,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist),32);
    bufp->fullIData(oldp+4340,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__phist),32);
    bufp->fullCData(oldp+4341,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lfsr),8);
    bufp->fullCData(oldp+4342,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_bp_idx),7);
    bufp->fullCData(oldp+4343,((0x7fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                          >> 0x19U) 
                                         ^ ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                             >> 5U) 
                                            ^ (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                               >> 0xdU))))),7);
    bufp->fullSData(oldp+4344,(((IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h9247e85f__0) 
                                ^ (3U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist))),9);
    bufp->fullSData(oldp+4345,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag),9);
    bufp->fullSData(oldp+4346,(((IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h9247e85f__0) 
                                ^ (0xfU & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist))),9);
    bufp->fullSData(oldp+4347,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag),9);
    bufp->fullSData(oldp+4348,(((IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h9247e85f__0) 
                                ^ (0xffU & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist))),9);
    bufp->fullSData(oldp+4349,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag),9);
    bufp->fullSData(oldp+4350,(((IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h9247e85f__0) 
                                ^ (IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h083e6cc3__0))),9);
    bufp->fullSData(oldp+4351,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag),9);
    bufp->fullIData(oldp+4352,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_2),32);
    bufp->fullIData(oldp+4353,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_3),32);
    bufp->fullIData(oldp+4354,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_4),32);
    bufp->fullBit(oldp+4355,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__bp_table
                                    [(0x7fU & ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                                >> 0x19U) 
                                               ^ ((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                                   >> 5U) 
                                                  ^ 
                                                  (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                                   >> 0xdU))))] 
                                    >> 1U))));
    bufp->fullBit(oldp+4356,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u));
    bufp->fullBit(oldp+4357,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u));
    bufp->fullBit(oldp+4358,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u));
    bufp->fullBit(oldp+4359,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u));
    bufp->fullBit(oldp+4360,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag));
    bufp->fullBit(oldp+4361,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag));
    bufp->fullBit(oldp+4362,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag));
    bufp->fullBit(oldp+4363,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag));
    bufp->fullIData(oldp+4364,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u),32);
    bufp->fullIData(oldp+4365,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u),32);
    bufp->fullIData(oldp+4366,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u),32);
    bufp->fullIData(oldp+4367,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u),32);
    bufp->fullIData(oldp+4368,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag),32);
    bufp->fullIData(oldp+4369,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag),32);
    bufp->fullIData(oldp+4370,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag),32);
    bufp->fullIData(oldp+4371,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag),32);
    bufp->fullCData(oldp+4372,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp),3);
    bufp->fullIData(oldp+4373,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp),32);
    bufp->fullBit(oldp+4374,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp));
    bufp->fullBit(oldp+4375,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp));
    bufp->fullBit(oldp+4376,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp));
    bufp->fullIData(oldp+4377,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp),32);
    bufp->fullIData(oldp+4378,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag),32);
    bufp->fullIData(oldp+4379,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag),32);
    bufp->fullIData(oldp+4380,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag),32);
    bufp->fullBit(oldp+4381,(((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp) 
                              != (1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table
                                        [(0x3fU & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag)] 
                                        >> 1U)))));
    bufp->fullBit(oldp+4382,(((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp) 
                              != (1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table
                                        [(0x3fU & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag)] 
                                        >> 1U)))));
    bufp->fullBit(oldp+4383,(((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp) 
                              != (1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table
                                        [(0x3fU & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag)] 
                                        >> 1U)))));
    bufp->fullIData(oldp+4384,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0U][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0U][4U] >> 9U))),32);
    bufp->fullCData(oldp+4385,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0U][4U] >> 6U))),3);
    bufp->fullIData(oldp+4386,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0U][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0U][3U] >> 6U))),32);
    bufp->fullBit(oldp+4387,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0U][3U] >> 5U))));
    bufp->fullBit(oldp+4388,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0U][3U] >> 4U))));
    bufp->fullBit(oldp+4389,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0U][3U] >> 3U))));
    bufp->fullIData(oldp+4390,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0U][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0U][2U] >> 3U))),32);
    bufp->fullIData(oldp+4391,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0U][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0U][1U] >> 3U))),32);
    bufp->fullIData(oldp+4392,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4393,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0U][0U] >> 2U))));
    bufp->fullBit(oldp+4394,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0U][0U] >> 1U))));
    bufp->fullBit(oldp+4395,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [0U][0U])));
    bufp->fullIData(oldp+4396,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [1U][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [1U][4U] >> 9U))),32);
    bufp->fullCData(oldp+4397,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [1U][4U] >> 6U))),3);
    bufp->fullIData(oldp+4398,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [1U][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [1U][3U] >> 6U))),32);
    bufp->fullBit(oldp+4399,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [1U][3U] >> 5U))));
    bufp->fullBit(oldp+4400,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [1U][3U] >> 4U))));
    bufp->fullBit(oldp+4401,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [1U][3U] >> 3U))));
    bufp->fullIData(oldp+4402,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [1U][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [1U][2U] >> 3U))),32);
    bufp->fullIData(oldp+4403,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [1U][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [1U][1U] >> 3U))),32);
    bufp->fullIData(oldp+4404,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [1U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [1U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4405,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [1U][0U] >> 2U))));
    bufp->fullBit(oldp+4406,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [1U][0U] >> 1U))));
    bufp->fullBit(oldp+4407,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [1U][0U])));
    bufp->fullIData(oldp+4408,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [2U][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [2U][4U] >> 9U))),32);
    bufp->fullCData(oldp+4409,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [2U][4U] >> 6U))),3);
    bufp->fullIData(oldp+4410,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [2U][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [2U][3U] >> 6U))),32);
    bufp->fullBit(oldp+4411,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [2U][3U] >> 5U))));
    bufp->fullBit(oldp+4412,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [2U][3U] >> 4U))));
    bufp->fullBit(oldp+4413,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [2U][3U] >> 3U))));
    bufp->fullIData(oldp+4414,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [2U][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [2U][2U] >> 3U))),32);
    bufp->fullIData(oldp+4415,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [2U][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [2U][1U] >> 3U))),32);
    bufp->fullIData(oldp+4416,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [2U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [2U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4417,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [2U][0U] >> 2U))));
    bufp->fullBit(oldp+4418,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [2U][0U] >> 1U))));
    bufp->fullBit(oldp+4419,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [2U][0U])));
    bufp->fullIData(oldp+4420,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [3U][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [3U][4U] >> 9U))),32);
    bufp->fullCData(oldp+4421,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [3U][4U] >> 6U))),3);
    bufp->fullIData(oldp+4422,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [3U][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [3U][3U] >> 6U))),32);
    bufp->fullBit(oldp+4423,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [3U][3U] >> 5U))));
    bufp->fullBit(oldp+4424,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [3U][3U] >> 4U))));
    bufp->fullBit(oldp+4425,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [3U][3U] >> 3U))));
    bufp->fullIData(oldp+4426,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [3U][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [3U][2U] >> 3U))),32);
    bufp->fullIData(oldp+4427,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [3U][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [3U][1U] >> 3U))),32);
    bufp->fullIData(oldp+4428,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [3U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [3U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4429,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [3U][0U] >> 2U))));
    bufp->fullBit(oldp+4430,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [3U][0U] >> 1U))));
    bufp->fullBit(oldp+4431,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [3U][0U])));
    bufp->fullIData(oldp+4432,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [4U][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [4U][4U] >> 9U))),32);
    bufp->fullCData(oldp+4433,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [4U][4U] >> 6U))),3);
    bufp->fullIData(oldp+4434,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [4U][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [4U][3U] >> 6U))),32);
    bufp->fullBit(oldp+4435,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [4U][3U] >> 5U))));
    bufp->fullBit(oldp+4436,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [4U][3U] >> 4U))));
    bufp->fullBit(oldp+4437,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [4U][3U] >> 3U))));
    bufp->fullIData(oldp+4438,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [4U][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [4U][2U] >> 3U))),32);
    bufp->fullIData(oldp+4439,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [4U][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [4U][1U] >> 3U))),32);
    bufp->fullIData(oldp+4440,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [4U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [4U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4441,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [4U][0U] >> 2U))));
    bufp->fullBit(oldp+4442,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [4U][0U] >> 1U))));
    bufp->fullBit(oldp+4443,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [4U][0U])));
    bufp->fullIData(oldp+4444,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [5U][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [5U][4U] >> 9U))),32);
    bufp->fullCData(oldp+4445,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [5U][4U] >> 6U))),3);
    bufp->fullIData(oldp+4446,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [5U][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [5U][3U] >> 6U))),32);
    bufp->fullBit(oldp+4447,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [5U][3U] >> 5U))));
    bufp->fullBit(oldp+4448,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [5U][3U] >> 4U))));
    bufp->fullBit(oldp+4449,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [5U][3U] >> 3U))));
    bufp->fullIData(oldp+4450,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [5U][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [5U][2U] >> 3U))),32);
    bufp->fullIData(oldp+4451,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [5U][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [5U][1U] >> 3U))),32);
    bufp->fullIData(oldp+4452,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [5U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [5U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4453,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [5U][0U] >> 2U))));
    bufp->fullBit(oldp+4454,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [5U][0U] >> 1U))));
    bufp->fullBit(oldp+4455,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [5U][0U])));
    bufp->fullIData(oldp+4456,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [6U][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [6U][4U] >> 9U))),32);
    bufp->fullCData(oldp+4457,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [6U][4U] >> 6U))),3);
    bufp->fullIData(oldp+4458,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [6U][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [6U][3U] >> 6U))),32);
    bufp->fullBit(oldp+4459,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [6U][3U] >> 5U))));
    bufp->fullBit(oldp+4460,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [6U][3U] >> 4U))));
    bufp->fullBit(oldp+4461,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [6U][3U] >> 3U))));
    bufp->fullIData(oldp+4462,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [6U][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [6U][2U] >> 3U))),32);
    bufp->fullIData(oldp+4463,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [6U][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [6U][1U] >> 3U))),32);
    bufp->fullIData(oldp+4464,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [6U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [6U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4465,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [6U][0U] >> 2U))));
    bufp->fullBit(oldp+4466,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [6U][0U] >> 1U))));
    bufp->fullBit(oldp+4467,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [6U][0U])));
    bufp->fullIData(oldp+4468,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [7U][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [7U][4U] >> 9U))),32);
    bufp->fullCData(oldp+4469,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [7U][4U] >> 6U))),3);
    bufp->fullIData(oldp+4470,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [7U][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [7U][3U] >> 6U))),32);
    bufp->fullBit(oldp+4471,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [7U][3U] >> 5U))));
    bufp->fullBit(oldp+4472,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [7U][3U] >> 4U))));
    bufp->fullBit(oldp+4473,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [7U][3U] >> 3U))));
    bufp->fullIData(oldp+4474,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [7U][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [7U][2U] >> 3U))),32);
    bufp->fullIData(oldp+4475,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [7U][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [7U][1U] >> 3U))),32);
    bufp->fullIData(oldp+4476,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [7U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [7U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4477,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [7U][0U] >> 2U))));
    bufp->fullBit(oldp+4478,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [7U][0U] >> 1U))));
    bufp->fullBit(oldp+4479,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [7U][0U])));
    bufp->fullIData(oldp+4480,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [8U][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [8U][4U] >> 9U))),32);
    bufp->fullCData(oldp+4481,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [8U][4U] >> 6U))),3);
    bufp->fullIData(oldp+4482,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [8U][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [8U][3U] >> 6U))),32);
    bufp->fullBit(oldp+4483,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [8U][3U] >> 5U))));
    bufp->fullBit(oldp+4484,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [8U][3U] >> 4U))));
    bufp->fullBit(oldp+4485,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [8U][3U] >> 3U))));
    bufp->fullIData(oldp+4486,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [8U][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [8U][2U] >> 3U))),32);
    bufp->fullIData(oldp+4487,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [8U][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [8U][1U] >> 3U))),32);
    bufp->fullIData(oldp+4488,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [8U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [8U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4489,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [8U][0U] >> 2U))));
    bufp->fullBit(oldp+4490,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [8U][0U] >> 1U))));
    bufp->fullBit(oldp+4491,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [8U][0U])));
    bufp->fullIData(oldp+4492,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [9U][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [9U][4U] >> 9U))),32);
    bufp->fullCData(oldp+4493,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [9U][4U] >> 6U))),3);
    bufp->fullIData(oldp+4494,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [9U][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [9U][3U] >> 6U))),32);
    bufp->fullBit(oldp+4495,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [9U][3U] >> 5U))));
    bufp->fullBit(oldp+4496,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [9U][3U] >> 4U))));
    bufp->fullBit(oldp+4497,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [9U][3U] >> 3U))));
    bufp->fullIData(oldp+4498,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [9U][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [9U][2U] >> 3U))),32);
    bufp->fullIData(oldp+4499,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [9U][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [9U][1U] >> 3U))),32);
    bufp->fullIData(oldp+4500,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [9U][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [9U][0U] >> 3U))),32);
    bufp->fullBit(oldp+4501,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [9U][0U] >> 2U))));
    bufp->fullBit(oldp+4502,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [9U][0U] >> 1U))));
    bufp->fullBit(oldp+4503,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [9U][0U])));
    bufp->fullIData(oldp+4504,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xaU][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xaU][4U] >> 9U))),32);
    bufp->fullCData(oldp+4505,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xaU][4U] >> 6U))),3);
    bufp->fullIData(oldp+4506,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xaU][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xaU][3U] >> 6U))),32);
    bufp->fullBit(oldp+4507,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xaU][3U] >> 5U))));
    bufp->fullBit(oldp+4508,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xaU][3U] >> 4U))));
    bufp->fullBit(oldp+4509,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xaU][3U] >> 3U))));
    bufp->fullIData(oldp+4510,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xaU][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xaU][2U] >> 3U))),32);
    bufp->fullIData(oldp+4511,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xaU][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xaU][1U] >> 3U))),32);
    bufp->fullIData(oldp+4512,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xaU][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xaU][0U] >> 3U))),32);
    bufp->fullBit(oldp+4513,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xaU][0U] >> 2U))));
    bufp->fullBit(oldp+4514,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xaU][0U] >> 1U))));
    bufp->fullBit(oldp+4515,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [0xaU][0U])));
    bufp->fullIData(oldp+4516,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xbU][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xbU][4U] >> 9U))),32);
    bufp->fullCData(oldp+4517,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xbU][4U] >> 6U))),3);
    bufp->fullIData(oldp+4518,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xbU][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xbU][3U] >> 6U))),32);
    bufp->fullBit(oldp+4519,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xbU][3U] >> 5U))));
    bufp->fullBit(oldp+4520,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xbU][3U] >> 4U))));
    bufp->fullBit(oldp+4521,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xbU][3U] >> 3U))));
    bufp->fullIData(oldp+4522,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xbU][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xbU][2U] >> 3U))),32);
    bufp->fullIData(oldp+4523,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xbU][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xbU][1U] >> 3U))),32);
    bufp->fullIData(oldp+4524,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xbU][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xbU][0U] >> 3U))),32);
    bufp->fullBit(oldp+4525,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xbU][0U] >> 2U))));
    bufp->fullBit(oldp+4526,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xbU][0U] >> 1U))));
    bufp->fullBit(oldp+4527,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [0xbU][0U])));
    bufp->fullIData(oldp+4528,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xcU][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xcU][4U] >> 9U))),32);
    bufp->fullCData(oldp+4529,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xcU][4U] >> 6U))),3);
    bufp->fullIData(oldp+4530,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xcU][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xcU][3U] >> 6U))),32);
    bufp->fullBit(oldp+4531,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xcU][3U] >> 5U))));
    bufp->fullBit(oldp+4532,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xcU][3U] >> 4U))));
    bufp->fullBit(oldp+4533,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xcU][3U] >> 3U))));
    bufp->fullIData(oldp+4534,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xcU][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xcU][2U] >> 3U))),32);
    bufp->fullIData(oldp+4535,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xcU][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xcU][1U] >> 3U))),32);
    bufp->fullIData(oldp+4536,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xcU][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xcU][0U] >> 3U))),32);
    bufp->fullBit(oldp+4537,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xcU][0U] >> 2U))));
    bufp->fullBit(oldp+4538,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xcU][0U] >> 1U))));
    bufp->fullBit(oldp+4539,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [0xcU][0U])));
    bufp->fullIData(oldp+4540,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xdU][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xdU][4U] >> 9U))),32);
    bufp->fullCData(oldp+4541,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xdU][4U] >> 6U))),3);
    bufp->fullIData(oldp+4542,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xdU][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xdU][3U] >> 6U))),32);
    bufp->fullBit(oldp+4543,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xdU][3U] >> 5U))));
    bufp->fullBit(oldp+4544,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xdU][3U] >> 4U))));
    bufp->fullBit(oldp+4545,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xdU][3U] >> 3U))));
    bufp->fullIData(oldp+4546,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xdU][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xdU][2U] >> 3U))),32);
    bufp->fullIData(oldp+4547,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xdU][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xdU][1U] >> 3U))),32);
    bufp->fullIData(oldp+4548,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xdU][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xdU][0U] >> 3U))),32);
    bufp->fullBit(oldp+4549,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xdU][0U] >> 2U))));
    bufp->fullBit(oldp+4550,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xdU][0U] >> 1U))));
    bufp->fullBit(oldp+4551,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [0xdU][0U])));
    bufp->fullIData(oldp+4552,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xeU][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xeU][4U] >> 9U))),32);
    bufp->fullCData(oldp+4553,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xeU][4U] >> 6U))),3);
    bufp->fullIData(oldp+4554,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xeU][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xeU][3U] >> 6U))),32);
    bufp->fullBit(oldp+4555,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xeU][3U] >> 5U))));
    bufp->fullBit(oldp+4556,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xeU][3U] >> 4U))));
    bufp->fullBit(oldp+4557,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xeU][3U] >> 3U))));
    bufp->fullIData(oldp+4558,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xeU][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xeU][2U] >> 3U))),32);
    bufp->fullIData(oldp+4559,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xeU][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xeU][1U] >> 3U))),32);
    bufp->fullIData(oldp+4560,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xeU][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xeU][0U] >> 3U))),32);
    bufp->fullBit(oldp+4561,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xeU][0U] >> 2U))));
    bufp->fullBit(oldp+4562,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xeU][0U] >> 1U))));
    bufp->fullBit(oldp+4563,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [0xeU][0U])));
    bufp->fullIData(oldp+4564,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xfU][5U] << 0x17U) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xfU][4U] >> 9U))),32);
    bufp->fullCData(oldp+4565,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                      [0xfU][4U] >> 6U))),3);
    bufp->fullIData(oldp+4566,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xfU][4U] << 0x1aU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xfU][3U] >> 6U))),32);
    bufp->fullBit(oldp+4567,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xfU][3U] >> 5U))));
    bufp->fullBit(oldp+4568,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xfU][3U] >> 4U))));
    bufp->fullBit(oldp+4569,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xfU][3U] >> 3U))));
    bufp->fullIData(oldp+4570,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xfU][3U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xfU][2U] >> 3U))),32);
    bufp->fullIData(oldp+4571,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xfU][2U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xfU][1U] >> 3U))),32);
    bufp->fullIData(oldp+4572,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                 [0xfU][1U] << 0x1dU) 
                                | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                   [0xfU][0U] >> 3U))),32);
    bufp->fullBit(oldp+4573,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xfU][0U] >> 2U))));
    bufp->fullBit(oldp+4574,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                                    [0xfU][0U] >> 1U))));
    bufp->fullBit(oldp+4575,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
                              [0xfU][0U])));
    bufp->fullIData(oldp+4576,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[5U] 
                                 << 0x17U) | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U] 
                                              >> 9U))),32);
    bufp->fullCData(oldp+4577,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U] 
                                      >> 6U))),3);
    bufp->fullIData(oldp+4578,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U] 
                                 << 0x1aU) | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[3U] 
                                              >> 6U))),32);
    bufp->fullBit(oldp+4579,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[3U] 
                                    >> 5U))));
    bufp->fullBit(oldp+4580,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[3U] 
                                    >> 4U))));
    bufp->fullBit(oldp+4581,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[3U] 
                                    >> 3U))));
    bufp->fullIData(oldp+4582,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[3U] 
                                 << 0x1dU) | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[2U] 
                                              >> 3U))),32);
    bufp->fullIData(oldp+4583,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[2U] 
                                 << 0x1dU) | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[1U] 
                                              >> 3U))),32);
    bufp->fullIData(oldp+4584,(((vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[1U] 
                                 << 0x1dU) | (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[0U] 
                                              >> 3U))),32);
    bufp->fullBit(oldp+4585,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[0U] 
                                    >> 2U))));
    bufp->fullBit(oldp+4586,((1U & (vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[0U] 
                                    >> 1U))));
    bufp->fullBit(oldp+4587,((1U & vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[0U])));
    bufp->fullCData(oldp+4588,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtr),5);
    bufp->fullCData(oldp+4589,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr),5);
    bufp->fullCData(oldp+4590,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtrNext),5);
    bufp->fullBit(oldp+4591,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__full));
    bufp->fullBit(oldp+4592,((((1U & ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtr) 
                                      >> 4U)) == (1U 
                                                  & ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr) 
                                                     >> 4U))) 
                              & (IData)(vlSymsp->TOP__top_tb__dut.cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_hc4999392__0))));
    bufp->fullBit(oldp+4593,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__fifo_valid_pop));
    bufp->fullBit(oldp+4594,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T1));
    bufp->fullBit(oldp+4595,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T2));
    bufp->fullBit(oldp+4596,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T3));
    bufp->fullBit(oldp+4597,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T4));
    bufp->fullBit(oldp+4598,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1));
    bufp->fullBit(oldp+4599,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2));
    bufp->fullBit(oldp+4600,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3));
    bufp->fullBit(oldp+4601,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4));
    bufp->fullBit(oldp+4602,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1));
    bufp->fullBit(oldp+4603,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2));
    bufp->fullBit(oldp+4604,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3));
    bufp->fullBit(oldp+4605,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4));
    bufp->fullIData(oldp+4606,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T1),32);
    bufp->fullIData(oldp+4607,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T2),32);
    bufp->fullIData(oldp+4608,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T3),32);
    bufp->fullIData(oldp+4609,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T4),32);
    bufp->fullCData(oldp+4610,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T1),6);
    bufp->fullCData(oldp+4611,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T2),6);
    bufp->fullCData(oldp+4612,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T3),6);
    bufp->fullCData(oldp+4613,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T4),6);
    bufp->fullBit(oldp+4614,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[0]));
    bufp->fullBit(oldp+4615,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[1]));
    bufp->fullBit(oldp+4616,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[2]));
    bufp->fullBit(oldp+4617,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[3]));
    bufp->fullCData(oldp+4618,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position),3);
    bufp->fullBit(oldp+4619,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__decrement_all_u));
    bufp->fullIData(oldp+4620,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1),32);
    bufp->fullIData(oldp+4621,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2),32);
    bufp->fullIData(oldp+4622,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3),32);
    bufp->fullIData(oldp+4623,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4),32);
    bufp->fullIData(oldp+4624,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count),32);
    bufp->fullIData(oldp+4625,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__target_q),32);
    bufp->fullIData(oldp+4626,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+4627,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk10__DOT__i),32);
    bufp->fullIData(oldp+4628,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk11__DOT__i),32);
    bufp->fullIData(oldp+4629,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk12__DOT__i),32);
    bufp->fullIData(oldp+4630,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk13__DOT__i),32);
    bufp->fullIData(oldp+4631,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk14__DOT__i),32);
    bufp->fullIData(oldp+4632,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk15__DOT__i),32);
    bufp->fullIData(oldp+4633,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk16__DOT__i),32);
    bufp->fullIData(oldp+4634,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk17__DOT__i),32);
    bufp->fullIData(oldp+4635,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk18__DOT__i),32);
    bufp->fullIData(oldp+4636,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk19__DOT__i),32);
    bufp->fullIData(oldp+4637,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk20__DOT__i),32);
    bufp->fullIData(oldp+4638,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk21__DOT__i),32);
    bufp->fullIData(oldp+4639,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk22__DOT__i),32);
    bufp->fullIData(oldp+4640,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk23__DOT__i),32);
    bufp->fullIData(oldp+4641,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk24__DOT__i),32);
    bufp->fullIData(oldp+4642,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk25__DOT__i),32);
    bufp->fullIData(oldp+4643,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk26__DOT__i),32);
    bufp->fullIData(oldp+4644,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk27__DOT__i),32);
    bufp->fullIData(oldp+4645,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk28__DOT__i),32);
    bufp->fullIData(oldp+4646,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+4647,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk7__DOT__i),32);
    bufp->fullIData(oldp+4648,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk8__DOT__i),32);
    bufp->fullIData(oldp+4649,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk9__DOT__i),32);
    bufp->fullBit(oldp+4650,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch__DOT__stale_in_flight));
    bufp->fullBit(oldp+4651,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_empty));
    bufp->fullBit(oldp+4652,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_empty));
    bufp->fullBit(oldp+4653,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_empty));
    bufp->fullBit(oldp+4654,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_empty));
    bufp->fullBit(oldp+4655,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_full));
    bufp->fullBit(oldp+4656,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_full));
    bufp->fullBit(oldp+4657,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_full));
    bufp->fullBit(oldp+4658,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_full));
    bufp->fullBit(oldp+4659,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[0]));
    bufp->fullBit(oldp+4660,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[1]));
    bufp->fullBit(oldp+4661,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[2]));
    bufp->fullBit(oldp+4662,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[3]));
    bufp->fullBit(oldp+4663,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[4]));
    bufp->fullBit(oldp+4664,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[5]));
    bufp->fullBit(oldp+4665,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[6]));
    bufp->fullBit(oldp+4666,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[7]));
    bufp->fullCData(oldp+4667,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__wrPtr),4);
    bufp->fullCData(oldp+4668,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__rdPtr),4);
    bufp->fullIData(oldp+4669,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+4670,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[0]),32);
    bufp->fullIData(oldp+4671,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[1]),32);
    bufp->fullIData(oldp+4672,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[2]),32);
    bufp->fullIData(oldp+4673,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[3]),32);
    bufp->fullIData(oldp+4674,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[4]),32);
    bufp->fullIData(oldp+4675,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[5]),32);
    bufp->fullIData(oldp+4676,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[6]),32);
    bufp->fullIData(oldp+4677,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[7]),32);
    bufp->fullCData(oldp+4678,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__wrPtr),4);
    bufp->fullCData(oldp+4679,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__rdPtr),4);
    bufp->fullIData(oldp+4680,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+4681,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[0]),32);
    bufp->fullIData(oldp+4682,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[1]),32);
    bufp->fullIData(oldp+4683,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[2]),32);
    bufp->fullIData(oldp+4684,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[3]),32);
    bufp->fullIData(oldp+4685,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[4]),32);
    bufp->fullIData(oldp+4686,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[5]),32);
    bufp->fullIData(oldp+4687,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[6]),32);
    bufp->fullIData(oldp+4688,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[7]),32);
    bufp->fullCData(oldp+4689,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__wrPtr),4);
    bufp->fullCData(oldp+4690,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__rdPtr),4);
    bufp->fullIData(oldp+4691,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+4692,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[0]),32);
    bufp->fullIData(oldp+4693,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[1]),32);
    bufp->fullIData(oldp+4694,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[2]),32);
    bufp->fullIData(oldp+4695,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[3]),32);
    bufp->fullIData(oldp+4696,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[4]),32);
    bufp->fullIData(oldp+4697,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[5]),32);
    bufp->fullIData(oldp+4698,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[6]),32);
    bufp->fullIData(oldp+4699,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[7]),32);
    bufp->fullCData(oldp+4700,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__wrPtr),4);
    bufp->fullCData(oldp+4701,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__rdPtr),4);
    bufp->fullIData(oldp+4702,(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+4703,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0]),6);
    bufp->fullCData(oldp+4704,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[1]),6);
    bufp->fullCData(oldp+4705,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[2]),6);
    bufp->fullCData(oldp+4706,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[3]),6);
    bufp->fullCData(oldp+4707,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[4]),6);
    bufp->fullCData(oldp+4708,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[5]),6);
    bufp->fullCData(oldp+4709,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[6]),6);
    bufp->fullCData(oldp+4710,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[7]),6);
    bufp->fullCData(oldp+4711,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[8]),6);
    bufp->fullCData(oldp+4712,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[9]),6);
    bufp->fullCData(oldp+4713,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[10]),6);
    bufp->fullCData(oldp+4714,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[11]),6);
    bufp->fullCData(oldp+4715,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[12]),6);
    bufp->fullCData(oldp+4716,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[13]),6);
    bufp->fullCData(oldp+4717,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[14]),6);
    bufp->fullCData(oldp+4718,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[15]),6);
    bufp->fullCData(oldp+4719,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[16]),6);
    bufp->fullCData(oldp+4720,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[17]),6);
    bufp->fullCData(oldp+4721,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[18]),6);
    bufp->fullCData(oldp+4722,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[19]),6);
    bufp->fullCData(oldp+4723,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[20]),6);
    bufp->fullCData(oldp+4724,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[21]),6);
    bufp->fullCData(oldp+4725,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[22]),6);
    bufp->fullCData(oldp+4726,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[23]),6);
    bufp->fullCData(oldp+4727,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[24]),6);
    bufp->fullCData(oldp+4728,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[25]),6);
    bufp->fullCData(oldp+4729,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[26]),6);
    bufp->fullCData(oldp+4730,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[27]),6);
    bufp->fullCData(oldp+4731,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[28]),6);
    bufp->fullCData(oldp+4732,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[29]),6);
    bufp->fullCData(oldp+4733,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[30]),6);
    bufp->fullCData(oldp+4734,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[31]),6);
    bufp->fullBit(oldp+4735,(vlSymsp->TOP__top_tb__dut.__Vcellinp__cpu_midcore__commit_update));
    bufp->fullBit(oldp+4736,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                    >> 0x10U))));
    bufp->fullBit(oldp+4737,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                    >> 0xfU))));
    bufp->fullBit(oldp+4738,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                    >> 0xeU))));
    bufp->fullCData(oldp+4739,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                         >> 9U))),5);
    bufp->fullCData(oldp+4740,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                         >> 3U))),6);
    bufp->fullCData(oldp+4741,((0x3fU & ((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xbU] 
                                          << 3U) | 
                                         (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xaU] 
                                          >> 0x1dU)))),6);
    bufp->fullIData(oldp+4742,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0xaU] 
                                 << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[9U] 
                                           >> 0x1dU))),32);
    bufp->fullIData(oldp+4743,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[9U] 
                                 << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[8U] 
                                           >> 0x1dU))),32);
    bufp->fullIData(oldp+4744,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[8U] 
                                 << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                           >> 0x1dU))),32);
    bufp->fullBit(oldp+4745,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+4746,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                    >> 0x1bU))));
    bufp->fullCData(oldp+4747,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                         >> 0x16U))),5);
    bufp->fullCData(oldp+4748,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                         >> 0x11U))),5);
    bufp->fullIData(oldp+4749,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[7U] 
                                 << 0xfU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[6U] 
                                             >> 0x11U))),32);
    bufp->fullIData(oldp+4750,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[6U] 
                                 << 0xfU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[5U] 
                                             >> 0x11U))),32);
    bufp->fullCData(oldp+4751,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[5U] 
                                        >> 0xdU))),4);
    bufp->fullIData(oldp+4752,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[5U] 
                                 << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[4U] 
                                              >> 0xdU))),32);
    bufp->fullIData(oldp+4753,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[4U] 
                                 << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[3U] 
                                              >> 0xdU))),32);
    bufp->fullCData(oldp+4754,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[3U] 
                                        >> 9U))),4);
    bufp->fullCData(oldp+4755,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[3U] 
                                        >> 5U))),4);
    bufp->fullIData(oldp+4756,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[3U] 
                                 << 0x1bU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[2U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+4757,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[2U] 
                                 << 0x1bU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                              >> 5U))),32);
    bufp->fullBit(oldp+4758,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                    >> 4U))));
    bufp->fullBit(oldp+4759,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                    >> 3U))));
    bufp->fullBit(oldp+4760,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                    >> 2U))));
    bufp->fullBit(oldp+4761,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                    >> 1U))));
    bufp->fullIData(oldp+4762,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[1U] 
                                 << 0x1fU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0U] 
                                              >> 1U))),32);
    bufp->fullBit(oldp+4763,((1U & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_decode_o[0U])));
    bufp->fullBit(oldp+4764,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                    >> 0x10U))));
    bufp->fullBit(oldp+4765,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                    >> 0xfU))));
    bufp->fullBit(oldp+4766,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                    >> 0xeU))));
    bufp->fullCData(oldp+4767,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                         >> 9U))),5);
    bufp->fullCData(oldp+4768,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                         >> 3U))),6);
    bufp->fullCData(oldp+4769,((0x3fU & ((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xbU] 
                                          << 3U) | 
                                         (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xaU] 
                                          >> 0x1dU)))),6);
    bufp->fullIData(oldp+4770,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0xaU] 
                                 << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[9U] 
                                           >> 0x1dU))),32);
    bufp->fullIData(oldp+4771,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[9U] 
                                 << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[8U] 
                                           >> 0x1dU))),32);
    bufp->fullIData(oldp+4772,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[8U] 
                                 << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                           >> 0x1dU))),32);
    bufp->fullBit(oldp+4773,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+4774,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                    >> 0x1bU))));
    bufp->fullCData(oldp+4775,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                         >> 0x16U))),5);
    bufp->fullCData(oldp+4776,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                         >> 0x11U))),5);
    bufp->fullIData(oldp+4777,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[7U] 
                                 << 0xfU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[6U] 
                                             >> 0x11U))),32);
    bufp->fullIData(oldp+4778,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[6U] 
                                 << 0xfU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[5U] 
                                             >> 0x11U))),32);
    bufp->fullCData(oldp+4779,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[5U] 
                                        >> 0xdU))),4);
    bufp->fullIData(oldp+4780,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[5U] 
                                 << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[4U] 
                                              >> 0xdU))),32);
    bufp->fullIData(oldp+4781,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[4U] 
                                 << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[3U] 
                                              >> 0xdU))),32);
    bufp->fullCData(oldp+4782,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[3U] 
                                        >> 9U))),4);
    bufp->fullCData(oldp+4783,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[3U] 
                                        >> 5U))),4);
    bufp->fullIData(oldp+4784,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[3U] 
                                 << 0x1bU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[2U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+4785,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[2U] 
                                 << 0x1bU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                              >> 5U))),32);
    bufp->fullBit(oldp+4786,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                    >> 4U))));
    bufp->fullBit(oldp+4787,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                    >> 3U))));
    bufp->fullBit(oldp+4788,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                    >> 2U))));
    bufp->fullBit(oldp+4789,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                    >> 1U))));
    bufp->fullIData(oldp+4790,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[1U] 
                                 << 0x1fU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0U] 
                                              >> 1U))),32);
    bufp->fullBit(oldp+4791,((1U & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_o[0U])));
    bufp->fullBit(oldp+4792,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                    >> 0x10U))));
    bufp->fullBit(oldp+4793,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                    >> 0xfU))));
    bufp->fullBit(oldp+4794,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                    >> 0xeU))));
    bufp->fullCData(oldp+4795,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                         >> 9U))),5);
    bufp->fullCData(oldp+4796,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                         >> 3U))),6);
    bufp->fullCData(oldp+4797,((0x3fU & ((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU] 
                                          << 3U) | 
                                         (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xaU] 
                                          >> 0x1dU)))),6);
    bufp->fullIData(oldp+4798,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xaU] 
                                 << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[9U] 
                                           >> 0x1dU))),32);
    bufp->fullIData(oldp+4799,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[9U] 
                                 << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[8U] 
                                           >> 0x1dU))),32);
    bufp->fullIData(oldp+4800,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[8U] 
                                 << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                           >> 0x1dU))),32);
    bufp->fullBit(oldp+4801,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+4802,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                    >> 0x1bU))));
    bufp->fullCData(oldp+4803,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                         >> 0x16U))),5);
    bufp->fullCData(oldp+4804,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                         >> 0x11U))),5);
    bufp->fullIData(oldp+4805,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[7U] 
                                 << 0xfU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[6U] 
                                             >> 0x11U))),32);
    bufp->fullIData(oldp+4806,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[6U] 
                                 << 0xfU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[5U] 
                                             >> 0x11U))),32);
    bufp->fullCData(oldp+4807,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[5U] 
                                        >> 0xdU))),4);
    bufp->fullIData(oldp+4808,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[5U] 
                                 << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[4U] 
                                              >> 0xdU))),32);
    bufp->fullIData(oldp+4809,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[4U] 
                                 << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[3U] 
                                              >> 0xdU))),32);
    bufp->fullCData(oldp+4810,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[3U] 
                                        >> 9U))),4);
    bufp->fullCData(oldp+4811,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[3U] 
                                        >> 5U))),4);
    bufp->fullIData(oldp+4812,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[3U] 
                                 << 0x1bU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[2U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+4813,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[2U] 
                                 << 0x1bU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                              >> 5U))),32);
    bufp->fullBit(oldp+4814,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                    >> 4U))));
    bufp->fullBit(oldp+4815,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                    >> 3U))));
    bufp->fullBit(oldp+4816,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                    >> 2U))));
    bufp->fullBit(oldp+4817,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                    >> 1U))));
    bufp->fullIData(oldp+4818,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[1U] 
                                 << 0x1fU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0U] 
                                              >> 1U))),32);
    bufp->fullBit(oldp+4819,((1U & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0U])));
    bufp->fullBit(oldp+4820,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                    >> 0x10U))));
    bufp->fullBit(oldp+4821,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                    >> 0xfU))));
    bufp->fullBit(oldp+4822,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                    >> 0xeU))));
    bufp->fullCData(oldp+4823,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                         >> 9U))),5);
    bufp->fullCData(oldp+4824,((0x3fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                         >> 3U))),6);
    bufp->fullCData(oldp+4825,((0x3fU & ((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xbU] 
                                          << 3U) | 
                                         (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xaU] 
                                          >> 0x1dU)))),6);
    bufp->fullIData(oldp+4826,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0xaU] 
                                 << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[9U] 
                                           >> 0x1dU))),32);
    bufp->fullIData(oldp+4827,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[9U] 
                                 << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[8U] 
                                           >> 0x1dU))),32);
    bufp->fullIData(oldp+4828,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[8U] 
                                 << 3U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                           >> 0x1dU))),32);
    bufp->fullBit(oldp+4829,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+4830,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                    >> 0x1bU))));
    bufp->fullCData(oldp+4831,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                         >> 0x16U))),5);
    bufp->fullCData(oldp+4832,((0x1fU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                         >> 0x11U))),5);
    bufp->fullIData(oldp+4833,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[7U] 
                                 << 0xfU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[6U] 
                                             >> 0x11U))),32);
    bufp->fullIData(oldp+4834,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[6U] 
                                 << 0xfU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[5U] 
                                             >> 0x11U))),32);
    bufp->fullCData(oldp+4835,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[5U] 
                                        >> 0xdU))),4);
    bufp->fullIData(oldp+4836,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[5U] 
                                 << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[4U] 
                                              >> 0xdU))),32);
    bufp->fullIData(oldp+4837,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[4U] 
                                 << 0x13U) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[3U] 
                                              >> 0xdU))),32);
    bufp->fullCData(oldp+4838,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[3U] 
                                        >> 9U))),4);
    bufp->fullCData(oldp+4839,((0xfU & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[3U] 
                                        >> 5U))),4);
    bufp->fullIData(oldp+4840,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[3U] 
                                 << 0x1bU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[2U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+4841,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[2U] 
                                 << 0x1bU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                              >> 5U))),32);
    bufp->fullBit(oldp+4842,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                    >> 4U))));
    bufp->fullBit(oldp+4843,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                    >> 3U))));
    bufp->fullBit(oldp+4844,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                    >> 2U))));
    bufp->fullBit(oldp+4845,((1U & (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                    >> 1U))));
    bufp->fullIData(oldp+4846,(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[1U] 
                                 << 0x1fU) | (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0U] 
                                              >> 1U))),32);
    bufp->fullBit(oldp+4847,((1U & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename2_reg[0U])));
    bufp->fullIData(oldp+4848,((IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                        >> 0x1aU))),32);
    bufp->fullCData(oldp+4849,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4850,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4851,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4852,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+4853,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                            >> 0xeU)))));
    bufp->fullCData(oldp+4854,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4855,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4856,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o 
                                            >> 1U)))));
    bufp->fullBit(oldp+4857,((1U & (IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_decode_o))));
    bufp->fullIData(oldp+4858,((IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                        >> 0x1aU))),32);
    bufp->fullCData(oldp+4859,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4860,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4861,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4862,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+4863,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                            >> 0xeU)))));
    bufp->fullCData(oldp+4864,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4865,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4866,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                            >> 1U)))));
    bufp->fullBit(oldp+4867,((1U & (IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg))));
    bufp->fullIData(oldp+4868,((IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                        >> 0x1aU))),32);
    bufp->fullCData(oldp+4869,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                              >> 0x17U)))),3);
    bufp->fullCData(oldp+4870,((0xfU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                                >> 0x13U)))),4);
    bufp->fullCData(oldp+4871,((7U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                              >> 0x10U)))),3);
    bufp->fullBit(oldp+4872,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+4873,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                            >> 0xeU)))));
    bufp->fullCData(oldp+4874,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                                 >> 8U)))),6);
    bufp->fullCData(oldp+4875,((0x3fU & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                                 >> 2U)))),6);
    bufp->fullBit(oldp+4876,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg 
                                            >> 1U)))));
    bufp->fullBit(oldp+4877,((1U & (IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename2_reg))));
    bufp->fullCData(oldp+4878,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat_lookup_rs1),5);
    bufp->fullCData(oldp+4879,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+4880,((0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                         >> 7U))),5);
    bufp->fullCData(oldp+4881,(((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                               >> 0xfU)))
                                 ? (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                     >> 8U)))
                                 : 0U)),6);
    bufp->fullCData(oldp+4882,(((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                               >> 0xeU)))
                                 ? (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_rename1_reg 
                                                     >> 2U)))
                                 : 0U)),6);
    bufp->fullBit(oldp+4883,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__busy_table__DOT__bt 
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
    bufp->fullBit(oldp+4884,((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__busy_table__DOT__bt 
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
    bufp->fullCData(oldp+4885,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_pr),6);
    bufp->fullBit(oldp+4886,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_pr_valid));
    bufp->fullBit(oldp+4887,((IData)((0x14000U == (0x14000U 
                                                   & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_rename1_reg[0xbU])))));
    bufp->fullCData(oldp+4888,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__rename_update_pr),6);
    bufp->fullCData(oldp+4889,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__rename_update_ar),5);
    bufp->fullQData(oldp+4890,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__busy_table__DOT__bt),64);
    bufp->fullCData(oldp+4892,((vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+4893,((0x7fU & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)),7);
    bufp->fullIData(oldp+4894,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__i_imm),32);
    bufp->fullIData(oldp+4895,((((- (IData)((vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                             >> 0x1fU))) 
                                 << 0xbU) | ((0x7e0U 
                                              & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+4896,((((- (IData)((vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
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
    bufp->fullIData(oldp+4897,((0xfffff000U & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)),32);
    bufp->fullIData(oldp+4898,((((- (IData)((vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                             >> 0x1fU))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst) 
                                              | ((0x800U 
                                                  & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                       >> 0x14U)))))),32);
    bufp->fullCData(oldp+4899,((7U & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                      >> 0xcU))),3);
    bufp->fullBit(oldp+4900,((((IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.decode__DOT____VdfgTmp_h90d7ced5__0) 
                               | ((3U == (0x7fU & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                  | ((0x6fU == (0x7fU 
                                                & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                     | ((0x67U == (0x7fU 
                                                   & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                                        | (IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.decode__DOT____VdfgExtracted_hf4d07035__0))))) 
                              & (0U != (0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst 
                                                 >> 7U))))));
    bufp->fullBit(oldp+4901,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__rs1_valid));
    bufp->fullBit(oldp+4902,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__rs2_valid));
    bufp->fullBit(oldp+4903,((0x63U == (0x7fU & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst))));
    bufp->fullIData(oldp+4904,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__imm_o),32);
    bufp->fullCData(oldp+4905,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__dispatch_to),3);
    bufp->fullCData(oldp+4906,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__decode__DOT__alu_op),4);
    bufp->fullBit(oldp+4907,(((0x6fU == (0x7fU & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)) 
                              | (0x67U == (0x7fU & vlSymsp->TOP__top_tb__dut.__PVT__fetch_inst)))));
    bufp->fullQData(oldp+4908,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list),64);
    bufp->fullQData(oldp+4910,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list_recovery),64);
    bufp->fullCData(oldp+4912,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[0]),6);
    bufp->fullCData(oldp+4913,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[1]),6);
    bufp->fullCData(oldp+4914,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[2]),6);
    bufp->fullCData(oldp+4915,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[3]),6);
    bufp->fullCData(oldp+4916,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[4]),6);
    bufp->fullCData(oldp+4917,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[5]),6);
    bufp->fullCData(oldp+4918,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[6]),6);
    bufp->fullCData(oldp+4919,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[7]),6);
    bufp->fullCData(oldp+4920,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[8]),6);
    bufp->fullCData(oldp+4921,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[9]),6);
    bufp->fullCData(oldp+4922,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[10]),6);
    bufp->fullCData(oldp+4923,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[11]),6);
    bufp->fullCData(oldp+4924,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[12]),6);
    bufp->fullCData(oldp+4925,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[13]),6);
    bufp->fullCData(oldp+4926,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[14]),6);
    bufp->fullCData(oldp+4927,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[15]),6);
    bufp->fullCData(oldp+4928,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[16]),6);
    bufp->fullCData(oldp+4929,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[17]),6);
    bufp->fullCData(oldp+4930,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[18]),6);
    bufp->fullCData(oldp+4931,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[19]),6);
    bufp->fullCData(oldp+4932,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[20]),6);
    bufp->fullCData(oldp+4933,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[21]),6);
    bufp->fullCData(oldp+4934,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[22]),6);
    bufp->fullCData(oldp+4935,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[23]),6);
    bufp->fullCData(oldp+4936,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[24]),6);
    bufp->fullCData(oldp+4937,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[25]),6);
    bufp->fullCData(oldp+4938,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[26]),6);
    bufp->fullCData(oldp+4939,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[27]),6);
    bufp->fullCData(oldp+4940,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[28]),6);
    bufp->fullCData(oldp+4941,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[29]),6);
    bufp->fullCData(oldp+4942,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[30]),6);
    bufp->fullCData(oldp+4943,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat[31]),6);
    bufp->fullIData(oldp+4944,(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+4945,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[0]));
    bufp->fullBit(oldp+4946,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[1]));
    bufp->fullBit(oldp+4947,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[2]));
    bufp->fullBit(oldp+4948,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[3]));
    bufp->fullBit(oldp+4949,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[4]));
    bufp->fullBit(oldp+4950,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[5]));
    bufp->fullBit(oldp+4951,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[6]));
    bufp->fullBit(oldp+4952,(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[7]));
    bufp->fullQData(oldp+4953,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[0]),64);
    bufp->fullQData(oldp+4955,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[1]),64);
    bufp->fullQData(oldp+4957,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[2]),64);
    bufp->fullQData(oldp+4959,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[3]),64);
    bufp->fullQData(oldp+4961,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[4]),64);
    bufp->fullQData(oldp+4963,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[5]),64);
    bufp->fullQData(oldp+4965,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[6]),64);
    bufp->fullQData(oldp+4967,(vlSymsp->TOP__top_tb__mon_itf.__PVT__order[7]),64);
    bufp->fullIData(oldp+4969,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[0]),32);
    bufp->fullIData(oldp+4970,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[1]),32);
    bufp->fullIData(oldp+4971,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[2]),32);
    bufp->fullIData(oldp+4972,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[3]),32);
    bufp->fullIData(oldp+4973,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[4]),32);
    bufp->fullIData(oldp+4974,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[5]),32);
    bufp->fullIData(oldp+4975,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[6]),32);
    bufp->fullIData(oldp+4976,(vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[7]),32);
    bufp->fullBit(oldp+4977,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[0]));
    bufp->fullBit(oldp+4978,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[1]));
    bufp->fullBit(oldp+4979,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[2]));
    bufp->fullBit(oldp+4980,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[3]));
    bufp->fullBit(oldp+4981,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[4]));
    bufp->fullBit(oldp+4982,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[5]));
    bufp->fullBit(oldp+4983,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[6]));
    bufp->fullBit(oldp+4984,(vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[7]));
    bufp->fullCData(oldp+4985,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[0]),5);
    bufp->fullCData(oldp+4986,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[1]),5);
    bufp->fullCData(oldp+4987,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[2]),5);
    bufp->fullCData(oldp+4988,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[3]),5);
    bufp->fullCData(oldp+4989,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[4]),5);
    bufp->fullCData(oldp+4990,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[5]),5);
    bufp->fullCData(oldp+4991,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[6]),5);
    bufp->fullCData(oldp+4992,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[7]),5);
    bufp->fullCData(oldp+4993,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[0]),5);
    bufp->fullCData(oldp+4994,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[1]),5);
    bufp->fullCData(oldp+4995,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[2]),5);
    bufp->fullCData(oldp+4996,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[3]),5);
    bufp->fullCData(oldp+4997,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[4]),5);
    bufp->fullCData(oldp+4998,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[5]),5);
    bufp->fullCData(oldp+4999,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[6]),5);
    bufp->fullCData(oldp+5000,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[7]),5);
    bufp->fullIData(oldp+5001,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[0]),32);
    bufp->fullIData(oldp+5002,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[1]),32);
    bufp->fullIData(oldp+5003,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[2]),32);
    bufp->fullIData(oldp+5004,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[3]),32);
    bufp->fullIData(oldp+5005,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[4]),32);
    bufp->fullIData(oldp+5006,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[5]),32);
    bufp->fullIData(oldp+5007,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[6]),32);
    bufp->fullIData(oldp+5008,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[7]),32);
    bufp->fullIData(oldp+5009,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[0]),32);
    bufp->fullIData(oldp+5010,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[1]),32);
    bufp->fullIData(oldp+5011,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[2]),32);
    bufp->fullIData(oldp+5012,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[3]),32);
    bufp->fullIData(oldp+5013,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[4]),32);
    bufp->fullIData(oldp+5014,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[5]),32);
    bufp->fullIData(oldp+5015,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[6]),32);
    bufp->fullIData(oldp+5016,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[7]),32);
    bufp->fullCData(oldp+5017,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[0]),5);
    bufp->fullCData(oldp+5018,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[1]),5);
    bufp->fullCData(oldp+5019,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[2]),5);
    bufp->fullCData(oldp+5020,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[3]),5);
    bufp->fullCData(oldp+5021,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[4]),5);
    bufp->fullCData(oldp+5022,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[5]),5);
    bufp->fullCData(oldp+5023,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[6]),5);
    bufp->fullCData(oldp+5024,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[7]),5);
    bufp->fullIData(oldp+5025,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[0]),32);
    bufp->fullIData(oldp+5026,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[1]),32);
    bufp->fullIData(oldp+5027,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[2]),32);
    bufp->fullIData(oldp+5028,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[3]),32);
    bufp->fullIData(oldp+5029,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[4]),32);
    bufp->fullIData(oldp+5030,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[5]),32);
    bufp->fullIData(oldp+5031,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[6]),32);
    bufp->fullIData(oldp+5032,(vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[7]),32);
    bufp->fullIData(oldp+5033,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[0]),32);
    bufp->fullIData(oldp+5034,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[1]),32);
    bufp->fullIData(oldp+5035,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[2]),32);
    bufp->fullIData(oldp+5036,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[3]),32);
    bufp->fullIData(oldp+5037,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[4]),32);
    bufp->fullIData(oldp+5038,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[5]),32);
    bufp->fullIData(oldp+5039,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[6]),32);
    bufp->fullIData(oldp+5040,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[7]),32);
    bufp->fullIData(oldp+5041,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[0]),32);
    bufp->fullIData(oldp+5042,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[1]),32);
    bufp->fullIData(oldp+5043,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[2]),32);
    bufp->fullIData(oldp+5044,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[3]),32);
    bufp->fullIData(oldp+5045,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[4]),32);
    bufp->fullIData(oldp+5046,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[5]),32);
    bufp->fullIData(oldp+5047,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[6]),32);
    bufp->fullIData(oldp+5048,(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[7]),32);
    bufp->fullIData(oldp+5049,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[0]),32);
    bufp->fullIData(oldp+5050,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[1]),32);
    bufp->fullIData(oldp+5051,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[2]),32);
    bufp->fullIData(oldp+5052,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[3]),32);
    bufp->fullIData(oldp+5053,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[4]),32);
    bufp->fullIData(oldp+5054,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[5]),32);
    bufp->fullIData(oldp+5055,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[6]),32);
    bufp->fullIData(oldp+5056,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[7]),32);
    bufp->fullCData(oldp+5057,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[0]),4);
    bufp->fullCData(oldp+5058,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[1]),4);
    bufp->fullCData(oldp+5059,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[2]),4);
    bufp->fullCData(oldp+5060,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[3]),4);
    bufp->fullCData(oldp+5061,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[4]),4);
    bufp->fullCData(oldp+5062,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[5]),4);
    bufp->fullCData(oldp+5063,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[6]),4);
    bufp->fullCData(oldp+5064,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[7]),4);
    bufp->fullCData(oldp+5065,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[0]),4);
    bufp->fullCData(oldp+5066,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[1]),4);
    bufp->fullCData(oldp+5067,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[2]),4);
    bufp->fullCData(oldp+5068,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[3]),4);
    bufp->fullCData(oldp+5069,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[4]),4);
    bufp->fullCData(oldp+5070,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[5]),4);
    bufp->fullCData(oldp+5071,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[6]),4);
    bufp->fullCData(oldp+5072,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[7]),4);
    bufp->fullIData(oldp+5073,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[0]),32);
    bufp->fullIData(oldp+5074,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[1]),32);
    bufp->fullIData(oldp+5075,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[2]),32);
    bufp->fullIData(oldp+5076,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[3]),32);
    bufp->fullIData(oldp+5077,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[4]),32);
    bufp->fullIData(oldp+5078,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[5]),32);
    bufp->fullIData(oldp+5079,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[6]),32);
    bufp->fullIData(oldp+5080,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[7]),32);
    bufp->fullIData(oldp+5081,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[0]),32);
    bufp->fullIData(oldp+5082,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[1]),32);
    bufp->fullIData(oldp+5083,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[2]),32);
    bufp->fullIData(oldp+5084,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[3]),32);
    bufp->fullIData(oldp+5085,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[4]),32);
    bufp->fullIData(oldp+5086,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[5]),32);
    bufp->fullIData(oldp+5087,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[6]),32);
    bufp->fullIData(oldp+5088,(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[7]),32);
    bufp->fullBit(oldp+5089,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+5090,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+5091,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+5092,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 7U))),5);
    bufp->fullIData(oldp+5093,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+5094,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[0U])),32);
    bufp->fullBit(oldp+5095,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+5096,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result
                                 : 0U)),32);
    bufp->fullBit(oldp+5097,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+5098,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5099,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+5100,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                    & VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5101,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+5102,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[0U] 
                                    + (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5103,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+5104,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+5105,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+5106,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+5107,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+5108,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+5109,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+5110,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+5111,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+5112,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+5113,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+5114,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+5115,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+5116,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+5117,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+5118,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+5119,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+5120,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+5121,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+5122,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 2U))),5);
    bufp->fullIData(oldp+5123,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[0U])),32);
    bufp->fullBit(oldp+5124,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+5125,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                    + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5126,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+5127,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                    + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                 : 0U)),32);
    bufp->fullBit(oldp+5128,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+5129,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 2U)))),5);
    bufp->fullIData(oldp+5130,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+5131,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+5132,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                            >> 7U)))),5);
    bufp->fullIData(oldp+5133,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+5134,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+5135,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+5136,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+5137,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+5138,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+5139,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+5140,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+5141,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+5142,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+5143,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+5144,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+5145,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+5146,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])),32);
    bufp->fullBit(oldp+5147,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+5148,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+5149,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+5150,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+5151,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                 : 0U)),32);
    bufp->fullBit(oldp+5152,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+5153,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+5154,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[0U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+5155,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+5156,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+5157,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+5158,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+5159,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[0U], 
                                                 VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                 : 0U)),32);
    bufp->fullIData(oldp+5160,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+5161,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+5162,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+5163,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]
                                 : 0U)),32);
    bufp->fullBit(oldp+5164,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+5165,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+5166,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+5167,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+5168,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+5169,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+5170,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+5171,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+5172,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+5173,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+5174,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+5175,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+5176,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+5177,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+5178,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+5179,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+5180,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+5181,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+5182,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+5183,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+5184,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
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
    bufp->fullBit(oldp+5185,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+5186,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                     ? 0xffffffffU : 
                                    VL_DIV_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5187,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+5188,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+5189,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+5190,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+5191,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+5192,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+5193,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+5194,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullIData(oldp+5195,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+5196,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+5197,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+5198,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+5199,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+5200,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+5201,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,16, 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullCData(oldp+5202,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+5203,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+5204,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+5205,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+5206,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])
                                 : 0U)),32);
    bufp->fullBit(oldp+5207,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+5208,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+5209,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result
                                 : 0U)),32);
    bufp->fullCData(oldp+5210,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+5211,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+5212,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                    * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                 : 0U)),32);
    bufp->fullBit(oldp+5213,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+5214,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
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
    bufp->fullBit(oldp+5215,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+5216,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__VdfgTmp_hb1a4827e__0 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+5217,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+5218,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (IData)((((QData)((IData)(
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])) 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+5219,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+5220,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5221,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+5222,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                    | VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5223,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+5224,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
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
    bufp->fullBit(oldp+5225,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+5226,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                     ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]
                                     : VL_MODDIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5227,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+5228,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+5229,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+5230,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+5231,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+5232,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+5233,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+5234,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+5235,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                    << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5236,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+5237,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5238,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+5239,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_blt__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+5240,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+5241,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                              VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                             >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5242,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+5243,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                    < VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5244,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+5245,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_bltu__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+5246,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+5247,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,5, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                  (0x1fU 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5248,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+5249,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                      >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5250,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+5251,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                    >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5252,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+5253,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5254,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+5255,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5256,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+5257,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+5258,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+5259,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+5260,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5261,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+5262,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                    ^ VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullCData(oldp+5263,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+5264,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+5265,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])),7);
    bufp->fullIData(oldp+5266,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])),32);
    bufp->fullIData(oldp+5267,(VL_EXTENDS_II(32,12, 
                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                              >> 0x14U))),32);
    bufp->fullIData(oldp+5268,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+5269,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                & VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5270,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])),32);
    bufp->fullIData(oldp+5271,(VL_EXTENDS_II(32,13, 
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
    bufp->fullBit(oldp+5272,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                              == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
    bufp->fullBit(oldp+5273,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
    bufp->fullBit(oldp+5274,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                              >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
    bufp->fullBit(oldp+5275,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+5276,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+5277,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                              != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])));
    bufp->fullIData(oldp+5278,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U], 0x10U)),32);
    bufp->fullCData(oldp+5279,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                        >> 0xcU))),4);
    bufp->fullCData(oldp+5280,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U])),2);
    bufp->fullIData(oldp+5281,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+5282,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                      >> 0xdU))),3);
    bufp->fullIData(oldp+5283,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+5284,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+5285,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+5286,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+5287,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 0xaU))),6);
    bufp->fullCData(oldp+5288,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                      >> 5U))),2);
    bufp->fullCData(oldp+5289,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+5290,(VL_EXTENDS_II(32,9, 
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
    bufp->fullBit(oldp+5291,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])));
    bufp->fullBit(oldp+5292,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])));
    bufp->fullIData(oldp+5293,(VL_EXTENDS_II(32,12, 
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
    bufp->fullIData(oldp+5294,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+5295,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                          << 1U)) | 
                                ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                           >> 7U)) 
                                 | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                          >> 4U))))),32);
    bufp->fullIData(oldp+5296,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+5297,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                          << 4U)) | 
                                ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                           >> 7U)) 
                                 | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                             >> 2U))))),32);
    bufp->fullIData(oldp+5298,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+5299,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[0U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+5300,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+5301,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+5302,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                          >> 1U)) | 
                                (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                          >> 7U)))),32);
    bufp->fullIData(oldp+5303,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+5304,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
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
    bufp->fullIData(oldp+5305,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                 ? 0xffffffffU : VL_DIV_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
    bufp->fullIData(oldp+5306,(VL_EXTENDS_II(32,21, 
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
    bufp->fullCData(oldp+5307,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+5308,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+5309,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+5310,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])),32);
    bufp->fullIData(oldp+5311,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U] 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+5312,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+5313,((IData)((((QData)((IData)(
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U])) 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+5314,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                | VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5315,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]
                                 : (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))
                                     ? 0U : VL_MODDIVS_III(32, 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])))),32);
    bufp->fullIData(oldp+5316,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U]
                                 : VL_MODDIV_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
    bufp->fullIData(oldp+5317,(VL_EXTENDS_II(32,12, 
                                             ((0xfe0U 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                    >> 7U))))),32);
    bufp->fullIData(oldp+5318,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+5319,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U])),6);
    bufp->fullIData(oldp+5320,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
    bufp->fullCData(oldp+5321,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                >> 0x1aU)),7);
    bufp->fullCData(oldp+5322,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                         >> 0x14U))),6);
    bufp->fullIData(oldp+5323,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5324,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+5325,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                          VL_EXTENDS_II(32,12, 
                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                         >> 0x14U)))),32);
    bufp->fullIData(oldp+5326,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                < VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5327,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+5328,(VL_SHIFTRS_III(32,32,5, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                              (0x1fU 
                                               & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
    bufp->fullIData(oldp+5329,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+5330,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[0U]))),32);
    bufp->fullIData(oldp+5331,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5332,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                                ^ VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[0U] 
                                                 >> 0x14U)))),32);
    bufp->fullBit(oldp+5333,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+5334,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+5335,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+5336,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 7U))),5);
    bufp->fullIData(oldp+5337,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+5338,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[1U])),32);
    bufp->fullBit(oldp+5339,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+5340,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result
                                 : 0U)),32);
    bufp->fullBit(oldp+5341,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+5342,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5343,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+5344,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                    & VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5345,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+5346,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[1U] 
                                    + (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5347,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+5348,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+5349,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+5350,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+5351,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+5352,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+5353,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+5354,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+5355,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+5356,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+5357,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+5358,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+5359,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+5360,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+5361,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+5362,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+5363,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+5364,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+5365,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+5366,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 2U))),5);
    bufp->fullIData(oldp+5367,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[1U])),32);
    bufp->fullBit(oldp+5368,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+5369,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                    + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5370,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+5371,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                    + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                 : 0U)),32);
    bufp->fullBit(oldp+5372,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+5373,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 2U)))),5);
    bufp->fullIData(oldp+5374,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+5375,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+5376,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                            >> 7U)))),5);
    bufp->fullIData(oldp+5377,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+5378,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+5379,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+5380,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+5381,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+5382,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+5383,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+5384,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+5385,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+5386,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+5387,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+5388,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+5389,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+5390,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])),32);
    bufp->fullBit(oldp+5391,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+5392,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+5393,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+5394,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+5395,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                 : 0U)),32);
    bufp->fullBit(oldp+5396,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+5397,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+5398,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[1U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+5399,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+5400,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+5401,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+5402,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+5403,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[1U], 
                                                 VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                 : 0U)),32);
    bufp->fullIData(oldp+5404,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+5405,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+5406,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+5407,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]
                                 : 0U)),32);
    bufp->fullBit(oldp+5408,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+5409,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+5410,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+5411,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+5412,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+5413,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+5414,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+5415,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+5416,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+5417,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+5418,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+5419,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+5420,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+5421,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+5422,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+5423,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+5424,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+5425,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+5426,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+5427,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+5428,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
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
    bufp->fullBit(oldp+5429,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+5430,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                     ? 0xffffffffU : 
                                    VL_DIV_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5431,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+5432,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+5433,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+5434,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+5435,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+5436,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+5437,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+5438,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullIData(oldp+5439,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+5440,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+5441,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+5442,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+5443,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+5444,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+5445,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,16, 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullCData(oldp+5446,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+5447,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+5448,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+5449,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+5450,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])
                                 : 0U)),32);
    bufp->fullBit(oldp+5451,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+5452,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+5453,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result
                                 : 0U)),32);
    bufp->fullCData(oldp+5454,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+5455,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+5456,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                    * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                 : 0U)),32);
    bufp->fullBit(oldp+5457,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+5458,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
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
    bufp->fullBit(oldp+5459,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+5460,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__VdfgTmp_hb1a4827e__0 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+5461,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+5462,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (IData)((((QData)((IData)(
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])) 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+5463,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+5464,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5465,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+5466,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                    | VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5467,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+5468,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
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
    bufp->fullBit(oldp+5469,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+5470,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                     ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]
                                     : VL_MODDIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5471,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+5472,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+5473,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+5474,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+5475,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+5476,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+5477,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+5478,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+5479,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                    << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5480,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+5481,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5482,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+5483,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_blt__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+5484,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+5485,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                              VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                             >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5486,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+5487,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                    < VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5488,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+5489,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_bltu__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+5490,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+5491,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,5, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                  (0x1fU 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5492,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+5493,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                      >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5494,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+5495,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                    >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5496,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+5497,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5498,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+5499,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5500,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+5501,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+5502,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+5503,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+5504,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5505,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+5506,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                    ^ VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullCData(oldp+5507,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+5508,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+5509,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])),7);
    bufp->fullIData(oldp+5510,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])),32);
    bufp->fullIData(oldp+5511,(VL_EXTENDS_II(32,12, 
                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                              >> 0x14U))),32);
    bufp->fullIData(oldp+5512,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+5513,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                & VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5514,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])),32);
    bufp->fullIData(oldp+5515,(VL_EXTENDS_II(32,13, 
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
    bufp->fullBit(oldp+5516,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                              == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
    bufp->fullBit(oldp+5517,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
    bufp->fullBit(oldp+5518,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                              >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
    bufp->fullBit(oldp+5519,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+5520,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+5521,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                              != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])));
    bufp->fullIData(oldp+5522,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U], 0x10U)),32);
    bufp->fullCData(oldp+5523,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                        >> 0xcU))),4);
    bufp->fullCData(oldp+5524,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U])),2);
    bufp->fullIData(oldp+5525,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+5526,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                      >> 0xdU))),3);
    bufp->fullIData(oldp+5527,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+5528,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+5529,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+5530,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+5531,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 0xaU))),6);
    bufp->fullCData(oldp+5532,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                      >> 5U))),2);
    bufp->fullCData(oldp+5533,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+5534,(VL_EXTENDS_II(32,9, 
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
    bufp->fullBit(oldp+5535,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])));
    bufp->fullBit(oldp+5536,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])));
    bufp->fullIData(oldp+5537,(VL_EXTENDS_II(32,12, 
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
    bufp->fullIData(oldp+5538,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+5539,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                          << 1U)) | 
                                ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                           >> 7U)) 
                                 | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                          >> 4U))))),32);
    bufp->fullIData(oldp+5540,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+5541,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                          << 4U)) | 
                                ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                           >> 7U)) 
                                 | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                             >> 2U))))),32);
    bufp->fullIData(oldp+5542,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+5543,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[1U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+5544,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+5545,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+5546,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                          >> 1U)) | 
                                (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                          >> 7U)))),32);
    bufp->fullIData(oldp+5547,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+5548,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
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
    bufp->fullIData(oldp+5549,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                 ? 0xffffffffU : VL_DIV_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
    bufp->fullIData(oldp+5550,(VL_EXTENDS_II(32,21, 
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
    bufp->fullCData(oldp+5551,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+5552,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+5553,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+5554,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])),32);
    bufp->fullIData(oldp+5555,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U] 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+5556,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+5557,((IData)((((QData)((IData)(
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U])) 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+5558,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                | VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5559,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]
                                 : (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))
                                     ? 0U : VL_MODDIVS_III(32, 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])))),32);
    bufp->fullIData(oldp+5560,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U]
                                 : VL_MODDIV_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
    bufp->fullIData(oldp+5561,(VL_EXTENDS_II(32,12, 
                                             ((0xfe0U 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                    >> 7U))))),32);
    bufp->fullIData(oldp+5562,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+5563,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U])),6);
    bufp->fullIData(oldp+5564,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
    bufp->fullCData(oldp+5565,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                >> 0x1aU)),7);
    bufp->fullCData(oldp+5566,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                         >> 0x14U))),6);
    bufp->fullIData(oldp+5567,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5568,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+5569,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                          VL_EXTENDS_II(32,12, 
                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                         >> 0x14U)))),32);
    bufp->fullIData(oldp+5570,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                < VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5571,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+5572,(VL_SHIFTRS_III(32,32,5, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                              (0x1fU 
                                               & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
    bufp->fullIData(oldp+5573,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+5574,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[1U]))),32);
    bufp->fullIData(oldp+5575,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5576,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                                ^ VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[1U] 
                                                 >> 0x14U)))),32);
    bufp->fullBit(oldp+5577,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+5578,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+5579,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+5580,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 7U))),5);
    bufp->fullIData(oldp+5581,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+5582,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[2U])),32);
    bufp->fullBit(oldp+5583,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+5584,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result
                                 : 0U)),32);
    bufp->fullBit(oldp+5585,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+5586,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5587,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+5588,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                    & VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5589,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+5590,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[2U] 
                                    + (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5591,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+5592,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+5593,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+5594,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+5595,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+5596,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+5597,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+5598,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+5599,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+5600,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+5601,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+5602,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+5603,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+5604,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+5605,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+5606,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+5607,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+5608,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+5609,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+5610,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 2U))),5);
    bufp->fullIData(oldp+5611,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[2U])),32);
    bufp->fullBit(oldp+5612,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+5613,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                    + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5614,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+5615,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                    + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                 : 0U)),32);
    bufp->fullBit(oldp+5616,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+5617,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 2U)))),5);
    bufp->fullIData(oldp+5618,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+5619,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+5620,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                            >> 7U)))),5);
    bufp->fullIData(oldp+5621,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+5622,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+5623,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+5624,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+5625,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+5626,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+5627,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+5628,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+5629,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+5630,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+5631,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+5632,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+5633,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+5634,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])),32);
    bufp->fullBit(oldp+5635,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+5636,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+5637,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+5638,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+5639,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                 : 0U)),32);
    bufp->fullBit(oldp+5640,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+5641,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+5642,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[2U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+5643,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+5644,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+5645,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+5646,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+5647,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[2U], 
                                                 VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                 : 0U)),32);
    bufp->fullIData(oldp+5648,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+5649,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+5650,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+5651,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]
                                 : 0U)),32);
    bufp->fullBit(oldp+5652,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+5653,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+5654,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+5655,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+5656,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+5657,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+5658,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+5659,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+5660,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+5661,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+5662,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+5663,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+5664,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+5665,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+5666,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+5667,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+5668,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+5669,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+5670,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+5671,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+5672,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
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
    bufp->fullBit(oldp+5673,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+5674,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                     ? 0xffffffffU : 
                                    VL_DIV_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5675,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+5676,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+5677,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+5678,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+5679,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+5680,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+5681,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+5682,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullIData(oldp+5683,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+5684,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+5685,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+5686,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+5687,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+5688,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+5689,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,16, 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullCData(oldp+5690,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+5691,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+5692,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+5693,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+5694,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])
                                 : 0U)),32);
    bufp->fullBit(oldp+5695,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+5696,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+5697,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result
                                 : 0U)),32);
    bufp->fullCData(oldp+5698,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+5699,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+5700,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                    * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                 : 0U)),32);
    bufp->fullBit(oldp+5701,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+5702,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
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
    bufp->fullBit(oldp+5703,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+5704,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__VdfgTmp_hb1a4827e__0 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+5705,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+5706,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (IData)((((QData)((IData)(
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])) 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+5707,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+5708,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5709,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+5710,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                    | VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5711,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+5712,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
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
    bufp->fullBit(oldp+5713,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+5714,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                     ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]
                                     : VL_MODDIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5715,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+5716,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+5717,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+5718,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+5719,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+5720,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+5721,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+5722,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+5723,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                    << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5724,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+5725,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5726,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+5727,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_blt__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+5728,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+5729,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                              VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                             >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5730,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+5731,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                    < VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5732,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+5733,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_bltu__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+5734,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+5735,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,5, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                  (0x1fU 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5736,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+5737,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                      >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5738,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+5739,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                    >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5740,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+5741,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5742,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+5743,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5744,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+5745,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+5746,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+5747,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+5748,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5749,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+5750,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                    ^ VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullCData(oldp+5751,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+5752,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+5753,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])),7);
    bufp->fullIData(oldp+5754,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])),32);
    bufp->fullIData(oldp+5755,(VL_EXTENDS_II(32,12, 
                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                              >> 0x14U))),32);
    bufp->fullIData(oldp+5756,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+5757,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                & VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5758,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])),32);
    bufp->fullIData(oldp+5759,(VL_EXTENDS_II(32,13, 
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
    bufp->fullBit(oldp+5760,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                              == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
    bufp->fullBit(oldp+5761,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
    bufp->fullBit(oldp+5762,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                              >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
    bufp->fullBit(oldp+5763,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+5764,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+5765,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                              != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])));
    bufp->fullIData(oldp+5766,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U], 0x10U)),32);
    bufp->fullCData(oldp+5767,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                        >> 0xcU))),4);
    bufp->fullCData(oldp+5768,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U])),2);
    bufp->fullIData(oldp+5769,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+5770,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                      >> 0xdU))),3);
    bufp->fullIData(oldp+5771,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+5772,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+5773,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+5774,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+5775,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 0xaU))),6);
    bufp->fullCData(oldp+5776,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                      >> 5U))),2);
    bufp->fullCData(oldp+5777,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+5778,(VL_EXTENDS_II(32,9, 
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
    bufp->fullBit(oldp+5779,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])));
    bufp->fullBit(oldp+5780,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])));
    bufp->fullIData(oldp+5781,(VL_EXTENDS_II(32,12, 
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
    bufp->fullIData(oldp+5782,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+5783,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                          << 1U)) | 
                                ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                           >> 7U)) 
                                 | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                          >> 4U))))),32);
    bufp->fullIData(oldp+5784,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+5785,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                          << 4U)) | 
                                ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                           >> 7U)) 
                                 | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                             >> 2U))))),32);
    bufp->fullIData(oldp+5786,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+5787,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[2U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+5788,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+5789,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+5790,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                          >> 1U)) | 
                                (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                          >> 7U)))),32);
    bufp->fullIData(oldp+5791,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+5792,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
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
    bufp->fullIData(oldp+5793,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                 ? 0xffffffffU : VL_DIV_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
    bufp->fullIData(oldp+5794,(VL_EXTENDS_II(32,21, 
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
    bufp->fullCData(oldp+5795,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+5796,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+5797,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+5798,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])),32);
    bufp->fullIData(oldp+5799,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U] 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+5800,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+5801,((IData)((((QData)((IData)(
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U])) 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+5802,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                | VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5803,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]
                                 : (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))
                                     ? 0U : VL_MODDIVS_III(32, 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])))),32);
    bufp->fullIData(oldp+5804,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U]
                                 : VL_MODDIV_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
    bufp->fullIData(oldp+5805,(VL_EXTENDS_II(32,12, 
                                             ((0xfe0U 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                    >> 7U))))),32);
    bufp->fullIData(oldp+5806,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+5807,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U])),6);
    bufp->fullIData(oldp+5808,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
    bufp->fullCData(oldp+5809,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                >> 0x1aU)),7);
    bufp->fullCData(oldp+5810,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                         >> 0x14U))),6);
    bufp->fullIData(oldp+5811,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5812,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+5813,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                          VL_EXTENDS_II(32,12, 
                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                         >> 0x14U)))),32);
    bufp->fullIData(oldp+5814,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                < VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5815,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+5816,(VL_SHIFTRS_III(32,32,5, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                              (0x1fU 
                                               & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
    bufp->fullIData(oldp+5817,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+5818,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[2U]))),32);
    bufp->fullIData(oldp+5819,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+5820,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                                ^ VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[2U] 
                                                 >> 0x14U)))),32);
    bufp->fullBit(oldp+5821,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+5822,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+5823,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+5824,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 7U))),5);
    bufp->fullIData(oldp+5825,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+5826,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U])),32);
    bufp->fullBit(oldp+5827,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+5828,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result
                                 : 0U)),32);
    bufp->fullBit(oldp+5829,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+5830,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5831,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+5832,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                    & VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5833,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+5834,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U] 
                                    + (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5835,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+5836,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+5837,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+5838,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+5839,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+5840,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+5841,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+5842,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+5843,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+5844,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+5845,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+5846,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+5847,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+5848,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+5849,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+5850,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+5851,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+5852,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+5853,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+5854,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 2U))),5);
    bufp->fullIData(oldp+5855,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U])),32);
    bufp->fullBit(oldp+5856,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+5857,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                    + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5858,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+5859,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                    + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                 : 0U)),32);
    bufp->fullBit(oldp+5860,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+5861,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 2U)))),5);
    bufp->fullIData(oldp+5862,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+5863,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+5864,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                            >> 7U)))),5);
    bufp->fullIData(oldp+5865,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+5866,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+5867,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+5868,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+5869,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+5870,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+5871,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+5872,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+5873,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+5874,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+5875,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+5876,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+5877,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+5878,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])),32);
    bufp->fullBit(oldp+5879,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+5880,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+5881,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+5882,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+5883,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                 : 0U)),32);
    bufp->fullBit(oldp+5884,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+5885,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+5886,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[3U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+5887,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+5888,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+5889,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+5890,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+5891,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[3U], 
                                                 VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                 : 0U)),32);
    bufp->fullIData(oldp+5892,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+5893,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+5894,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+5895,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]
                                 : 0U)),32);
    bufp->fullBit(oldp+5896,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+5897,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+5898,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+5899,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+5900,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+5901,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+5902,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+5903,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+5904,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+5905,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+5906,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+5907,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+5908,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+5909,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+5910,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+5911,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+5912,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+5913,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+5914,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+5915,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+5916,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
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
    bufp->fullBit(oldp+5917,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+5918,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                     ? 0xffffffffU : 
                                    VL_DIV_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5919,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+5920,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+5921,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+5922,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+5923,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+5924,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+5925,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+5926,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullIData(oldp+5927,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+5928,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+5929,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+5930,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+5931,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+5932,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+5933,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,16, 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullCData(oldp+5934,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+5935,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+5936,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+5937,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+5938,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])
                                 : 0U)),32);
    bufp->fullBit(oldp+5939,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+5940,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+5941,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result
                                 : 0U)),32);
    bufp->fullCData(oldp+5942,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+5943,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+5944,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                    * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                 : 0U)),32);
    bufp->fullBit(oldp+5945,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+5946,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
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
    bufp->fullBit(oldp+5947,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+5948,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__VdfgTmp_hb1a4827e__0 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+5949,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+5950,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (IData)((((QData)((IData)(
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])) 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+5951,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+5952,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5953,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+5954,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                    | VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5955,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+5956,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
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
    bufp->fullBit(oldp+5957,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+5958,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                     ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]
                                     : VL_MODDIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5959,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+5960,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+5961,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+5962,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+5963,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+5964,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+5965,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+5966,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+5967,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                    << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5968,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+5969,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5970,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+5971,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_blt__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+5972,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+5973,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                              VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                             >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5974,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+5975,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                    < VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5976,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+5977,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_bltu__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+5978,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+5979,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,5, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                  (0x1fU 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5980,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+5981,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5982,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+5983,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                    >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+5984,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+5985,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+5986,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+5987,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5988,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+5989,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+5990,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+5991,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+5992,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+5993,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+5994,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                    ^ VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullCData(oldp+5995,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+5996,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+5997,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])),7);
    bufp->fullIData(oldp+5998,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])),32);
    bufp->fullIData(oldp+5999,(VL_EXTENDS_II(32,12, 
                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                              >> 0x14U))),32);
    bufp->fullIData(oldp+6000,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+6001,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                & VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6002,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])),32);
    bufp->fullIData(oldp+6003,(VL_EXTENDS_II(32,13, 
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
    bufp->fullBit(oldp+6004,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                              == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
    bufp->fullBit(oldp+6005,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
    bufp->fullBit(oldp+6006,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                              >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
    bufp->fullBit(oldp+6007,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+6008,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+6009,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                              != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])));
    bufp->fullIData(oldp+6010,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)),32);
    bufp->fullCData(oldp+6011,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                        >> 0xcU))),4);
    bufp->fullCData(oldp+6012,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])),2);
    bufp->fullIData(oldp+6013,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+6014,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                      >> 0xdU))),3);
    bufp->fullIData(oldp+6015,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+6016,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+6017,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+6018,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+6019,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 0xaU))),6);
    bufp->fullCData(oldp+6020,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                      >> 5U))),2);
    bufp->fullCData(oldp+6021,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+6022,(VL_EXTENDS_II(32,9, 
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
    bufp->fullBit(oldp+6023,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])));
    bufp->fullBit(oldp+6024,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])));
    bufp->fullIData(oldp+6025,(VL_EXTENDS_II(32,12, 
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
    bufp->fullIData(oldp+6026,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+6027,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                          << 1U)) | 
                                ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                           >> 7U)) 
                                 | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                          >> 4U))))),32);
    bufp->fullIData(oldp+6028,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+6029,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                          << 4U)) | 
                                ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                           >> 7U)) 
                                 | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                             >> 2U))))),32);
    bufp->fullIData(oldp+6030,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+6031,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[3U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+6032,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+6033,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+6034,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                          >> 1U)) | 
                                (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                          >> 7U)))),32);
    bufp->fullIData(oldp+6035,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+6036,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
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
    bufp->fullIData(oldp+6037,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                 ? 0xffffffffU : VL_DIV_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
    bufp->fullIData(oldp+6038,(VL_EXTENDS_II(32,21, 
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
    bufp->fullCData(oldp+6039,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+6040,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+6041,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+6042,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])),32);
    bufp->fullIData(oldp+6043,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U] 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6044,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6045,((IData)((((QData)((IData)(
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])) 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6046,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                | VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6047,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]
                                 : (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                     ? 0U : VL_MODDIVS_III(32, 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))),32);
    bufp->fullIData(oldp+6048,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]
                                 : VL_MODDIV_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
    bufp->fullIData(oldp+6049,(VL_EXTENDS_II(32,12, 
                                             ((0xfe0U 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 7U))))),32);
    bufp->fullIData(oldp+6050,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+6051,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])),6);
    bufp->fullIData(oldp+6052,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
    bufp->fullCData(oldp+6053,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                >> 0x1aU)),7);
    bufp->fullCData(oldp+6054,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 0x14U))),6);
    bufp->fullIData(oldp+6055,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6056,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+6057,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                          VL_EXTENDS_II(32,12, 
                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                         >> 0x14U)))),32);
    bufp->fullIData(oldp+6058,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                < VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6059,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+6060,(VL_SHIFTRS_III(32,32,5, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                              (0x1fU 
                                               & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
    bufp->fullIData(oldp+6061,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+6062,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))),32);
    bufp->fullIData(oldp+6063,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6064,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                ^ VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 0x14U)))),32);
    bufp->fullBit(oldp+6065,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+6066,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+6067,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+6068,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 7U))),5);
    bufp->fullIData(oldp+6069,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+6070,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U])),32);
    bufp->fullBit(oldp+6071,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+6072,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result
                                 : 0U)),32);
    bufp->fullBit(oldp+6073,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+6074,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6075,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+6076,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                    & VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6077,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+6078,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U] 
                                    + (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6079,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+6080,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+6081,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+6082,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+6083,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+6084,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+6085,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+6086,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+6087,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+6088,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+6089,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+6090,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+6091,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+6092,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+6093,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+6094,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+6095,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+6096,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+6097,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+6098,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 2U))),5);
    bufp->fullIData(oldp+6099,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U])),32);
    bufp->fullBit(oldp+6100,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+6101,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                    + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6102,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+6103,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                    + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                 : 0U)),32);
    bufp->fullBit(oldp+6104,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+6105,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 2U)))),5);
    bufp->fullIData(oldp+6106,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+6107,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+6108,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                            >> 7U)))),5);
    bufp->fullIData(oldp+6109,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+6110,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+6111,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+6112,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+6113,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+6114,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+6115,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+6116,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+6117,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+6118,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+6119,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+6120,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+6121,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+6122,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])),32);
    bufp->fullBit(oldp+6123,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+6124,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+6125,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+6126,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+6127,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                 : 0U)),32);
    bufp->fullBit(oldp+6128,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+6129,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+6130,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[4U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+6131,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+6132,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+6133,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+6134,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+6135,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[4U], 
                                                 VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                 : 0U)),32);
    bufp->fullIData(oldp+6136,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+6137,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+6138,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+6139,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]
                                 : 0U)),32);
    bufp->fullBit(oldp+6140,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+6141,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+6142,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+6143,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+6144,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+6145,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+6146,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+6147,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+6148,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+6149,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+6150,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+6151,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+6152,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+6153,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+6154,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+6155,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+6156,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+6157,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+6158,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+6159,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+6160,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
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
    bufp->fullBit(oldp+6161,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+6162,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                     ? 0xffffffffU : 
                                    VL_DIV_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6163,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+6164,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+6165,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+6166,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+6167,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+6168,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+6169,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+6170,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullIData(oldp+6171,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+6172,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6173,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+6174,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+6175,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+6176,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+6177,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,16, 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullCData(oldp+6178,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6179,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+6180,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+6181,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+6182,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])
                                 : 0U)),32);
    bufp->fullBit(oldp+6183,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+6184,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+6185,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result
                                 : 0U)),32);
    bufp->fullCData(oldp+6186,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6187,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+6188,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                    * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                 : 0U)),32);
    bufp->fullBit(oldp+6189,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+6190,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
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
    bufp->fullBit(oldp+6191,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+6192,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__VdfgTmp_hb1a4827e__0 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+6193,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+6194,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (IData)((((QData)((IData)(
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])) 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+6195,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+6196,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6197,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+6198,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                    | VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6199,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+6200,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
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
    bufp->fullBit(oldp+6201,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+6202,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                     ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]
                                     : VL_MODDIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6203,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+6204,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+6205,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+6206,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+6207,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+6208,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+6209,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+6210,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+6211,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                    << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6212,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+6213,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6214,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+6215,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_blt__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+6216,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+6217,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                              VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                             >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6218,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+6219,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                    < VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6220,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+6221,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_bltu__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+6222,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+6223,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,5, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                  (0x1fU 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6224,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+6225,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6226,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+6227,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                    >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6228,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+6229,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6230,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+6231,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6232,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+6233,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+6234,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+6235,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+6236,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6237,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+6238,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                    ^ VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullCData(oldp+6239,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+6240,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+6241,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])),7);
    bufp->fullIData(oldp+6242,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])),32);
    bufp->fullIData(oldp+6243,(VL_EXTENDS_II(32,12, 
                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                              >> 0x14U))),32);
    bufp->fullIData(oldp+6244,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+6245,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                & VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6246,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])),32);
    bufp->fullIData(oldp+6247,(VL_EXTENDS_II(32,13, 
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
    bufp->fullBit(oldp+6248,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                              == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
    bufp->fullBit(oldp+6249,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
    bufp->fullBit(oldp+6250,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                              >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
    bufp->fullBit(oldp+6251,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+6252,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+6253,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                              != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])));
    bufp->fullIData(oldp+6254,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)),32);
    bufp->fullCData(oldp+6255,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                        >> 0xcU))),4);
    bufp->fullCData(oldp+6256,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])),2);
    bufp->fullIData(oldp+6257,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+6258,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                      >> 0xdU))),3);
    bufp->fullIData(oldp+6259,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+6260,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+6261,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+6262,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+6263,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 0xaU))),6);
    bufp->fullCData(oldp+6264,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                      >> 5U))),2);
    bufp->fullCData(oldp+6265,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+6266,(VL_EXTENDS_II(32,9, 
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
    bufp->fullBit(oldp+6267,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])));
    bufp->fullBit(oldp+6268,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])));
    bufp->fullIData(oldp+6269,(VL_EXTENDS_II(32,12, 
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
    bufp->fullIData(oldp+6270,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+6271,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                          << 1U)) | 
                                ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                           >> 7U)) 
                                 | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                          >> 4U))))),32);
    bufp->fullIData(oldp+6272,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+6273,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                          << 4U)) | 
                                ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                           >> 7U)) 
                                 | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                             >> 2U))))),32);
    bufp->fullIData(oldp+6274,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+6275,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[4U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+6276,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+6277,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+6278,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                          >> 1U)) | 
                                (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                          >> 7U)))),32);
    bufp->fullIData(oldp+6279,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+6280,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
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
    bufp->fullIData(oldp+6281,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                 ? 0xffffffffU : VL_DIV_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
    bufp->fullIData(oldp+6282,(VL_EXTENDS_II(32,21, 
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
    bufp->fullCData(oldp+6283,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+6284,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+6285,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+6286,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])),32);
    bufp->fullIData(oldp+6287,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U] 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6288,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6289,((IData)((((QData)((IData)(
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])) 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6290,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                | VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6291,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]
                                 : (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                     ? 0U : VL_MODDIVS_III(32, 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))),32);
    bufp->fullIData(oldp+6292,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]
                                 : VL_MODDIV_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
    bufp->fullIData(oldp+6293,(VL_EXTENDS_II(32,12, 
                                             ((0xfe0U 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 7U))))),32);
    bufp->fullIData(oldp+6294,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+6295,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])),6);
    bufp->fullIData(oldp+6296,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
    bufp->fullCData(oldp+6297,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                >> 0x1aU)),7);
    bufp->fullCData(oldp+6298,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 0x14U))),6);
    bufp->fullIData(oldp+6299,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6300,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+6301,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                          VL_EXTENDS_II(32,12, 
                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                         >> 0x14U)))),32);
    bufp->fullIData(oldp+6302,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                < VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6303,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+6304,(VL_SHIFTRS_III(32,32,5, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                              (0x1fU 
                                               & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
    bufp->fullIData(oldp+6305,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+6306,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))),32);
    bufp->fullIData(oldp+6307,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6308,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                ^ VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 0x14U)))),32);
    bufp->fullBit(oldp+6309,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+6310,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+6311,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+6312,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 7U))),5);
    bufp->fullIData(oldp+6313,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+6314,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U])),32);
    bufp->fullBit(oldp+6315,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+6316,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result
                                 : 0U)),32);
    bufp->fullBit(oldp+6317,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+6318,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6319,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+6320,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                    & VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6321,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+6322,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U] 
                                    + (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6323,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+6324,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+6325,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+6326,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+6327,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+6328,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+6329,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+6330,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+6331,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+6332,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+6333,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+6334,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+6335,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+6336,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+6337,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+6338,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+6339,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+6340,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+6341,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+6342,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 2U))),5);
    bufp->fullIData(oldp+6343,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U])),32);
    bufp->fullBit(oldp+6344,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+6345,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                    + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6346,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+6347,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                    + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                 : 0U)),32);
    bufp->fullBit(oldp+6348,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+6349,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 2U)))),5);
    bufp->fullIData(oldp+6350,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+6351,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+6352,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                            >> 7U)))),5);
    bufp->fullIData(oldp+6353,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+6354,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+6355,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+6356,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+6357,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+6358,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+6359,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+6360,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+6361,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+6362,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+6363,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+6364,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+6365,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+6366,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])),32);
    bufp->fullBit(oldp+6367,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+6368,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+6369,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+6370,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+6371,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                 : 0U)),32);
    bufp->fullBit(oldp+6372,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+6373,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+6374,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[5U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+6375,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+6376,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+6377,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+6378,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+6379,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[5U], 
                                                 VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                 : 0U)),32);
    bufp->fullIData(oldp+6380,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+6381,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+6382,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+6383,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]
                                 : 0U)),32);
    bufp->fullBit(oldp+6384,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+6385,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+6386,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+6387,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+6388,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+6389,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+6390,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+6391,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+6392,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+6393,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+6394,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+6395,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+6396,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+6397,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+6398,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+6399,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+6400,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+6401,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+6402,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+6403,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+6404,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
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
    bufp->fullBit(oldp+6405,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+6406,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                     ? 0xffffffffU : 
                                    VL_DIV_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6407,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+6408,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+6409,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+6410,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+6411,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+6412,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+6413,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+6414,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullIData(oldp+6415,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+6416,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6417,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+6418,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+6419,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+6420,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+6421,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,16, 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullCData(oldp+6422,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6423,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+6424,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+6425,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+6426,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])
                                 : 0U)),32);
    bufp->fullBit(oldp+6427,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+6428,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+6429,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result
                                 : 0U)),32);
    bufp->fullCData(oldp+6430,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6431,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+6432,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                    * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                 : 0U)),32);
    bufp->fullBit(oldp+6433,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+6434,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
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
    bufp->fullBit(oldp+6435,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+6436,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__VdfgTmp_hb1a4827e__0 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+6437,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+6438,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (IData)((((QData)((IData)(
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])) 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+6439,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+6440,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6441,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+6442,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                    | VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6443,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+6444,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
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
    bufp->fullBit(oldp+6445,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+6446,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                     ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]
                                     : VL_MODDIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6447,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+6448,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+6449,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+6450,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+6451,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+6452,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+6453,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+6454,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+6455,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                    << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6456,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+6457,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6458,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+6459,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_blt__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+6460,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+6461,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                              VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                             >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6462,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+6463,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                    < VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6464,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+6465,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_bltu__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+6466,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+6467,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,5, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                  (0x1fU 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6468,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+6469,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6470,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+6471,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                    >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6472,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+6473,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6474,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+6475,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6476,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+6477,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+6478,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+6479,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+6480,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6481,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+6482,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                    ^ VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullCData(oldp+6483,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+6484,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+6485,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])),7);
    bufp->fullIData(oldp+6486,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])),32);
    bufp->fullIData(oldp+6487,(VL_EXTENDS_II(32,12, 
                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                              >> 0x14U))),32);
    bufp->fullIData(oldp+6488,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+6489,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                & VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6490,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])),32);
    bufp->fullIData(oldp+6491,(VL_EXTENDS_II(32,13, 
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
    bufp->fullBit(oldp+6492,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                              == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
    bufp->fullBit(oldp+6493,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
    bufp->fullBit(oldp+6494,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                              >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
    bufp->fullBit(oldp+6495,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+6496,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+6497,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                              != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])));
    bufp->fullIData(oldp+6498,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)),32);
    bufp->fullCData(oldp+6499,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                        >> 0xcU))),4);
    bufp->fullCData(oldp+6500,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])),2);
    bufp->fullIData(oldp+6501,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+6502,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                      >> 0xdU))),3);
    bufp->fullIData(oldp+6503,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+6504,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+6505,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+6506,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+6507,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 0xaU))),6);
    bufp->fullCData(oldp+6508,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                      >> 5U))),2);
    bufp->fullCData(oldp+6509,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+6510,(VL_EXTENDS_II(32,9, 
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
    bufp->fullBit(oldp+6511,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])));
    bufp->fullBit(oldp+6512,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])));
    bufp->fullIData(oldp+6513,(VL_EXTENDS_II(32,12, 
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
    bufp->fullIData(oldp+6514,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+6515,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                          << 1U)) | 
                                ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                           >> 7U)) 
                                 | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                          >> 4U))))),32);
    bufp->fullIData(oldp+6516,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+6517,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                          << 4U)) | 
                                ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                           >> 7U)) 
                                 | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                             >> 2U))))),32);
    bufp->fullIData(oldp+6518,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+6519,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[5U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+6520,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+6521,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+6522,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                          >> 1U)) | 
                                (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                          >> 7U)))),32);
    bufp->fullIData(oldp+6523,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+6524,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
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
    bufp->fullIData(oldp+6525,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                 ? 0xffffffffU : VL_DIV_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
    bufp->fullIData(oldp+6526,(VL_EXTENDS_II(32,21, 
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
    bufp->fullCData(oldp+6527,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+6528,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+6529,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+6530,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])),32);
    bufp->fullIData(oldp+6531,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U] 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6532,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6533,((IData)((((QData)((IData)(
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])) 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6534,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                | VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6535,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]
                                 : (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                     ? 0U : VL_MODDIVS_III(32, 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))),32);
    bufp->fullIData(oldp+6536,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]
                                 : VL_MODDIV_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
    bufp->fullIData(oldp+6537,(VL_EXTENDS_II(32,12, 
                                             ((0xfe0U 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 7U))))),32);
    bufp->fullIData(oldp+6538,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+6539,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])),6);
    bufp->fullIData(oldp+6540,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
    bufp->fullCData(oldp+6541,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                >> 0x1aU)),7);
    bufp->fullCData(oldp+6542,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 0x14U))),6);
    bufp->fullIData(oldp+6543,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6544,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+6545,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                          VL_EXTENDS_II(32,12, 
                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                         >> 0x14U)))),32);
    bufp->fullIData(oldp+6546,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                < VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6547,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+6548,(VL_SHIFTRS_III(32,32,5, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                              (0x1fU 
                                               & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
    bufp->fullIData(oldp+6549,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+6550,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))),32);
    bufp->fullIData(oldp+6551,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6552,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                ^ VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 0x14U)))),32);
    bufp->fullBit(oldp+6553,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+6554,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+6555,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+6556,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                         >> 7U))),5);
    bufp->fullIData(oldp+6557,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+6558,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[6U])),32);
    bufp->fullBit(oldp+6559,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+6560,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result
                                 : 0U)),32);
    bufp->fullBit(oldp+6561,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+6562,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6563,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+6564,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                    & VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6565,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+6566,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[6U] 
                                    + (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6567,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+6568,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+6569,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+6570,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+6571,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+6572,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+6573,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+6574,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+6575,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+6576,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+6577,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+6578,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+6579,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+6580,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+6581,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+6582,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+6583,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+6584,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+6585,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+6586,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                         >> 2U))),5);
    bufp->fullIData(oldp+6587,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[6U])),32);
    bufp->fullBit(oldp+6588,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+6589,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                    + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6590,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+6591,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                    + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                 : 0U)),32);
    bufp->fullBit(oldp+6592,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+6593,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 2U)))),5);
    bufp->fullIData(oldp+6594,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+6595,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+6596,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                            >> 7U)))),5);
    bufp->fullIData(oldp+6597,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+6598,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+6599,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+6600,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+6601,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+6602,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+6603,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+6604,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+6605,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+6606,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+6607,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+6608,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+6609,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+6610,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])),32);
    bufp->fullBit(oldp+6611,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+6612,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+6613,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+6614,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+6615,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                 : 0U)),32);
    bufp->fullBit(oldp+6616,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+6617,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+6618,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[6U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+6619,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+6620,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+6621,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+6622,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+6623,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[6U], 
                                                 VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                 : 0U)),32);
    bufp->fullIData(oldp+6624,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+6625,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+6626,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+6627,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]
                                 : 0U)),32);
    bufp->fullBit(oldp+6628,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+6629,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+6630,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+6631,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+6632,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+6633,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+6634,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+6635,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+6636,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+6637,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+6638,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+6639,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+6640,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+6641,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+6642,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+6643,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+6644,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+6645,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+6646,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+6647,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+6648,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
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
    bufp->fullBit(oldp+6649,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+6650,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                     ? 0xffffffffU : 
                                    VL_DIV_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6651,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+6652,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+6653,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+6654,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+6655,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+6656,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+6657,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+6658,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullIData(oldp+6659,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+6660,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6661,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+6662,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+6663,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+6664,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+6665,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,16, 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullCData(oldp+6666,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6667,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+6668,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+6669,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+6670,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])
                                 : 0U)),32);
    bufp->fullBit(oldp+6671,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+6672,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+6673,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result
                                 : 0U)),32);
    bufp->fullCData(oldp+6674,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6675,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+6676,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                    * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                 : 0U)),32);
    bufp->fullBit(oldp+6677,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+6678,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
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
    bufp->fullBit(oldp+6679,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+6680,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__VdfgTmp_hb1a4827e__0 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+6681,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+6682,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (IData)((((QData)((IData)(
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])) 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+6683,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+6684,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6685,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+6686,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                    | VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6687,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+6688,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
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
    bufp->fullBit(oldp+6689,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+6690,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                     ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]
                                     : VL_MODDIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6691,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+6692,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+6693,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+6694,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+6695,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+6696,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+6697,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+6698,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+6699,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                    << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6700,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+6701,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6702,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+6703,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_blt__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+6704,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+6705,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                              VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                             >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6706,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+6707,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                    < VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6708,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+6709,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_bltu__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+6710,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+6711,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,5, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                  (0x1fU 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6712,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+6713,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                      >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6714,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+6715,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                    >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6716,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+6717,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6718,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+6719,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6720,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+6721,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+6722,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+6723,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+6724,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6725,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+6726,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                    ^ VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullCData(oldp+6727,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+6728,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+6729,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])),7);
    bufp->fullIData(oldp+6730,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])),32);
    bufp->fullIData(oldp+6731,(VL_EXTENDS_II(32,12, 
                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                              >> 0x14U))),32);
    bufp->fullIData(oldp+6732,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+6733,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                & VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6734,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])),32);
    bufp->fullIData(oldp+6735,(VL_EXTENDS_II(32,13, 
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
    bufp->fullBit(oldp+6736,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                              == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
    bufp->fullBit(oldp+6737,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
    bufp->fullBit(oldp+6738,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                              >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
    bufp->fullBit(oldp+6739,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+6740,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+6741,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                              != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
    bufp->fullIData(oldp+6742,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U], 0x10U)),32);
    bufp->fullCData(oldp+6743,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                        >> 0xcU))),4);
    bufp->fullCData(oldp+6744,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])),2);
    bufp->fullIData(oldp+6745,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+6746,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                      >> 0xdU))),3);
    bufp->fullIData(oldp+6747,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+6748,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+6749,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+6750,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+6751,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                         >> 0xaU))),6);
    bufp->fullCData(oldp+6752,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                      >> 5U))),2);
    bufp->fullCData(oldp+6753,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+6754,(VL_EXTENDS_II(32,9, 
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
    bufp->fullBit(oldp+6755,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])));
    bufp->fullBit(oldp+6756,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])));
    bufp->fullIData(oldp+6757,(VL_EXTENDS_II(32,12, 
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
    bufp->fullIData(oldp+6758,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+6759,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                          << 1U)) | 
                                ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                           >> 7U)) 
                                 | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                          >> 4U))))),32);
    bufp->fullIData(oldp+6760,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+6761,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                          << 4U)) | 
                                ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                           >> 7U)) 
                                 | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                             >> 2U))))),32);
    bufp->fullIData(oldp+6762,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+6763,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[6U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+6764,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+6765,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+6766,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                          >> 1U)) | 
                                (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                          >> 7U)))),32);
    bufp->fullIData(oldp+6767,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+6768,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
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
    bufp->fullIData(oldp+6769,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                 ? 0xffffffffU : VL_DIV_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
    bufp->fullIData(oldp+6770,(VL_EXTENDS_II(32,21, 
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
    bufp->fullCData(oldp+6771,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+6772,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+6773,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+6774,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])),32);
    bufp->fullIData(oldp+6775,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U] 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6776,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6777,((IData)((((QData)((IData)(
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])) 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+6778,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                | VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6779,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]
                                 : (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                     ? 0U : VL_MODDIVS_III(32, 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])))),32);
    bufp->fullIData(oldp+6780,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]
                                 : VL_MODDIV_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
    bufp->fullIData(oldp+6781,(VL_EXTENDS_II(32,12, 
                                             ((0xfe0U 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                    >> 7U))))),32);
    bufp->fullIData(oldp+6782,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+6783,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])),6);
    bufp->fullIData(oldp+6784,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
    bufp->fullCData(oldp+6785,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                >> 0x1aU)),7);
    bufp->fullCData(oldp+6786,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                         >> 0x14U))),6);
    bufp->fullIData(oldp+6787,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6788,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+6789,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                          VL_EXTENDS_II(32,12, 
                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                         >> 0x14U)))),32);
    bufp->fullIData(oldp+6790,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                < VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6791,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+6792,(VL_SHIFTRS_III(32,32,5, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                              (0x1fU 
                                               & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
    bufp->fullIData(oldp+6793,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+6794,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
    bufp->fullIData(oldp+6795,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6796,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                ^ VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 0x14U)))),32);
    bufp->fullBit(oldp+6797,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+6798,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+6799,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+6800,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                         >> 7U))),5);
    bufp->fullIData(oldp+6801,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+6802,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[7U])),32);
    bufp->fullBit(oldp+6803,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+6804,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result
                                 : 0U)),32);
    bufp->fullBit(oldp+6805,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+6806,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6807,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+6808,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                    & VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6809,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+6810,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[7U] 
                                    + (0xfffff000U 
                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6811,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+6812,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+6813,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+6814,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+6815,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+6816,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+6817,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+6818,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+6819,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+6820,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+6821,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+6822,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+6823,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+6824,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+6825,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+6826,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+6827,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+6828,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+6829,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+6830,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                         >> 2U))),5);
    bufp->fullIData(oldp+6831,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[7U])),32);
    bufp->fullBit(oldp+6832,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+6833,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                    + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6834,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+6835,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                    + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                 : 0U)),32);
    bufp->fullBit(oldp+6836,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+6837,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 2U)))),5);
    bufp->fullIData(oldp+6838,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+6839,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+6840,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 7U)))),5);
    bufp->fullIData(oldp+6841,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+6842,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+6843,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+6844,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+6845,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+6846,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+6847,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+6848,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+6849,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+6850,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+6851,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+6852,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+6853,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+6854,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])),32);
    bufp->fullBit(oldp+6855,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+6856,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+6857,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+6858,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+6859,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                 : 0U)),32);
    bufp->fullBit(oldp+6860,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+6861,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+6862,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[7U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+6863,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+6864,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+6865,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+6866,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+6867,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[7U], 
                                                 VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                 : 0U)),32);
    bufp->fullIData(oldp+6868,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+6869,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+6870,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+6871,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]
                                 : 0U)),32);
    bufp->fullBit(oldp+6872,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+6873,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+6874,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+6875,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                 : 0U)),32);
    bufp->fullBit(oldp+6876,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+6877,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+6878,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+6879,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+6880,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+6881,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+6882,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+6883,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+6884,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+6885,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+6886,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+6887,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+6888,(VL_SHIFTL_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+6889,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+6890,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+6891,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+6892,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
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
    bufp->fullBit(oldp+6893,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+6894,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                     ? 0xffffffffU : 
                                    VL_DIV_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6895,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+6896,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+6897,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+6898,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+6899,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+6900,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+6901,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+6902,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,8, 
                                                 (0xffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullIData(oldp+6903,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+6904,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6905,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+6906,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+6907,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+6908,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+6909,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? VL_EXTENDS_II(32,16, 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result))
                                 : 0U)),32);
    bufp->fullCData(oldp+6910,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6911,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+6912,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)
                                 : 0U)),32);
    bufp->fullBit(oldp+6913,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+6914,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])
                                 : 0U)),32);
    bufp->fullBit(oldp+6915,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+6916,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+6917,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result
                                 : 0U)),32);
    bufp->fullCData(oldp+6918,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+6919,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+6920,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                    * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                 : 0U)),32);
    bufp->fullBit(oldp+6921,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+6922,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
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
    bufp->fullBit(oldp+6923,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+6924,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__VdfgTmp_hb1a4827e__0 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+6925,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+6926,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (IData)((((QData)((IData)(
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])) 
                                             * (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                            >> 0x20U))
                                 : 0U)),32);
    bufp->fullBit(oldp+6927,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+6928,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6929,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+6930,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                    | VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6931,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+6932,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
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
    bufp->fullBit(oldp+6933,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+6934,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                     ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]
                                     : VL_MODDIV_III(32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6935,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+6936,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+6937,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+6938,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+6939,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+6940,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+6941,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+6942,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+6943,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                    << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6944,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+6945,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? VL_SHIFTL_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6946,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+6947,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_blt__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+6948,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+6949,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                              VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                             >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6950,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+6951,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                    < VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6952,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+6953,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_bltu__DOT__cond)
                                 : 0U)),32);
    bufp->fullBit(oldp+6954,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+6955,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,5, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                  (0x1fU 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6956,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+6957,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? VL_SHIFTRS_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                      >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6958,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+6959,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                    >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                 : 0U)),32);
    bufp->fullBit(oldp+6960,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+6961,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullBit(oldp+6962,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+6963,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6964,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+6965,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+6966,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+6967,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+6968,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6969,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+6970,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 7U)))
                                 ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                    ^ VL_EXTENDS_II(32,12, 
                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
    bufp->fullCData(oldp+6971,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+6972,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+6973,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])),7);
    bufp->fullIData(oldp+6974,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])),32);
    bufp->fullIData(oldp+6975,(VL_EXTENDS_II(32,12, 
                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                              >> 0x14U))),32);
    bufp->fullIData(oldp+6976,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+6977,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                & VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+6978,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])),32);
    bufp->fullIData(oldp+6979,(VL_EXTENDS_II(32,13, 
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
    bufp->fullBit(oldp+6980,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                              == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
    bufp->fullBit(oldp+6981,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
    bufp->fullBit(oldp+6982,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                              >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
    bufp->fullBit(oldp+6983,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+6984,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+6985,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                              != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
    bufp->fullIData(oldp+6986,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U], 0x10U)),32);
    bufp->fullCData(oldp+6987,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                        >> 0xcU))),4);
    bufp->fullCData(oldp+6988,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])),2);
    bufp->fullIData(oldp+6989,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+6990,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                      >> 0xdU))),3);
    bufp->fullIData(oldp+6991,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+6992,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+6993,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+6994,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+6995,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                         >> 0xaU))),6);
    bufp->fullCData(oldp+6996,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                      >> 5U))),2);
    bufp->fullCData(oldp+6997,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+6998,(VL_EXTENDS_II(32,9, 
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
    bufp->fullBit(oldp+6999,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])));
    bufp->fullBit(oldp+7000,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])));
    bufp->fullIData(oldp+7001,(VL_EXTENDS_II(32,12, 
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
    bufp->fullIData(oldp+7002,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+7003,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                          << 1U)) | 
                                ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                           >> 7U)) 
                                 | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                          >> 4U))))),32);
    bufp->fullIData(oldp+7004,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+7005,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                          << 4U)) | 
                                ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                           >> 7U)) 
                                 | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                             >> 2U))))),32);
    bufp->fullIData(oldp+7006,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+7007,(VL_SHIFTR_III(32,32,32, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[7U], 
                                             VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+7008,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+7009,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+7010,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                          >> 1U)) | 
                                (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                          >> 7U)))),32);
    bufp->fullIData(oldp+7011,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+7012,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
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
    bufp->fullIData(oldp+7013,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                 ? 0xffffffffU : VL_DIV_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
    bufp->fullIData(oldp+7014,(VL_EXTENDS_II(32,21, 
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
    bufp->fullCData(oldp+7015,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+7016,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+7017,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+7018,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])),32);
    bufp->fullIData(oldp+7019,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U] 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+7020,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__VdfgTmp_hb1a4827e__0 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+7021,((IData)((((QData)((IData)(
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])) 
                                         * (QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+7022,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                | VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+7023,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]
                                 : (((0x80000000U == 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]) 
                                     & (0xffffffffU 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                     ? 0U : VL_MODDIVS_III(32, 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))),32);
    bufp->fullIData(oldp+7024,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                 ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]
                                 : VL_MODDIV_III(32, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
    bufp->fullIData(oldp+7025,(VL_EXTENDS_II(32,12, 
                                             ((0xfe0U 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                    >> 7U))))),32);
    bufp->fullIData(oldp+7026,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+7027,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])),6);
    bufp->fullIData(oldp+7028,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
    bufp->fullCData(oldp+7029,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                >> 0x1aU)),7);
    bufp->fullCData(oldp+7030,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                         >> 0x14U))),6);
    bufp->fullIData(oldp+7031,(VL_SHIFTL_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+7032,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+7033,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                          VL_EXTENDS_II(32,12, 
                                                        (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                         >> 0x14U)))),32);
    bufp->fullIData(oldp+7034,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                < VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+7035,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+7036,(VL_SHIFTRS_III(32,32,5, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                              (0x1fU 
                                               & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
    bufp->fullIData(oldp+7037,(VL_SHIFTRS_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+7038,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
    bufp->fullIData(oldp+7039,(VL_SHIFTR_III(32,32,6, 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                             (0x3fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 0x14U)))),32);
    bufp->fullIData(oldp+7040,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                ^ VL_EXTENDS_II(32,12, 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 0x14U)))),32);
    bufp->fullBit(oldp+7041,(vlSelf->clk));
    bufp->fullBit(oldp+7042,(vlSelf->rst));
    bufp->fullBit(oldp+7043,(vlSelf->dut_rst));
    bufp->fullIData(oldp+7044,(vlSelf->imem_rdata),32);
    bufp->fullBit(oldp+7045,(vlSelf->imem_resp));
    bufp->fullIData(oldp+7046,(vlSelf->imem_addr),32);
    bufp->fullBit(oldp+7047,(vlSelf->imem_read));
    bufp->fullIData(oldp+7048,(vlSelf->dmem_rdata),32);
    bufp->fullBit(oldp+7049,(vlSelf->dmem_resp));
    bufp->fullIData(oldp+7050,(vlSelf->dmem_addr),32);
    bufp->fullBit(oldp+7051,(vlSelf->dmem_read));
    bufp->fullBit(oldp+7052,(vlSelf->dmem_write));
    bufp->fullCData(oldp+7053,(vlSelf->dmem_wmask),4);
    bufp->fullIData(oldp+7054,(vlSelf->dmem_wdata),32);
    bufp->fullIData(oldp+7055,(vlSelf->golden_imem_rdata),32);
    bufp->fullBit(oldp+7056,(vlSelf->golden_imem_resp));
    bufp->fullIData(oldp+7057,(vlSelf->golden_imem_addr),32);
    bufp->fullBit(oldp+7058,(vlSelf->golden_imem_read));
    bufp->fullIData(oldp+7059,(vlSelf->golden_dmem_rdata),32);
    bufp->fullBit(oldp+7060,(vlSelf->golden_dmem_resp));
    bufp->fullIData(oldp+7061,(vlSelf->golden_dmem_addr),32);
    bufp->fullBit(oldp+7062,(vlSelf->golden_dmem_read));
    bufp->fullBit(oldp+7063,(vlSelf->golden_dmem_write));
    bufp->fullCData(oldp+7064,(vlSelf->golden_dmem_wmask),4);
    bufp->fullIData(oldp+7065,(vlSelf->golden_dmem_wdata),32);
    bufp->fullBit(oldp+7066,(vlSelf->halt));
    bufp->fullBit(oldp+7067,(vlSelf->error));
    bufp->fullBit(oldp+7068,(vlSelf->any_commit));
    bufp->fullBit(oldp+7069,(vlSelf->mispredict_o));
    bufp->fullBit(oldp+7070,(vlSelf->eoc_enable));
    bufp->fullQData(oldp+7071,(vlSelf->dut_order),64);
    bufp->fullIData(oldp+7073,(vlSelf->dut_pc),32);
    bufp->fullIData(oldp+7074,(vlSelf->dut_inst),32);
    bufp->fullCData(oldp+7075,(vlSelf->dut_rd_addr),5);
    bufp->fullIData(oldp+7076,(vlSelf->dut_rd_wdata),32);
    bufp->fullIData(oldp+7077,(vlSelf->dut_mem_addr),32);
    bufp->fullCData(oldp+7078,(vlSelf->dut_mem_rmask),4);
    bufp->fullCData(oldp+7079,(vlSelf->dut_mem_wmask),4);
    bufp->fullIData(oldp+7080,(vlSelf->dut_mem_rdata),32);
    bufp->fullIData(oldp+7081,(vlSelf->dut_mem_wdata),32);
    bufp->fullBit(oldp+7082,(vlSelf->golden_commit));
    bufp->fullQData(oldp+7083,(vlSelf->golden_order),64);
    bufp->fullIData(oldp+7085,(vlSelf->golden_pc),32);
    bufp->fullIData(oldp+7086,(vlSelf->golden_inst),32);
    bufp->fullCData(oldp+7087,(vlSelf->golden_rd_addr),5);
    bufp->fullIData(oldp+7088,(vlSelf->golden_rd_wdata),32);
    bufp->fullIData(oldp+7089,(vlSelf->golden_mem_addr),32);
    bufp->fullCData(oldp+7090,(vlSelf->golden_mem_rmask),4);
    bufp->fullCData(oldp+7091,(vlSelf->golden_mem_wmask),4);
    bufp->fullIData(oldp+7092,(vlSelf->golden_mem_rdata),32);
    bufp->fullIData(oldp+7093,(vlSelf->golden_mem_wdata),32);
    bufp->fullBit(oldp+7094,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetchq_full) 
                                       & (IData)(vlSelf->imem_resp))))));
    bufp->fullBit(oldp+7095,(vlSymsp->TOP__top_tb.__Vcellinp__dut__rst));
    bufp->fullBit(oldp+7096,(((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__LDorST_i)
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
    bufp->fullBit(oldp+7097,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_rob_full));
    bufp->fullBit(oldp+7098,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_alu_full));
    bufp->fullBit(oldp+7099,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_cmp_full));
    bufp->fullBit(oldp+7100,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_load_full));
    bufp->fullBit(oldp+7101,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_store_full));
    bufp->fullBit(oldp+7102,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_jump_full));
    bufp->fullBit(oldp+7103,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_mul_full));
    bufp->fullBit(oldp+7104,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_no_free_pr));
}
