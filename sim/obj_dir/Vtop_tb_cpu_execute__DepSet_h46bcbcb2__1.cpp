// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb_cpu_execute.h"

VL_INLINE_OPT void Vtop_tb_cpu_execute___nba_sequent__TOP__top_tb__dut__cpu_execute__1(Vtop_tb_cpu_execute* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_tb_cpu_execute___nba_sequent__TOP__top_tb__dut__cpu_execute__1\n"); );
    // Body
    vlSelf->__PVT__store_done = ((4U == (IData)(vlSelf->__PVT__mem__DOT__state)) 
                                 & (IData)(vlSymsp->TOP.dmem_resp));
    vlSelf->__PVT__dmem_write = 0U;
    vlSelf->__PVT__dmem_wmask = 0U;
    vlSelf->__PVT__dmem_wdata = 0U;
    if ((0U == (IData)(vlSelf->__PVT__mem__DOT__state))) {
        if (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__store_issue_valid_o) {
            vlSelf->__PVT__dmem_write = 1U;
            vlSelf->__PVT__dmem_wmask = vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__store_issue_wmask_o;
            vlSelf->__PVT__dmem_wdata = vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__store_issue_wdata_o;
        }
    } else if ((1U != (IData)(vlSelf->__PVT__mem__DOT__state))) {
        if ((4U == (IData)(vlSelf->__PVT__mem__DOT__state))) {
            vlSelf->__PVT__dmem_write = 1U;
            vlSelf->__PVT__dmem_wmask = vlSelf->__PVT__mem__DOT__lat_wmask;
            vlSelf->__PVT__dmem_wdata = vlSelf->__PVT__mem__DOT__lat_wdata;
        }
    }
}

extern const VlWide<12>/*383:0*/ Vtop_tb__ConstPool__CONST_h7e30f2cb_0;

VL_INLINE_OPT void Vtop_tb_cpu_execute___nba_sequent__TOP__top_tb__dut__cpu_execute__2(Vtop_tb_cpu_execute* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_tb_cpu_execute___nba_sequent__TOP__top_tb__dut__cpu_execute__2\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->__PVT__mem__DOT__flush_load = 0U;
    if (((1U == (IData)(vlSelf->__PVT__mem__DOT__state)) 
         | (2U == (IData)(vlSelf->__PVT__mem__DOT__state)))) {
        if (((IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict) 
             & ((0x3fU & (((vlSelf->__PVT__mem__DOT__lat_rob_data[5U] 
                            << 0xaU) | (vlSelf->__PVT__mem__DOT__lat_rob_data[5U] 
                                        >> 0x16U)) 
                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr))) 
                > (0x3fU & ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict_rob_idx) 
                            - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)))))) {
            vlSelf->__PVT__mem__DOT__flush_load = 1U;
        }
        if (((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_mispredict_o) 
             & ((0x3fU & (((vlSelf->__PVT__mem__DOT__lat_rob_data[5U] 
                            << 0xaU) | (vlSelf->__PVT__mem__DOT__lat_rob_data[5U] 
                                        >> 0x16U)) 
                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr))) 
                > (0x3fU & ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_rob_idx_o) 
                            - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)))))) {
            vlSelf->__PVT__mem__DOT__flush_load = 1U;
        }
    } else if ((((0U == (IData)(vlSelf->__PVT__mem__DOT__state)) 
                 & (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__issue_sel_valid)) 
                & (~ (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__store_issue_valid_o)))) {
        if (((IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict) 
             & ((0x3fU & (((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__load_issue_rob_data_o[5U] 
                            << 0xaU) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__load_issue_rob_data_o[5U] 
                                        >> 0x16U)) 
                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr))) 
                > (0x3fU & ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict_rob_idx) 
                            - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)))))) {
            vlSelf->__PVT__mem__DOT__flush_load = 1U;
        }
        if (((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_mispredict_o) 
             & ((0x3fU & (((vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__load_issue_rob_data_o[5U] 
                            << 0xaU) | (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__load_issue_rob_data_o[5U] 
                                        >> 0x16U)) 
                          - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr))) 
                > (0x3fU & ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_rob_idx_o) 
                            - (IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_commit__DOT__rob__DOT__rdPtr)))))) {
            vlSelf->__PVT__mem__DOT__flush_load = 1U;
        }
    }
    vlSelf->__Vcellinp__lsq__wr_en = ((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[0xbU] 
                                       >> 0x1dU) & 
                                      ((2U == (7U & (IData)(
                                                            (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                             >> 0x19U)))) 
                                       | (3U == (7U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                            >> 0x19U))))));
    vlSelf->__Vcellinp__alu_rs__wr_en = (IData)(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[0xbU] 
                                                  >> 0x1dU) 
                                                 & (0ULL 
                                                    == 
                                                    (0xe000000ULL 
                                                     & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o))));
    vlSelf->__Vcellinp__cmp_rs__wr_en = (IData)(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[0xbU] 
                                                  >> 0x1dU) 
                                                 & (0x2000000ULL 
                                                    == 
                                                    (0xe000000ULL 
                                                     & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o))));
    vlSelf->__Vcellinp__jump_rs__wr_en = ((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[0xbU] 
                                           >> 0x1dU) 
                                          & ((4U == 
                                              (7U & (IData)(
                                                            (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                             >> 0x19U)))) 
                                             | (5U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                            >> 0x19U))))));
    vlSelf->__Vcellinp__mul_rs__wr_en = (IData)(((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[0xbU] 
                                                  >> 0x1dU) 
                                                 & (0xc000000ULL 
                                                    == 
                                                    (0xe000000ULL 
                                                     & vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o))));
    vlSelf->__PVT__mem__DOT__dmem_rmask = 0U;
    vlSelf->__PVT__dmem_read = 0U;
    vlSelf->__PVT__dmem_addr = 0U;
    if ((0U == (IData)(vlSelf->__PVT__mem__DOT__state))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__store_issue_valid_o)))) {
            if (((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__issue_sel_valid) 
                 & (~ (IData)(vlSelf->__PVT__mem__DOT__flush_load)))) {
                vlSelf->__PVT__mem__DOT__dmem_rmask 
                    = vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__load_issue_rmask_o;
                vlSelf->__PVT__dmem_read = 1U;
            }
        }
        if (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__store_issue_valid_o) {
            vlSelf->__PVT__dmem_addr = vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__store_issue_addr_o;
        } else if (((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__issue_sel_valid) 
                    & (~ (IData)(vlSelf->__PVT__mem__DOT__flush_load)))) {
            vlSelf->__PVT__dmem_addr = vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__load_issue_addr_o;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__mem__DOT__state))) {
        vlSelf->__PVT__mem__DOT__dmem_rmask = vlSelf->__PVT__mem__DOT__lat_rmask;
        vlSelf->__PVT__dmem_read = 1U;
        vlSelf->__PVT__dmem_addr = vlSelf->__PVT__mem__DOT__lat_addr;
    } else if ((4U == (IData)(vlSelf->__PVT__mem__DOT__state))) {
        vlSelf->__PVT__dmem_addr = vlSelf->__PVT__mem__DOT__lat_addr;
    }
    vlSelf->__PVT__wb_load_rob_data[0U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0U];
    vlSelf->__PVT__wb_load_rob_data[1U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[1U];
    vlSelf->__PVT__wb_load_rob_data[2U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[2U];
    vlSelf->__PVT__wb_load_rob_data[3U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[3U];
    vlSelf->__PVT__wb_load_rob_data[4U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[4U];
    vlSelf->__PVT__wb_load_rob_data[5U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[5U];
    vlSelf->__PVT__wb_load_rob_data[6U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[6U];
    vlSelf->__PVT__wb_load_rob_data[7U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[7U];
    vlSelf->__PVT__wb_load_rob_data[8U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[8U];
    vlSelf->__PVT__wb_load_rob_data[9U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[9U];
    vlSelf->__PVT__wb_load_rob_data[0xaU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xaU];
    vlSelf->__PVT__wb_load_rob_data[0xbU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xbU];
    if (((2U == (IData)(vlSelf->__PVT__mem__DOT__state)) 
         & (~ (IData)(vlSelf->__PVT__mem__DOT__flush_load)))) {
        vlSelf->__PVT__wb_load_rob_data[0U] = vlSelf->__PVT__mem__DOT__lat_rob_data[0U];
        vlSelf->__PVT__wb_load_rob_data[1U] = vlSelf->__PVT__mem__DOT__lat_rob_data[1U];
        vlSelf->__PVT__wb_load_rob_data[2U] = vlSelf->__PVT__mem__DOT__lat_rob_data[2U];
        vlSelf->__PVT__wb_load_rob_data[3U] = vlSelf->__PVT__mem__DOT__lat_rob_data[3U];
        vlSelf->__PVT__wb_load_rob_data[4U] = vlSelf->__PVT__mem__DOT__lat_rob_data[4U];
        vlSelf->__PVT__wb_load_rob_data[5U] = vlSelf->__PVT__mem__DOT__lat_rob_data[5U];
        vlSelf->__PVT__wb_load_rob_data[6U] = vlSelf->__PVT__mem__DOT__lat_rob_data[6U];
        vlSelf->__PVT__wb_load_rob_data[7U] = vlSelf->__PVT__mem__DOT__lat_rob_data[7U];
        vlSelf->__PVT__wb_load_rob_data[8U] = vlSelf->__PVT__mem__DOT__lat_rob_data[8U];
        vlSelf->__PVT__wb_load_rob_data[9U] = vlSelf->__PVT__mem__DOT__lat_rob_data[9U];
        vlSelf->__PVT__wb_load_rob_data[0xaU] = vlSelf->__PVT__mem__DOT__lat_rob_data[0xaU];
        vlSelf->__PVT__wb_load_rob_data[0xbU] = vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU];
        vlSelf->__PVT__wb_load_rob_data[5U] = (0xfffffffU 
                                               & vlSelf->__PVT__wb_load_rob_data[5U]);
        vlSelf->__PVT__wb_load_rob_data[6U] = (0xf0000000U 
                                               & vlSelf->__PVT__wb_load_rob_data[6U]);
        vlSelf->__PVT__wb_load_rob_data[2U] = ((0x3fffU 
                                                & vlSelf->__PVT__wb_load_rob_data[2U]) 
                                               | ((IData)(
                                                          (((QData)((IData)(vlSelf->__PVT__mem__DOT__lat_rmask)) 
                                                            << 0x24U) 
                                                           | (QData)((IData)(vlSelf->__PVT__mem__DOT__lat_rdata)))) 
                                                  << 0xeU));
        vlSelf->__PVT__wb_load_rob_data[3U] = (((IData)(
                                                        (((QData)((IData)(vlSelf->__PVT__mem__DOT__lat_rmask)) 
                                                          << 0x24U) 
                                                         | (QData)((IData)(vlSelf->__PVT__mem__DOT__lat_rdata)))) 
                                                >> 0x12U) 
                                               | ((vlSelf->__PVT__mem__DOT__lat_addr 
                                                   << 0x16U) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(vlSelf->__PVT__mem__DOT__lat_rmask)) 
                                                                << 0x24U) 
                                                               | (QData)((IData)(vlSelf->__PVT__mem__DOT__lat_rdata))) 
                                                              >> 0x20U)) 
                                                     << 0xeU)));
        vlSelf->__PVT__wb_load_rob_data[4U] = ((0xffc00000U 
                                                & vlSelf->__PVT__wb_load_rob_data[4U]) 
                                               | (((0x3fffU 
                                                    & (vlSelf->__PVT__mem__DOT__lat_addr 
                                                       >> 0xaU)) 
                                                   | ((IData)(
                                                              ((((QData)((IData)(vlSelf->__PVT__mem__DOT__lat_rmask)) 
                                                                 << 0x24U) 
                                                                | (QData)((IData)(vlSelf->__PVT__mem__DOT__lat_rdata))) 
                                                               >> 0x20U)) 
                                                      >> 0x12U)) 
                                                  | (0x3fc000U 
                                                     & (vlSelf->__PVT__mem__DOT__lat_addr 
                                                        >> 0xaU))));
        vlSelf->__PVT__wb_load_rob_data[1U] = (0x3fffU 
                                               & vlSelf->__PVT__wb_load_rob_data[1U]);
        vlSelf->__PVT__wb_load_rob_data[2U] = (0xffffc000U 
                                               & vlSelf->__PVT__wb_load_rob_data[2U]);
        vlSelf->__PVT__wb_load_rob_data[1U] = (0xfffff7ffU 
                                               & vlSelf->__PVT__wb_load_rob_data[1U]);
        vlSelf->__PVT__wb_load_rob_data[0U] = ((0x1ffU 
                                                & vlSelf->__PVT__wb_load_rob_data[0U]) 
                                               | ((IData)(
                                                          ((QData)((IData)(
                                                                           ((IData)(4U) 
                                                                            + 
                                                                            ((vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                              << 0x18U) 
                                                                             | (vlSelf->__PVT__mem__DOT__lat_rob_data[0xaU] 
                                                                                >> 8U))))) 
                                                           << 1U)) 
                                                  << 9U));
        vlSelf->__PVT__wb_load_rob_data[1U] = ((0xfffffc00U 
                                                & vlSelf->__PVT__wb_load_rob_data[1U]) 
                                               | (((IData)(
                                                           ((QData)((IData)(
                                                                            ((IData)(4U) 
                                                                             + 
                                                                             ((vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                               << 0x18U) 
                                                                              | (vlSelf->__PVT__mem__DOT__lat_rob_data[0xaU] 
                                                                                >> 8U))))) 
                                                            << 1U)) 
                                                   >> 0x17U) 
                                                  | ((IData)(
                                                             (((QData)((IData)(
                                                                               ((IData)(4U) 
                                                                                + 
                                                                                ((vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__mem__DOT__lat_rob_data[0xaU] 
                                                                                >> 8U))))) 
                                                               << 1U) 
                                                              >> 0x20U)) 
                                                     << 9U)));
        vlSelf->__PVT__wb_load_rob_data[4U] = ((0x3fffffU 
                                                & vlSelf->__PVT__wb_load_rob_data[4U]) 
                                               | (vlSelf->__PVT__mem__DOT__rd_v 
                                                  << 0x16U));
        vlSelf->__PVT__wb_load_rob_data[5U] = ((0xffc00000U 
                                                & vlSelf->__PVT__wb_load_rob_data[5U]) 
                                               | (vlSelf->__PVT__mem__DOT__rd_v 
                                                  >> 0xaU));
        vlSelf->__PVT__wb_load_rob_data[0xbU] = (0x10000000U 
                                                 | vlSelf->__PVT__wb_load_rob_data[0xbU]);
    }
    vlSelf->__PVT__wb_load = ((2U == (IData)(vlSelf->__PVT__mem__DOT__state)) 
                              & ((~ (IData)(vlSelf->__PVT__mem__DOT__flush_load)) 
                                 & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                    >> 0x1bU)));
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[0U][0U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[0U][0U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[0U][1U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[0U][1U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[0U][2U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[0U][2U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[0U][3U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[0U][3U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[0U][4U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[0U][4U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[0U][5U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[0U][5U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[0U][6U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[0U][6U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[0U][7U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[0U][7U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[0U][8U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[0U][8U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[0U][9U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[0U][9U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[0U][0xaU] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[0U][0xaU];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[0U][0xbU] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[0U][0xbU];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[1U][0U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[1U][0U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[1U][1U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[1U][1U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[1U][2U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[1U][2U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[1U][3U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[1U][3U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[1U][4U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[1U][4U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[1U][5U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[1U][5U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[1U][6U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[1U][6U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[1U][7U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[1U][7U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[1U][8U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[1U][8U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[1U][9U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[1U][9U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[1U][0xaU] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[1U][0xaU];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[1U][0xbU] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[1U][0xbU];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[2U][0U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[2U][0U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[2U][1U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[2U][1U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[2U][2U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[2U][2U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[2U][3U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[2U][3U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[2U][4U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[2U][4U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[2U][5U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[2U][5U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[2U][6U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[2U][6U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[2U][7U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[2U][7U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[2U][8U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[2U][8U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[2U][9U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[2U][9U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[2U][0xaU] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[2U][0xaU];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[2U][0xbU] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[2U][0xbU];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[3U][0U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[3U][0U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[3U][1U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[3U][1U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[3U][2U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[3U][2U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[3U][3U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[3U][3U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[3U][4U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[3U][4U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[3U][5U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[3U][5U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[3U][6U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[3U][6U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[3U][7U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[3U][7U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[3U][8U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[3U][8U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[3U][9U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[3U][9U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[3U][0xaU] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[3U][0xaU];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[3U][0xbU] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[3U][0xbU];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[4U][0U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[4U][0U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[4U][1U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[4U][1U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[4U][2U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[4U][2U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[4U][3U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[4U][3U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[4U][4U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[4U][4U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[4U][5U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[4U][5U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[4U][6U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[4U][6U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[4U][7U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[4U][7U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[4U][8U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[4U][8U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[4U][9U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[4U][9U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[4U][0xaU] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[4U][0xaU];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[4U][0xbU] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[4U][0xbU];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[5U][0U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[5U][0U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[5U][1U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[5U][1U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[5U][2U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[5U][2U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[5U][3U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[5U][3U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[5U][4U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[5U][4U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[5U][5U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[5U][5U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[5U][6U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[5U][6U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[5U][7U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[5U][7U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[5U][8U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[5U][8U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[5U][9U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[5U][9U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[5U][0xaU] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[5U][0xaU];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[5U][0xbU] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[5U][0xbU];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[6U][0U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[6U][0U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[6U][1U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[6U][1U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[6U][2U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[6U][2U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[6U][3U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[6U][3U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[6U][4U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[6U][4U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[6U][5U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[6U][5U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[6U][6U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[6U][6U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[6U][7U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[6U][7U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[6U][8U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[6U][8U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[6U][9U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[6U][9U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[6U][0xaU] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[6U][0xaU];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[6U][0xbU] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[6U][0xbU];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[7U][0U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[7U][0U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[7U][1U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[7U][1U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[7U][2U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[7U][2U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[7U][3U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[7U][3U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[7U][4U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[7U][4U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[7U][5U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[7U][5U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[7U][6U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[7U][6U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[7U][7U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[7U][7U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[7U][8U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[7U][8U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[7U][9U] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[7U][9U];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[7U][0xaU] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[7U][0xaU];
    vlSelf->__PVT__alu_rs__DOT__rob_rs_next[7U][0xbU] 
        = vlSelf->__PVT__alu_rs__DOT__rob_rs[7U][0xbU];
    vlSelf->__PVT__alu_rs__DOT__midcore_rs_next[0U] 
        = vlSelf->__PVT__alu_rs__DOT__midcore_rs[0U];
    vlSelf->__PVT__alu_rs__DOT__midcore_rs_next[1U] 
        = vlSelf->__PVT__alu_rs__DOT__midcore_rs[1U];
    vlSelf->__PVT__alu_rs__DOT__midcore_rs_next[2U] 
        = vlSelf->__PVT__alu_rs__DOT__midcore_rs[2U];
    vlSelf->__PVT__alu_rs__DOT__midcore_rs_next[3U] 
        = vlSelf->__PVT__alu_rs__DOT__midcore_rs[3U];
    vlSelf->__PVT__alu_rs__DOT__midcore_rs_next[4U] 
        = vlSelf->__PVT__alu_rs__DOT__midcore_rs[4U];
    vlSelf->__PVT__alu_rs__DOT__midcore_rs_next[5U] 
        = vlSelf->__PVT__alu_rs__DOT__midcore_rs[5U];
    vlSelf->__PVT__alu_rs__DOT__midcore_rs_next[6U] 
        = vlSelf->__PVT__alu_rs__DOT__midcore_rs[6U];
    vlSelf->__PVT__alu_rs__DOT__midcore_rs_next[7U] 
        = vlSelf->__PVT__alu_rs__DOT__midcore_rs[7U];
    vlSelf->__PVT__alu_rs__DOT__valid_next[0U] = vlSelf->__PVT__alu_rs__DOT__valid
        [0U];
    vlSelf->__PVT__alu_rs__DOT__valid_next[1U] = vlSelf->__PVT__alu_rs__DOT__valid
        [1U];
    vlSelf->__PVT__alu_rs__DOT__valid_next[2U] = vlSelf->__PVT__alu_rs__DOT__valid
        [2U];
    vlSelf->__PVT__alu_rs__DOT__valid_next[3U] = vlSelf->__PVT__alu_rs__DOT__valid
        [3U];
    vlSelf->__PVT__alu_rs__DOT__valid_next[4U] = vlSelf->__PVT__alu_rs__DOT__valid
        [4U];
    vlSelf->__PVT__alu_rs__DOT__valid_next[5U] = vlSelf->__PVT__alu_rs__DOT__valid
        [5U];
    vlSelf->__PVT__alu_rs__DOT__valid_next[6U] = vlSelf->__PVT__alu_rs__DOT__valid
        [6U];
    vlSelf->__PVT__alu_rs__DOT__valid_next[7U] = vlSelf->__PVT__alu_rs__DOT__valid
        [7U];
    if ((((((~ (IData)(vlSelf->__PVT__alu_full_o)) 
            & (IData)(vlSelf->__Vcellinp__alu_rs__wr_en)) 
           & (IData)(vlSelf->__PVT__alu_rs__DOT__wr_idx_valid)) 
          & (~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict))) 
         & (~ (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_mispredict_o)))) {
        vlSelf->__PVT__alu_rs__DOT__rob_rs_next[vlSelf->__PVT__alu_rs__DOT__wr_idx][0U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[0U];
        vlSelf->__PVT__alu_rs__DOT__rob_rs_next[vlSelf->__PVT__alu_rs__DOT__wr_idx][1U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[1U];
        vlSelf->__PVT__alu_rs__DOT__rob_rs_next[vlSelf->__PVT__alu_rs__DOT__wr_idx][2U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[2U];
        vlSelf->__PVT__alu_rs__DOT__rob_rs_next[vlSelf->__PVT__alu_rs__DOT__wr_idx][3U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[3U];
        vlSelf->__PVT__alu_rs__DOT__rob_rs_next[vlSelf->__PVT__alu_rs__DOT__wr_idx][4U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[4U];
        vlSelf->__PVT__alu_rs__DOT__rob_rs_next[vlSelf->__PVT__alu_rs__DOT__wr_idx][5U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[5U];
        vlSelf->__PVT__alu_rs__DOT__rob_rs_next[vlSelf->__PVT__alu_rs__DOT__wr_idx][6U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[6U];
        vlSelf->__PVT__alu_rs__DOT__rob_rs_next[vlSelf->__PVT__alu_rs__DOT__wr_idx][7U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[7U];
        vlSelf->__PVT__alu_rs__DOT__rob_rs_next[vlSelf->__PVT__alu_rs__DOT__wr_idx][8U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[8U];
        vlSelf->__PVT__alu_rs__DOT__rob_rs_next[vlSelf->__PVT__alu_rs__DOT__wr_idx][9U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[9U];
        vlSelf->__PVT__alu_rs__DOT__rob_rs_next[vlSelf->__PVT__alu_rs__DOT__wr_idx][0xaU] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[0xaU];
        vlSelf->__PVT__alu_rs__DOT__rob_rs_next[vlSelf->__PVT__alu_rs__DOT__wr_idx][0xbU] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[0xbU];
        vlSelf->__PVT__alu_rs__DOT__midcore_rs_next[vlSelf->__PVT__alu_rs__DOT__wr_idx] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o;
        vlSelf->__PVT__alu_rs__DOT__valid_next[vlSelf->__PVT__alu_rs__DOT__wr_idx] = 1U;
    }
    if ((((~ (IData)(vlSelf->__PVT__alu_empty_i)) & (IData)(vlSelf->__PVT__alu_valid)) 
         & (IData)(vlSelf->__PVT__alu_rs__DOT__rd_idx_valid))) {
        vlSelf->__PVT__alu_rs__DOT__valid_next[vlSelf->__PVT__alu_rs__DOT__rd_idx] = 0U;
    }
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[0U][0U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[0U][0U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[0U][1U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[0U][1U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[0U][2U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[0U][2U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[0U][3U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[0U][3U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[0U][4U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[0U][4U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[0U][5U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[0U][5U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[0U][6U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[0U][6U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[0U][7U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[0U][7U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[0U][8U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[0U][8U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[0U][9U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[0U][9U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[0U][0xaU] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[0U][0xaU];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[0U][0xbU] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[0U][0xbU];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[1U][0U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[1U][0U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[1U][1U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[1U][1U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[1U][2U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[1U][2U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[1U][3U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[1U][3U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[1U][4U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[1U][4U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[1U][5U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[1U][5U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[1U][6U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[1U][6U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[1U][7U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[1U][7U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[1U][8U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[1U][8U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[1U][9U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[1U][9U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[1U][0xaU] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[1U][0xaU];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[1U][0xbU] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[1U][0xbU];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[2U][0U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[2U][0U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[2U][1U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[2U][1U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[2U][2U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[2U][2U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[2U][3U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[2U][3U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[2U][4U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[2U][4U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[2U][5U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[2U][5U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[2U][6U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[2U][6U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[2U][7U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[2U][7U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[2U][8U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[2U][8U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[2U][9U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[2U][9U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[2U][0xaU] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[2U][0xaU];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[2U][0xbU] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[2U][0xbU];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[3U][0U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[3U][0U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[3U][1U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[3U][1U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[3U][2U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[3U][2U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[3U][3U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[3U][3U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[3U][4U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[3U][4U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[3U][5U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[3U][5U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[3U][6U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[3U][6U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[3U][7U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[3U][7U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[3U][8U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[3U][8U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[3U][9U] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[3U][9U];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[3U][0xaU] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[3U][0xaU];
    vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[3U][0xbU] 
        = vlSelf->__PVT__cmp_rs__DOT__rob_rs[3U][0xbU];
    vlSelf->__PVT__cmp_rs__DOT__midcore_rs_next[0U] 
        = vlSelf->__PVT__cmp_rs__DOT__midcore_rs[0U];
    vlSelf->__PVT__cmp_rs__DOT__midcore_rs_next[1U] 
        = vlSelf->__PVT__cmp_rs__DOT__midcore_rs[1U];
    vlSelf->__PVT__cmp_rs__DOT__midcore_rs_next[2U] 
        = vlSelf->__PVT__cmp_rs__DOT__midcore_rs[2U];
    vlSelf->__PVT__cmp_rs__DOT__midcore_rs_next[3U] 
        = vlSelf->__PVT__cmp_rs__DOT__midcore_rs[3U];
    vlSelf->__PVT__cmp_rs__DOT__valid_next[0U] = vlSelf->__PVT__cmp_rs__DOT__valid
        [0U];
    vlSelf->__PVT__cmp_rs__DOT__valid_next[1U] = vlSelf->__PVT__cmp_rs__DOT__valid
        [1U];
    vlSelf->__PVT__cmp_rs__DOT__valid_next[2U] = vlSelf->__PVT__cmp_rs__DOT__valid
        [2U];
    vlSelf->__PVT__cmp_rs__DOT__valid_next[3U] = vlSelf->__PVT__cmp_rs__DOT__valid
        [3U];
    if ((((((~ (IData)(vlSelf->__PVT__cmp_full_o)) 
            & (IData)(vlSelf->__Vcellinp__cmp_rs__wr_en)) 
           & (IData)(vlSelf->__PVT__cmp_rs__DOT__wr_idx_valid)) 
          & (~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict))) 
         & (~ (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_mispredict_o)))) {
        vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[vlSelf->__PVT__cmp_rs__DOT__wr_idx][0U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[0U];
        vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[vlSelf->__PVT__cmp_rs__DOT__wr_idx][1U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[1U];
        vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[vlSelf->__PVT__cmp_rs__DOT__wr_idx][2U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[2U];
        vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[vlSelf->__PVT__cmp_rs__DOT__wr_idx][3U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[3U];
        vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[vlSelf->__PVT__cmp_rs__DOT__wr_idx][4U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[4U];
        vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[vlSelf->__PVT__cmp_rs__DOT__wr_idx][5U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[5U];
        vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[vlSelf->__PVT__cmp_rs__DOT__wr_idx][6U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[6U];
        vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[vlSelf->__PVT__cmp_rs__DOT__wr_idx][7U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[7U];
        vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[vlSelf->__PVT__cmp_rs__DOT__wr_idx][8U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[8U];
        vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[vlSelf->__PVT__cmp_rs__DOT__wr_idx][9U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[9U];
        vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[vlSelf->__PVT__cmp_rs__DOT__wr_idx][0xaU] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[0xaU];
        vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[vlSelf->__PVT__cmp_rs__DOT__wr_idx][0xbU] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[0xbU];
        vlSelf->__PVT__cmp_rs__DOT__midcore_rs_next[vlSelf->__PVT__cmp_rs__DOT__wr_idx] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o;
        vlSelf->__PVT__cmp_rs__DOT__valid_next[vlSelf->__PVT__cmp_rs__DOT__wr_idx] = 1U;
    }
    if ((((~ (IData)(vlSelf->__PVT__cmp_empty_i)) & (IData)(vlSelf->__PVT__cmp_valid_o)) 
         & (IData)(vlSelf->__PVT__cmp_rs__DOT__rd_idx_valid))) {
        vlSelf->__PVT__cmp_rs__DOT__valid_next[vlSelf->__PVT__cmp_rs__DOT__rd_idx] = 0U;
    }
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[0U][0U] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[0U][0U];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[0U][1U] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[0U][1U];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[0U][2U] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[0U][2U];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[0U][3U] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[0U][3U];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[0U][4U] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[0U][4U];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[0U][5U] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[0U][5U];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[0U][6U] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[0U][6U];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[0U][7U] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[0U][7U];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[0U][8U] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[0U][8U];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[0U][9U] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[0U][9U];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[0U][0xaU] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[0U][0xaU];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[0U][0xbU] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[0U][0xbU];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[1U][0U] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[1U][0U];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[1U][1U] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[1U][1U];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[1U][2U] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[1U][2U];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[1U][3U] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[1U][3U];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[1U][4U] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[1U][4U];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[1U][5U] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[1U][5U];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[1U][6U] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[1U][6U];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[1U][7U] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[1U][7U];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[1U][8U] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[1U][8U];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[1U][9U] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[1U][9U];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[1U][0xaU] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[1U][0xaU];
    vlSelf->__PVT__jump_rs__DOT__rob_rs_next[1U][0xbU] 
        = vlSelf->__PVT__jump_rs__DOT__rob_rs[1U][0xbU];
    vlSelf->__PVT__jump_rs__DOT__midcore_rs_next[0U] 
        = vlSelf->__PVT__jump_rs__DOT__midcore_rs[0U];
    vlSelf->__PVT__jump_rs__DOT__midcore_rs_next[1U] 
        = vlSelf->__PVT__jump_rs__DOT__midcore_rs[1U];
    vlSelf->__PVT__jump_rs__DOT__valid_next[0U] = vlSelf->__PVT__jump_rs__DOT__valid
        [0U];
    vlSelf->__PVT__jump_rs__DOT__valid_next[1U] = vlSelf->__PVT__jump_rs__DOT__valid
        [1U];
    if ((((((~ (IData)(vlSelf->__PVT__jump_full_o)) 
            & (IData)(vlSelf->__Vcellinp__jump_rs__wr_en)) 
           & (IData)(vlSelf->__PVT__jump_rs__DOT__wr_idx_valid)) 
          & (~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict))) 
         & (~ (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_mispredict_o)))) {
        vlSelf->__PVT__jump_rs__DOT__rob_rs_next[vlSelf->__PVT__jump_rs__DOT__wr_idx][0U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[0U];
        vlSelf->__PVT__jump_rs__DOT__rob_rs_next[vlSelf->__PVT__jump_rs__DOT__wr_idx][1U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[1U];
        vlSelf->__PVT__jump_rs__DOT__rob_rs_next[vlSelf->__PVT__jump_rs__DOT__wr_idx][2U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[2U];
        vlSelf->__PVT__jump_rs__DOT__rob_rs_next[vlSelf->__PVT__jump_rs__DOT__wr_idx][3U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[3U];
        vlSelf->__PVT__jump_rs__DOT__rob_rs_next[vlSelf->__PVT__jump_rs__DOT__wr_idx][4U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[4U];
        vlSelf->__PVT__jump_rs__DOT__rob_rs_next[vlSelf->__PVT__jump_rs__DOT__wr_idx][5U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[5U];
        vlSelf->__PVT__jump_rs__DOT__rob_rs_next[vlSelf->__PVT__jump_rs__DOT__wr_idx][6U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[6U];
        vlSelf->__PVT__jump_rs__DOT__rob_rs_next[vlSelf->__PVT__jump_rs__DOT__wr_idx][7U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[7U];
        vlSelf->__PVT__jump_rs__DOT__rob_rs_next[vlSelf->__PVT__jump_rs__DOT__wr_idx][8U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[8U];
        vlSelf->__PVT__jump_rs__DOT__rob_rs_next[vlSelf->__PVT__jump_rs__DOT__wr_idx][9U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[9U];
        vlSelf->__PVT__jump_rs__DOT__rob_rs_next[vlSelf->__PVT__jump_rs__DOT__wr_idx][0xaU] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[0xaU];
        vlSelf->__PVT__jump_rs__DOT__rob_rs_next[vlSelf->__PVT__jump_rs__DOT__wr_idx][0xbU] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[0xbU];
        vlSelf->__PVT__jump_rs__DOT__midcore_rs_next[vlSelf->__PVT__jump_rs__DOT__wr_idx] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o;
        vlSelf->__PVT__jump_rs__DOT__valid_next[vlSelf->__PVT__jump_rs__DOT__wr_idx] = 1U;
    }
    if ((((~ (IData)(vlSelf->__PVT__jump_empty_i)) 
          & (IData)(vlSelf->__PVT__jump_valid_o)) & (IData)(vlSelf->__PVT__jump_rs__DOT__rd_idx_valid))) {
        vlSelf->__PVT__jump_rs__DOT__valid_next[vlSelf->__PVT__jump_rs__DOT__rd_idx] = 0U;
    }
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[0U][0U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[0U][0U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[0U][1U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[0U][1U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[0U][2U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[0U][2U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[0U][3U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[0U][3U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[0U][4U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[0U][4U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[0U][5U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[0U][5U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[0U][6U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[0U][6U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[0U][7U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[0U][7U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[0U][8U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[0U][8U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[0U][9U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[0U][9U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[0U][0xaU] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[0U][0xaU];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[0U][0xbU] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[0U][0xbU];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[1U][0U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[1U][0U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[1U][1U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[1U][1U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[1U][2U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[1U][2U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[1U][3U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[1U][3U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[1U][4U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[1U][4U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[1U][5U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[1U][5U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[1U][6U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[1U][6U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[1U][7U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[1U][7U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[1U][8U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[1U][8U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[1U][9U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[1U][9U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[1U][0xaU] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[1U][0xaU];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[1U][0xbU] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[1U][0xbU];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[2U][0U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[2U][0U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[2U][1U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[2U][1U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[2U][2U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[2U][2U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[2U][3U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[2U][3U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[2U][4U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[2U][4U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[2U][5U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[2U][5U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[2U][6U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[2U][6U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[2U][7U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[2U][7U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[2U][8U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[2U][8U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[2U][9U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[2U][9U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[2U][0xaU] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[2U][0xaU];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[2U][0xbU] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[2U][0xbU];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[3U][0U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[3U][0U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[3U][1U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[3U][1U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[3U][2U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[3U][2U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[3U][3U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[3U][3U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[3U][4U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[3U][4U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[3U][5U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[3U][5U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[3U][6U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[3U][6U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[3U][7U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[3U][7U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[3U][8U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[3U][8U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[3U][9U] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[3U][9U];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[3U][0xaU] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[3U][0xaU];
    vlSelf->__PVT__mul_rs__DOT__rob_rs_next[3U][0xbU] 
        = vlSelf->__PVT__mul_rs__DOT__rob_rs[3U][0xbU];
    vlSelf->__PVT__mul_rs__DOT__midcore_rs_next[0U] 
        = vlSelf->__PVT__mul_rs__DOT__midcore_rs[0U];
    vlSelf->__PVT__mul_rs__DOT__midcore_rs_next[1U] 
        = vlSelf->__PVT__mul_rs__DOT__midcore_rs[1U];
    vlSelf->__PVT__mul_rs__DOT__midcore_rs_next[2U] 
        = vlSelf->__PVT__mul_rs__DOT__midcore_rs[2U];
    vlSelf->__PVT__mul_rs__DOT__midcore_rs_next[3U] 
        = vlSelf->__PVT__mul_rs__DOT__midcore_rs[3U];
    vlSelf->__PVT__mul_rs__DOT__valid_next[0U] = vlSelf->__PVT__mul_rs__DOT__valid
        [0U];
    vlSelf->__PVT__mul_rs__DOT__valid_next[1U] = vlSelf->__PVT__mul_rs__DOT__valid
        [1U];
    vlSelf->__PVT__mul_rs__DOT__valid_next[2U] = vlSelf->__PVT__mul_rs__DOT__valid
        [2U];
    vlSelf->__PVT__mul_rs__DOT__valid_next[3U] = vlSelf->__PVT__mul_rs__DOT__valid
        [3U];
    if ((((((~ (IData)(vlSelf->__PVT__mul_full_o)) 
            & (IData)(vlSelf->__Vcellinp__mul_rs__wr_en)) 
           & (IData)(vlSelf->__PVT__mul_rs__DOT__wr_idx_valid)) 
          & (~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict))) 
         & (~ (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_mispredict_o)))) {
        vlSelf->__PVT__mul_rs__DOT__rob_rs_next[vlSelf->__PVT__mul_rs__DOT__wr_idx][0U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[0U];
        vlSelf->__PVT__mul_rs__DOT__rob_rs_next[vlSelf->__PVT__mul_rs__DOT__wr_idx][1U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[1U];
        vlSelf->__PVT__mul_rs__DOT__rob_rs_next[vlSelf->__PVT__mul_rs__DOT__wr_idx][2U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[2U];
        vlSelf->__PVT__mul_rs__DOT__rob_rs_next[vlSelf->__PVT__mul_rs__DOT__wr_idx][3U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[3U];
        vlSelf->__PVT__mul_rs__DOT__rob_rs_next[vlSelf->__PVT__mul_rs__DOT__wr_idx][4U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[4U];
        vlSelf->__PVT__mul_rs__DOT__rob_rs_next[vlSelf->__PVT__mul_rs__DOT__wr_idx][5U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[5U];
        vlSelf->__PVT__mul_rs__DOT__rob_rs_next[vlSelf->__PVT__mul_rs__DOT__wr_idx][6U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[6U];
        vlSelf->__PVT__mul_rs__DOT__rob_rs_next[vlSelf->__PVT__mul_rs__DOT__wr_idx][7U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[7U];
        vlSelf->__PVT__mul_rs__DOT__rob_rs_next[vlSelf->__PVT__mul_rs__DOT__wr_idx][8U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[8U];
        vlSelf->__PVT__mul_rs__DOT__rob_rs_next[vlSelf->__PVT__mul_rs__DOT__wr_idx][9U] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[9U];
        vlSelf->__PVT__mul_rs__DOT__rob_rs_next[vlSelf->__PVT__mul_rs__DOT__wr_idx][0xaU] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[0xaU];
        vlSelf->__PVT__mul_rs__DOT__rob_rs_next[vlSelf->__PVT__mul_rs__DOT__wr_idx][0xbU] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__ROB_midcore_o[0xbU];
        vlSelf->__PVT__mul_rs__DOT__midcore_rs_next[vlSelf->__PVT__mul_rs__DOT__wr_idx] 
            = vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o;
        vlSelf->__PVT__mul_rs__DOT__valid_next[vlSelf->__PVT__mul_rs__DOT__wr_idx] = 1U;
    }
    if ((((~ (IData)(vlSelf->__PVT__mul_empty_i)) & (IData)(vlSelf->__PVT__mul_valid)) 
         & (IData)(vlSelf->__PVT__mul_rs__DOT__rd_idx_valid))) {
        vlSelf->__PVT__mul_rs__DOT__valid_next[vlSelf->__PVT__mul_rs__DOT__rd_idx] = 0U;
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlSelf->__PVT__PRF__DOT__prf_next[__Vilp] = 
            vlSelf->__PVT__PRF__DOT__prf[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (vlSelf->__PVT__wb_alu) {
        vlSelf->__PVT__PRF__DOT__prf_next[(0x7fU & 
                                           (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                            >> 0xfU))] 
            = ((vlSelf->__PVT__alu_ROB_exec_o[5U] << 0xaU) 
               | (vlSelf->__PVT__alu_ROB_exec_o[4U] 
                  >> 0x16U));
    }
    if (vlSelf->__PVT__wb_cmp) {
        vlSelf->__PVT__PRF__DOT__prf_next[(0x7fU & 
                                           (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                            >> 0xfU))] 
            = ((vlSelf->__PVT__cmp_ROB_exec_o[5U] << 0xaU) 
               | (vlSelf->__PVT__cmp_ROB_exec_o[4U] 
                  >> 0x16U));
    }
    if (vlSelf->__PVT__wb_load) {
        vlSelf->__PVT__PRF__DOT__prf_next[(0x7fU & 
                                           (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                            >> 0xfU))] 
            = vlSelf->__PVT__mem__DOT__rd_v;
    }
    if (vlSelf->__PVT__wb_jump) {
        vlSelf->__PVT__PRF__DOT__prf_next[(0x7fU & 
                                           (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                            >> 0xfU))] 
            = ((vlSelf->__PVT__jump_ROB_exec_o[5U] 
                << 0xaU) | (vlSelf->__PVT__jump_ROB_exec_o[4U] 
                            >> 0x16U));
    }
    if (vlSelf->__PVT__wb_mul) {
        vlSelf->__PVT__PRF__DOT__prf_next[(0x7fU & 
                                           (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                            >> 0xfU))] 
            = ((vlSelf->__PVT__mul_ROB_exec_o[5U] << 0xaU) 
               | (vlSelf->__PVT__mul_ROB_exec_o[4U] 
                  >> 0x16U));
    }
    if (vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) {
        vlSelf->__PVT__PRF__DOT__prf_next[vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o] 
            = vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_val_o;
    }
    vlSelf->__PVT__PRF__DOT__prf_next[0U] = 0U;
    vlSelf->__PVT__alu_rs__DOT__pr2_ready_next[0U] 
        = vlSelf->__PVT__alu_rs__DOT__pr2_ready[0U];
    vlSelf->__PVT__alu_rs__DOT__pr2_ready_next[1U] 
        = vlSelf->__PVT__alu_rs__DOT__pr2_ready[1U];
    vlSelf->__PVT__alu_rs__DOT__pr2_ready_next[2U] 
        = vlSelf->__PVT__alu_rs__DOT__pr2_ready[2U];
    vlSelf->__PVT__alu_rs__DOT__pr2_ready_next[3U] 
        = vlSelf->__PVT__alu_rs__DOT__pr2_ready[3U];
    vlSelf->__PVT__alu_rs__DOT__pr2_ready_next[4U] 
        = vlSelf->__PVT__alu_rs__DOT__pr2_ready[4U];
    vlSelf->__PVT__alu_rs__DOT__pr2_ready_next[5U] 
        = vlSelf->__PVT__alu_rs__DOT__pr2_ready[5U];
    vlSelf->__PVT__alu_rs__DOT__pr2_ready_next[6U] 
        = vlSelf->__PVT__alu_rs__DOT__pr2_ready[6U];
    vlSelf->__PVT__alu_rs__DOT__pr2_ready_next[7U] 
        = vlSelf->__PVT__alu_rs__DOT__pr2_ready[7U];
    if ((vlSelf->__PVT__alu_rs__DOT__valid[0U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [0U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                        [0U] 
                                                                        >> 2U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                       [0U] 
                                                                       >> 2U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [0U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                     [0U] 
                                                                     >> 2U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                    [0U] 
                                                                    >> 2U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__alu_rs__DOT__pr2_ready_next[0U] = 1U;
    }
    if ((vlSelf->__PVT__alu_rs__DOT__valid[1U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [1U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                        [1U] 
                                                                        >> 2U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                       [1U] 
                                                                       >> 2U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [1U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                     [1U] 
                                                                     >> 2U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                    [1U] 
                                                                    >> 2U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__alu_rs__DOT__pr2_ready_next[1U] = 1U;
    }
    if ((vlSelf->__PVT__alu_rs__DOT__valid[2U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [2U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                        [2U] 
                                                                        >> 2U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                       [2U] 
                                                                       >> 2U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [2U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                     [2U] 
                                                                     >> 2U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                    [2U] 
                                                                    >> 2U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__alu_rs__DOT__pr2_ready_next[2U] = 1U;
    }
    if ((vlSelf->__PVT__alu_rs__DOT__valid[3U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [3U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                        [3U] 
                                                                        >> 2U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                       [3U] 
                                                                       >> 2U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [3U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                     [3U] 
                                                                     >> 2U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                    [3U] 
                                                                    >> 2U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__alu_rs__DOT__pr2_ready_next[3U] = 1U;
    }
    if ((vlSelf->__PVT__alu_rs__DOT__valid[4U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [4U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                        [4U] 
                                                                        >> 2U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                       [4U] 
                                                                       >> 2U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [4U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                     [4U] 
                                                                     >> 2U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                    [4U] 
                                                                    >> 2U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__alu_rs__DOT__pr2_ready_next[4U] = 1U;
    }
    if ((vlSelf->__PVT__alu_rs__DOT__valid[5U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [5U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                        [5U] 
                                                                        >> 2U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                       [5U] 
                                                                       >> 2U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [5U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                     [5U] 
                                                                     >> 2U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                    [5U] 
                                                                    >> 2U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__alu_rs__DOT__pr2_ready_next[5U] = 1U;
    }
    if ((vlSelf->__PVT__alu_rs__DOT__valid[6U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [6U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                        [6U] 
                                                                        >> 2U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                       [6U] 
                                                                       >> 2U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [6U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                     [6U] 
                                                                     >> 2U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                    [6U] 
                                                                    >> 2U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__alu_rs__DOT__pr2_ready_next[6U] = 1U;
    }
    if ((vlSelf->__PVT__alu_rs__DOT__valid[7U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [7U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                        [7U] 
                                                                        >> 2U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                       [7U] 
                                                                       >> 2U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [7U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                     [7U] 
                                                                     >> 2U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                    [7U] 
                                                                    >> 2U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__alu_rs__DOT__pr2_ready_next[7U] = 1U;
    }
    if ((((~ (IData)(vlSelf->__PVT__alu_full_o)) & (IData)(vlSelf->__Vcellinp__alu_rs__wr_en)) 
         & (IData)(vlSelf->__PVT__alu_rs__DOT__wr_idx_valid))) {
        vlSelf->__PVT__alu_rs__DOT__pr2_ready_next[vlSelf->__PVT__alu_rs__DOT__wr_idx] 
            = (1U & (~ (IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o)));
        if (((IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                      >> 0x10U)) & (((((((IData)(vlSelf->__PVT__wb_alu) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                        >> 2U))) 
                                            == (0x7fU 
                                                & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                   >> 0xfU)))) 
                                        | ((IData)(vlSelf->__PVT__wb_load) 
                                           & ((0x7fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                          >> 2U))) 
                                              == (0x7fU 
                                                  & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                     >> 0xfU))))) 
                                       | ((IData)(vlSelf->__PVT__wb_jump) 
                                          & ((0x7fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                         >> 2U))) 
                                             == (0x7fU 
                                                 & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                    >> 0xfU))))) 
                                      | ((IData)(vlSelf->__PVT__wb_cmp) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                        >> 2U))) 
                                            == (0x7fU 
                                                & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                   >> 0xfU))))) 
                                     | ((IData)(vlSelf->__PVT__wb_mul) 
                                        & ((0x7fU & (IData)(
                                                            (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                             >> 2U))) 
                                           == (0x7fU 
                                               & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                  >> 0xfU))))) 
                                    | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                       & ((0x7fU & (IData)(
                                                           (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                            >> 2U))) 
                                          == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
            vlSelf->__PVT__alu_rs__DOT__pr2_ready_next[vlSelf->__PVT__alu_rs__DOT__wr_idx] = 1U;
        }
    }
    vlSelf->__PVT__cmp_rs__DOT__pr2_ready_next[0U] 
        = vlSelf->__PVT__cmp_rs__DOT__pr2_ready[0U];
    vlSelf->__PVT__cmp_rs__DOT__pr2_ready_next[1U] 
        = vlSelf->__PVT__cmp_rs__DOT__pr2_ready[1U];
    vlSelf->__PVT__cmp_rs__DOT__pr2_ready_next[2U] 
        = vlSelf->__PVT__cmp_rs__DOT__pr2_ready[2U];
    vlSelf->__PVT__cmp_rs__DOT__pr2_ready_next[3U] 
        = vlSelf->__PVT__cmp_rs__DOT__pr2_ready[3U];
    if ((vlSelf->__PVT__cmp_rs__DOT__valid[0U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                      [0U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                        [0U] 
                                                                        >> 2U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                       [0U] 
                                                                       >> 2U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                      [0U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                     [0U] 
                                                                     >> 2U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                    [0U] 
                                                                    >> 2U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__cmp_rs__DOT__pr2_ready_next[0U] = 1U;
    }
    if ((vlSelf->__PVT__cmp_rs__DOT__valid[1U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                      [1U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                        [1U] 
                                                                        >> 2U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                       [1U] 
                                                                       >> 2U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                      [1U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                     [1U] 
                                                                     >> 2U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                    [1U] 
                                                                    >> 2U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__cmp_rs__DOT__pr2_ready_next[1U] = 1U;
    }
    if ((vlSelf->__PVT__cmp_rs__DOT__valid[2U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                      [2U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                        [2U] 
                                                                        >> 2U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                       [2U] 
                                                                       >> 2U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                      [2U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                     [2U] 
                                                                     >> 2U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                    [2U] 
                                                                    >> 2U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__cmp_rs__DOT__pr2_ready_next[2U] = 1U;
    }
    if ((vlSelf->__PVT__cmp_rs__DOT__valid[3U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                      [3U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                        [3U] 
                                                                        >> 2U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                       [3U] 
                                                                       >> 2U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                      [3U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                     [3U] 
                                                                     >> 2U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                    [3U] 
                                                                    >> 2U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__cmp_rs__DOT__pr2_ready_next[3U] = 1U;
    }
    if ((((~ (IData)(vlSelf->__PVT__cmp_full_o)) & (IData)(vlSelf->__Vcellinp__cmp_rs__wr_en)) 
         & (IData)(vlSelf->__PVT__cmp_rs__DOT__wr_idx_valid))) {
        vlSelf->__PVT__cmp_rs__DOT__pr2_ready_next[vlSelf->__PVT__cmp_rs__DOT__wr_idx] 
            = (1U & (~ (IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o)));
        if (((IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                      >> 0x10U)) & (((((((IData)(vlSelf->__PVT__wb_alu) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                        >> 2U))) 
                                            == (0x7fU 
                                                & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                   >> 0xfU)))) 
                                        | ((IData)(vlSelf->__PVT__wb_load) 
                                           & ((0x7fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                          >> 2U))) 
                                              == (0x7fU 
                                                  & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                     >> 0xfU))))) 
                                       | ((IData)(vlSelf->__PVT__wb_jump) 
                                          & ((0x7fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                         >> 2U))) 
                                             == (0x7fU 
                                                 & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                    >> 0xfU))))) 
                                      | ((IData)(vlSelf->__PVT__wb_cmp) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                        >> 2U))) 
                                            == (0x7fU 
                                                & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                   >> 0xfU))))) 
                                     | ((IData)(vlSelf->__PVT__wb_mul) 
                                        & ((0x7fU & (IData)(
                                                            (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                             >> 2U))) 
                                           == (0x7fU 
                                               & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                  >> 0xfU))))) 
                                    | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                       & ((0x7fU & (IData)(
                                                           (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                            >> 2U))) 
                                          == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
            vlSelf->__PVT__cmp_rs__DOT__pr2_ready_next[vlSelf->__PVT__cmp_rs__DOT__wr_idx] = 1U;
        }
    }
    vlSelf->__PVT__jump_rs__DOT__pr2_ready_next[0U] 
        = vlSelf->__PVT__jump_rs__DOT__pr2_ready[0U];
    vlSelf->__PVT__jump_rs__DOT__pr2_ready_next[1U] 
        = vlSelf->__PVT__jump_rs__DOT__pr2_ready[1U];
    if ((vlSelf->__PVT__jump_rs__DOT__valid[0U] & (
                                                   ((((((IData)(vlSelf->__PVT__wb_alu) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                       [0U] 
                                                                       >> 2U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                               >> 0xfU)))) 
                                                       | ((IData)(vlSelf->__PVT__wb_load) 
                                                          & ((0x7fU 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                         [0U] 
                                                                         >> 2U))) 
                                                             == 
                                                             (0x7fU 
                                                              & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                 >> 0xfU))))) 
                                                      | ((IData)(vlSelf->__PVT__wb_jump) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                        [0U] 
                                                                        >> 2U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                       [0U] 
                                                                       >> 2U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_mul) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                      [0U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                     [0U] 
                                                                     >> 2U))) 
                                                         == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__jump_rs__DOT__pr2_ready_next[0U] = 1U;
    }
    if ((vlSelf->__PVT__jump_rs__DOT__valid[1U] & (
                                                   ((((((IData)(vlSelf->__PVT__wb_alu) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                       [1U] 
                                                                       >> 2U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                               >> 0xfU)))) 
                                                       | ((IData)(vlSelf->__PVT__wb_load) 
                                                          & ((0x7fU 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                         [1U] 
                                                                         >> 2U))) 
                                                             == 
                                                             (0x7fU 
                                                              & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                 >> 0xfU))))) 
                                                      | ((IData)(vlSelf->__PVT__wb_jump) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                        [1U] 
                                                                        >> 2U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                       [1U] 
                                                                       >> 2U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_mul) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                      [1U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                     [1U] 
                                                                     >> 2U))) 
                                                         == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__jump_rs__DOT__pr2_ready_next[1U] = 1U;
    }
    if ((((~ (IData)(vlSelf->__PVT__jump_full_o)) & (IData)(vlSelf->__Vcellinp__jump_rs__wr_en)) 
         & (IData)(vlSelf->__PVT__jump_rs__DOT__wr_idx_valid))) {
        vlSelf->__PVT__jump_rs__DOT__pr2_ready_next[vlSelf->__PVT__jump_rs__DOT__wr_idx] 
            = (1U & (~ (IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o)));
        if (((IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                      >> 0x10U)) & (((((((IData)(vlSelf->__PVT__wb_alu) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                        >> 2U))) 
                                            == (0x7fU 
                                                & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                   >> 0xfU)))) 
                                        | ((IData)(vlSelf->__PVT__wb_load) 
                                           & ((0x7fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                          >> 2U))) 
                                              == (0x7fU 
                                                  & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                     >> 0xfU))))) 
                                       | ((IData)(vlSelf->__PVT__wb_jump) 
                                          & ((0x7fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                         >> 2U))) 
                                             == (0x7fU 
                                                 & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                    >> 0xfU))))) 
                                      | ((IData)(vlSelf->__PVT__wb_cmp) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                        >> 2U))) 
                                            == (0x7fU 
                                                & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                   >> 0xfU))))) 
                                     | ((IData)(vlSelf->__PVT__wb_mul) 
                                        & ((0x7fU & (IData)(
                                                            (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                             >> 2U))) 
                                           == (0x7fU 
                                               & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                  >> 0xfU))))) 
                                    | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                       & ((0x7fU & (IData)(
                                                           (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                            >> 2U))) 
                                          == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
            vlSelf->__PVT__jump_rs__DOT__pr2_ready_next[vlSelf->__PVT__jump_rs__DOT__wr_idx] = 1U;
        }
    }
    vlSelf->__PVT__mul_rs__DOT__pr2_ready_next[0U] 
        = vlSelf->__PVT__mul_rs__DOT__pr2_ready[0U];
    vlSelf->__PVT__mul_rs__DOT__pr2_ready_next[1U] 
        = vlSelf->__PVT__mul_rs__DOT__pr2_ready[1U];
    vlSelf->__PVT__mul_rs__DOT__pr2_ready_next[2U] 
        = vlSelf->__PVT__mul_rs__DOT__pr2_ready[2U];
    vlSelf->__PVT__mul_rs__DOT__pr2_ready_next[3U] 
        = vlSelf->__PVT__mul_rs__DOT__pr2_ready[3U];
    if ((vlSelf->__PVT__mul_rs__DOT__valid[0U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                      [0U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                        [0U] 
                                                                        >> 2U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                       [0U] 
                                                                       >> 2U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                      [0U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                     [0U] 
                                                                     >> 2U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                    [0U] 
                                                                    >> 2U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__mul_rs__DOT__pr2_ready_next[0U] = 1U;
    }
    if ((vlSelf->__PVT__mul_rs__DOT__valid[1U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                      [1U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                        [1U] 
                                                                        >> 2U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                       [1U] 
                                                                       >> 2U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                      [1U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                     [1U] 
                                                                     >> 2U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                    [1U] 
                                                                    >> 2U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__mul_rs__DOT__pr2_ready_next[1U] = 1U;
    }
    if ((vlSelf->__PVT__mul_rs__DOT__valid[2U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                      [2U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                        [2U] 
                                                                        >> 2U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                       [2U] 
                                                                       >> 2U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                      [2U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                     [2U] 
                                                                     >> 2U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                    [2U] 
                                                                    >> 2U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__mul_rs__DOT__pr2_ready_next[2U] = 1U;
    }
    if ((vlSelf->__PVT__mul_rs__DOT__valid[3U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                      [3U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                        [3U] 
                                                                        >> 2U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                       [3U] 
                                                                       >> 2U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                      [3U] 
                                                                      >> 2U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                     [3U] 
                                                                     >> 2U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                    [3U] 
                                                                    >> 2U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__mul_rs__DOT__pr2_ready_next[3U] = 1U;
    }
    if ((((~ (IData)(vlSelf->__PVT__mul_full_o)) & (IData)(vlSelf->__Vcellinp__mul_rs__wr_en)) 
         & (IData)(vlSelf->__PVT__mul_rs__DOT__wr_idx_valid))) {
        vlSelf->__PVT__mul_rs__DOT__pr2_ready_next[vlSelf->__PVT__mul_rs__DOT__wr_idx] 
            = (1U & (~ (IData)(vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o)));
        if (((IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                      >> 0x10U)) & (((((((IData)(vlSelf->__PVT__wb_alu) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                        >> 2U))) 
                                            == (0x7fU 
                                                & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                   >> 0xfU)))) 
                                        | ((IData)(vlSelf->__PVT__wb_load) 
                                           & ((0x7fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                          >> 2U))) 
                                              == (0x7fU 
                                                  & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                     >> 0xfU))))) 
                                       | ((IData)(vlSelf->__PVT__wb_jump) 
                                          & ((0x7fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                         >> 2U))) 
                                             == (0x7fU 
                                                 & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                    >> 0xfU))))) 
                                      | ((IData)(vlSelf->__PVT__wb_cmp) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                        >> 2U))) 
                                            == (0x7fU 
                                                & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                   >> 0xfU))))) 
                                     | ((IData)(vlSelf->__PVT__wb_mul) 
                                        & ((0x7fU & (IData)(
                                                            (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                             >> 2U))) 
                                           == (0x7fU 
                                               & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                  >> 0xfU))))) 
                                    | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                       & ((0x7fU & (IData)(
                                                           (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                            >> 2U))) 
                                          == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
            vlSelf->__PVT__mul_rs__DOT__pr2_ready_next[vlSelf->__PVT__mul_rs__DOT__wr_idx] = 1U;
        }
    }
    vlSelf->__PVT__alu_rs__DOT__pr1_ready_next[0U] 
        = vlSelf->__PVT__alu_rs__DOT__pr1_ready[0U];
    vlSelf->__PVT__alu_rs__DOT__pr1_ready_next[1U] 
        = vlSelf->__PVT__alu_rs__DOT__pr1_ready[1U];
    vlSelf->__PVT__alu_rs__DOT__pr1_ready_next[2U] 
        = vlSelf->__PVT__alu_rs__DOT__pr1_ready[2U];
    vlSelf->__PVT__alu_rs__DOT__pr1_ready_next[3U] 
        = vlSelf->__PVT__alu_rs__DOT__pr1_ready[3U];
    vlSelf->__PVT__alu_rs__DOT__pr1_ready_next[4U] 
        = vlSelf->__PVT__alu_rs__DOT__pr1_ready[4U];
    vlSelf->__PVT__alu_rs__DOT__pr1_ready_next[5U] 
        = vlSelf->__PVT__alu_rs__DOT__pr1_ready[5U];
    vlSelf->__PVT__alu_rs__DOT__pr1_ready_next[6U] 
        = vlSelf->__PVT__alu_rs__DOT__pr1_ready[6U];
    vlSelf->__PVT__alu_rs__DOT__pr1_ready_next[7U] 
        = vlSelf->__PVT__alu_rs__DOT__pr1_ready[7U];
    if ((vlSelf->__PVT__alu_rs__DOT__valid[0U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [0U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                        [0U] 
                                                                        >> 9U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                       [0U] 
                                                                       >> 9U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [0U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                     [0U] 
                                                                     >> 9U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                    [0U] 
                                                                    >> 9U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__alu_rs__DOT__pr1_ready_next[0U] = 1U;
    }
    if ((vlSelf->__PVT__alu_rs__DOT__valid[1U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [1U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                        [1U] 
                                                                        >> 9U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                       [1U] 
                                                                       >> 9U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [1U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                     [1U] 
                                                                     >> 9U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                    [1U] 
                                                                    >> 9U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__alu_rs__DOT__pr1_ready_next[1U] = 1U;
    }
    if ((vlSelf->__PVT__alu_rs__DOT__valid[2U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [2U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                        [2U] 
                                                                        >> 9U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                       [2U] 
                                                                       >> 9U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [2U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                     [2U] 
                                                                     >> 9U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                    [2U] 
                                                                    >> 9U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__alu_rs__DOT__pr1_ready_next[2U] = 1U;
    }
    if ((vlSelf->__PVT__alu_rs__DOT__valid[3U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [3U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                        [3U] 
                                                                        >> 9U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                       [3U] 
                                                                       >> 9U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [3U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                     [3U] 
                                                                     >> 9U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                    [3U] 
                                                                    >> 9U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__alu_rs__DOT__pr1_ready_next[3U] = 1U;
    }
    if ((vlSelf->__PVT__alu_rs__DOT__valid[4U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [4U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                        [4U] 
                                                                        >> 9U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                       [4U] 
                                                                       >> 9U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [4U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                     [4U] 
                                                                     >> 9U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                    [4U] 
                                                                    >> 9U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__alu_rs__DOT__pr1_ready_next[4U] = 1U;
    }
    if ((vlSelf->__PVT__alu_rs__DOT__valid[5U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [5U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                        [5U] 
                                                                        >> 9U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                       [5U] 
                                                                       >> 9U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [5U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                     [5U] 
                                                                     >> 9U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                    [5U] 
                                                                    >> 9U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__alu_rs__DOT__pr1_ready_next[5U] = 1U;
    }
    if ((vlSelf->__PVT__alu_rs__DOT__valid[6U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [6U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                        [6U] 
                                                                        >> 9U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                       [6U] 
                                                                       >> 9U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [6U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                     [6U] 
                                                                     >> 9U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                    [6U] 
                                                                    >> 9U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__alu_rs__DOT__pr1_ready_next[6U] = 1U;
    }
    if ((vlSelf->__PVT__alu_rs__DOT__valid[7U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [7U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                        [7U] 
                                                                        >> 9U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                       [7U] 
                                                                       >> 9U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                      [7U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                     [7U] 
                                                                     >> 9U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__alu_rs__DOT__midcore_rs
                                                                    [7U] 
                                                                    >> 9U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__alu_rs__DOT__pr1_ready_next[7U] = 1U;
    }
    if ((((((~ (IData)(vlSelf->__PVT__alu_full_o)) 
            & (IData)(vlSelf->__Vcellinp__alu_rs__wr_en)) 
           & (IData)(vlSelf->__PVT__alu_rs__DOT__wr_idx_valid)) 
          & (~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict))) 
         & (~ (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_mispredict_o)))) {
        vlSelf->__PVT__alu_rs__DOT__pr1_ready_next[vlSelf->__PVT__alu_rs__DOT__wr_idx] 
            = (1U & (~ (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                >> 1U))));
        if (((IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                      >> 0x11U)) & (((((((IData)(vlSelf->__PVT__wb_alu) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                        >> 9U))) 
                                            == (0x7fU 
                                                & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                   >> 0xfU)))) 
                                        | ((IData)(vlSelf->__PVT__wb_load) 
                                           & ((0x7fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                          >> 9U))) 
                                              == (0x7fU 
                                                  & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                     >> 0xfU))))) 
                                       | ((IData)(vlSelf->__PVT__wb_jump) 
                                          & ((0x7fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                         >> 9U))) 
                                             == (0x7fU 
                                                 & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                    >> 0xfU))))) 
                                      | ((IData)(vlSelf->__PVT__wb_cmp) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                        >> 9U))) 
                                            == (0x7fU 
                                                & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                   >> 0xfU))))) 
                                     | ((IData)(vlSelf->__PVT__wb_mul) 
                                        & ((0x7fU & (IData)(
                                                            (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                             >> 9U))) 
                                           == (0x7fU 
                                               & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                  >> 0xfU))))) 
                                    | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                       & ((0x7fU & (IData)(
                                                           (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                            >> 9U))) 
                                          == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
            vlSelf->__PVT__alu_rs__DOT__pr1_ready_next[vlSelf->__PVT__alu_rs__DOT__wr_idx] = 1U;
        }
    }
    vlSelf->__PVT__cmp_rs__DOT__pr1_ready_next[0U] 
        = vlSelf->__PVT__cmp_rs__DOT__pr1_ready[0U];
    vlSelf->__PVT__cmp_rs__DOT__pr1_ready_next[1U] 
        = vlSelf->__PVT__cmp_rs__DOT__pr1_ready[1U];
    vlSelf->__PVT__cmp_rs__DOT__pr1_ready_next[2U] 
        = vlSelf->__PVT__cmp_rs__DOT__pr1_ready[2U];
    vlSelf->__PVT__cmp_rs__DOT__pr1_ready_next[3U] 
        = vlSelf->__PVT__cmp_rs__DOT__pr1_ready[3U];
    if ((vlSelf->__PVT__cmp_rs__DOT__valid[0U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                      [0U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                        [0U] 
                                                                        >> 9U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                       [0U] 
                                                                       >> 9U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                      [0U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                     [0U] 
                                                                     >> 9U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                    [0U] 
                                                                    >> 9U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__cmp_rs__DOT__pr1_ready_next[0U] = 1U;
    }
    if ((vlSelf->__PVT__cmp_rs__DOT__valid[1U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                      [1U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                        [1U] 
                                                                        >> 9U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                       [1U] 
                                                                       >> 9U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                      [1U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                     [1U] 
                                                                     >> 9U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                    [1U] 
                                                                    >> 9U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__cmp_rs__DOT__pr1_ready_next[1U] = 1U;
    }
    if ((vlSelf->__PVT__cmp_rs__DOT__valid[2U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                      [2U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                        [2U] 
                                                                        >> 9U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                       [2U] 
                                                                       >> 9U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                      [2U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                     [2U] 
                                                                     >> 9U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                    [2U] 
                                                                    >> 9U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__cmp_rs__DOT__pr1_ready_next[2U] = 1U;
    }
    if ((vlSelf->__PVT__cmp_rs__DOT__valid[3U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                      [3U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                        [3U] 
                                                                        >> 9U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                       [3U] 
                                                                       >> 9U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                      [3U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                     [3U] 
                                                                     >> 9U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__cmp_rs__DOT__midcore_rs
                                                                    [3U] 
                                                                    >> 9U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__cmp_rs__DOT__pr1_ready_next[3U] = 1U;
    }
    if ((((((~ (IData)(vlSelf->__PVT__cmp_full_o)) 
            & (IData)(vlSelf->__Vcellinp__cmp_rs__wr_en)) 
           & (IData)(vlSelf->__PVT__cmp_rs__DOT__wr_idx_valid)) 
          & (~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict))) 
         & (~ (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_mispredict_o)))) {
        vlSelf->__PVT__cmp_rs__DOT__pr1_ready_next[vlSelf->__PVT__cmp_rs__DOT__wr_idx] 
            = (1U & (~ (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                >> 1U))));
        if (((IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                      >> 0x11U)) & (((((((IData)(vlSelf->__PVT__wb_alu) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                        >> 9U))) 
                                            == (0x7fU 
                                                & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                   >> 0xfU)))) 
                                        | ((IData)(vlSelf->__PVT__wb_load) 
                                           & ((0x7fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                          >> 9U))) 
                                              == (0x7fU 
                                                  & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                     >> 0xfU))))) 
                                       | ((IData)(vlSelf->__PVT__wb_jump) 
                                          & ((0x7fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                         >> 9U))) 
                                             == (0x7fU 
                                                 & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                    >> 0xfU))))) 
                                      | ((IData)(vlSelf->__PVT__wb_cmp) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                        >> 9U))) 
                                            == (0x7fU 
                                                & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                   >> 0xfU))))) 
                                     | ((IData)(vlSelf->__PVT__wb_mul) 
                                        & ((0x7fU & (IData)(
                                                            (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                             >> 9U))) 
                                           == (0x7fU 
                                               & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                  >> 0xfU))))) 
                                    | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                       & ((0x7fU & (IData)(
                                                           (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                            >> 9U))) 
                                          == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
            vlSelf->__PVT__cmp_rs__DOT__pr1_ready_next[vlSelf->__PVT__cmp_rs__DOT__wr_idx] = 1U;
        }
    }
    vlSelf->__PVT__jump_rs__DOT__pr1_ready_next[0U] 
        = vlSelf->__PVT__jump_rs__DOT__pr1_ready[0U];
    vlSelf->__PVT__jump_rs__DOT__pr1_ready_next[1U] 
        = vlSelf->__PVT__jump_rs__DOT__pr1_ready[1U];
    if ((vlSelf->__PVT__jump_rs__DOT__valid[0U] & (
                                                   ((((((IData)(vlSelf->__PVT__wb_alu) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                       [0U] 
                                                                       >> 9U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                               >> 0xfU)))) 
                                                       | ((IData)(vlSelf->__PVT__wb_load) 
                                                          & ((0x7fU 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                         [0U] 
                                                                         >> 9U))) 
                                                             == 
                                                             (0x7fU 
                                                              & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                 >> 0xfU))))) 
                                                      | ((IData)(vlSelf->__PVT__wb_jump) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                        [0U] 
                                                                        >> 9U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                       [0U] 
                                                                       >> 9U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_mul) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                      [0U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                     [0U] 
                                                                     >> 9U))) 
                                                         == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__jump_rs__DOT__pr1_ready_next[0U] = 1U;
    }
    if ((vlSelf->__PVT__jump_rs__DOT__valid[1U] & (
                                                   ((((((IData)(vlSelf->__PVT__wb_alu) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                       [1U] 
                                                                       >> 9U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                               >> 0xfU)))) 
                                                       | ((IData)(vlSelf->__PVT__wb_load) 
                                                          & ((0x7fU 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                         [1U] 
                                                                         >> 9U))) 
                                                             == 
                                                             (0x7fU 
                                                              & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                 >> 0xfU))))) 
                                                      | ((IData)(vlSelf->__PVT__wb_jump) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                        [1U] 
                                                                        >> 9U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                       [1U] 
                                                                       >> 9U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_mul) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                      [1U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__jump_rs__DOT__midcore_rs
                                                                     [1U] 
                                                                     >> 9U))) 
                                                         == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__jump_rs__DOT__pr1_ready_next[1U] = 1U;
    }
    if ((((((~ (IData)(vlSelf->__PVT__jump_full_o)) 
            & (IData)(vlSelf->__Vcellinp__jump_rs__wr_en)) 
           & (IData)(vlSelf->__PVT__jump_rs__DOT__wr_idx_valid)) 
          & (~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict))) 
         & (~ (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_mispredict_o)))) {
        vlSelf->__PVT__jump_rs__DOT__pr1_ready_next[vlSelf->__PVT__jump_rs__DOT__wr_idx] 
            = (1U & (~ (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                >> 1U))));
        if (((IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                      >> 0x11U)) & (((((((IData)(vlSelf->__PVT__wb_alu) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                        >> 9U))) 
                                            == (0x7fU 
                                                & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                   >> 0xfU)))) 
                                        | ((IData)(vlSelf->__PVT__wb_load) 
                                           & ((0x7fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                          >> 9U))) 
                                              == (0x7fU 
                                                  & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                     >> 0xfU))))) 
                                       | ((IData)(vlSelf->__PVT__wb_jump) 
                                          & ((0x7fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                         >> 9U))) 
                                             == (0x7fU 
                                                 & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                    >> 0xfU))))) 
                                      | ((IData)(vlSelf->__PVT__wb_cmp) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                        >> 9U))) 
                                            == (0x7fU 
                                                & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                   >> 0xfU))))) 
                                     | ((IData)(vlSelf->__PVT__wb_mul) 
                                        & ((0x7fU & (IData)(
                                                            (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                             >> 9U))) 
                                           == (0x7fU 
                                               & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                  >> 0xfU))))) 
                                    | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                       & ((0x7fU & (IData)(
                                                           (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                            >> 9U))) 
                                          == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
            vlSelf->__PVT__jump_rs__DOT__pr1_ready_next[vlSelf->__PVT__jump_rs__DOT__wr_idx] = 1U;
        }
    }
    vlSelf->__PVT__mul_rs__DOT__pr1_ready_next[0U] 
        = vlSelf->__PVT__mul_rs__DOT__pr1_ready[0U];
    vlSelf->__PVT__mul_rs__DOT__pr1_ready_next[1U] 
        = vlSelf->__PVT__mul_rs__DOT__pr1_ready[1U];
    vlSelf->__PVT__mul_rs__DOT__pr1_ready_next[2U] 
        = vlSelf->__PVT__mul_rs__DOT__pr1_ready[2U];
    vlSelf->__PVT__mul_rs__DOT__pr1_ready_next[3U] 
        = vlSelf->__PVT__mul_rs__DOT__pr1_ready[3U];
    if ((vlSelf->__PVT__mul_rs__DOT__valid[0U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                      [0U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                        [0U] 
                                                                        >> 9U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                       [0U] 
                                                                       >> 9U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                      [0U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                     [0U] 
                                                                     >> 9U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                    [0U] 
                                                                    >> 9U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__mul_rs__DOT__pr1_ready_next[0U] = 1U;
    }
    if ((vlSelf->__PVT__mul_rs__DOT__valid[1U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                      [1U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                        [1U] 
                                                                        >> 9U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                       [1U] 
                                                                       >> 9U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                      [1U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                     [1U] 
                                                                     >> 9U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                    [1U] 
                                                                    >> 9U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__mul_rs__DOT__pr1_ready_next[1U] = 1U;
    }
    if ((vlSelf->__PVT__mul_rs__DOT__valid[2U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                      [2U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                        [2U] 
                                                                        >> 9U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                       [2U] 
                                                                       >> 9U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                      [2U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                     [2U] 
                                                                     >> 9U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                    [2U] 
                                                                    >> 9U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__mul_rs__DOT__pr1_ready_next[2U] = 1U;
    }
    if ((vlSelf->__PVT__mul_rs__DOT__valid[3U] & ((
                                                   (((((IData)(vlSelf->__PVT__wb_alu) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                      [3U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                              >> 0xfU)))) 
                                                      | ((IData)(vlSelf->__PVT__wb_load) 
                                                         & ((0x7fU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                        [3U] 
                                                                        >> 9U))) 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                                >> 0xfU))))) 
                                                     | ((IData)(vlSelf->__PVT__wb_jump) 
                                                        & ((0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                       [3U] 
                                                                       >> 9U))) 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                               >> 0xfU))))) 
                                                    | ((IData)(vlSelf->__PVT__wb_cmp) 
                                                       & ((0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                      [3U] 
                                                                      >> 9U))) 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                              >> 0xfU))))) 
                                                   | ((IData)(vlSelf->__PVT__wb_mul) 
                                                      & ((0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                     [3U] 
                                                                     >> 9U))) 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                             >> 0xfU))))) 
                                                  | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                                     & ((0x7fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__mul_rs__DOT__midcore_rs
                                                                    [3U] 
                                                                    >> 9U))) 
                                                        == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
        vlSelf->__PVT__mul_rs__DOT__pr1_ready_next[3U] = 1U;
    }
    if ((((((~ (IData)(vlSelf->__PVT__mul_full_o)) 
            & (IData)(vlSelf->__Vcellinp__mul_rs__wr_en)) 
           & (IData)(vlSelf->__PVT__mul_rs__DOT__wr_idx_valid)) 
          & (~ (IData)(vlSymsp->TOP__top_tb__dut.__PVT__exec_mispredict))) 
         & (~ (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__spec_load_mispredict_o)))) {
        vlSelf->__PVT__mul_rs__DOT__pr1_ready_next[vlSelf->__PVT__mul_rs__DOT__wr_idx] 
            = (1U & (~ (IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                >> 1U))));
        if (((IData)((vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                      >> 0x11U)) & (((((((IData)(vlSelf->__PVT__wb_alu) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                        >> 9U))) 
                                            == (0x7fU 
                                                & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                   >> 0xfU)))) 
                                        | ((IData)(vlSelf->__PVT__wb_load) 
                                           & ((0x7fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                          >> 9U))) 
                                              == (0x7fU 
                                                  & (vlSelf->__PVT__mem__DOT__lat_rob_data[0xbU] 
                                                     >> 0xfU))))) 
                                       | ((IData)(vlSelf->__PVT__wb_jump) 
                                          & ((0x7fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                         >> 9U))) 
                                             == (0x7fU 
                                                 & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                    >> 0xfU))))) 
                                      | ((IData)(vlSelf->__PVT__wb_cmp) 
                                         & ((0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                        >> 9U))) 
                                            == (0x7fU 
                                                & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                   >> 0xfU))))) 
                                     | ((IData)(vlSelf->__PVT__wb_mul) 
                                        & ((0x7fU & (IData)(
                                                            (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                             >> 9U))) 
                                           == (0x7fU 
                                               & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                  >> 0xfU))))) 
                                    | ((IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__fwd_sel_valid) 
                                       & ((0x7fU & (IData)(
                                                           (vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__MIDCORE_midcore_o 
                                                            >> 9U))) 
                                          == (IData)(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.__PVT__wb_fwd_pr_o)))))) {
            vlSelf->__PVT__mul_rs__DOT__pr1_ready_next[vlSelf->__PVT__mul_rs__DOT__wr_idx] = 1U;
        }
    }
}
