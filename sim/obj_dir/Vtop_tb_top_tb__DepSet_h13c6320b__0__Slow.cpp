// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb_top_tb.h"

VL_ATTR_COLD void Vtop_tb_top_tb___eval_initial__TOP__top_tb(Vtop_tb_top_tb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_tb_top_tb___eval_initial__TOP__top_tb\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x616e7369U;
    __Vtemp_1[1U] = 0x6573732eU;
    __Vtemp_1[2U] = 0x726f6772U;
    __Vtemp_1[3U] = 0x2e2f70U;
    vlSelf->__PVT__fd = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                                    , std::string{"w"});
    ;
    vlSelf->__PVT__halt_seen = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[0U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[1U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[2U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[3U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[4U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[5U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[6U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[7U] = 0U;
    vlSelf->__PVT__monitor__DOT__unnamedblk4__DOT__channel = 8U;
    __Vtemp_2[0U] = 0x2e6c6f67U;
    __Vtemp_2[1U] = 0x6d6d6974U;
    __Vtemp_2[2U] = 0x2e2f636fU;
    vlSelf->__PVT__monitor__DOT__fd = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(3, __Vtemp_2)
                                                  , 
                                                  std::string{"w"});
    ;
}

extern const VlUnpacked<CData/*0:0*/, 512> Vtop_tb__ConstPool__TABLE_h01624aed_0;

VL_ATTR_COLD void Vtop_tb_top_tb___stl_sequent__TOP__top_tb__0(Vtop_tb_top_tb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_tb_top_tb___stl_sequent__TOP__top_tb__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    // Body
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_pc_valid 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_pc_trap 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_pc_rdata 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc;
    vlSelf->__PVT__golden__DOT__load_ir = 0U;
    vlSelf->halt = 0U;
    if (vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[0U]) {
        vlSelf->halt = 1U;
    }
    if (vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[1U]) {
        vlSelf->halt = 1U;
    }
    if (vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[2U]) {
        vlSelf->halt = 1U;
    }
    if (vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[3U]) {
        vlSelf->halt = 1U;
    }
    if (vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[4U]) {
        vlSelf->halt = 1U;
    }
    if (vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[5U]) {
        vlSelf->halt = 1U;
    }
    if (vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[6U]) {
        vlSelf->halt = 1U;
    }
    if (vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[7U]) {
        vlSelf->halt = 1U;
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_pc_valid 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_pc_trap 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_pc_rdata 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs1_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs2_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs2_rdata = 0U;
    vlSelf->__PVT__golden__DOT__state_next = vlSelf->__PVT__golden__DOT__state;
    vlSelf->golden_dmem_write = 0U;
    vlSelf->golden_imem_read = 0U;
    vlSelf->golden_dmem_read = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_valid 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_trap 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap;
    vlSelf->__PVT__golden__DOT__commit = 0U;
    vlSelf->golden_imem_addr = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_rdata 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_valid 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_trap 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap;
    vlSelf->__PVT__golden__DOT__regf_we = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_valid 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_trap 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap;
    vlSelf->__PVT__monitor__DOT__rvfi_halt = ((0xf8U 
                                               & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt)) 
                                              | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__halt
                                                  [2U] 
                                                  << 2U) 
                                                 | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__halt
                                                     [1U] 
                                                     << 1U) 
                                                    | vlSymsp->TOP__top_tb__mon_itf.__PVT__halt
                                                    [0U])));
    vlSelf->__PVT__monitor__DOT__rvfi_halt = ((0xc7U 
                                               & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt)) 
                                              | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__halt
                                                  [5U] 
                                                  << 5U) 
                                                 | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__halt
                                                     [4U] 
                                                     << 4U) 
                                                    | (vlSymsp->TOP__top_tb__mon_itf.__PVT__halt
                                                       [3U] 
                                                       << 3U))));
    vlSelf->__PVT__monitor__DOT__rvfi_halt = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt)) 
                                              | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__halt
                                                  [7U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP__top_tb__mon_itf.__PVT__halt
                                                    [6U] 
                                                    << 6U)));
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_rdata 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_valid 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_trap 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_trap 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs1_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U])));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs1_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U])];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs2_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                                  >> 5U))));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs2_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                       >> 5U))];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc;
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                        >> 0x10U)));
    } else {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc;
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                        >> 0x10U)));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                        >> 0x10U)));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                     >> 0x10U));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                     >> 0x10U));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                        >> 0x10U)));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                        >> 0x10U)));
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_trap 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                     >> 0x10U));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                     >> 0x10U));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                     >> 0x10U));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                        >> 0x10U)));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                        >> 0x10U)));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                     >> 0x10U));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                     >> 0x10U));
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_rdata 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                             >> 0xfU));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                             >> 0xfU));
    }
    vlSelf->__Vcellinp__dut__rst = ((IData)(vlSymsp->TOP.dut_rst) 
                                    | (IData)(vlSymsp->TOP.rst));
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_rdata 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                             >> 0xfU));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                             >> 0xfU));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
                             >> 0xfU));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[4U] 
                             >> 0xfU));
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_rdata 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                             >> 0xfU));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                             >> 0xfU));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
                             >> 0xfU));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[4U] 
                             >> 0xfU));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[4U] 
                             >> 0xfU));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[4U] 
                             >> 0xfU));
    }
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h93807142__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hbe3d468f__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hffa8ed01__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6f3e661b__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd6ddbe86__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hc4755b34__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hfd7abf7f__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h5d544099__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd0253a29__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9705a690__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h04c8a2ce__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h33811742__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_haa96bd01__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6858561b__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_ha4713db3__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h84139451__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h27236079__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hf52c9d23__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h239dd55b__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hff982c99__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h4adc75cb__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h08771295__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h84688035__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h23f458cb__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9ed75f22__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h854c57e7__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd59fb651__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h57b89cc1__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h1d25340f__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h94a69566__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_haca45885__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6aa7b63f__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9f209d67__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h821d34ad__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h015e9540__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h8f8de6b2__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h51ddd1ab__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h21754a35__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6b6e6815__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_he8f201ab__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hdbc9a842__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h845449ac__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h8fba82b1__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_he0137f2b__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h2c63fb63__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hac28caa1__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9a334b54__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd9693db6__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h687c3f0f__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hb0ff9ce3__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h8ec4773d__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h019edc5d__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd6c1f5b3__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h2cf8544a__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6406a584__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h458111f9__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                               >> 5U))));
    vlSelf->__PVT__golden__DOT__mul_result_ss = VL_MULS_QQQ(64, 
                                                            VL_EXTENDS_QI(64,32, vlSelf->__PVT__golden__DOT__rs1_v), 
                                                            VL_EXTENDS_QI(64,32, vlSelf->__PVT__golden__DOT__rs2_v));
    vlSelf->__PVT__golden__DOT__aluop = 0U;
    vlSelf->__PVT__golden__DOT__cmpop = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__order[0U] 
        = vlSymsp->TOP__top_tb__dut.__PVT__order;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__order[1U] = 0ULL;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__order[2U] = 0ULL;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__order[3U] = 0ULL;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__order[4U] = 0ULL;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__order[5U] = 0ULL;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__order[6U] = 0ULL;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__order[7U] = 0ULL;
    vlSelf->__PVT__golden__DOT__a = 0U;
    vlSelf->__PVT__golden__DOT__i_imm = (((- (IData)(
                                                     (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                      >> 0x1fU))) 
                                          << 0xbU) 
                                         | (0x7ffU 
                                            & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                               >> 0x14U)));
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs1_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs2_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs2_rdata = 0U;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs1_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U])));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs1_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U])];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h93807142__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs1_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs2_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                                  >> 5U))));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs2_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                       >> 5U))];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hbe3d468f__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs2_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_rdata = 0U;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U])));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hffa8ed01__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U])];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hffa8ed01__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6f3e661b__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                                  >> 5U))));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd6ddbe86__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                       >> 5U))];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd6ddbe86__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hc4755b34__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_rdata = 0U;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U])));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hfd7abf7f__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h5d544099__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U])];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hfd7abf7f__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h5d544099__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd0253a29__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 >> 0xfU));
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                                  >> 5U))));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9705a690__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h04c8a2ce__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                       >> 5U))];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9705a690__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h04c8a2ce__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h33811742__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 >> 0xfU));
        }
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_rdata = 0U;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U])));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_haa96bd01__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6858561b__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_ha4713db3__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U])];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_haa96bd01__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6858561b__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_ha4713db3__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h84139451__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                 >> 0xfU));
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                  >> 5U))));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h27236079__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hf52c9d23__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h239dd55b__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                       >> 5U))];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h27236079__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hf52c9d23__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h239dd55b__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hff982c99__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                 >> 0xfU));
        }
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_rdata = 0U;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U])));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h4adc75cb__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h08771295__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h84688035__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h23f458cb__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U])];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h4adc75cb__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h08771295__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h84688035__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h23f458cb__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9ed75f22__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                                 >> 0xfU));
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                  >> 5U))));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h854c57e7__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd59fb651__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h57b89cc1__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h1d25340f__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                       >> 5U))];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h854c57e7__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd59fb651__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h57b89cc1__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h1d25340f__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h94a69566__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                                 >> 0xfU));
        }
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_rdata = 0U;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U])));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_haca45885__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6aa7b63f__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9f209d67__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h821d34ad__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h015e9540__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U])];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_haca45885__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6aa7b63f__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9f209d67__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h821d34ad__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h015e9540__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h8f8de6b2__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[2U] 
                                 >> 0xfU));
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                  >> 5U))));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h51ddd1ab__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h21754a35__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6b6e6815__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_he8f201ab__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hdbc9a842__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                       >> 5U))];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h51ddd1ab__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h21754a35__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6b6e6815__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_he8f201ab__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hdbc9a842__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h845449ac__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[2U] 
                                 >> 0xfU));
        }
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_rdata = 0U;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U])));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h8fba82b1__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_he0137f2b__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h2c63fb63__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hac28caa1__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9a334b54__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd9693db6__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U])];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h8fba82b1__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_he0137f2b__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h2c63fb63__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hac28caa1__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9a334b54__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd9693db6__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h687c3f0f__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[2U] 
                                 >> 0xfU));
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                  >> 5U))));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hb0ff9ce3__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h8ec4773d__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h019edc5d__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd6c1f5b3__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h2cf8544a__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6406a584__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                       >> 5U))];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hb0ff9ce3__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h8ec4773d__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h019edc5d__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd6c1f5b3__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h2cf8544a__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6406a584__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h458111f9__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[2U] 
                                 >> 0xfU));
        }
    }
    vlSelf->__PVT__monitor__DOT__rvfi_order[0U] = (IData)(
                                                          vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                          [0U]);
    vlSelf->__PVT__monitor__DOT__rvfi_order[1U] = (IData)(
                                                          (vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                           [0U] 
                                                           >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_order[2U] = (IData)(
                                                          vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                          [1U]);
    vlSelf->__PVT__monitor__DOT__rvfi_order[3U] = (IData)(
                                                          (vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                           [1U] 
                                                           >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_order[4U] = (IData)(
                                                          vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                          [2U]);
    vlSelf->__PVT__monitor__DOT__rvfi_order[5U] = (IData)(
                                                          (vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                           [2U] 
                                                           >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_order[6U] = (IData)(
                                                          vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                          [3U]);
    vlSelf->__PVT__monitor__DOT__rvfi_order[7U] = (IData)(
                                                          (vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                           [3U] 
                                                           >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_order[8U] = (IData)(
                                                          vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                          [4U]);
    vlSelf->__PVT__monitor__DOT__rvfi_order[9U] = (IData)(
                                                          (vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                           [4U] 
                                                           >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU] = (IData)(
                                                            vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                            [5U]);
    vlSelf->__PVT__monitor__DOT__rvfi_order[0xbU] = (IData)(
                                                            (vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                             [5U] 
                                                             >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU] = (IData)(
                                                            vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                            [6U]);
    vlSelf->__PVT__monitor__DOT__rvfi_order[0xdU] = (IData)(
                                                            (vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                             [6U] 
                                                             >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU] = (IData)(
                                                            vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                            [7U]);
    vlSelf->__PVT__monitor__DOT__rvfi_order[0xfU] = (IData)(
                                                            (vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                             [7U] 
                                                             >> 0x20U));
    vlSelf->__PVT__golden__DOT__b = 0U;
    if ((1U & (~ ((((((((0U == vlSelf->__PVT__golden__DOT__state) 
                        | (1U == vlSelf->__PVT__golden__DOT__state)) 
                       | (2U == vlSelf->__PVT__golden__DOT__state)) 
                      | (3U == vlSelf->__PVT__golden__DOT__state)) 
                     | (4U == vlSelf->__PVT__golden__DOT__state)) 
                    | (5U == vlSelf->__PVT__golden__DOT__state)) 
                   | (6U == vlSelf->__PVT__golden__DOT__state)) 
                  | (7U == vlSelf->__PVT__golden__DOT__state))))) {
        if ((8U != vlSelf->__PVT__golden__DOT__state)) {
            if ((9U != vlSelf->__PVT__golden__DOT__state)) {
                if ((0xaU == vlSelf->__PVT__golden__DOT__state)) {
                    vlSelf->golden_dmem_write = 1U;
                }
                if ((0xaU != vlSelf->__PVT__golden__DOT__state)) {
                    if ((0xbU == vlSelf->__PVT__golden__DOT__state)) {
                        if ((2U != (7U & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                          >> 0xcU)))) {
                            if ((3U != (7U & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                              >> 0xcU)))) {
                                vlSelf->__PVT__golden__DOT__aluop 
                                    = (7U & ((5U == 
                                              (7U & 
                                               (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                >> 0xcU)))
                                              ? ((0x40000000U 
                                                  & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                  ? 2U
                                                  : 5U)
                                              : (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                 >> 0xcU)));
                            }
                        }
                    } else if ((0xcU == vlSelf->__PVT__golden__DOT__state)) {
                        if ((0x4000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)) {
                            vlSelf->__PVT__golden__DOT__aluop 
                                = (7U & ((0x2000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                          ? (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                             >> 0xcU)
                                          : ((0x1000U 
                                              & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                              ? ((0x40000000U 
                                                  & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                  ? 2U
                                                  : 5U)
                                              : (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                 >> 0xcU))));
                        } else if ((1U & (~ (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                             >> 0xdU)))) {
                            vlSelf->__PVT__golden__DOT__aluop 
                                = (7U & ((0x1000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                          ? (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                             >> 0xcU)
                                          : ((0x40000000U 
                                              & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                              ? 3U : 0U)));
                        }
                    }
                }
            }
            if ((9U == vlSelf->__PVT__golden__DOT__state)) {
                vlSelf->golden_dmem_read = 1U;
            }
        }
        if ((8U == vlSelf->__PVT__golden__DOT__state)) {
            vlSelf->__PVT__golden__DOT__cmpop = (7U 
                                                 & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                    >> 0xcU));
            vlSelf->__PVT__golden__DOT__a = vlSelf->__PVT__golden__DOT__rs1_v;
            vlSelf->__PVT__golden__DOT__b = vlSelf->__PVT__golden__DOT__rs2_v;
        } else if ((9U != vlSelf->__PVT__golden__DOT__state)) {
            if ((0xaU != vlSelf->__PVT__golden__DOT__state)) {
                if ((0xbU == vlSelf->__PVT__golden__DOT__state)) {
                    if ((2U == (7U & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                      >> 0xcU)))) {
                        vlSelf->__PVT__golden__DOT__cmpop = 4U;
                    } else if ((3U == (7U & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                             >> 0xcU)))) {
                        vlSelf->__PVT__golden__DOT__cmpop = 6U;
                    }
                    vlSelf->__PVT__golden__DOT__a = vlSelf->__PVT__golden__DOT__rs1_v;
                    vlSelf->__PVT__golden__DOT__b = vlSelf->__PVT__golden__DOT__i_imm;
                } else if ((0xcU == vlSelf->__PVT__golden__DOT__state)) {
                    if ((1U & (~ (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                  >> 0xeU)))) {
                        if ((0x2000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)) {
                            vlSelf->__PVT__golden__DOT__cmpop 
                                = ((0x1000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                    ? 6U : 4U);
                        }
                    }
                    vlSelf->__PVT__golden__DOT__a = vlSelf->__PVT__golden__DOT__rs1_v;
                    vlSelf->__PVT__golden__DOT__b = vlSelf->__PVT__golden__DOT__rs2_v;
                }
            }
        }
    }
    vlSelf->__PVT__golden__DOT__aluout = ((4U & (IData)(vlSelf->__PVT__golden__DOT__aluop))
                                           ? ((2U & (IData)(vlSelf->__PVT__golden__DOT__aluop))
                                               ? ((1U 
                                                   & (IData)(vlSelf->__PVT__golden__DOT__aluop))
                                                   ? 
                                                  (vlSelf->__PVT__golden__DOT__a 
                                                   & vlSelf->__PVT__golden__DOT__b)
                                                   : 
                                                  (vlSelf->__PVT__golden__DOT__a 
                                                   | vlSelf->__PVT__golden__DOT__b))
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__golden__DOT__aluop))
                                                   ? 
                                                  (vlSelf->__PVT__golden__DOT__a 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->__PVT__golden__DOT__b))
                                                   : 
                                                  (vlSelf->__PVT__golden__DOT__a 
                                                   ^ vlSelf->__PVT__golden__DOT__b)))
                                           : ((2U & (IData)(vlSelf->__PVT__golden__DOT__aluop))
                                               ? ((1U 
                                                   & (IData)(vlSelf->__PVT__golden__DOT__aluop))
                                                   ? 
                                                  (vlSelf->__PVT__golden__DOT__a 
                                                   - vlSelf->__PVT__golden__DOT__b)
                                                   : 
                                                  VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__golden__DOT__a, 
                                                                 (0x1fU 
                                                                  & vlSelf->__PVT__golden__DOT__b)))
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__golden__DOT__aluop))
                                                   ? 
                                                  (vlSelf->__PVT__golden__DOT__a 
                                                   << 
                                                   (0x1fU 
                                                    & vlSelf->__PVT__golden__DOT__b))
                                                   : 
                                                  (vlSelf->__PVT__golden__DOT__a 
                                                   + vlSelf->__PVT__golden__DOT__b))));
    __Vtableidx1 = (((vlSelf->__PVT__golden__DOT__a 
                      == vlSelf->__PVT__golden__DOT__b) 
                     << 8U) | (((vlSelf->__PVT__golden__DOT__a 
                                 != vlSelf->__PVT__golden__DOT__b) 
                                << 7U) | ((VL_LTS_III(32, vlSelf->__PVT__golden__DOT__a, vlSelf->__PVT__golden__DOT__b) 
                                           << 6U) | 
                                          ((VL_GTES_III(32, vlSelf->__PVT__golden__DOT__a, vlSelf->__PVT__golden__DOT__b) 
                                            << 5U) 
                                           | (((vlSelf->__PVT__golden__DOT__a 
                                                < vlSelf->__PVT__golden__DOT__b) 
                                               << 4U) 
                                              | (((vlSelf->__PVT__golden__DOT__a 
                                                   >= vlSelf->__PVT__golden__DOT__b) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->__PVT__golden__DOT__cmpop)))))));
    vlSelf->__PVT__golden__DOT__br_en = Vtop_tb__ConstPool__TABLE_h01624aed_0
        [__Vtableidx1];
    vlSelf->__PVT__golden__DOT__pc_next = vlSelf->__PVT__golden__DOT__pc;
    vlSelf->golden_dmem_addr = 0U;
    vlSelf->golden_dmem_wmask = 0U;
    vlSelf->__PVT__golden__DOT__dmem_rmask = 0U;
    vlSelf->golden_dmem_wdata = 0U;
    vlSelf->__PVT__golden__DOT__rd_v = 0U;
    if (((((((((0U == vlSelf->__PVT__golden__DOT__state) 
               | (1U == vlSelf->__PVT__golden__DOT__state)) 
              | (2U == vlSelf->__PVT__golden__DOT__state)) 
             | (3U == vlSelf->__PVT__golden__DOT__state)) 
            | (4U == vlSelf->__PVT__golden__DOT__state)) 
           | (5U == vlSelf->__PVT__golden__DOT__state)) 
          | (6U == vlSelf->__PVT__golden__DOT__state)) 
         | (7U == vlSelf->__PVT__golden__DOT__state))) {
        if ((0U != vlSelf->__PVT__golden__DOT__state)) {
            if ((1U != vlSelf->__PVT__golden__DOT__state)) {
                if ((2U == vlSelf->__PVT__golden__DOT__state)) {
                    if (vlSymsp->TOP.golden_imem_resp) {
                        vlSelf->__PVT__golden__DOT__load_ir = 1U;
                    }
                    vlSelf->golden_imem_read = 1U;
                    vlSelf->golden_imem_addr = vlSelf->__PVT__golden__DOT__pc;
                }
                if ((2U != vlSelf->__PVT__golden__DOT__state)) {
                    if ((3U != vlSelf->__PVT__golden__DOT__state)) {
                        vlSelf->__PVT__golden__DOT__regf_we = 1U;
                        vlSelf->__PVT__golden__DOT__rd_v 
                            = ((4U == vlSelf->__PVT__golden__DOT__state)
                                ? (0xfffff000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                : ((5U == vlSelf->__PVT__golden__DOT__state)
                                    ? (vlSelf->__PVT__golden__DOT__pc 
                                       + (0xfffff000U 
                                          & vlSelf->__PVT__golden__DOT__ir__DOT__data))
                                    : ((6U == vlSelf->__PVT__golden__DOT__state)
                                        ? ((IData)(4U) 
                                           + vlSelf->__PVT__golden__DOT__pc)
                                        : ((IData)(4U) 
                                           + vlSelf->__PVT__golden__DOT__pc))));
                    }
                }
            }
            if ((1U == vlSelf->__PVT__golden__DOT__state)) {
                vlSelf->__PVT__golden__DOT__state_next = 2U;
            } else if ((2U == vlSelf->__PVT__golden__DOT__state)) {
                if (vlSymsp->TOP.golden_imem_resp) {
                    vlSelf->__PVT__golden__DOT__state_next = 3U;
                }
            } else {
                vlSelf->__PVT__golden__DOT__state_next 
                    = ((3U == vlSelf->__PVT__golden__DOT__state)
                        ? ((0x40U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                            ? ((0x20U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                ? ((0x10U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                    ? 0U : ((8U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                             ? ((4U 
                                                 & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                   ? 6U
                                                   : 0U)
                                                  : 0U)
                                                 : 0U)
                                             : ((4U 
                                                 & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                   ? 7U
                                                   : 0U)
                                                  : 0U)
                                                 : 
                                                ((2U 
                                                  & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                   ? 8U
                                                   : 0U)
                                                  : 0U))))
                                : 0U) : ((0x20U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                          ? ((0x10U 
                                              & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                              ? ((8U 
                                                  & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                     ? 4U
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                     ? 
                                                    ((1U 
                                                      == 
                                                      (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                       >> 0x19U))
                                                      ? 0xdU
                                                      : 0xcU)
                                                     : 0U)
                                                    : 0U)))
                                              : ((8U 
                                                  & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                     ? 0xaU
                                                     : 0U)
                                                    : 0U))))
                                          : ((0x10U 
                                              & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                              ? ((8U 
                                                  & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                     ? 5U
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                     ? 0xbU
                                                     : 0U)
                                                    : 0U)))
                                              : ((8U 
                                                  & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                     ? 9U
                                                     : 0U)
                                                    : 0U))))))
                        : 2U);
            }
        }
        if ((0U == vlSelf->__PVT__golden__DOT__state)) {
            vlSelf->__PVT__golden__DOT__commit = 1U;
            vlSelf->__PVT__golden__DOT__pc_next = vlSelf->__PVT__golden__DOT__pc;
        } else if ((1U != vlSelf->__PVT__golden__DOT__state)) {
            if ((2U != vlSelf->__PVT__golden__DOT__state)) {
                if ((3U != vlSelf->__PVT__golden__DOT__state)) {
                    vlSelf->__PVT__golden__DOT__commit = 1U;
                    vlSelf->__PVT__golden__DOT__pc_next 
                        = ((4U == vlSelf->__PVT__golden__DOT__state)
                            ? ((IData)(4U) + vlSelf->__PVT__golden__DOT__pc)
                            : ((5U == vlSelf->__PVT__golden__DOT__state)
                                ? ((IData)(4U) + vlSelf->__PVT__golden__DOT__pc)
                                : ((6U == vlSelf->__PVT__golden__DOT__state)
                                    ? (vlSelf->__PVT__golden__DOT__pc 
                                       + (((- (IData)(
                                                      (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                       >> 0x1fU))) 
                                           << 0x14U) 
                                          | ((0xff000U 
                                              & vlSelf->__PVT__golden__DOT__ir__DOT__data) 
                                             | ((0x800U 
                                                 & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                      >> 0x14U))))))
                                    : (0xfffffffeU 
                                       & (vlSelf->__PVT__golden__DOT__rs1_v 
                                          + vlSelf->__PVT__golden__DOT__i_imm)))));
                }
            }
        }
    } else {
        if ((8U == vlSelf->__PVT__golden__DOT__state)) {
            vlSelf->__PVT__golden__DOT__state_next = 2U;
            vlSelf->__PVT__golden__DOT__commit = 1U;
            vlSelf->__PVT__golden__DOT__pc_next = ((IData)(vlSelf->__PVT__golden__DOT__br_en)
                                                    ? 
                                                   (vlSelf->__PVT__golden__DOT__pc 
                                                    + 
                                                    (((- (IData)(
                                                                 (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                                 >> 7U))))))
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->__PVT__golden__DOT__pc));
        } else if ((9U == vlSelf->__PVT__golden__DOT__state)) {
            if (vlSymsp->TOP.golden_dmem_resp) {
                vlSelf->__PVT__golden__DOT__state_next = 2U;
                vlSelf->__PVT__golden__DOT__commit = 1U;
                vlSelf->__PVT__golden__DOT__pc_next 
                    = ((IData)(4U) + vlSelf->__PVT__golden__DOT__pc);
            }
        } else if ((0xaU == vlSelf->__PVT__golden__DOT__state)) {
            if (vlSymsp->TOP.golden_dmem_resp) {
                vlSelf->__PVT__golden__DOT__state_next = 2U;
                vlSelf->__PVT__golden__DOT__commit = 1U;
                vlSelf->__PVT__golden__DOT__pc_next 
                    = ((IData)(4U) + vlSelf->__PVT__golden__DOT__pc);
            }
        } else if ((0xbU == vlSelf->__PVT__golden__DOT__state)) {
            vlSelf->__PVT__golden__DOT__state_next = 2U;
            vlSelf->__PVT__golden__DOT__commit = 1U;
            vlSelf->__PVT__golden__DOT__pc_next = ((IData)(4U) 
                                                   + vlSelf->__PVT__golden__DOT__pc);
        } else if ((0xcU == vlSelf->__PVT__golden__DOT__state)) {
            vlSelf->__PVT__golden__DOT__state_next = 2U;
            vlSelf->__PVT__golden__DOT__commit = 1U;
            vlSelf->__PVT__golden__DOT__pc_next = ((IData)(4U) 
                                                   + vlSelf->__PVT__golden__DOT__pc);
        } else if ((0xdU == vlSelf->__PVT__golden__DOT__state)) {
            vlSelf->__PVT__golden__DOT__state_next = 2U;
            vlSelf->__PVT__golden__DOT__commit = 1U;
            vlSelf->__PVT__golden__DOT__pc_next = ((IData)(4U) 
                                                   + vlSelf->__PVT__golden__DOT__pc);
        } else {
            vlSelf->__PVT__golden__DOT__state_next = 0U;
        }
        if ((8U != vlSelf->__PVT__golden__DOT__state)) {
            if ((9U == vlSelf->__PVT__golden__DOT__state)) {
                vlSelf->golden_dmem_addr = (vlSelf->__PVT__golden__DOT__rs1_v 
                                            + vlSelf->__PVT__golden__DOT__i_imm);
                if (vlSymsp->TOP.golden_dmem_resp) {
                    vlSelf->__PVT__golden__DOT__regf_we = 1U;
                    vlSelf->__PVT__golden__DOT__rd_v 
                        = ((0x4000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                            ? ((0x2000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                ? 0U : ((0x1000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                         ? (0xffffU 
                                            & (vlSymsp->TOP.golden_dmem_rdata 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,32,32, 
                                                                   (1U 
                                                                    & (vlSelf->golden_dmem_addr 
                                                                       >> 1U)), 4U))))
                                         : (0xffU & 
                                            (vlSymsp->TOP.golden_dmem_rdata 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(5,32,32, 
                                                                 (3U 
                                                                  & vlSelf->golden_dmem_addr), 3U))))))
                            : ((0x2000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                ? ((0x1000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                    ? 0U : vlSymsp->TOP.golden_dmem_rdata)
                                : ((0x1000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSymsp->TOP.golden_dmem_rdata 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0xfU) 
                                                           + 
                                                           VL_SHIFTL_III(5,32,32, 
                                                                         (1U 
                                                                          & (vlSelf->golden_dmem_addr 
                                                                             >> 1U)), 4U))))))) 
                                        << 0x10U) | 
                                       (0xffffU & (vlSymsp->TOP.golden_dmem_rdata 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(5,32,32, 
                                                                    (1U 
                                                                     & (vlSelf->golden_dmem_addr 
                                                                        >> 1U)), 4U)))))
                                    : (((- (IData)(
                                                   (1U 
                                                    & (vlSymsp->TOP.golden_dmem_rdata 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(7U) 
                                                           + 
                                                           VL_SHIFTL_III(5,32,32, 
                                                                         (3U 
                                                                          & vlSelf->golden_dmem_addr), 3U))))))) 
                                        << 8U) | (0xffU 
                                                  & (vlSymsp->TOP.golden_dmem_rdata 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(5,32,32, 
                                                                      (3U 
                                                                       & vlSelf->golden_dmem_addr), 3U))))))));
                }
                vlSelf->__PVT__golden__DOT__dmem_rmask 
                    = (0xfU & ((0x4000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                ? ((0x2000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                    ? 0U : ((0x1000U 
                                             & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                             ? ((IData)(3U) 
                                                << 
                                                (3U 
                                                 & vlSelf->golden_dmem_addr))
                                             : ((IData)(1U) 
                                                << 
                                                (3U 
                                                 & vlSelf->golden_dmem_addr))))
                                : ((0x2000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                    ? ((0x1000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                        ? 0U : 0xfU)
                                    : ((0x1000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                        ? ((IData)(3U) 
                                           << (3U & vlSelf->golden_dmem_addr))
                                        : ((IData)(1U) 
                                           << (3U & vlSelf->golden_dmem_addr))))));
            } else {
                if ((0xaU != vlSelf->__PVT__golden__DOT__state)) {
                    if ((0xbU == vlSelf->__PVT__golden__DOT__state)) {
                        vlSelf->__PVT__golden__DOT__regf_we = 1U;
                    } else if ((0xcU == vlSelf->__PVT__golden__DOT__state)) {
                        vlSelf->__PVT__golden__DOT__regf_we = 1U;
                    } else if ((0xdU == vlSelf->__PVT__golden__DOT__state)) {
                        vlSelf->__PVT__golden__DOT__regf_we = 1U;
                    }
                }
                if ((0xaU == vlSelf->__PVT__golden__DOT__state)) {
                    vlSelf->golden_dmem_addr = (vlSelf->__PVT__golden__DOT__rs1_v 
                                                + (
                                                   ((- (IData)(
                                                               (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                                >> 0x1fU))) 
                                                    << 0xbU) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                            >> 7U)))));
                    if ((0U == (7U & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                      >> 0xcU)))) {
                        vlSelf->golden_dmem_wmask = 
                            (0xfU & ((IData)(1U) << 
                                     (3U & vlSelf->golden_dmem_addr)));
                        vlSelf->golden_dmem_wdata = 
                            (((~ ((IData)(0xffU) << 
                                  (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                         (3U 
                                                          & vlSelf->golden_dmem_addr), 3U)))) 
                              & vlSelf->golden_dmem_wdata) 
                             | (0xffffffffULL & ((0xffU 
                                                  & vlSelf->__PVT__golden__DOT__rs2_v) 
                                                 << 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(5,32,32, 
                                                                  (3U 
                                                                   & vlSelf->golden_dmem_addr), 3U)))));
                    } else if ((1U == (7U & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                             >> 0xcU)))) {
                        vlSelf->golden_dmem_wmask = 
                            (0xfU & ((IData)(3U) << 
                                     (3U & vlSelf->golden_dmem_addr)));
                        vlSelf->golden_dmem_wdata = 
                            (((~ ((IData)(0xffffU) 
                                  << (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                            (1U 
                                                             & (vlSelf->golden_dmem_addr 
                                                                >> 1U)), 4U)))) 
                              & vlSelf->golden_dmem_wdata) 
                             | (0xffffffffULL & ((0xffffU 
                                                  & vlSelf->__PVT__golden__DOT__rs2_v) 
                                                 << 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(5,32,32, 
                                                                  (1U 
                                                                   & (vlSelf->golden_dmem_addr 
                                                                      >> 1U)), 4U)))));
                    } else if ((2U == (7U & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                             >> 0xcU)))) {
                        vlSelf->golden_dmem_wmask = 
                            (0xfU & ((IData)(0xfU) 
                                     << (3U & vlSelf->golden_dmem_addr)));
                        vlSelf->golden_dmem_wdata = vlSelf->__PVT__golden__DOT__rs2_v;
                    } else {
                        vlSelf->golden_dmem_wmask = 
                            (0xfU & 0U);
                        vlSelf->golden_dmem_wdata = 0U;
                    }
                } else if ((0xbU == vlSelf->__PVT__golden__DOT__state)) {
                    vlSelf->__PVT__golden__DOT__rd_v 
                        = ((2U == (7U & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                         >> 0xcU)))
                            ? (IData)(vlSelf->__PVT__golden__DOT__br_en)
                            : ((3U == (7U & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                             >> 0xcU)))
                                ? (IData)(vlSelf->__PVT__golden__DOT__br_en)
                                : vlSelf->__PVT__golden__DOT__aluout));
                } else if ((0xcU == vlSelf->__PVT__golden__DOT__state)) {
                    vlSelf->__PVT__golden__DOT__rd_v 
                        = ((0x4000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                            ? vlSelf->__PVT__golden__DOT__aluout
                            : ((0x2000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                ? (IData)(vlSelf->__PVT__golden__DOT__br_en)
                                : vlSelf->__PVT__golden__DOT__aluout));
                } else if ((0xdU == vlSelf->__PVT__golden__DOT__state)) {
                    VL_EXTENDS_WI(65,32, __Vtemp_8, vlSelf->__PVT__golden__DOT__rs1_v);
                    __Vtemp_9[0U] = __Vtemp_8[0U];
                    __Vtemp_9[1U] = __Vtemp_8[1U];
                    __Vtemp_9[2U] = (1U & __Vtemp_8[2U]);
                    VL_EXTENDS_WQ(65,33, __Vtemp_11, (QData)((IData)(vlSelf->__PVT__golden__DOT__rs2_v)));
                    __Vtemp_12[0U] = __Vtemp_11[0U];
                    __Vtemp_12[1U] = __Vtemp_11[1U];
                    __Vtemp_12[2U] = (1U & __Vtemp_11[2U]);
                    VL_MULS_WWW(65, __Vtemp_13, __Vtemp_9, __Vtemp_12);
                    vlSelf->__PVT__golden__DOT__rd_v 
                        = ((0x4000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                            ? ((0x2000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                ? ((0x1000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                    ? ((0U == vlSelf->__PVT__golden__DOT__rs2_v)
                                        ? vlSelf->__PVT__golden__DOT__rs1_v
                                        : VL_MODDIV_III(32, vlSelf->__PVT__golden__DOT__rs1_v, vlSelf->__PVT__golden__DOT__rs2_v))
                                    : ((0U == vlSelf->__PVT__golden__DOT__rs2_v)
                                        ? vlSelf->__PVT__golden__DOT__rs1_v
                                        : (((0x80000000U 
                                             == vlSelf->__PVT__golden__DOT__rs1_v) 
                                            & (0xffffffffU 
                                               == vlSelf->__PVT__golden__DOT__rs2_v))
                                            ? 0U : 
                                           VL_MODDIVS_III(32, vlSelf->__PVT__golden__DOT__rs1_v, vlSelf->__PVT__golden__DOT__rs2_v))))
                                : ((0x1000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                    ? ((0U == vlSelf->__PVT__golden__DOT__rs2_v)
                                        ? 0xffffffffU
                                        : VL_DIV_III(32, vlSelf->__PVT__golden__DOT__rs1_v, vlSelf->__PVT__golden__DOT__rs2_v))
                                    : ((0U == vlSelf->__PVT__golden__DOT__rs2_v)
                                        ? 0xffffffffU
                                        : (((0x80000000U 
                                             == vlSelf->__PVT__golden__DOT__rs1_v) 
                                            & (0xffffffffU 
                                               == vlSelf->__PVT__golden__DOT__rs2_v))
                                            ? 0x80000000U
                                            : VL_DIVS_III(32, vlSelf->__PVT__golden__DOT__rs1_v, vlSelf->__PVT__golden__DOT__rs2_v)))))
                            : ((0x2000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                ? ((0x1000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                    ? (IData)((((QData)((IData)(vlSelf->__PVT__golden__DOT__rs1_v)) 
                                                * (QData)((IData)(vlSelf->__PVT__golden__DOT__rs2_v))) 
                                               >> 0x20U))
                                    : __Vtemp_13[1U])
                                : ((0x1000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                    ? (IData)((vlSelf->__PVT__golden__DOT__mul_result_ss 
                                               >> 0x20U))
                                    : (IData)(vlSelf->__PVT__golden__DOT__mul_result_ss))));
                }
            }
        }
    }
}
