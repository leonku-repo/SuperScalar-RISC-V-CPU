// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb_top_tb.h"

VL_INLINE_OPT void Vtop_tb_top_tb___ico_sequent__TOP__top_tb__0(Vtop_tb_top_tb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_tb_top_tb___ico_sequent__TOP__top_tb__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    vlSelf->__PVT__golden__DOT__load_ir = 0U;
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
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_valid 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_trap 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs2_valid = 0U;
    vlSelf->__PVT__golden__DOT__commit = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_rdata 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_valid 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_trap 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs1_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs2_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_valid = 0U;
    vlSelf->__PVT__golden__DOT__regf_we = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_valid 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_trap 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_valid = 0U;
    vlSelf->__PVT__golden__DOT__pc_next = vlSelf->__PVT__golden__DOT__pc;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_rdata 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_valid 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_trap 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_trap 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_rdata 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
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
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs1_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U])));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs2_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                                  >> 5U))));
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
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                     >> 0x10U));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                     >> 0x10U));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                        >> 0x10U)));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                        >> 0x10U)));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                     >> 0x10U));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                     >> 0x10U));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                        >> 0x10U)));
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
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U])));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hffa8ed01__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                                  >> 5U))));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd6ddbe86__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_valid = 1U;
        }
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
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                        >> 0x10U)));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U])));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hfd7abf7f__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h5d544099__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd0253a29__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_valid = 1U;
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
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h33811742__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_valid = 1U;
        }
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
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                     >> 0x10U));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                     >> 0x10U));
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
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[4U] 
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
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                     >> 0x10U));
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_valid = 0U;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                     >> 0x10U));
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
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h84139451__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_valid = 1U;
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
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hff982c99__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_valid = 1U;
        }
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
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                     >> 0x10U));
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
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9ed75f22__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_valid = 1U;
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
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h94a69566__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                        >> 0x10U)));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                     >> 0x10U));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                     >> 0x10U));
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_valid = 0U;
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
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_rdata = 0U;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
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
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
                             >> 0xfU));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid))) {
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
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 >> 0xfU));
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
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 >> 0xfU));
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[4U] 
                             >> 0xfU));
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_rdata = 0U;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[4U] 
                             >> 0xfU));
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
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                 >> 0xfU));
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
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                 >> 0xfU));
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[4U] 
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
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[4U] 
                             >> 0xfU));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[4U] 
                             >> 0xfU));
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
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                                 >> 0xfU));
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
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                                 >> 0xfU));
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[4U] 
                             >> 0xfU));
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_rdata = 0U;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                     >> 0x10U));
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
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[4U] 
                             >> 0xfU));
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
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_rdata = 0U;
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
                    VL_EXTENDS_WI(65,32, __Vtemp_3, vlSelf->__PVT__golden__DOT__rs1_v);
                    __Vtemp_4[0U] = __Vtemp_3[0U];
                    __Vtemp_4[1U] = __Vtemp_3[1U];
                    __Vtemp_4[2U] = (1U & __Vtemp_3[2U]);
                    VL_EXTENDS_WQ(65,33, __Vtemp_6, (QData)((IData)(vlSelf->__PVT__golden__DOT__rs2_v)));
                    __Vtemp_7[0U] = __Vtemp_6[0U];
                    __Vtemp_7[1U] = __Vtemp_6[1U];
                    __Vtemp_7[2U] = (1U & __Vtemp_6[2U]);
                    VL_MULS_WWW(65, __Vtemp_8, __Vtemp_4, __Vtemp_7);
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
                                    : __Vtemp_8[1U])
                                : ((0x1000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                    ? (IData)((vlSelf->__PVT__golden__DOT__mul_result_ss 
                                               >> 0x20U))
                                    : (IData)(vlSelf->__PVT__golden__DOT__mul_result_ss))));
                }
            }
        }
    }
}

extern const VlUnpacked<CData/*0:0*/, 512> Vtop_tb__ConstPool__TABLE_h01624aed_0;

VL_INLINE_OPT void Vtop_tb_top_tb___nba_sequent__TOP__top_tb__0(Vtop_tb_top_tb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_tb_top_tb___nba_sequent__TOP__top_tb__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    QData/*63:0*/ __Vdly__golden__DOT__order;
    __Vdly__golden__DOT__order = 0;
    IData/*31:0*/ __Vdly__golden__DOT__ir__DOT__data;
    __Vdly__golden__DOT__ir__DOT__data = 0;
    CData/*0:0*/ __Vdlyvset__golden__DOT__regfile__DOT__data__v0;
    __Vdlyvset__golden__DOT__regfile__DOT__data__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__golden__DOT__regfile__DOT__data__v32;
    __Vdlyvdim0__golden__DOT__regfile__DOT__data__v32 = 0;
    IData/*31:0*/ __Vdlyvval__golden__DOT__regfile__DOT__data__v32;
    __Vdlyvval__golden__DOT__regfile__DOT__data__v32 = 0;
    CData/*0:0*/ __Vdlyvset__golden__DOT__regfile__DOT__data__v32;
    __Vdlyvset__golden__DOT__regfile__DOT__data__v32 = 0;
    CData/*0:0*/ TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v0;
    TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v0 = 0;
    CData/*0:0*/ TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v1;
    TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v1 = 0;
    CData/*0:0*/ TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v2;
    TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v2 = 0;
    CData/*0:0*/ TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v3;
    TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v3 = 0;
    CData/*0:0*/ TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v4;
    TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v4 = 0;
    CData/*0:0*/ TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v5;
    TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v5 = 0;
    CData/*0:0*/ TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v6;
    TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v6 = 0;
    CData/*0:0*/ TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v7;
    TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v7 = 0;
    // Body
    __Vdly__golden__DOT__order = vlSelf->__PVT__golden__DOT__order;
    __Vdlyvset__golden__DOT__regfile__DOT__data__v0 = 0U;
    __Vdlyvset__golden__DOT__regfile__DOT__data__v32 = 0U;
    __Vdly__golden__DOT__ir__DOT__data = vlSelf->__PVT__golden__DOT__ir__DOT__data;
    vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__valid;
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.rst)) 
                     & (0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_errcode))))) {
        VL_WRITEF("-------- RVFI Monitor ROB error %0#: %Ntop_tb.monitor.monitor at time %0t --------\nNo details on ROB errors available.\n",
                  16,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_errcode,
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
    }
    vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0 = 0U;
    vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1 = 0U;
    vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2 = 0U;
    vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3 = 0U;
    vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4 = 0U;
    vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5 = 0U;
    vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6 = 0U;
    vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7 = 0U;
    TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v0 = 0U;
    TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v1 = 0U;
    TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v2 = 0U;
    TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v3 = 0U;
    TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v4 = 0U;
    TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v5 = 0U;
    TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v6 = 0U;
    TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v7 = 0U;
    vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v0 = 0U;
    vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v1 = 0U;
    vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v2 = 0U;
    vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v3 = 0U;
    vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v4 = 0U;
    vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v5 = 0U;
    vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v6 = 0U;
    vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v7 = 0U;
    vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v8 = 0U;
    vlSelf->__PVT__monitor__DOT__unnamedblk5__DOT__channel = 8U;
    vlSelf->__PVT__monitor__DOT__unnamedblk6__DOT__channel = 8U;
    if (((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
         [0U])) {
        if ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
             [0U])) {
            vlSelf->__PVT__monitor__DOT__genblk2__BRA__0__KET____DOT__unnamedblk2__DOT__i = 4U;
        }
        if ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
             [0U])) {
            vlSelf->__PVT__monitor__DOT__genblk2__BRA__0__KET____DOT__unnamedblk3__DOT__i = 4U;
        }
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
         [1U])) {
        if ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
             [1U])) {
            vlSelf->__PVT__monitor__DOT__genblk2__BRA__1__KET____DOT__unnamedblk2__DOT__i = 4U;
        }
        if ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
             [1U])) {
            vlSelf->__PVT__monitor__DOT__genblk2__BRA__1__KET____DOT__unnamedblk3__DOT__i = 4U;
        }
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
         [2U])) {
        if ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
             [2U])) {
            vlSelf->__PVT__monitor__DOT__genblk2__BRA__2__KET____DOT__unnamedblk2__DOT__i = 4U;
        }
        if ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
             [2U])) {
            vlSelf->__PVT__monitor__DOT__genblk2__BRA__2__KET____DOT__unnamedblk3__DOT__i = 4U;
        }
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
         [3U])) {
        if ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
             [3U])) {
            vlSelf->__PVT__monitor__DOT__genblk2__BRA__3__KET____DOT__unnamedblk2__DOT__i = 4U;
        }
        if ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
             [3U])) {
            vlSelf->__PVT__monitor__DOT__genblk2__BRA__3__KET____DOT__unnamedblk3__DOT__i = 4U;
        }
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
         [4U])) {
        if ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
             [4U])) {
            vlSelf->__PVT__monitor__DOT__genblk2__BRA__4__KET____DOT__unnamedblk2__DOT__i = 4U;
        }
        if ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
             [4U])) {
            vlSelf->__PVT__monitor__DOT__genblk2__BRA__4__KET____DOT__unnamedblk3__DOT__i = 4U;
        }
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
         [5U])) {
        if ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
             [5U])) {
            vlSelf->__PVT__monitor__DOT__genblk2__BRA__5__KET____DOT__unnamedblk2__DOT__i = 4U;
        }
        if ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
             [5U])) {
            vlSelf->__PVT__monitor__DOT__genblk2__BRA__5__KET____DOT__unnamedblk3__DOT__i = 4U;
        }
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
         [6U])) {
        if ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
             [6U])) {
            vlSelf->__PVT__monitor__DOT__genblk2__BRA__6__KET____DOT__unnamedblk2__DOT__i = 4U;
        }
        if ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
             [6U])) {
            vlSelf->__PVT__monitor__DOT__genblk2__BRA__6__KET____DOT__unnamedblk3__DOT__i = 4U;
        }
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
         [7U])) {
        if ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
             [7U])) {
            vlSelf->__PVT__monitor__DOT__genblk2__BRA__7__KET____DOT__unnamedblk2__DOT__i = 4U;
        }
        if ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
             [7U])) {
            vlSelf->__PVT__monitor__DOT__genblk2__BRA__7__KET____DOT__unnamedblk3__DOT__i = 4U;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__golden__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x20U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__channel = 8U;
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__cycles = 0ULL;
        vlSelf->__PVT__total_cycles = 0ULL;
    } else {
        vlSelf->__PVT__cycles = (1ULL + vlSelf->__PVT__cycles);
        vlSelf->__PVT__total_cycles = (1ULL + vlSelf->__PVT__total_cycles);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0U;
        {
            while (VL_GTS_III(32, 8U, vlSelf->__PVT__unnamedblk2__DOT__i)) {
                if (VL_UNLIKELY((((0ULL == VL_MODDIV_QQQ(64, 
                                                         vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                         [
                                                         (7U 
                                                          & vlSelf->__PVT__unnamedblk2__DOT__i)], 0x3e8ULL)) 
                                  & (vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                     [(7U & vlSelf->__PVT__unnamedblk2__DOT__i)] 
                                     != vlSelf->__PVT__lcom)) 
                                 & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                                 [(7U & vlSelf->__PVT__unnamedblk2__DOT__i)]))) {
                    VL_FWRITEF(vlSelf->__PVT__fd,"COMMIT %8# -- CYCLES: %8d -- IPC 1000: %f -- CUM IPC: %f\n",
                               64,vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                               [(7U & vlSelf->__PVT__unnamedblk2__DOT__i)],
                               64,vlSelf->__PVT__total_cycles,
                               64,(1.00000000000000000e+03 
                                   / VL_ISTOR_D_Q(64, vlSelf->__PVT__cycles)),
                               64,(VL_ITOR_D_Q(64, 
                                               vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                               [(7U 
                                                 & vlSelf->__PVT__unnamedblk2__DOT__i)]) 
                                   / VL_ISTOR_D_Q(64, vlSelf->__PVT__total_cycles)));
                    vlSelf->__PVT__cycles = 0ULL;
                    vlSelf->__PVT__lcom = vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                        [(7U & vlSelf->__PVT__unnamedblk2__DOT__i)];
                    goto __Vlabel1;
                }
                vlSelf->__PVT__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelf->__PVT__unnamedblk2__DOT__i);
            }
            __Vlabel1: ;
        }
    }
    vlSelf->__PVT__monitor__DOT__cycle_count = (1ULL 
                                                + vlSelf->__PVT__monitor__DOT__cycle_count);
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.rst)) 
                      & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                      [0U]) & (0x102013U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [0U])))) {
        vlSelf->__PVT__monitor__DOT__inst_count = 0ULL;
        vlSelf->__PVT__monitor__DOT__cycle_count = 0ULL;
        vlSelf->__PVT__monitor__DOT__start_time = VL_TIME_UNITED_Q(1);
        VL_WRITEF("Monitor: Segment Start time is %t\n",
                  64,VL_TIME_UNITED_Q(1),-12);
    } else if (((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                [0U])) {
        vlSelf->__PVT__monitor__DOT__inst_count = (1ULL 
                                                   + vlSelf->__PVT__monitor__DOT__inst_count);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.rst)) 
                      & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                      [0U]) & (0x202013U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [0U])))) {
        VL_WRITEF("Monitor: Segment Stop time is %t\n",
                  64,VL_TIME_UNITED_Q(1),-12);
        vlSelf->__PVT__monitor__DOT__done_print_ipc = 1U;
        vlSelf->__PVT__monitor__DOT__ipc = (VL_ISTOR_D_Q(64, vlSelf->__PVT__monitor__DOT__inst_count) 
                                            / VL_ISTOR_D_Q(64, vlSelf->__PVT__monitor__DOT__cycle_count));
        vlSelf->__PVT__monitor__DOT__total_time = ((QData)(VL_TIME_UNITED_Q(1)) 
                                                   - vlSelf->__PVT__monitor__DOT__start_time);
        VL_WRITEF("Monitor: Segment IPC: %f\nMonitor: Segment Time: %t\n",
                  64,vlSelf->__PVT__monitor__DOT__ipc,
                  64,vlSelf->__PVT__monitor__DOT__total_time,
                  -12);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.rst)) 
                      & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                      [1U]) & (0x102013U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [1U])))) {
        VL_WRITEF("Monitor: Segment Start time is %t\n",
                  64,VL_TIME_UNITED_Q(1),-12);
        vlSelf->__PVT__monitor__DOT__inst_count = 0ULL;
        vlSelf->__PVT__monitor__DOT__cycle_count = 0ULL;
        vlSelf->__PVT__monitor__DOT__start_time = VL_TIME_UNITED_Q(1);
    } else if (((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                [1U])) {
        vlSelf->__PVT__monitor__DOT__inst_count = (1ULL 
                                                   + vlSelf->__PVT__monitor__DOT__inst_count);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.rst)) 
                      & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                      [1U]) & (0x202013U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [1U])))) {
        VL_WRITEF("Monitor: Segment Stop time is %t\n",
                  64,VL_TIME_UNITED_Q(1),-12);
        vlSelf->__PVT__monitor__DOT__done_print_ipc = 1U;
        vlSelf->__PVT__monitor__DOT__ipc = (VL_ISTOR_D_Q(64, vlSelf->__PVT__monitor__DOT__inst_count) 
                                            / VL_ISTOR_D_Q(64, vlSelf->__PVT__monitor__DOT__cycle_count));
        vlSelf->__PVT__monitor__DOT__total_time = ((QData)(VL_TIME_UNITED_Q(1)) 
                                                   - vlSelf->__PVT__monitor__DOT__start_time);
        VL_WRITEF("Monitor: Segment IPC: %f\nMonitor: Segment Time: %t\n",
                  64,vlSelf->__PVT__monitor__DOT__ipc,
                  64,vlSelf->__PVT__monitor__DOT__total_time,
                  -12);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.rst)) 
                      & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                      [2U]) & (0x102013U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [2U])))) {
        VL_WRITEF("Monitor: Segment Start time is %t\n",
                  64,VL_TIME_UNITED_Q(1),-12);
        vlSelf->__PVT__monitor__DOT__inst_count = 0ULL;
        vlSelf->__PVT__monitor__DOT__cycle_count = 0ULL;
        vlSelf->__PVT__monitor__DOT__start_time = VL_TIME_UNITED_Q(1);
    } else if (((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                [2U])) {
        vlSelf->__PVT__monitor__DOT__inst_count = (1ULL 
                                                   + vlSelf->__PVT__monitor__DOT__inst_count);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.rst)) 
                      & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                      [2U]) & (0x202013U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [2U])))) {
        VL_WRITEF("Monitor: Segment Stop time is %t\n",
                  64,VL_TIME_UNITED_Q(1),-12);
        vlSelf->__PVT__monitor__DOT__done_print_ipc = 1U;
        vlSelf->__PVT__monitor__DOT__ipc = (VL_ISTOR_D_Q(64, vlSelf->__PVT__monitor__DOT__inst_count) 
                                            / VL_ISTOR_D_Q(64, vlSelf->__PVT__monitor__DOT__cycle_count));
        vlSelf->__PVT__monitor__DOT__total_time = ((QData)(VL_TIME_UNITED_Q(1)) 
                                                   - vlSelf->__PVT__monitor__DOT__start_time);
        VL_WRITEF("Monitor: Segment IPC: %f\nMonitor: Segment Time: %t\n",
                  64,vlSelf->__PVT__monitor__DOT__ipc,
                  64,vlSelf->__PVT__monitor__DOT__total_time,
                  -12);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.rst)) 
                      & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                      [3U]) & (0x102013U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [3U])))) {
        VL_WRITEF("Monitor: Segment Start time is %t\n",
                  64,VL_TIME_UNITED_Q(1),-12);
        vlSelf->__PVT__monitor__DOT__inst_count = 0ULL;
        vlSelf->__PVT__monitor__DOT__cycle_count = 0ULL;
        vlSelf->__PVT__monitor__DOT__start_time = VL_TIME_UNITED_Q(1);
    } else if (((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                [3U])) {
        vlSelf->__PVT__monitor__DOT__inst_count = (1ULL 
                                                   + vlSelf->__PVT__monitor__DOT__inst_count);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.rst)) 
                      & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                      [3U]) & (0x202013U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [3U])))) {
        VL_WRITEF("Monitor: Segment Stop time is %t\n",
                  64,VL_TIME_UNITED_Q(1),-12);
        vlSelf->__PVT__monitor__DOT__done_print_ipc = 1U;
        vlSelf->__PVT__monitor__DOT__ipc = (VL_ISTOR_D_Q(64, vlSelf->__PVT__monitor__DOT__inst_count) 
                                            / VL_ISTOR_D_Q(64, vlSelf->__PVT__monitor__DOT__cycle_count));
        vlSelf->__PVT__monitor__DOT__total_time = ((QData)(VL_TIME_UNITED_Q(1)) 
                                                   - vlSelf->__PVT__monitor__DOT__start_time);
        VL_WRITEF("Monitor: Segment IPC: %f\nMonitor: Segment Time: %t\n",
                  64,vlSelf->__PVT__monitor__DOT__ipc,
                  64,vlSelf->__PVT__monitor__DOT__total_time,
                  -12);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.rst)) 
                      & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                      [4U]) & (0x102013U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [4U])))) {
        VL_WRITEF("Monitor: Segment Start time is %t\n",
                  64,VL_TIME_UNITED_Q(1),-12);
        vlSelf->__PVT__monitor__DOT__inst_count = 0ULL;
        vlSelf->__PVT__monitor__DOT__cycle_count = 0ULL;
        vlSelf->__PVT__monitor__DOT__start_time = VL_TIME_UNITED_Q(1);
    } else if (((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                [4U])) {
        vlSelf->__PVT__monitor__DOT__inst_count = (1ULL 
                                                   + vlSelf->__PVT__monitor__DOT__inst_count);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.rst)) 
                      & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                      [4U]) & (0x202013U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [4U])))) {
        VL_WRITEF("Monitor: Segment Stop time is %t\n",
                  64,VL_TIME_UNITED_Q(1),-12);
        vlSelf->__PVT__monitor__DOT__done_print_ipc = 1U;
        vlSelf->__PVT__monitor__DOT__ipc = (VL_ISTOR_D_Q(64, vlSelf->__PVT__monitor__DOT__inst_count) 
                                            / VL_ISTOR_D_Q(64, vlSelf->__PVT__monitor__DOT__cycle_count));
        vlSelf->__PVT__monitor__DOT__total_time = ((QData)(VL_TIME_UNITED_Q(1)) 
                                                   - vlSelf->__PVT__monitor__DOT__start_time);
        VL_WRITEF("Monitor: Segment IPC: %f\nMonitor: Segment Time: %t\n",
                  64,vlSelf->__PVT__monitor__DOT__ipc,
                  64,vlSelf->__PVT__monitor__DOT__total_time,
                  -12);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.rst)) 
                      & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                      [5U]) & (0x102013U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [5U])))) {
        VL_WRITEF("Monitor: Segment Start time is %t\n",
                  64,VL_TIME_UNITED_Q(1),-12);
        vlSelf->__PVT__monitor__DOT__inst_count = 0ULL;
        vlSelf->__PVT__monitor__DOT__cycle_count = 0ULL;
        vlSelf->__PVT__monitor__DOT__start_time = VL_TIME_UNITED_Q(1);
    } else if (((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                [5U])) {
        vlSelf->__PVT__monitor__DOT__inst_count = (1ULL 
                                                   + vlSelf->__PVT__monitor__DOT__inst_count);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.rst)) 
                      & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                      [5U]) & (0x202013U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [5U])))) {
        VL_WRITEF("Monitor: Segment Stop time is %t\n",
                  64,VL_TIME_UNITED_Q(1),-12);
        vlSelf->__PVT__monitor__DOT__done_print_ipc = 1U;
        vlSelf->__PVT__monitor__DOT__ipc = (VL_ISTOR_D_Q(64, vlSelf->__PVT__monitor__DOT__inst_count) 
                                            / VL_ISTOR_D_Q(64, vlSelf->__PVT__monitor__DOT__cycle_count));
        vlSelf->__PVT__monitor__DOT__total_time = ((QData)(VL_TIME_UNITED_Q(1)) 
                                                   - vlSelf->__PVT__monitor__DOT__start_time);
        VL_WRITEF("Monitor: Segment IPC: %f\nMonitor: Segment Time: %t\n",
                  64,vlSelf->__PVT__monitor__DOT__ipc,
                  64,vlSelf->__PVT__monitor__DOT__total_time,
                  -12);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.rst)) 
                      & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                      [6U]) & (0x102013U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [6U])))) {
        VL_WRITEF("Monitor: Segment Start time is %t\n",
                  64,VL_TIME_UNITED_Q(1),-12);
        vlSelf->__PVT__monitor__DOT__inst_count = 0ULL;
        vlSelf->__PVT__monitor__DOT__cycle_count = 0ULL;
        vlSelf->__PVT__monitor__DOT__start_time = VL_TIME_UNITED_Q(1);
    } else if (((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                [6U])) {
        vlSelf->__PVT__monitor__DOT__inst_count = (1ULL 
                                                   + vlSelf->__PVT__monitor__DOT__inst_count);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.rst)) 
                      & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                      [6U]) & (0x202013U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [6U])))) {
        VL_WRITEF("Monitor: Segment Stop time is %t\n",
                  64,VL_TIME_UNITED_Q(1),-12);
        vlSelf->__PVT__monitor__DOT__done_print_ipc = 1U;
        vlSelf->__PVT__monitor__DOT__ipc = (VL_ISTOR_D_Q(64, vlSelf->__PVT__monitor__DOT__inst_count) 
                                            / VL_ISTOR_D_Q(64, vlSelf->__PVT__monitor__DOT__cycle_count));
        vlSelf->__PVT__monitor__DOT__total_time = ((QData)(VL_TIME_UNITED_Q(1)) 
                                                   - vlSelf->__PVT__monitor__DOT__start_time);
        VL_WRITEF("Monitor: Segment IPC: %f\nMonitor: Segment Time: %t\n",
                  64,vlSelf->__PVT__monitor__DOT__ipc,
                  64,vlSelf->__PVT__monitor__DOT__total_time,
                  -12);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.rst)) 
                      & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                      [7U]) & (0x102013U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [7U])))) {
        VL_WRITEF("Monitor: Segment Start time is %t\n",
                  64,VL_TIME_UNITED_Q(1),-12);
        vlSelf->__PVT__monitor__DOT__inst_count = 0ULL;
        vlSelf->__PVT__monitor__DOT__cycle_count = 0ULL;
        vlSelf->__PVT__monitor__DOT__start_time = VL_TIME_UNITED_Q(1);
    } else if (((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                [7U])) {
        vlSelf->__PVT__monitor__DOT__inst_count = (1ULL 
                                                   + vlSelf->__PVT__monitor__DOT__inst_count);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.rst)) 
                      & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                      [7U]) & (0x202013U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [7U])))) {
        VL_WRITEF("Monitor: Segment Stop time is %t\n",
                  64,VL_TIME_UNITED_Q(1),-12);
        vlSelf->__PVT__monitor__DOT__done_print_ipc = 1U;
        vlSelf->__PVT__monitor__DOT__ipc = (VL_ISTOR_D_Q(64, vlSelf->__PVT__monitor__DOT__inst_count) 
                                            / VL_ISTOR_D_Q(64, vlSelf->__PVT__monitor__DOT__cycle_count));
        vlSelf->__PVT__monitor__DOT__total_time = ((QData)(VL_TIME_UNITED_Q(1)) 
                                                   - vlSelf->__PVT__monitor__DOT__start_time);
        VL_WRITEF("Monitor: Segment IPC: %f\nMonitor: Segment Time: %t\n",
                  64,vlSelf->__PVT__monitor__DOT__ipc,
                  64,vlSelf->__PVT__monitor__DOT__total_time,
                  -12);
    }
    if (VL_UNLIKELY(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                    [0U])) {
        if (VL_UNLIKELY((0ULL == VL_MODDIV_QQQ(64, 
                                               vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                               [0U], 0x3e8ULL)))) {
            VL_WRITEF("dut commit No.%20#, rd_s: x%02#, rd: 0x%x\n",
                      64,vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                      [0U],5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                      [0U],32,((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                                [0U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
                               [0U] : 0U));
        }
        if ((3U == (3U & vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                    [0U]))) {
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"core   0: 3 0x%x (0x%x)",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                       [0U],32,vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                       [0U]);
        } else {
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"core   0: 3 0x%x (0x%x)",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                       [0U],16,(0xffffU & vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                [0U]));
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                         [0U]))) {
            if ((0xaU > vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                 [0U])) {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," x%0#  ",
                           5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                           [0U]);
            } else {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," x%0# ",
                           5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                           [0U]);
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"0x%x",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
                       [0U]);
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                         [0U]))) {
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1 = 0U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 4U, vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i)) {
                    if ((1U & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                               [0U] >> (3U & vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i)))) {
                        vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1 
                            = vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i;
                        goto __Vlabel2;
                    }
                    vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i 
                        = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i);
                }
                __Vlabel2: ;
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," mem 0x%x",
                       32,((0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
                            [0U]) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1));
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                         [0U]))) {
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 = 0U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1 = 0U;
            if ((1U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [0U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((2U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [0U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((4U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [0U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((8U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [0U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk11__DOT__i = 4U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 4U, vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i)) {
                    if ((1U & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                               [0U] >> (3U & vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i)))) {
                        vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1 
                            = vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i;
                        goto __Vlabel3;
                    }
                    vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i 
                        = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i);
                }
                __Vlabel3: ;
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," mem 0x%x",
                       32,((0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
                            [0U]) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1));
            if (VL_UNLIKELY((1U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk13__DOT__wdata_byte 
                    = (0xffU & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                [0U] >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1))));
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           8,vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk13__DOT__wdata_byte);
            } else if (VL_UNLIKELY((2U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk14__DOT__wdata_half 
                    = (0xffffU & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                  [0U] >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1))));
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           16,vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk14__DOT__wdata_half);
            } else if (VL_UNLIKELY((4U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           32,vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                           [0U]);
            }
        }
        VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"\n");
    }
    if (VL_UNLIKELY(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                    [1U])) {
        if (VL_UNLIKELY((0ULL == VL_MODDIV_QQQ(64, 
                                               vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                               [1U], 0x3e8ULL)))) {
            VL_WRITEF("dut commit No.%20#, rd_s: x%02#, rd: 0x%x\n",
                      64,vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                      [1U],5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                      [1U],32,((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                                [1U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
                               [1U] : 0U));
        }
        if ((3U == (3U & vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                    [1U]))) {
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"core   0: 3 0x%x (0x%x)",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                       [1U],32,vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                       [1U]);
        } else {
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"core   0: 3 0x%x (0x%x)",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                       [1U],16,(0xffffU & vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                [1U]));
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                         [1U]))) {
            if ((0xaU > vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                 [1U])) {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," x%0#  ",
                           5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                           [1U]);
            } else {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," x%0# ",
                           5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                           [1U]);
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"0x%x",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
                       [1U]);
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                         [1U]))) {
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1 = 0U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 4U, vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i)) {
                    if ((1U & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                               [1U] >> (3U & vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i)))) {
                        vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1 
                            = vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i;
                        goto __Vlabel4;
                    }
                    vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i 
                        = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i);
                }
                __Vlabel4: ;
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," mem 0x%x",
                       32,((0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
                            [1U]) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1));
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                         [1U]))) {
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 = 0U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1 = 0U;
            if ((1U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [1U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((2U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [1U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((4U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [1U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((8U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [1U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk11__DOT__i = 4U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 4U, vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i)) {
                    if ((1U & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                               [1U] >> (3U & vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i)))) {
                        vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1 
                            = vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i;
                        goto __Vlabel5;
                    }
                    vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i 
                        = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i);
                }
                __Vlabel5: ;
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," mem 0x%x",
                       32,((0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
                            [1U]) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1));
            if (VL_UNLIKELY((1U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk13__DOT__wdata_byte 
                    = (0xffU & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                [1U] >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1))));
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           8,vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk13__DOT__wdata_byte);
            } else if (VL_UNLIKELY((2U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk14__DOT__wdata_half 
                    = (0xffffU & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                  [1U] >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1))));
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           16,vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk14__DOT__wdata_half);
            } else if (VL_UNLIKELY((4U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           32,vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                           [1U]);
            }
        }
        VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"\n");
    }
    if (VL_UNLIKELY(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                    [2U])) {
        if (VL_UNLIKELY((0ULL == VL_MODDIV_QQQ(64, 
                                               vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                               [2U], 0x3e8ULL)))) {
            VL_WRITEF("dut commit No.%20#, rd_s: x%02#, rd: 0x%x\n",
                      64,vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                      [2U],5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                      [2U],32,((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                                [2U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
                               [2U] : 0U));
        }
        if ((3U == (3U & vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                    [2U]))) {
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"core   0: 3 0x%x (0x%x)",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                       [2U],32,vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                       [2U]);
        } else {
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"core   0: 3 0x%x (0x%x)",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                       [2U],16,(0xffffU & vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                [2U]));
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                         [2U]))) {
            if ((0xaU > vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                 [2U])) {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," x%0#  ",
                           5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                           [2U]);
            } else {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," x%0# ",
                           5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                           [2U]);
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"0x%x",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
                       [2U]);
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                         [2U]))) {
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1 = 0U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 4U, vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i)) {
                    if ((1U & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                               [2U] >> (3U & vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i)))) {
                        vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1 
                            = vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i;
                        goto __Vlabel6;
                    }
                    vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i 
                        = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i);
                }
                __Vlabel6: ;
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," mem 0x%x",
                       32,((0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
                            [2U]) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1));
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                         [2U]))) {
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 = 0U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1 = 0U;
            if ((1U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [2U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((2U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [2U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((4U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [2U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((8U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [2U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk11__DOT__i = 4U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 4U, vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i)) {
                    if ((1U & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                               [2U] >> (3U & vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i)))) {
                        vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1 
                            = vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i;
                        goto __Vlabel7;
                    }
                    vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i 
                        = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i);
                }
                __Vlabel7: ;
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," mem 0x%x",
                       32,((0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
                            [2U]) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1));
            if (VL_UNLIKELY((1U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk13__DOT__wdata_byte 
                    = (0xffU & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                [2U] >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1))));
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           8,vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk13__DOT__wdata_byte);
            } else if (VL_UNLIKELY((2U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk14__DOT__wdata_half 
                    = (0xffffU & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                  [2U] >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1))));
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           16,vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk14__DOT__wdata_half);
            } else if (VL_UNLIKELY((4U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           32,vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                           [2U]);
            }
        }
        VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"\n");
    }
    if (VL_UNLIKELY(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                    [3U])) {
        if (VL_UNLIKELY((0ULL == VL_MODDIV_QQQ(64, 
                                               vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                               [3U], 0x3e8ULL)))) {
            VL_WRITEF("dut commit No.%20#, rd_s: x%02#, rd: 0x%x\n",
                      64,vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                      [3U],5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                      [3U],32,((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                                [3U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
                               [3U] : 0U));
        }
        if ((3U == (3U & vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                    [3U]))) {
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"core   0: 3 0x%x (0x%x)",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                       [3U],32,vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                       [3U]);
        } else {
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"core   0: 3 0x%x (0x%x)",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                       [3U],16,(0xffffU & vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                [3U]));
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                         [3U]))) {
            if ((0xaU > vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                 [3U])) {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," x%0#  ",
                           5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                           [3U]);
            } else {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," x%0# ",
                           5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                           [3U]);
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"0x%x",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
                       [3U]);
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                         [3U]))) {
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1 = 0U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 4U, vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i)) {
                    if ((1U & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                               [3U] >> (3U & vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i)))) {
                        vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1 
                            = vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i;
                        goto __Vlabel8;
                    }
                    vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i 
                        = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i);
                }
                __Vlabel8: ;
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," mem 0x%x",
                       32,((0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
                            [3U]) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1));
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                         [3U]))) {
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 = 0U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1 = 0U;
            if ((1U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [3U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((2U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [3U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((4U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [3U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((8U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [3U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk11__DOT__i = 4U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 4U, vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i)) {
                    if ((1U & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                               [3U] >> (3U & vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i)))) {
                        vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1 
                            = vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i;
                        goto __Vlabel9;
                    }
                    vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i 
                        = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i);
                }
                __Vlabel9: ;
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," mem 0x%x",
                       32,((0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
                            [3U]) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1));
            if (VL_UNLIKELY((1U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk13__DOT__wdata_byte 
                    = (0xffU & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                [3U] >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1))));
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           8,vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk13__DOT__wdata_byte);
            } else if (VL_UNLIKELY((2U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk14__DOT__wdata_half 
                    = (0xffffU & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                  [3U] >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1))));
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           16,vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk14__DOT__wdata_half);
            } else if (VL_UNLIKELY((4U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           32,vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                           [3U]);
            }
        }
        VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"\n");
    }
    if (VL_UNLIKELY(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                    [4U])) {
        if (VL_UNLIKELY((0ULL == VL_MODDIV_QQQ(64, 
                                               vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                               [4U], 0x3e8ULL)))) {
            VL_WRITEF("dut commit No.%20#, rd_s: x%02#, rd: 0x%x\n",
                      64,vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                      [4U],5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                      [4U],32,((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                                [4U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
                               [4U] : 0U));
        }
        if ((3U == (3U & vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                    [4U]))) {
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"core   0: 3 0x%x (0x%x)",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                       [4U],32,vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                       [4U]);
        } else {
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"core   0: 3 0x%x (0x%x)",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                       [4U],16,(0xffffU & vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                [4U]));
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                         [4U]))) {
            if ((0xaU > vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                 [4U])) {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," x%0#  ",
                           5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                           [4U]);
            } else {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," x%0# ",
                           5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                           [4U]);
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"0x%x",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
                       [4U]);
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                         [4U]))) {
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1 = 0U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 4U, vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i)) {
                    if ((1U & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                               [4U] >> (3U & vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i)))) {
                        vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1 
                            = vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i;
                        goto __Vlabel10;
                    }
                    vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i 
                        = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i);
                }
                __Vlabel10: ;
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," mem 0x%x",
                       32,((0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
                            [4U]) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1));
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                         [4U]))) {
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 = 0U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1 = 0U;
            if ((1U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [4U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((2U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [4U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((4U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [4U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((8U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [4U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk11__DOT__i = 4U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 4U, vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i)) {
                    if ((1U & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                               [4U] >> (3U & vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i)))) {
                        vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1 
                            = vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i;
                        goto __Vlabel11;
                    }
                    vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i 
                        = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i);
                }
                __Vlabel11: ;
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," mem 0x%x",
                       32,((0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
                            [4U]) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1));
            if (VL_UNLIKELY((1U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk13__DOT__wdata_byte 
                    = (0xffU & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                [4U] >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1))));
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           8,vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk13__DOT__wdata_byte);
            } else if (VL_UNLIKELY((2U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk14__DOT__wdata_half 
                    = (0xffffU & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                  [4U] >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1))));
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           16,vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk14__DOT__wdata_half);
            } else if (VL_UNLIKELY((4U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           32,vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                           [4U]);
            }
        }
        VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"\n");
    }
    if (VL_UNLIKELY(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                    [5U])) {
        if (VL_UNLIKELY((0ULL == VL_MODDIV_QQQ(64, 
                                               vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                               [5U], 0x3e8ULL)))) {
            VL_WRITEF("dut commit No.%20#, rd_s: x%02#, rd: 0x%x\n",
                      64,vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                      [5U],5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                      [5U],32,((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                                [5U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
                               [5U] : 0U));
        }
        if ((3U == (3U & vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                    [5U]))) {
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"core   0: 3 0x%x (0x%x)",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                       [5U],32,vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                       [5U]);
        } else {
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"core   0: 3 0x%x (0x%x)",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                       [5U],16,(0xffffU & vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                [5U]));
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                         [5U]))) {
            if ((0xaU > vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                 [5U])) {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," x%0#  ",
                           5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                           [5U]);
            } else {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," x%0# ",
                           5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                           [5U]);
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"0x%x",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
                       [5U]);
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                         [5U]))) {
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1 = 0U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 4U, vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i)) {
                    if ((1U & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                               [5U] >> (3U & vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i)))) {
                        vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1 
                            = vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i;
                        goto __Vlabel12;
                    }
                    vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i 
                        = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i);
                }
                __Vlabel12: ;
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," mem 0x%x",
                       32,((0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
                            [5U]) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1));
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                         [5U]))) {
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 = 0U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1 = 0U;
            if ((1U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [5U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((2U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [5U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((4U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [5U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((8U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [5U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk11__DOT__i = 4U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 4U, vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i)) {
                    if ((1U & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                               [5U] >> (3U & vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i)))) {
                        vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1 
                            = vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i;
                        goto __Vlabel13;
                    }
                    vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i 
                        = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i);
                }
                __Vlabel13: ;
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," mem 0x%x",
                       32,((0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
                            [5U]) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1));
            if (VL_UNLIKELY((1U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk13__DOT__wdata_byte 
                    = (0xffU & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                [5U] >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1))));
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           8,vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk13__DOT__wdata_byte);
            } else if (VL_UNLIKELY((2U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk14__DOT__wdata_half 
                    = (0xffffU & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                  [5U] >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1))));
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           16,vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk14__DOT__wdata_half);
            } else if (VL_UNLIKELY((4U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           32,vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                           [5U]);
            }
        }
        VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"\n");
    }
    if (VL_UNLIKELY(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                    [6U])) {
        if (VL_UNLIKELY((0ULL == VL_MODDIV_QQQ(64, 
                                               vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                               [6U], 0x3e8ULL)))) {
            VL_WRITEF("dut commit No.%20#, rd_s: x%02#, rd: 0x%x\n",
                      64,vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                      [6U],5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                      [6U],32,((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                                [6U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
                               [6U] : 0U));
        }
        if ((3U == (3U & vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                    [6U]))) {
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"core   0: 3 0x%x (0x%x)",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                       [6U],32,vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                       [6U]);
        } else {
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"core   0: 3 0x%x (0x%x)",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                       [6U],16,(0xffffU & vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                [6U]));
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                         [6U]))) {
            if ((0xaU > vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                 [6U])) {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," x%0#  ",
                           5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                           [6U]);
            } else {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," x%0# ",
                           5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                           [6U]);
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"0x%x",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
                       [6U]);
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                         [6U]))) {
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1 = 0U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 4U, vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i)) {
                    if ((1U & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                               [6U] >> (3U & vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i)))) {
                        vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1 
                            = vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i;
                        goto __Vlabel14;
                    }
                    vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i 
                        = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i);
                }
                __Vlabel14: ;
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," mem 0x%x",
                       32,((0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
                            [6U]) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1));
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                         [6U]))) {
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 = 0U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1 = 0U;
            if ((1U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [6U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((2U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [6U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((4U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [6U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((8U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [6U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk11__DOT__i = 4U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 4U, vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i)) {
                    if ((1U & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                               [6U] >> (3U & vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i)))) {
                        vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1 
                            = vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i;
                        goto __Vlabel15;
                    }
                    vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i 
                        = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i);
                }
                __Vlabel15: ;
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," mem 0x%x",
                       32,((0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
                            [6U]) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1));
            if (VL_UNLIKELY((1U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk13__DOT__wdata_byte 
                    = (0xffU & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                [6U] >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1))));
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           8,vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk13__DOT__wdata_byte);
            } else if (VL_UNLIKELY((2U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk14__DOT__wdata_half 
                    = (0xffffU & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                  [6U] >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1))));
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           16,vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk14__DOT__wdata_half);
            } else if (VL_UNLIKELY((4U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           32,vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                           [6U]);
            }
        }
        VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"\n");
    }
    if (VL_UNLIKELY(vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                    [7U])) {
        if (VL_UNLIKELY((0ULL == VL_MODDIV_QQQ(64, 
                                               vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                               [7U], 0x3e8ULL)))) {
            VL_WRITEF("dut commit No.%20#, rd_s: x%02#, rd: 0x%x\n",
                      64,vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                      [7U],5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                      [7U],32,((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                                [7U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
                               [7U] : 0U));
        }
        if ((3U == (3U & vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                    [7U]))) {
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"core   0: 3 0x%x (0x%x)",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                       [7U],32,vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                       [7U]);
        } else {
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"core   0: 3 0x%x (0x%x)",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                       [7U],16,(0xffffU & vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                [7U]));
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                         [7U]))) {
            if ((0xaU > vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                 [7U])) {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," x%0#  ",
                           5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                           [7U]);
            } else {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," x%0# ",
                           5,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                           [7U]);
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"0x%x",
                       32,vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
                       [7U]);
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                         [7U]))) {
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1 = 0U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 4U, vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i)) {
                    if ((1U & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                               [7U] >> (3U & vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i)))) {
                        vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1 
                            = vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i;
                        goto __Vlabel16;
                    }
                    vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i 
                        = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i);
                }
                __Vlabel16: ;
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," mem 0x%x",
                       32,((0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
                            [7U]) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk8__DOT__first_1));
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                         [7U]))) {
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 = 0U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1 = 0U;
            if ((1U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [7U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((2U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [7U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((4U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [7U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            if ((8U & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                 [7U])) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1 
                    = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1);
            }
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk11__DOT__i = 4U;
            vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 4U, vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i)) {
                    if ((1U & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                               [7U] >> (3U & vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i)))) {
                        vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1 
                            = vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i;
                        goto __Vlabel17;
                    }
                    vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i 
                        = ((IData)(1U) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk12__DOT__i);
                }
                __Vlabel17: ;
            }
            VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," mem 0x%x",
                       32,((0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
                            [7U]) + vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1));
            if (VL_UNLIKELY((1U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk13__DOT__wdata_byte 
                    = (0xffU & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                [7U] >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1))));
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           8,vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk13__DOT__wdata_byte);
            } else if (VL_UNLIKELY((2U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk14__DOT__wdata_half 
                    = (0xffffU & (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                  [7U] >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__first_1))));
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           16,vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__unnamedblk14__DOT__wdata_half);
            } else if (VL_UNLIKELY((4U == vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__unnamedblk10__DOT__amount_o_1))) {
                VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd," 0x%x",
                           32,vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                           [7U]);
            }
        }
        VL_FWRITEF(vlSelf->__PVT__monitor__DOT__fd,"\n");
    }
    vlSelf->__PVT__monitor__DOT__unnamedblk7__DOT__channel = 8U;
    if (vlSymsp->TOP.rst) {
        __Vdly__golden__DOT__order = 0ULL;
        __Vdlyvset__golden__DOT__regfile__DOT__data__v0 = 1U;
        __Vdly__golden__DOT__ir__DOT__data = 0U;
    } else {
        if (vlSelf->__PVT__golden__DOT__commit) {
            __Vdly__golden__DOT__order = (1ULL + vlSelf->__PVT__golden__DOT__order);
        }
        if (((IData)(vlSelf->__PVT__golden__DOT__regf_we) 
             & (0U != (0x1fU & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                >> 7U))))) {
            __Vdlyvval__golden__DOT__regfile__DOT__data__v32 
                = vlSelf->__PVT__golden__DOT__rd_v;
            __Vdlyvset__golden__DOT__regfile__DOT__data__v32 = 1U;
            __Vdlyvdim0__golden__DOT__regfile__DOT__data__v32 
                = (0x1fU & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                            >> 7U));
        }
        __Vdly__golden__DOT__ir__DOT__data = ((IData)(vlSelf->__PVT__golden__DOT__load_ir)
                                               ? vlSymsp->TOP.golden_imem_rdata
                                               : vlSelf->__PVT__golden__DOT__ir__DOT__data);
    }
    if (VL_UNLIKELY((((IData)(vlSelf->halt) & (~ (IData)(vlSelf->__PVT__halt_seen))) 
                     & (IData)(vlSymsp->TOP.eoc_enable)))) {
        vlSelf->__PVT__eoc_checker__DOT__err_cnt = 0U;
        vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i = 0x20U;
        vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i = 0x20U;
        vlSelf->__PVT__eoc_checker__DOT__unnamedblk11__DOT__i = 0x20U;
        vlSelf->__PVT__halt_seen = 1U;
        VL_WRITEF("\n\342\225\224\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\227\n\342\225\221        End-of-Simulation State Checker           \342\225\221\n\342\225\232\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\235\n");
        vlSelf->__PVT__eoc_checker__DOT__unnamedblk3__DOT__x0_ok = 1U;
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0U]))) {
            VL_WRITEF("FAIL x0/arat    : arat[0] = p%0#  (expected p0)\n",
                      6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0U]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk3__DOT__x0_ok = 0U;
        }
        if (VL_UNLIKELY((0U != vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                         [0U]))) {
            VL_WRITEF("FAIL x0/prf     : prf[0] = 0x%08x  (expected 0)\n",
                      32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                      [0U]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk3__DOT__x0_ok = 0U;
        }
        if (VL_UNLIKELY(vlSelf->__PVT__eoc_checker__DOT__unnamedblk3__DOT__x0_ok)) {
            VL_WRITEF("PASS x0         : arat[0]=p0, prf[0]=0x00000000\n");
        }
        vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 1U;
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0U]))))) {
            VL_WRITEF("FAIL double-alloc: srat[0]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0U]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [1U]))))) {
            VL_WRITEF("FAIL double-alloc: srat[1]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [1U]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [2U]))))) {
            VL_WRITEF("FAIL double-alloc: srat[2]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [2U]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [3U]))))) {
            VL_WRITEF("FAIL double-alloc: srat[3]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [3U]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [4U]))))) {
            VL_WRITEF("FAIL double-alloc: srat[4]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [4U]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [5U]))))) {
            VL_WRITEF("FAIL double-alloc: srat[5]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [5U]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [6U]))))) {
            VL_WRITEF("FAIL double-alloc: srat[6]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [6U]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [7U]))))) {
            VL_WRITEF("FAIL double-alloc: srat[7]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [7U]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [8U]))))) {
            VL_WRITEF("FAIL double-alloc: srat[8]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [8U]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [9U]))))) {
            VL_WRITEF("FAIL double-alloc: srat[9]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [9U]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0xaU]))))) {
            VL_WRITEF("FAIL double-alloc: srat[10]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0xaU]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0xbU]))))) {
            VL_WRITEF("FAIL double-alloc: srat[11]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0xbU]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0xcU]))))) {
            VL_WRITEF("FAIL double-alloc: srat[12]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0xcU]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0xdU]))))) {
            VL_WRITEF("FAIL double-alloc: srat[13]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0xdU]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0xeU]))))) {
            VL_WRITEF("FAIL double-alloc: srat[14]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0xeU]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0xfU]))))) {
            VL_WRITEF("FAIL double-alloc: srat[15]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0xfU]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0x10U]))))) {
            VL_WRITEF("FAIL double-alloc: srat[16]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x10U]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0x11U]))))) {
            VL_WRITEF("FAIL double-alloc: srat[17]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x11U]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0x12U]))))) {
            VL_WRITEF("FAIL double-alloc: srat[18]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x12U]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0x13U]))))) {
            VL_WRITEF("FAIL double-alloc: srat[19]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x13U]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0x14U]))))) {
            VL_WRITEF("FAIL double-alloc: srat[20]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x14U]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0x15U]))))) {
            VL_WRITEF("FAIL double-alloc: srat[21]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x15U]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0x16U]))))) {
            VL_WRITEF("FAIL double-alloc: srat[22]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x16U]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0x17U]))))) {
            VL_WRITEF("FAIL double-alloc: srat[23]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x17U]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0x18U]))))) {
            VL_WRITEF("FAIL double-alloc: srat[24]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x18U]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0x19U]))))) {
            VL_WRITEF("FAIL double-alloc: srat[25]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x19U]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0x1aU]))))) {
            VL_WRITEF("FAIL double-alloc: srat[26]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x1aU]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0x1bU]))))) {
            VL_WRITEF("FAIL double-alloc: srat[27]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x1bU]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0x1cU]))))) {
            VL_WRITEF("FAIL double-alloc: srat[28]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x1cU]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0x1dU]))))) {
            VL_WRITEF("FAIL double-alloc: srat[29]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x1dU]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0x1eU]))))) {
            VL_WRITEF("FAIL double-alloc: srat[30]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x1eU]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY((1U & (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                                       >> vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                                       [0x1fU]))))) {
            VL_WRITEF("FAIL double-alloc: srat[31]=p%0# is in free_list\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x1fU]);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok = 0U;
        }
        if (VL_UNLIKELY(vlSelf->__PVT__eoc_checker__DOT__unnamedblk4__DOT__alloc_ok)) {
            VL_WRITEF("PASS double-alloc: no srat entry appears in free_list\n");
        }
        vlSelf->__PVT__eoc_checker__DOT__unnamedblk6__DOT__overlap 
            = (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
               & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__busy_table__DOT__bt);
        if ((0ULL != vlSelf->__PVT__eoc_checker__DOT__unnamedblk6__DOT__overlap)) {
            VL_WRITEF("FAIL free+busy  : overlap = 0x%016x  (registers both free and busy)\n",
                      64,vlSelf->__PVT__eoc_checker__DOT__unnamedblk6__DOT__overlap);
            vlSelf->__PVT__eoc_checker__DOT__err_cnt 
                = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__err_cnt);
        } else {
            VL_WRITEF("PASS free+busy  : free_list \342\210\251 busy_table = \342\210\205\n");
        }
        VL_WRITEF("\n\342\224\200\342\224\200 Drain-only state (informational) \342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\n");
        vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 1U;
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0U] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0U]))) {
            VL_WRITEF("  INFO srat[0]=p%0# != arat[0]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0U],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0U]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [1U] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [1U]))) {
            VL_WRITEF("  INFO srat[1]=p%0# != arat[1]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [1U],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [1U]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [2U] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [2U]))) {
            VL_WRITEF("  INFO srat[2]=p%0# != arat[2]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [2U],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [2U]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [3U] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [3U]))) {
            VL_WRITEF("  INFO srat[3]=p%0# != arat[3]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [3U],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [3U]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [4U] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [4U]))) {
            VL_WRITEF("  INFO srat[4]=p%0# != arat[4]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [4U],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [4U]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [5U] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [5U]))) {
            VL_WRITEF("  INFO srat[5]=p%0# != arat[5]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [5U],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [5U]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [6U] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [6U]))) {
            VL_WRITEF("  INFO srat[6]=p%0# != arat[6]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [6U],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [6U]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [7U] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [7U]))) {
            VL_WRITEF("  INFO srat[7]=p%0# != arat[7]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [7U],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [7U]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [8U] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [8U]))) {
            VL_WRITEF("  INFO srat[8]=p%0# != arat[8]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [8U],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [8U]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [9U] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [9U]))) {
            VL_WRITEF("  INFO srat[9]=p%0# != arat[9]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [9U],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [9U]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0xaU] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0xaU]))) {
            VL_WRITEF("  INFO srat[10]=p%0# != arat[10]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0xaU],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0xaU]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0xbU] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0xbU]))) {
            VL_WRITEF("  INFO srat[11]=p%0# != arat[11]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0xbU],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0xbU]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0xcU] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0xcU]))) {
            VL_WRITEF("  INFO srat[12]=p%0# != arat[12]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0xcU],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0xcU]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0xdU] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0xdU]))) {
            VL_WRITEF("  INFO srat[13]=p%0# != arat[13]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0xdU],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0xdU]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0xeU] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0xeU]))) {
            VL_WRITEF("  INFO srat[14]=p%0# != arat[14]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0xeU],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0xeU]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0xfU] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0xfU]))) {
            VL_WRITEF("  INFO srat[15]=p%0# != arat[15]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0xfU],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0xfU]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0x10U] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0x10U]))) {
            VL_WRITEF("  INFO srat[16]=p%0# != arat[16]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x10U],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0x10U]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0x11U] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0x11U]))) {
            VL_WRITEF("  INFO srat[17]=p%0# != arat[17]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x11U],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0x11U]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0x12U] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0x12U]))) {
            VL_WRITEF("  INFO srat[18]=p%0# != arat[18]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x12U],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0x12U]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0x13U] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0x13U]))) {
            VL_WRITEF("  INFO srat[19]=p%0# != arat[19]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x13U],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0x13U]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0x14U] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0x14U]))) {
            VL_WRITEF("  INFO srat[20]=p%0# != arat[20]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x14U],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0x14U]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0x15U] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0x15U]))) {
            VL_WRITEF("  INFO srat[21]=p%0# != arat[21]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x15U],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0x15U]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0x16U] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0x16U]))) {
            VL_WRITEF("  INFO srat[22]=p%0# != arat[22]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x16U],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0x16U]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0x17U] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0x17U]))) {
            VL_WRITEF("  INFO srat[23]=p%0# != arat[23]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x17U],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0x17U]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0x18U] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0x18U]))) {
            VL_WRITEF("  INFO srat[24]=p%0# != arat[24]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x18U],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0x18U]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0x19U] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0x19U]))) {
            VL_WRITEF("  INFO srat[25]=p%0# != arat[25]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x19U],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0x19U]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0x1aU] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0x1aU]))) {
            VL_WRITEF("  INFO srat[26]=p%0# != arat[26]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x1aU],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0x1aU]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0x1bU] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0x1bU]))) {
            VL_WRITEF("  INFO srat[27]=p%0# != arat[27]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x1bU],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0x1bU]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0x1cU] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0x1cU]))) {
            VL_WRITEF("  INFO srat[28]=p%0# != arat[28]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x1cU],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0x1cU]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0x1dU] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0x1dU]))) {
            VL_WRITEF("  INFO srat[29]=p%0# != arat[29]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x1dU],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0x1dU]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0x1eU] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0x1eU]))) {
            VL_WRITEF("  INFO srat[30]=p%0# != arat[30]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x1eU],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0x1eU]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                         [0x1fU] != vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                         [0x1fU]))) {
            VL_WRITEF("  INFO srat[31]=p%0# != arat[31]=p%0#  (in-flight rename)\n",
                      6,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__srat__DOT__srat
                      [0x1fU],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                      [0x1fU]);
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained = 0U;
        }
        if (VL_UNLIKELY((0ULL != vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__busy_table__DOT__bt))) {
            VL_WRITEF("  INFO busy_table = 0x%016x  (in-flight writes)\n",
                      64,vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__busy_table__DOT__bt);
        }
        if (VL_LIKELY(((IData)(vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__drained) 
                       & (0ULL == vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__busy_table__DOT__bt)))) {
            vlSelf->__PVT__eoc_checker__DOT__expected_free = 0xffffffffffffffffULL;
            vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__unnamedblk9__DOT__i = 0x20U;
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0U])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [1U])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [2U])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [3U])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [4U])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [5U])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [6U])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [7U])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [8U])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [9U])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0xaU])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0xbU])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0xcU])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0xdU])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0xeU])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0xfU])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0x10U])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0x11U])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0x12U])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0x13U])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0x14U])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0x15U])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0x16U])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0x17U])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0x18U])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0x19U])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0x1aU])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0x1bU])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0x1cU])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0x1dU])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0x1eU])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            vlSelf->__PVT__eoc_checker__DOT__expected_free 
                = ((~ (1ULL << vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                       [0x1fU])) & vlSelf->__PVT__eoc_checker__DOT__expected_free);
            if ((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__free_list__DOT__free_list 
                 != vlSelf->__PVT__eoc_checker__DOT__expected_free)) {
                VL_WRITEF("  INFO free_list mismatch (unexpected \342\200\224 pipeline appeared drained)\n");
            } else {
                vlSelf->__PVT__eoc_checker__DOT__free_cnt = 0U;
                vlSelf->__PVT__eoc_checker__DOT__unnamedblk7__DOT__unnamedblk10__DOT__i = 0x40U;
                if ((1U & (IData)(vlSelf->__PVT__eoc_checker__DOT__expected_free))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 1U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 2U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 3U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 4U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 5U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 6U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 7U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 8U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 9U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0xaU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0xbU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0xcU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0xdU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0xeU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0xfU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x10U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x11U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x12U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x13U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x14U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x15U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x16U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x17U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x18U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x19U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x1aU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x1bU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x1cU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x1dU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x1eU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x1fU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x20U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x21U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x22U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x23U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x24U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x25U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x26U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x27U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x28U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x29U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x2aU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x2bU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x2cU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x2dU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x2eU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x2fU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x30U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x31U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x32U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x33U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x34U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x35U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x36U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x37U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x38U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x39U)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x3aU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x3bU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x3cU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x3dU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x3eU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                if ((1U & (IData)((vlSelf->__PVT__eoc_checker__DOT__expected_free 
                                   >> 0x3fU)))) {
                    vlSelf->__PVT__eoc_checker__DOT__free_cnt 
                        = ((IData)(1U) + vlSelf->__PVT__eoc_checker__DOT__free_cnt);
                }
                VL_WRITEF("  INFO pipeline drained: srat==arat, bt==0, %0d free regs\n",
                          32,vlSelf->__PVT__eoc_checker__DOT__free_cnt);
            }
        } else {
            VL_WRITEF("  INFO pipeline not fully drained at halt (normal for OOO)\n");
        }
        VL_WRITEF("\n\342\224\200\342\224\200 Arch register file (via ARAT\342\206\222PRF) \342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\n  x0   (p%-2#) = 0x%08x  (%0d)\n  x1   (p%-2#) = 0x%08x  (%0d)\n  x2   (p%-2#) = 0x%08x  (%0d)\n  x3   (p%-2#) = 0x%08x  (%0d)\n  x4   (p%-2#) = 0x%08x  (%0d)\n  x5   (p%-2#) = 0x%08x  (%0d)\n  x6   (p%-2#) = 0x%08x  (%0d)\n  x7   (p%-2#) = 0x%08x  (%0d)\n  x8   (p%-2#) = 0x%08x  (%0d)\n  x9   (p%-2#) = 0x%08x  (%0d)\n  x10  (p%-2#) = 0x%08x  (%0d)\n  x11  (p%-2#) = 0x%08x  (%0d)\n  x12  (p%-2#) = 0x%08x  (%0d)\n",
                  6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0U],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0U]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0U]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [1U],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [1U]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [1U]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [2U],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [2U]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [2U]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [3U],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [3U]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [3U]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [4U],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [4U]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [4U]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [5U],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [5U]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [5U]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [6U],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [6U]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [6U]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [7U],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [7U]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [7U]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [8U],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [8U]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [8U]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [9U],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [9U]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [9U]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0xaU],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0xaU]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0xaU]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0xbU],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0xbU]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0xbU]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0xcU],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0xcU]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0xcU]]);
        VL_WRITEF("  x13  (p%-2#) = 0x%08x  (%0d)\n  x14  (p%-2#) = 0x%08x  (%0d)\n  x15  (p%-2#) = 0x%08x  (%0d)\n  x16  (p%-2#) = 0x%08x  (%0d)\n  x17  (p%-2#) = 0x%08x  (%0d)\n  x18  (p%-2#) = 0x%08x  (%0d)\n  x19  (p%-2#) = 0x%08x  (%0d)\n  x20  (p%-2#) = 0x%08x  (%0d)\n  x21  (p%-2#) = 0x%08x  (%0d)\n  x22  (p%-2#) = 0x%08x  (%0d)\n  x23  (p%-2#) = 0x%08x  (%0d)\n  x24  (p%-2#) = 0x%08x  (%0d)\n  x25  (p%-2#) = 0x%08x  (%0d)\n  x26  (p%-2#) = 0x%08x  (%0d)\n  x27  (p%-2#) = 0x%08x  (%0d)\n  x28  (p%-2#) = 0x%08x  (%0d)\n",
                  6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0xdU],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0xdU]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0xdU]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0xeU],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0xeU]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0xeU]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0xfU],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0xfU]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0xfU]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x10U],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x10U]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x10U]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x11U],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x11U]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x11U]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x12U],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x12U]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x12U]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x13U],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x13U]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x13U]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x14U],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x14U]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x14U]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x15U],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x15U]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x15U]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x16U],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x16U]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x16U]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x17U],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x17U]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x17U]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x18U],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x18U]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x18U]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x19U],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x19U]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x19U]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x1aU],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x1aU]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x1aU]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x1bU],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x1bU]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x1bU]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x1cU],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x1cU]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x1cU]]);
        VL_WRITEF("  x29  (p%-2#) = 0x%08x  (%0d)\n  x30  (p%-2#) = 0x%08x  (%0d)\n  x31  (p%-2#) = 0x%08x  (%0d)\n",
                  6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x1dU],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x1dU]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x1dU]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x1eU],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x1eU]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x1eU]],6,vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x1fU],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x1fU]],32,vlSymsp->TOP__top_tb__dut.__PVT__cpu_execute__DOT__PRF__DOT__prf
                  [vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__arat__DOT__arat
                  [0x1fU]]);
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__golden__DOT__pc = 0x60000000U;
        vlSelf->__PVT__golden__DOT__rs2_v = 0U;
        vlSelf->__PVT__golden__DOT__rs1_v = 0U;
        vlSelf->__PVT__golden__DOT__state = 1U;
    } else {
        vlSelf->__PVT__golden__DOT__pc = vlSelf->__PVT__golden__DOT__pc_next;
        vlSelf->__PVT__golden__DOT__rs2_v = ((0U != 
                                              (0x1fU 
                                               & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                  >> 0x14U)))
                                              ? vlSelf->__PVT__golden__DOT__regfile__DOT__data
                                             [(0x1fU 
                                               & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                  >> 0x14U))]
                                              : 0U);
        vlSelf->__PVT__golden__DOT__rs1_v = ((0U != 
                                              (0x1fU 
                                               & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                  >> 0xfU)))
                                              ? vlSelf->__PVT__golden__DOT__regfile__DOT__data
                                             [(0x1fU 
                                               & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                  >> 0xfU))]
                                              : 0U);
        vlSelf->__PVT__golden__DOT__state = vlSelf->__PVT__golden__DOT__state_next;
    }
    if ((((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
          [0U]) & ((((vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                      [0U] == vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata
                      [0U]) | (0x63U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [0U])) | (0x6fU == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                         [0U])) | (0xf0002013U 
                                                   == 
                                                   vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                                   [0U])))) {
        TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v0 = 1U;
    }
    if ((((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
          [1U]) & ((((vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                      [1U] == vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata
                      [1U]) | (0x63U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [1U])) | (0x6fU == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                         [1U])) | (0xf0002013U 
                                                   == 
                                                   vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                                   [1U])))) {
        TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v1 = 1U;
    }
    if ((((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
          [2U]) & ((((vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                      [2U] == vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata
                      [2U]) | (0x63U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [2U])) | (0x6fU == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                         [2U])) | (0xf0002013U 
                                                   == 
                                                   vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                                   [2U])))) {
        TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v2 = 1U;
    }
    if ((((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
          [3U]) & ((((vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                      [3U] == vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata
                      [3U]) | (0x63U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [3U])) | (0x6fU == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                         [3U])) | (0xf0002013U 
                                                   == 
                                                   vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                                   [3U])))) {
        TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v3 = 1U;
    }
    if ((((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
          [4U]) & ((((vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                      [4U] == vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata
                      [4U]) | (0x63U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [4U])) | (0x6fU == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                         [4U])) | (0xf0002013U 
                                                   == 
                                                   vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                                   [4U])))) {
        TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v4 = 1U;
    }
    if ((((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
          [5U]) & ((((vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                      [5U] == vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata
                      [5U]) | (0x63U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [5U])) | (0x6fU == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                         [5U])) | (0xf0002013U 
                                                   == 
                                                   vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                                   [5U])))) {
        TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v5 = 1U;
    }
    if ((((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
          [6U]) & ((((vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                      [6U] == vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata
                      [6U]) | (0x63U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [6U])) | (0x6fU == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                         [6U])) | (0xf0002013U 
                                                   == 
                                                   vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                                   [6U])))) {
        TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v6 = 1U;
    }
    if ((((~ (IData)(vlSymsp->TOP.rst)) & vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
          [7U]) & ((((vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                      [7U] == vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata
                      [7U]) | (0x63U == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                               [7U])) | (0x6fU == vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                         [7U])) | (0xf0002013U 
                                                   == 
                                                   vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                                   [7U])))) {
        TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v7 = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if ((1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid))) {
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0[0U] 
                = (IData)((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->__PVT__monitor__DOT__rvfi_order[0U]))));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0[1U] 
                = (IData)(((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->__PVT__monitor__DOT__rvfi_order[0U]))) 
                           >> 0x20U));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0[2U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                    << 0xfU) | ((0x7c00U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_rd_addr) 
                                            << 0xaU)) 
                                | ((0x3e0U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr) 
                                              << 5U)) 
                                   | (0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr)))));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0[3U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
                    >> 0x11U) | (vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[0U] 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0[4U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[0U] 
                    >> 0x11U) | (vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[0U] 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0[5U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[0U] 
                    >> 0x11U) | ((IData)((((QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[0U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[0U])))) 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0[6U] 
                = (((IData)((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[0U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[0U])))) 
                    >> 0x11U) | ((IData)(((((QData)((IData)(
                                                            vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[0U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[0U]))) 
                                          >> 0x20U)) 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0[7U] 
                = ((IData)(((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[0U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[0U]))) 
                            >> 0x20U)) >> 0x11U);
            vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0 = 1U;
            vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0 
                = (0xfU & vlSelf->__PVT__monitor__DOT__rvfi_order[0U]);
        }
        if ((2U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid))) {
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1[0U] 
                = (IData)((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->__PVT__monitor__DOT__rvfi_order[2U]))));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1[1U] 
                = (IData)(((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->__PVT__monitor__DOT__rvfi_order[2U]))) 
                           >> 0x20U));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1[2U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                    << 0xfU) | ((0x7c00U & ((IData)(
                                                    (vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                                     >> 5U)) 
                                            << 0xaU)) 
                                | ((0x3e0U & ((IData)(
                                                      (vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                                       >> 5U)) 
                                              << 5U)) 
                                   | (0x1fU & (IData)(
                                                      (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                       >> 5U))))));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1[3U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
                    >> 0x11U) | (vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[1U] 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1[4U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[1U] 
                    >> 0x11U) | (vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[1U] 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1[5U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[1U] 
                    >> 0x11U) | ((IData)((((QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[1U])))) 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1[6U] 
                = (((IData)((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[1U])))) 
                    >> 0x11U) | ((IData)(((((QData)((IData)(
                                                            vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[1U]))) 
                                          >> 0x20U)) 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1[7U] 
                = ((IData)(((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[1U]))) 
                            >> 0x20U)) >> 0x11U);
            vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1 = 1U;
            vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1 
                = (0xfU & vlSelf->__PVT__monitor__DOT__rvfi_order[2U]);
        }
        if ((4U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid))) {
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2[0U] 
                = (IData)((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->__PVT__monitor__DOT__rvfi_order[4U]))));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2[1U] 
                = (IData)(((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[5U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->__PVT__monitor__DOT__rvfi_order[4U]))) 
                           >> 0x20U));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2[2U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                    << 0xfU) | ((0x7c00U & ((IData)(
                                                    (vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                                     >> 0xaU)) 
                                            << 0xaU)) 
                                | ((0x3e0U & ((IData)(
                                                      (vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                                       >> 0xaU)) 
                                              << 5U)) 
                                   | (0x1fU & (IData)(
                                                      (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                       >> 0xaU))))));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2[3U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
                    >> 0x11U) | (vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[2U] 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2[4U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[2U] 
                    >> 0x11U) | (vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[2U] 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2[5U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[2U] 
                    >> 0x11U) | ((IData)((((QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[2U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[2U])))) 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2[6U] 
                = (((IData)((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[2U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[2U])))) 
                    >> 0x11U) | ((IData)(((((QData)((IData)(
                                                            vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[2U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[2U]))) 
                                          >> 0x20U)) 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2[7U] 
                = ((IData)(((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[2U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[2U]))) 
                            >> 0x20U)) >> 0x11U);
            vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2 = 1U;
            vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2 
                = (0xfU & vlSelf->__PVT__monitor__DOT__rvfi_order[4U]);
        }
        if ((8U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid))) {
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3[0U] 
                = (IData)((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[7U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->__PVT__monitor__DOT__rvfi_order[6U]))));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3[1U] 
                = (IData)(((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->__PVT__monitor__DOT__rvfi_order[6U]))) 
                           >> 0x20U));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3[2U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                    << 0xfU) | ((0x7c00U & ((IData)(
                                                    (vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                                     >> 0xfU)) 
                                            << 0xaU)) 
                                | ((0x3e0U & ((IData)(
                                                      (vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                                       >> 0xfU)) 
                                              << 5U)) 
                                   | (0x1fU & (IData)(
                                                      (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                       >> 0xfU))))));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3[3U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                    >> 0x11U) | (vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[3U] 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3[4U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[3U] 
                    >> 0x11U) | (vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[3U] 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3[5U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[3U] 
                    >> 0x11U) | ((IData)((((QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[3U])))) 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3[6U] 
                = (((IData)((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[3U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[3U])))) 
                    >> 0x11U) | ((IData)(((((QData)((IData)(
                                                            vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[3U]))) 
                                          >> 0x20U)) 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3[7U] 
                = ((IData)(((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[3U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[3U]))) 
                            >> 0x20U)) >> 0x11U);
            vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3 = 1U;
            vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3 
                = (0xfU & vlSelf->__PVT__monitor__DOT__rvfi_order[6U]);
        }
        if ((0x10U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid))) {
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4[0U] 
                = (IData)((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[9U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->__PVT__monitor__DOT__rvfi_order[8U]))));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4[1U] 
                = (IData)(((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[9U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->__PVT__monitor__DOT__rvfi_order[8U]))) 
                           >> 0x20U));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4[2U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                    << 0xfU) | ((0x7c00U & ((IData)(
                                                    (vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                                     >> 0x14U)) 
                                            << 0xaU)) 
                                | ((0x3e0U & ((IData)(
                                                      (vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                                       >> 0x14U)) 
                                              << 5U)) 
                                   | (0x1fU & (IData)(
                                                      (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                       >> 0x14U))))));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4[3U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                    >> 0x11U) | (vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[4U] 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4[4U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[4U] 
                    >> 0x11U) | (vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[4U] 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4[5U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[4U] 
                    >> 0x11U) | ((IData)((((QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[4U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[4U])))) 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4[6U] 
                = (((IData)((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[4U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[4U])))) 
                    >> 0x11U) | ((IData)(((((QData)((IData)(
                                                            vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[4U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[4U]))) 
                                          >> 0x20U)) 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4[7U] 
                = ((IData)(((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[4U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[4U]))) 
                            >> 0x20U)) >> 0x11U);
            vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4 = 1U;
            vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4 
                = (0xfU & vlSelf->__PVT__monitor__DOT__rvfi_order[8U]);
        }
        if ((0x20U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid))) {
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5[0U] 
                = (IData)((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[0xbU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU]))));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5[1U] 
                = (IData)(((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[0xbU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU]))) 
                           >> 0x20U));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5[2U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                    << 0xfU) | ((0x7c00U & ((IData)(
                                                    (vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                                     >> 0x19U)) 
                                            << 0xaU)) 
                                | ((0x3e0U & ((IData)(
                                                      (vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                                       >> 0x19U)) 
                                              << 5U)) 
                                   | (0x1fU & (IData)(
                                                      (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                       >> 0x19U))))));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5[3U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                    >> 0x11U) | (vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[5U] 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5[4U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[5U] 
                    >> 0x11U) | (vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[5U] 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5[5U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[5U] 
                    >> 0x11U) | ((IData)((((QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[5U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[5U])))) 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5[6U] 
                = (((IData)((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[5U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[5U])))) 
                    >> 0x11U) | ((IData)(((((QData)((IData)(
                                                            vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[5U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[5U]))) 
                                          >> 0x20U)) 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5[7U] 
                = ((IData)(((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[5U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[5U]))) 
                            >> 0x20U)) >> 0x11U);
            vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5 = 1U;
            vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5 
                = (0xfU & vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU]);
        }
        if ((0x40U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid))) {
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6[0U] 
                = (IData)((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[0xdU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU]))));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6[1U] 
                = (IData)(((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[0xdU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU]))) 
                           >> 0x20U));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6[2U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                    << 0xfU) | ((0x7c00U & ((IData)(
                                                    (vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                                     >> 0x1eU)) 
                                            << 0xaU)) 
                                | ((0x3e0U & ((IData)(
                                                      (vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                                       >> 0x1eU)) 
                                              << 5U)) 
                                   | (0x1fU & (IData)(
                                                      (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                       >> 0x1eU))))));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6[3U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                    >> 0x11U) | (vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[6U] 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6[4U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[6U] 
                    >> 0x11U) | (vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[6U] 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6[5U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[6U] 
                    >> 0x11U) | ((IData)((((QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[6U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[6U])))) 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6[6U] 
                = (((IData)((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[6U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[6U])))) 
                    >> 0x11U) | ((IData)(((((QData)((IData)(
                                                            vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[6U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[6U]))) 
                                          >> 0x20U)) 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6[7U] 
                = ((IData)(((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[6U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[6U]))) 
                            >> 0x20U)) >> 0x11U);
            vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6 = 1U;
            vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6 
                = (0xfU & vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU]);
        }
        if ((0x80U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid))) {
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7[0U] 
                = (IData)((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[0xfU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU]))));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7[1U] 
                = (IData)(((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[0xfU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU]))) 
                           >> 0x20U));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7[2U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                    << 0xfU) | ((0x7c00U & ((IData)(
                                                    (vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                                     >> 0x23U)) 
                                            << 0xaU)) 
                                | ((0x3e0U & ((IData)(
                                                      (vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                                       >> 0x23U)) 
                                              << 5U)) 
                                   | (0x1fU & (IData)(
                                                      (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                       >> 0x23U))))));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7[3U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                    >> 0x11U) | (vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[7U] 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7[4U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[7U] 
                    >> 0x11U) | (vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[7U] 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7[5U] 
                = ((vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[7U] 
                    >> 0x11U) | ((IData)((((QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[7U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[7U])))) 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7[6U] 
                = (((IData)((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[7U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[7U])))) 
                    >> 0x11U) | ((IData)(((((QData)((IData)(
                                                            vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[7U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[7U]))) 
                                          >> 0x20U)) 
                                 << 0xfU));
            vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7[7U] 
                = ((IData)(((((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[7U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[7U]))) 
                            >> 0x20U)) >> 0x11U);
            vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7 = 1U;
            vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7 
                = (0xfU & vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU]);
        }
    }
    if (VL_UNLIKELY((0U != (IData)(vlSelf->__PVT__monitor__DOT__errcode)))) {
        VL_WRITEF("[%0t] %%Error: ventilator_monitor.sv:172: Assertion failed in %Ntop_tb.monitor: RVFI Monitor Error\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("../hvl/ventilator_monitor.sv", 172, "");
        vlSymsp->TOP__top_tb__mon_itf.__PVT__error = 1U;
    }
    vlSelf->__PVT__golden__DOT__order = __Vdly__golden__DOT__order;
    if (TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v0) {
        vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[0U] = 1U;
    }
    if (TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v1) {
        vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[1U] = 1U;
    }
    if (TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v2) {
        vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[2U] = 1U;
    }
    if (TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v3) {
        vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[3U] = 1U;
    }
    if (TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v4) {
        vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[4U] = 1U;
    }
    if (TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v5) {
        vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[5U] = 1U;
    }
    if (TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v6) {
        vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[6U] = 1U;
    }
    if (TOP__top_tb__mon_itf__DOT____Vdlyvset__halt__v7) {
        vlSymsp->TOP__top_tb__mon_itf.__PVT__halt[7U] = 1U;
    }
    if (__Vdlyvset__golden__DOT__regfile__DOT__data__v0) {
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0U] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[1U] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[2U] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[3U] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[4U] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[5U] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[6U] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[7U] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[8U] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[9U] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0xaU] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0xbU] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0xcU] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0xdU] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0xeU] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0xfU] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0x10U] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0x11U] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0x12U] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0x13U] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0x14U] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0x15U] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0x16U] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0x17U] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0x18U] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0x19U] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0x1aU] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0x1bU] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0x1cU] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0x1dU] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0x1eU] = 0U;
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[0x1fU] = 0U;
    }
    if (__Vdlyvset__golden__DOT__regfile__DOT__data__v32) {
        vlSelf->__PVT__golden__DOT__regfile__DOT__data[__Vdlyvdim0__golden__DOT__regfile__DOT__data__v32] 
            = __Vdlyvval__golden__DOT__regfile__DOT__data__v32;
    }
    vlSelf->__PVT__golden__DOT__ir__DOT__data = __Vdly__golden__DOT__ir__DOT__data;
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
    vlSelf->__PVT__golden__DOT__mul_result_ss = VL_MULS_QQQ(64, 
                                                            VL_EXTENDS_QI(64,32, vlSelf->__PVT__golden__DOT__rs1_v), 
                                                            VL_EXTENDS_QI(64,32, vlSelf->__PVT__golden__DOT__rs2_v));
    vlSelf->__PVT__golden__DOT__i_imm = (((- (IData)(
                                                     (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                      >> 0x1fU))) 
                                          << 0xbU) 
                                         | (0x7ffU 
                                            & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                               >> 0x14U)));
    vlSelf->__PVT__golden__DOT__load_ir = 0U;
    vlSelf->__PVT__golden__DOT__state_next = vlSelf->__PVT__golden__DOT__state;
    vlSelf->golden_dmem_write = 0U;
    vlSelf->golden_imem_read = 0U;
    vlSelf->golden_dmem_read = 0U;
    vlSelf->__PVT__golden__DOT__commit = 0U;
    vlSelf->golden_imem_addr = 0U;
    vlSelf->__PVT__golden__DOT__regf_we = 0U;
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
        } else if ((1U != vlSelf->__PVT__golden__DOT__state)) {
            if ((2U != vlSelf->__PVT__golden__DOT__state)) {
                if ((3U != vlSelf->__PVT__golden__DOT__state)) {
                    vlSelf->__PVT__golden__DOT__commit = 1U;
                }
            }
        }
    } else {
        if ((8U == vlSelf->__PVT__golden__DOT__state)) {
            vlSelf->__PVT__golden__DOT__state_next = 2U;
            vlSelf->__PVT__golden__DOT__commit = 1U;
        } else if ((9U == vlSelf->__PVT__golden__DOT__state)) {
            if (vlSymsp->TOP.golden_dmem_resp) {
                vlSelf->__PVT__golden__DOT__state_next = 2U;
                vlSelf->__PVT__golden__DOT__commit = 1U;
            }
        } else if ((0xaU == vlSelf->__PVT__golden__DOT__state)) {
            if (vlSymsp->TOP.golden_dmem_resp) {
                vlSelf->__PVT__golden__DOT__state_next = 2U;
                vlSelf->__PVT__golden__DOT__commit = 1U;
            }
        } else if ((0xbU == vlSelf->__PVT__golden__DOT__state)) {
            vlSelf->__PVT__golden__DOT__state_next = 2U;
            vlSelf->__PVT__golden__DOT__commit = 1U;
        } else if ((0xcU == vlSelf->__PVT__golden__DOT__state)) {
            vlSelf->__PVT__golden__DOT__state_next = 2U;
            vlSelf->__PVT__golden__DOT__commit = 1U;
        } else if ((0xdU == vlSelf->__PVT__golden__DOT__state)) {
            vlSelf->__PVT__golden__DOT__state_next = 2U;
            vlSelf->__PVT__golden__DOT__commit = 1U;
        } else {
            vlSelf->__PVT__golden__DOT__state_next = 0U;
        }
        if ((8U != vlSelf->__PVT__golden__DOT__state)) {
            if ((9U == vlSelf->__PVT__golden__DOT__state)) {
                if (vlSymsp->TOP.golden_dmem_resp) {
                    vlSelf->__PVT__golden__DOT__regf_we = 1U;
                }
            } else if ((0xaU != vlSelf->__PVT__golden__DOT__state)) {
                if ((0xbU == vlSelf->__PVT__golden__DOT__state)) {
                    vlSelf->__PVT__golden__DOT__regf_we = 1U;
                } else if ((0xcU == vlSelf->__PVT__golden__DOT__state)) {
                    vlSelf->__PVT__golden__DOT__regf_we = 1U;
                } else if ((0xdU == vlSelf->__PVT__golden__DOT__state)) {
                    vlSelf->__PVT__golden__DOT__regf_we = 1U;
                }
            }
        }
    }
    vlSelf->__PVT__golden__DOT__aluop = 0U;
    vlSelf->__PVT__golden__DOT__cmpop = 0U;
    vlSelf->__PVT__golden__DOT__a = 0U;
    vlSelf->__PVT__monitor__DOT__errcode = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ch0_errcode))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ch0_errcode;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ch1_errcode))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ch1_errcode;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ch2_errcode))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ch2_errcode;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ch3_errcode))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ch3_errcode;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ch4_errcode))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ch4_errcode;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ch5_errcode))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ch5_errcode;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ch6_errcode))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ch6_errcode;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ch7_errcode))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ch7_errcode;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_errcode))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_errcode;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ro0_errcode_p))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ro0_errcode_p;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ro1_errcode_p))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ro1_errcode_p;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ro2_errcode_p))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ro2_errcode_p;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ro3_errcode_p))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ro3_errcode_p;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ro4_errcode_p))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ro4_errcode_p;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ro5_errcode_p))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ro5_errcode_p;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ro6_errcode_p))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ro6_errcode_p;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ro7_errcode_p))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ro7_errcode_p;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ro0_errcode_r))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ro0_errcode_r;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ro1_errcode_r))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ro1_errcode_r;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ro2_errcode_r))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ro2_errcode_r;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ro3_errcode_r))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ro3_errcode_r;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ro4_errcode_r))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ro4_errcode_r;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ro5_errcode_r))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ro5_errcode_r;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ro6_errcode_r))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ro6_errcode_r;
        }
        if ((0U != (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__ro7_errcode_r))) {
            vlSelf->__PVT__monitor__DOT__errcode = vlSelf->__PVT__monitor__DOT__monitor__DOT__ro7_errcode_r;
        }
    }
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
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ch0_errcode = 0U;
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)))) {
        if (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_valid) {
            if (VL_UNLIKELY(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_trap)) {
                VL_WRITEF("-------- RVFI Monitor error 101 in channel 0: %Ntop_tb.monitor.monitor.ch0_handle_error at time %0t --------\nError message: mismatch in trap\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch0_errcode = 0x65U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)),
                          64,(((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_order[0U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[0U],
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[0U],
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rd_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[0U],
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask),
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[0U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((((0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr)) 
                              != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs1_addr)) 
                             & (0U != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs1_addr))))) {
                VL_WRITEF("-------- RVFI Monitor error 102 in channel 0: %Ntop_tb.monitor.monitor.ch0_handle_error at time %0t --------\nError message: mismatch in rs1_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch0_errcode = 0x66U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)),
                          64,(((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_order[0U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[0U],
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[0U],
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rd_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[0U],
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask),
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[0U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((((0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr)) 
                              != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs2_addr)) 
                             & (0U != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs2_addr))))) {
                VL_WRITEF("-------- RVFI Monitor error 103 in channel 0: %Ntop_tb.monitor.monitor.ch0_handle_error at time %0t --------\nError message: mismatch in rs2_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch0_errcode = 0x67U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)),
                          64,(((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_order[0U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[0U],
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[0U],
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rd_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[0U],
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask),
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[0U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rd_addr)) 
                             != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_addr)))) {
                VL_WRITEF("-------- RVFI Monitor error 104 in channel 0: %Ntop_tb.monitor.monitor.ch0_handle_error at time %0t --------\nError message: mismatch in rd_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch0_errcode = 0x68U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)),
                          64,(((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_order[0U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[0U],
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[0U],
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rd_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[0U],
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask),
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[0U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[0U] 
                             != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_wdata))) {
                VL_WRITEF("-------- RVFI Monitor error 105 in channel 0: %Ntop_tb.monitor.monitor.ch0_handle_error at time %0t --------\nError message: mismatch in rd_wdata\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch0_errcode = 0x69U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)),
                          64,(((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_order[0U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[0U],
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[0U],
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rd_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[0U],
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask),
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[0U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[0U] 
                             != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_pc_wdata))) {
                VL_WRITEF("-------- RVFI Monitor error 106 in channel 0: %Ntop_tb.monitor.monitor.ch0_handle_error at time %0t --------\nError message: mismatch in pc_wdata\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch0_errcode = 0x6aU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)),
                          64,(((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_order[0U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[0U],
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[0U],
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rd_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[0U],
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask),
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[0U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask) 
                             != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wmask)))) {
                VL_WRITEF("-------- RVFI Monitor error 108 in channel 0: %Ntop_tb.monitor.monitor.ch0_handle_error at time %0t --------\nError message: mismatch in mem_wmask\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch0_errcode = 0x6cU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)),
                          64,(((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_order[0U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[0U],
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[0U],
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rd_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[0U],
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask),
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[0U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask) 
                                   & (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_rmask))))) {
                VL_WRITEF("-------- RVFI Monitor error 110 in channel 0: %Ntop_tb.monitor.monitor.ch0_handle_error at time %0t --------\nError message: mismatch in mem_rmask[0]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch0_errcode = 0x6eU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)),
                          64,(((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_order[0U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[0U],
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[0U],
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rd_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[0U],
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask),
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[0U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                             & ((0xffU & vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[0U]) 
                                != (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wdata))))) {
                VL_WRITEF("-------- RVFI Monitor error 120 in channel 0: %Ntop_tb.monitor.monitor.ch0_handle_error at time %0t --------\nError message: mismatch in mem_wdata[7:0]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch0_errcode = 0x78U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)),
                          64,(((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_order[0U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[0U],
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[0U],
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rd_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[0U],
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask),
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[0U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 1U)) & ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_rmask) 
                                                  >> 1U))))) {
                VL_WRITEF("-------- RVFI Monitor error 111 in channel 0: %Ntop_tb.monitor.monitor.ch0_handle_error at time %0t --------\nError message: mismatch in mem_rmask[1]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch0_errcode = 0x6fU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)),
                          64,(((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_order[0U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[0U],
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[0U],
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rd_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[0U],
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask),
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[0U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 1U) & ((0xffU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[0U] 
                                                  >> 8U)) 
                                        != (0xffU & 
                                            (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wdata 
                                             >> 8U)))))) {
                VL_WRITEF("-------- RVFI Monitor error 121 in channel 0: %Ntop_tb.monitor.monitor.ch0_handle_error at time %0t --------\nError message: mismatch in mem_wdata[15:8]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch0_errcode = 0x79U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)),
                          64,(((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_order[0U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[0U],
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[0U],
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rd_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[0U],
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask),
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[0U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 2U)) & ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_rmask) 
                                                  >> 2U))))) {
                VL_WRITEF("-------- RVFI Monitor error 112 in channel 0: %Ntop_tb.monitor.monitor.ch0_handle_error at time %0t --------\nError message: mismatch in mem_rmask[2]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch0_errcode = 0x70U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)),
                          64,(((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_order[0U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[0U],
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[0U],
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rd_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[0U],
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask),
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[0U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 2U) & ((0xffU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[0U] 
                                                  >> 0x10U)) 
                                        != (0xffU & 
                                            (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wdata 
                                             >> 0x10U)))))) {
                VL_WRITEF("-------- RVFI Monitor error 122 in channel 0: %Ntop_tb.monitor.monitor.ch0_handle_error at time %0t --------\nError message: mismatch in mem_wdata[23:16]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch0_errcode = 0x7aU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)),
                          64,(((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_order[0U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[0U],
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[0U],
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rd_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[0U],
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask),
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[0U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                 >> 3U)) & ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_rmask) 
                                            >> 3U)))) {
                VL_WRITEF("-------- RVFI Monitor error 113 in channel 0: %Ntop_tb.monitor.monitor.ch0_handle_error at time %0t --------\nError message: mismatch in mem_rmask[3]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch0_errcode = 0x71U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)),
                          64,(((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_order[0U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[0U],
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[0U],
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rd_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[0U],
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask),
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[0U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 3U) & ((vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[0U] 
                                         >> 0x18U) 
                                        != (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wdata 
                                            >> 0x18U))))) {
                VL_WRITEF("-------- RVFI Monitor error 123 in channel 0: %Ntop_tb.monitor.monitor.ch0_handle_error at time %0t --------\nError message: mismatch in mem_wdata[31:24]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch0_errcode = 0x7bU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)),
                          64,(((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_order[0U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[0U],
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[0U],
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rd_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[0U],
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask),
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[0U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[0U] 
                              != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_addr) 
                             & ((0U != (0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask)) 
                                | (0U != (0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask)))))) {
                VL_WRITEF("-------- RVFI Monitor error 107 in channel 0: %Ntop_tb.monitor.monitor.ch0_handle_error at time %0t --------\nError message: mismatch in mem_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch0_errcode = 0x6bU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)),
                          64,(((QData)((IData)(vlSelf->__PVT__monitor__DOT__rvfi_order[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->__PVT__monitor__DOT__rvfi_order[0U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[0U],
                          1,(1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr)),
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[0U],
                          5,(0x1fU & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_rd_addr)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[0U],
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask),
                          4,(0xfU & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[0U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[0U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__PVT__spec_mem_wdata);
            }
        }
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ch1_errcode = 0U;
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                                >> 1U)))) {
        if (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_valid) {
            if (VL_UNLIKELY(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_trap)) {
                VL_WRITEF("-------- RVFI Monitor error 201 in channel 1: %Ntop_tb.monitor.monitor.ch1_handle_error at time %0t --------\nError message: mismatch in trap\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch1_errcode = 0xc9U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 1U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[2U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[1U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 1U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 5U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[1U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[1U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 4U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 4U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[1U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((((0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                >> 5U))) 
                              != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs1_addr)) 
                             & (0U != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs1_addr))))) {
                VL_WRITEF("-------- RVFI Monitor error 202 in channel 1: %Ntop_tb.monitor.monitor.ch1_handle_error at time %0t --------\nError message: mismatch in rs1_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch1_errcode = 0xcaU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 1U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[2U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[1U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 1U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 5U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[1U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[1U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 4U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 4U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[1U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((((0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                                >> 5U))) 
                              != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs2_addr)) 
                             & (0U != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs2_addr))))) {
                VL_WRITEF("-------- RVFI Monitor error 203 in channel 1: %Ntop_tb.monitor.monitor.ch1_handle_error at time %0t --------\nError message: mismatch in rs2_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch1_errcode = 0xcbU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 1U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[2U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[1U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 1U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 5U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[1U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[1U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 4U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 4U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[1U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                               >> 5U))) 
                             != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_addr)))) {
                VL_WRITEF("-------- RVFI Monitor error 204 in channel 1: %Ntop_tb.monitor.monitor.ch1_handle_error at time %0t --------\nError message: mismatch in rd_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch1_errcode = 0xccU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 1U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[2U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[1U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 1U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 5U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[1U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[1U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 4U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 4U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[1U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[1U] 
                             != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_wdata))) {
                VL_WRITEF("-------- RVFI Monitor error 205 in channel 1: %Ntop_tb.monitor.monitor.ch1_handle_error at time %0t --------\nError message: mismatch in rd_wdata\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch1_errcode = 0xcdU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 1U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[2U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[1U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 1U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 5U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[1U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[1U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 4U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 4U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[1U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[1U] 
                             != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_pc_wdata))) {
                VL_WRITEF("-------- RVFI Monitor error 206 in channel 1: %Ntop_tb.monitor.monitor.ch1_handle_error at time %0t --------\nError message: mismatch in pc_wdata\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch1_errcode = 0xceU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 1U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[2U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[1U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 1U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 5U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[1U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[1U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 4U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 4U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[1U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                      >> 4U)) != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wmask)))) {
                VL_WRITEF("-------- RVFI Monitor error 208 in channel 1: %Ntop_tb.monitor.monitor.ch1_handle_error at time %0t --------\nError message: mismatch in mem_wmask\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch1_errcode = 0xd0U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 1U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[2U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[1U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 1U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 5U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[1U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[1U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 4U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 4U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[1U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 4U)) & (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_rmask))))) {
                VL_WRITEF("-------- RVFI Monitor error 210 in channel 1: %Ntop_tb.monitor.monitor.ch1_handle_error at time %0t --------\nError message: mismatch in mem_rmask[0]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch1_errcode = 0xd2U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 1U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[2U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[1U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 1U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 5U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[1U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[1U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 4U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 4U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[1U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 4U) & ((0xffU & vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[1U]) 
                                        != (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wdata))))) {
                VL_WRITEF("-------- RVFI Monitor error 220 in channel 1: %Ntop_tb.monitor.monitor.ch1_handle_error at time %0t --------\nError message: mismatch in mem_wdata[7:0]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch1_errcode = 0xdcU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 1U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[2U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[1U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 1U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 5U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[1U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[1U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 4U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 4U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[1U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 5U)) & ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_rmask) 
                                                  >> 1U))))) {
                VL_WRITEF("-------- RVFI Monitor error 211 in channel 1: %Ntop_tb.monitor.monitor.ch1_handle_error at time %0t --------\nError message: mismatch in mem_rmask[1]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch1_errcode = 0xd3U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 1U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[2U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[1U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 1U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 5U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[1U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[1U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 4U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 4U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[1U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 5U) & ((0xffU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[1U] 
                                                  >> 8U)) 
                                        != (0xffU & 
                                            (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wdata 
                                             >> 8U)))))) {
                VL_WRITEF("-------- RVFI Monitor error 221 in channel 1: %Ntop_tb.monitor.monitor.ch1_handle_error at time %0t --------\nError message: mismatch in mem_wdata[15:8]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch1_errcode = 0xddU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 1U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[2U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[1U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 1U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 5U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[1U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[1U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 4U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 4U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[1U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 6U)) & ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_rmask) 
                                                  >> 2U))))) {
                VL_WRITEF("-------- RVFI Monitor error 212 in channel 1: %Ntop_tb.monitor.monitor.ch1_handle_error at time %0t --------\nError message: mismatch in mem_rmask[2]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch1_errcode = 0xd4U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 1U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[2U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[1U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 1U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 5U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[1U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[1U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 4U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 4U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[1U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 6U) & ((0xffU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[1U] 
                                                  >> 0x10U)) 
                                        != (0xffU & 
                                            (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wdata 
                                             >> 0x10U)))))) {
                VL_WRITEF("-------- RVFI Monitor error 222 in channel 1: %Ntop_tb.monitor.monitor.ch1_handle_error at time %0t --------\nError message: mismatch in mem_wdata[23:16]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch1_errcode = 0xdeU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 1U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[2U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[1U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 1U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 5U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[1U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[1U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 4U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 4U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[1U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                 >> 7U)) & ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_rmask) 
                                            >> 3U)))) {
                VL_WRITEF("-------- RVFI Monitor error 213 in channel 1: %Ntop_tb.monitor.monitor.ch1_handle_error at time %0t --------\nError message: mismatch in mem_rmask[3]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch1_errcode = 0xd5U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 1U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[2U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[1U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 1U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 5U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[1U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[1U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 4U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 4U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[1U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 7U) & ((vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[1U] 
                                         >> 0x18U) 
                                        != (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wdata 
                                            >> 0x18U))))) {
                VL_WRITEF("-------- RVFI Monitor error 223 in channel 1: %Ntop_tb.monitor.monitor.ch1_handle_error at time %0t --------\nError message: mismatch in mem_wdata[31:24]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch1_errcode = 0xdfU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 1U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[2U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[1U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 1U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 5U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[1U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[1U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 4U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 4U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[1U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[1U] 
                              != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_addr) 
                             & (IData)(((0U != (0xf0U 
                                                & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask)) 
                                        | (0U != (0xf0U 
                                                  & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask))))))) {
                VL_WRITEF("-------- RVFI Monitor error 207 in channel 1: %Ntop_tb.monitor.monitor.ch1_handle_error at time %0t --------\nError message: mismatch in mem_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch1_errcode = 0xcfU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 1U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[2U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[1U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 1U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 5U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[1U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 5U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[1U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 4U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 4U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[1U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[1U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__PVT__spec_mem_wdata);
            }
        }
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ch2_errcode = 0U;
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                                >> 2U)))) {
        if (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_valid) {
            if (VL_UNLIKELY(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_trap)) {
                VL_WRITEF("-------- RVFI Monitor error 301 in channel 2: %Ntop_tb.monitor.monitor.ch2_handle_error at time %0t --------\nError message: mismatch in trap\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch2_errcode = 0x12dU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 2U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[4U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[2U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 2U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xaU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[2U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[2U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 8U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 8U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[2U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((((0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                >> 0xaU))) 
                              != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs1_addr)) 
                             & (0U != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs1_addr))))) {
                VL_WRITEF("-------- RVFI Monitor error 302 in channel 2: %Ntop_tb.monitor.monitor.ch2_handle_error at time %0t --------\nError message: mismatch in rs1_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch2_errcode = 0x12eU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 2U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[4U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[2U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 2U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xaU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[2U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[2U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 8U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 8U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[2U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((((0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                                >> 0xaU))) 
                              != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs2_addr)) 
                             & (0U != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs2_addr))))) {
                VL_WRITEF("-------- RVFI Monitor error 303 in channel 2: %Ntop_tb.monitor.monitor.ch2_handle_error at time %0t --------\nError message: mismatch in rs2_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch2_errcode = 0x12fU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 2U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[4U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[2U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 2U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xaU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[2U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[2U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 8U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 8U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[2U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                               >> 0xaU))) 
                             != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_addr)))) {
                VL_WRITEF("-------- RVFI Monitor error 304 in channel 2: %Ntop_tb.monitor.monitor.ch2_handle_error at time %0t --------\nError message: mismatch in rd_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch2_errcode = 0x130U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 2U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[4U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[2U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 2U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xaU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[2U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[2U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 8U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 8U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[2U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[2U] 
                             != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_wdata))) {
                VL_WRITEF("-------- RVFI Monitor error 305 in channel 2: %Ntop_tb.monitor.monitor.ch2_handle_error at time %0t --------\nError message: mismatch in rd_wdata\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch2_errcode = 0x131U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 2U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[4U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[2U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 2U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xaU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[2U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[2U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 8U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 8U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[2U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[2U] 
                             != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_pc_wdata))) {
                VL_WRITEF("-------- RVFI Monitor error 306 in channel 2: %Ntop_tb.monitor.monitor.ch2_handle_error at time %0t --------\nError message: mismatch in pc_wdata\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch2_errcode = 0x132U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 2U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[4U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[2U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 2U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xaU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[2U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[2U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 8U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 8U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[2U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                      >> 8U)) != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wmask)))) {
                VL_WRITEF("-------- RVFI Monitor error 308 in channel 2: %Ntop_tb.monitor.monitor.ch2_handle_error at time %0t --------\nError message: mismatch in mem_wmask\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch2_errcode = 0x134U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 2U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[4U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[2U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 2U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xaU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[2U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[2U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 8U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 8U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[2U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 8U)) & (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_rmask))))) {
                VL_WRITEF("-------- RVFI Monitor error 310 in channel 2: %Ntop_tb.monitor.monitor.ch2_handle_error at time %0t --------\nError message: mismatch in mem_rmask[0]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch2_errcode = 0x136U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 2U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[4U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[2U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 2U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xaU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[2U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[2U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 8U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 8U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[2U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 8U) & ((0xffU & vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[2U]) 
                                        != (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wdata))))) {
                VL_WRITEF("-------- RVFI Monitor error 320 in channel 2: %Ntop_tb.monitor.monitor.ch2_handle_error at time %0t --------\nError message: mismatch in mem_wdata[7:0]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch2_errcode = 0x140U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 2U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[4U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[2U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 2U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xaU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[2U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[2U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 8U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 8U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[2U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 9U)) & ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_rmask) 
                                                  >> 1U))))) {
                VL_WRITEF("-------- RVFI Monitor error 311 in channel 2: %Ntop_tb.monitor.monitor.ch2_handle_error at time %0t --------\nError message: mismatch in mem_rmask[1]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch2_errcode = 0x137U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 2U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[4U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[2U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 2U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xaU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[2U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[2U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 8U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 8U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[2U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 9U) & ((0xffU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[2U] 
                                                  >> 8U)) 
                                        != (0xffU & 
                                            (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wdata 
                                             >> 8U)))))) {
                VL_WRITEF("-------- RVFI Monitor error 321 in channel 2: %Ntop_tb.monitor.monitor.ch2_handle_error at time %0t --------\nError message: mismatch in mem_wdata[15:8]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch2_errcode = 0x141U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 2U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[4U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[2U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 2U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xaU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[2U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[2U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 8U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 8U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[2U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 0xaU)) & 
                                   ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_rmask) 
                                    >> 2U))))) {
                VL_WRITEF("-------- RVFI Monitor error 312 in channel 2: %Ntop_tb.monitor.monitor.ch2_handle_error at time %0t --------\nError message: mismatch in mem_rmask[2]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch2_errcode = 0x138U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 2U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[4U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[2U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 2U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xaU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[2U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[2U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 8U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 8U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[2U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0xaU) & ((0xffU & 
                                           (vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[2U] 
                                            >> 0x10U)) 
                                          != (0xffU 
                                              & (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wdata 
                                                 >> 0x10U)))))) {
                VL_WRITEF("-------- RVFI Monitor error 322 in channel 2: %Ntop_tb.monitor.monitor.ch2_handle_error at time %0t --------\nError message: mismatch in mem_wdata[23:16]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch2_errcode = 0x142U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 2U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[4U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[2U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 2U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xaU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[2U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[2U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 8U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 8U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[2U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                 >> 0xbU)) & ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_rmask) 
                                              >> 3U)))) {
                VL_WRITEF("-------- RVFI Monitor error 313 in channel 2: %Ntop_tb.monitor.monitor.ch2_handle_error at time %0t --------\nError message: mismatch in mem_rmask[3]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch2_errcode = 0x139U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 2U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[4U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[2U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 2U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xaU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[2U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[2U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 8U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 8U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[2U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0xbU) & ((vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[2U] 
                                           >> 0x18U) 
                                          != (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wdata 
                                              >> 0x18U))))) {
                VL_WRITEF("-------- RVFI Monitor error 323 in channel 2: %Ntop_tb.monitor.monitor.ch2_handle_error at time %0t --------\nError message: mismatch in mem_wdata[31:24]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch2_errcode = 0x143U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 2U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[4U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[2U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 2U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xaU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[2U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[2U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 8U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 8U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[2U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[2U] 
                              != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_addr) 
                             & (IData)(((0U != (0xf00U 
                                                & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask)) 
                                        | (0U != (0xf00U 
                                                  & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask))))))) {
                VL_WRITEF("-------- RVFI Monitor error 307 in channel 2: %Ntop_tb.monitor.monitor.ch2_handle_error at time %0t --------\nError message: mismatch in mem_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch2_errcode = 0x133U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 2U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[4U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[2U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 2U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xaU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[2U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xaU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[2U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 8U)),4,(0xfU 
                                                & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                   >> 8U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[2U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[2U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__PVT__spec_mem_wdata);
            }
        }
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ch3_errcode = 0U;
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                                >> 3U)))) {
        if (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_valid) {
            if (VL_UNLIKELY(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_trap)) {
                VL_WRITEF("-------- RVFI Monitor error 401 in channel 3: %Ntop_tb.monitor.monitor.ch3_handle_error at time %0t --------\nError message: mismatch in trap\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch3_errcode = 0x191U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 3U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[6U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[3U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 3U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xfU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[3U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[3U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0xcU)),4,(0xfU 
                                                  & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                     >> 0xcU)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[3U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((((0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                >> 0xfU))) 
                              != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs1_addr)) 
                             & (0U != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs1_addr))))) {
                VL_WRITEF("-------- RVFI Monitor error 402 in channel 3: %Ntop_tb.monitor.monitor.ch3_handle_error at time %0t --------\nError message: mismatch in rs1_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch3_errcode = 0x192U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 3U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[6U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[3U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 3U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xfU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[3U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[3U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0xcU)),4,(0xfU 
                                                  & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                     >> 0xcU)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[3U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((((0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                                >> 0xfU))) 
                              != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs2_addr)) 
                             & (0U != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs2_addr))))) {
                VL_WRITEF("-------- RVFI Monitor error 403 in channel 3: %Ntop_tb.monitor.monitor.ch3_handle_error at time %0t --------\nError message: mismatch in rs2_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch3_errcode = 0x193U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 3U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[6U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[3U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 3U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xfU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[3U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[3U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0xcU)),4,(0xfU 
                                                  & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                     >> 0xcU)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[3U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                               >> 0xfU))) 
                             != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_addr)))) {
                VL_WRITEF("-------- RVFI Monitor error 404 in channel 3: %Ntop_tb.monitor.monitor.ch3_handle_error at time %0t --------\nError message: mismatch in rd_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch3_errcode = 0x194U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 3U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[6U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[3U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 3U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xfU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[3U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[3U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0xcU)),4,(0xfU 
                                                  & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                     >> 0xcU)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[3U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[3U] 
                             != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_wdata))) {
                VL_WRITEF("-------- RVFI Monitor error 405 in channel 3: %Ntop_tb.monitor.monitor.ch3_handle_error at time %0t --------\nError message: mismatch in rd_wdata\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch3_errcode = 0x195U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 3U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[6U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[3U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 3U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xfU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[3U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[3U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0xcU)),4,(0xfU 
                                                  & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                     >> 0xcU)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[3U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[3U] 
                             != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_pc_wdata))) {
                VL_WRITEF("-------- RVFI Monitor error 406 in channel 3: %Ntop_tb.monitor.monitor.ch3_handle_error at time %0t --------\nError message: mismatch in pc_wdata\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch3_errcode = 0x196U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 3U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[6U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[3U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 3U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xfU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[3U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[3U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0xcU)),4,(0xfU 
                                                  & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                     >> 0xcU)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[3U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                      >> 0xcU)) != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wmask)))) {
                VL_WRITEF("-------- RVFI Monitor error 408 in channel 3: %Ntop_tb.monitor.monitor.ch3_handle_error at time %0t --------\nError message: mismatch in mem_wmask\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch3_errcode = 0x198U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 3U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[6U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[3U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 3U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xfU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[3U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[3U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0xcU)),4,(0xfU 
                                                  & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                     >> 0xcU)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[3U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 0xcU)) & (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_rmask))))) {
                VL_WRITEF("-------- RVFI Monitor error 410 in channel 3: %Ntop_tb.monitor.monitor.ch3_handle_error at time %0t --------\nError message: mismatch in mem_rmask[0]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch3_errcode = 0x19aU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 3U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[6U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[3U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 3U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xfU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[3U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[3U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0xcU)),4,(0xfU 
                                                  & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                     >> 0xcU)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[3U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0xcU) & ((0xffU & 
                                           vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[3U]) 
                                          != (0xffU 
                                              & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wdata))))) {
                VL_WRITEF("-------- RVFI Monitor error 420 in channel 3: %Ntop_tb.monitor.monitor.ch3_handle_error at time %0t --------\nError message: mismatch in mem_wdata[7:0]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch3_errcode = 0x1a4U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 3U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[6U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[3U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 3U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xfU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[3U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[3U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0xcU)),4,(0xfU 
                                                  & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                     >> 0xcU)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[3U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 0xdU)) & 
                                   ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_rmask) 
                                    >> 1U))))) {
                VL_WRITEF("-------- RVFI Monitor error 411 in channel 3: %Ntop_tb.monitor.monitor.ch3_handle_error at time %0t --------\nError message: mismatch in mem_rmask[1]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch3_errcode = 0x19bU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 3U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[6U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[3U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 3U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xfU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[3U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[3U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0xcU)),4,(0xfU 
                                                  & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                     >> 0xcU)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[3U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0xdU) & ((0xffU & 
                                           (vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[3U] 
                                            >> 8U)) 
                                          != (0xffU 
                                              & (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wdata 
                                                 >> 8U)))))) {
                VL_WRITEF("-------- RVFI Monitor error 421 in channel 3: %Ntop_tb.monitor.monitor.ch3_handle_error at time %0t --------\nError message: mismatch in mem_wdata[15:8]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch3_errcode = 0x1a5U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 3U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[6U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[3U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 3U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xfU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[3U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[3U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0xcU)),4,(0xfU 
                                                  & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                     >> 0xcU)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[3U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 0xeU)) & 
                                   ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_rmask) 
                                    >> 2U))))) {
                VL_WRITEF("-------- RVFI Monitor error 412 in channel 3: %Ntop_tb.monitor.monitor.ch3_handle_error at time %0t --------\nError message: mismatch in mem_rmask[2]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch3_errcode = 0x19cU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 3U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[6U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[3U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 3U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xfU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[3U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[3U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0xcU)),4,(0xfU 
                                                  & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                     >> 0xcU)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[3U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0xeU) & ((0xffU & 
                                           (vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[3U] 
                                            >> 0x10U)) 
                                          != (0xffU 
                                              & (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wdata 
                                                 >> 0x10U)))))) {
                VL_WRITEF("-------- RVFI Monitor error 422 in channel 3: %Ntop_tb.monitor.monitor.ch3_handle_error at time %0t --------\nError message: mismatch in mem_wdata[23:16]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch3_errcode = 0x1a6U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 3U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[6U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[3U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 3U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xfU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[3U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[3U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0xcU)),4,(0xfU 
                                                  & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                     >> 0xcU)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[3U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                 >> 0xfU)) & ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_rmask) 
                                              >> 3U)))) {
                VL_WRITEF("-------- RVFI Monitor error 413 in channel 3: %Ntop_tb.monitor.monitor.ch3_handle_error at time %0t --------\nError message: mismatch in mem_rmask[3]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch3_errcode = 0x19dU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 3U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[6U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[3U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 3U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xfU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[3U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[3U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0xcU)),4,(0xfU 
                                                  & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                     >> 0xcU)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[3U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0xfU) & ((vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[3U] 
                                           >> 0x18U) 
                                          != (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wdata 
                                              >> 0x18U))))) {
                VL_WRITEF("-------- RVFI Monitor error 423 in channel 3: %Ntop_tb.monitor.monitor.ch3_handle_error at time %0t --------\nError message: mismatch in mem_wdata[31:24]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch3_errcode = 0x1a7U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 3U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[6U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[3U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 3U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xfU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[3U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[3U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0xcU)),4,(0xfU 
                                                  & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                     >> 0xcU)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[3U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[3U] 
                              != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_addr) 
                             & (IData)(((0U != (0xf000U 
                                                & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask)) 
                                        | (0U != (0xf000U 
                                                  & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask))))))) {
                VL_WRITEF("-------- RVFI Monitor error 407 in channel 3: %Ntop_tb.monitor.monitor.ch3_handle_error at time %0t --------\nError message: mismatch in mem_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch3_errcode = 0x197U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 3U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[6U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[3U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 3U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0xfU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[3U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0xfU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[3U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0xcU)),4,(0xfU 
                                                  & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                     >> 0xcU)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[3U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[3U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__PVT__spec_mem_wdata);
            }
        }
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ch4_errcode = 0U;
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                                >> 4U)))) {
        if (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_valid) {
            if (VL_UNLIKELY(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_trap)) {
                VL_WRITEF("-------- RVFI Monitor error 501 in channel 4: %Ntop_tb.monitor.monitor.ch4_handle_error at time %0t --------\nError message: mismatch in trap\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch4_errcode = 0x1f5U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 4U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[8U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[4U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 4U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x14U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[4U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[4U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x10U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x10U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[4U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((((0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                >> 0x14U))) 
                              != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs1_addr)) 
                             & (0U != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs1_addr))))) {
                VL_WRITEF("-------- RVFI Monitor error 502 in channel 4: %Ntop_tb.monitor.monitor.ch4_handle_error at time %0t --------\nError message: mismatch in rs1_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch4_errcode = 0x1f6U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 4U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[8U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[4U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 4U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x14U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[4U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[4U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x10U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x10U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[4U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((((0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                                >> 0x14U))) 
                              != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs2_addr)) 
                             & (0U != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs2_addr))))) {
                VL_WRITEF("-------- RVFI Monitor error 503 in channel 4: %Ntop_tb.monitor.monitor.ch4_handle_error at time %0t --------\nError message: mismatch in rs2_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch4_errcode = 0x1f7U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 4U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[8U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[4U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 4U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x14U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[4U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[4U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x10U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x10U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[4U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                               >> 0x14U))) 
                             != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_addr)))) {
                VL_WRITEF("-------- RVFI Monitor error 504 in channel 4: %Ntop_tb.monitor.monitor.ch4_handle_error at time %0t --------\nError message: mismatch in rd_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch4_errcode = 0x1f8U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 4U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[8U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[4U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 4U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x14U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[4U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[4U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x10U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x10U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[4U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[4U] 
                             != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_wdata))) {
                VL_WRITEF("-------- RVFI Monitor error 505 in channel 4: %Ntop_tb.monitor.monitor.ch4_handle_error at time %0t --------\nError message: mismatch in rd_wdata\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch4_errcode = 0x1f9U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 4U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[8U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[4U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 4U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x14U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[4U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[4U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x10U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x10U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[4U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[4U] 
                             != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_pc_wdata))) {
                VL_WRITEF("-------- RVFI Monitor error 506 in channel 4: %Ntop_tb.monitor.monitor.ch4_handle_error at time %0t --------\nError message: mismatch in pc_wdata\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch4_errcode = 0x1faU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 4U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[8U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[4U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 4U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x14U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[4U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[4U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x10U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x10U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[4U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                      >> 0x10U)) != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wmask)))) {
                VL_WRITEF("-------- RVFI Monitor error 508 in channel 4: %Ntop_tb.monitor.monitor.ch4_handle_error at time %0t --------\nError message: mismatch in mem_wmask\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch4_errcode = 0x1fcU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 4U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[8U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[4U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 4U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x14U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[4U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[4U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x10U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x10U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[4U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 0x10U)) & (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_rmask))))) {
                VL_WRITEF("-------- RVFI Monitor error 510 in channel 4: %Ntop_tb.monitor.monitor.ch4_handle_error at time %0t --------\nError message: mismatch in mem_rmask[0]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch4_errcode = 0x1feU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 4U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[8U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[4U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 4U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x14U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[4U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[4U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x10U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x10U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[4U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0x10U) & ((0xffU & 
                                            vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[4U]) 
                                           != (0xffU 
                                               & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wdata))))) {
                VL_WRITEF("-------- RVFI Monitor error 520 in channel 4: %Ntop_tb.monitor.monitor.ch4_handle_error at time %0t --------\nError message: mismatch in mem_wdata[7:0]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch4_errcode = 0x208U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 4U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[8U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[4U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 4U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x14U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[4U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[4U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x10U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x10U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[4U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 0x11U)) & 
                                   ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_rmask) 
                                    >> 1U))))) {
                VL_WRITEF("-------- RVFI Monitor error 511 in channel 4: %Ntop_tb.monitor.monitor.ch4_handle_error at time %0t --------\nError message: mismatch in mem_rmask[1]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch4_errcode = 0x1ffU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 4U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[8U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[4U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 4U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x14U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[4U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[4U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x10U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x10U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[4U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0x11U) & ((0xffU & 
                                            (vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[4U] 
                                             >> 8U)) 
                                           != (0xffU 
                                               & (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wdata 
                                                  >> 8U)))))) {
                VL_WRITEF("-------- RVFI Monitor error 521 in channel 4: %Ntop_tb.monitor.monitor.ch4_handle_error at time %0t --------\nError message: mismatch in mem_wdata[15:8]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch4_errcode = 0x209U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 4U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[8U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[4U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 4U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x14U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[4U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[4U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x10U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x10U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[4U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 0x12U)) & 
                                   ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_rmask) 
                                    >> 2U))))) {
                VL_WRITEF("-------- RVFI Monitor error 512 in channel 4: %Ntop_tb.monitor.monitor.ch4_handle_error at time %0t --------\nError message: mismatch in mem_rmask[2]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch4_errcode = 0x200U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 4U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[8U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[4U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 4U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x14U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[4U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[4U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x10U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x10U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[4U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0x12U) & ((0xffU & 
                                            (vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[4U] 
                                             >> 0x10U)) 
                                           != (0xffU 
                                               & (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wdata 
                                                  >> 0x10U)))))) {
                VL_WRITEF("-------- RVFI Monitor error 522 in channel 4: %Ntop_tb.monitor.monitor.ch4_handle_error at time %0t --------\nError message: mismatch in mem_wdata[23:16]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch4_errcode = 0x20aU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 4U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[8U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[4U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 4U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x14U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[4U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[4U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x10U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x10U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[4U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                 >> 0x13U)) & ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_rmask) 
                                               >> 3U)))) {
                VL_WRITEF("-------- RVFI Monitor error 513 in channel 4: %Ntop_tb.monitor.monitor.ch4_handle_error at time %0t --------\nError message: mismatch in mem_rmask[3]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch4_errcode = 0x201U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 4U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[8U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[4U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 4U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x14U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[4U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[4U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x10U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x10U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[4U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0x13U) & ((vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[4U] 
                                            >> 0x18U) 
                                           != (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wdata 
                                               >> 0x18U))))) {
                VL_WRITEF("-------- RVFI Monitor error 523 in channel 4: %Ntop_tb.monitor.monitor.ch4_handle_error at time %0t --------\nError message: mismatch in mem_wdata[31:24]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch4_errcode = 0x20bU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 4U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[8U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[4U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 4U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x14U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[4U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[4U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x10U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x10U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[4U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[4U] 
                              != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_addr) 
                             & (IData)(((0U != (0xf0000U 
                                                & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask)) 
                                        | (0U != (0xf0000U 
                                                  & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask))))))) {
                VL_WRITEF("-------- RVFI Monitor error 507 in channel 4: %Ntop_tb.monitor.monitor.ch4_handle_error at time %0t --------\nError message: mismatch in mem_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch4_errcode = 0x1fbU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 4U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[8U]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[4U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 4U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x14U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[4U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x14U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[4U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x10U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x10U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[4U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[4U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__PVT__spec_mem_wdata);
            }
        }
    }
}
