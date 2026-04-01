// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb_cpu.h"

extern const VlUnpacked<IData/*31:0*/, 256> Vtop_tb__ConstPool__TABLE_h3b9ba979_0;
extern const VlUnpacked<IData/*31:0*/, 256> Vtop_tb__ConstPool__TABLE_h65480374_0;
extern const VlUnpacked<IData/*31:0*/, 256> Vtop_tb__ConstPool__TABLE_h3ea4b14a_0;
extern const VlWide<12>/*383:0*/ Vtop_tb__ConstPool__CONST_h7f9a7980_0;

VL_ATTR_COLD void Vtop_tb_cpu___stl_sequent__TOP__top_tb__dut__0(Vtop_tb_cpu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_tb_cpu___stl_sequent__TOP__top_tb__dut__0\n"); );
    // Init
    SData/*8:0*/ cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h7d88657b__0;
    cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h7d88657b__0 = 0;
    IData/*31:0*/ __Vilp;
    VlWide<12>/*368:0*/ __VdfgTmp_h9e6e5575__0;
    VL_ZERO_W(369, __VdfgTmp_h9e6e5575__0);
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<5>/*159:0*/ __Vtemp_15;
    VlWide<5>/*159:0*/ __Vtemp_18;
    // Body
    __Vtableidx2 = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lfsr;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_2 
        = Vtop_tb__ConstPool__TABLE_h3b9ba979_0[__Vtableidx2];
    __Vtableidx3 = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lfsr;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_3 
        = Vtop_tb__ConstPool__TABLE_h65480374_0[__Vtableidx3];
    __Vtableidx4 = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lfsr;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_4 
        = Vtop_tb__ConstPool__TABLE_h3ea4b14a_0[__Vtableidx4];
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_full 
        = (((1U & ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__wrPtr) 
                   >> 3U)) != (1U & ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__rdPtr) 
                                     >> 3U))) & ((7U 
                                                  & (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__wrPtr)) 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__rdPtr))));
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_full 
        = (((1U & ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__wrPtr) 
                   >> 3U)) != (1U & ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__rdPtr) 
                                     >> 3U))) & ((7U 
                                                  & (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__wrPtr)) 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__rdPtr))));
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_full 
        = (((1U & ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__wrPtr) 
                   >> 3U)) != (1U & ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__rdPtr) 
                                     >> 3U))) & ((7U 
                                                  & (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__wrPtr)) 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__rdPtr))));
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_full 
        = (((1U & ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__wrPtr) 
                   >> 3U)) != (1U & ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__rdPtr) 
                                     >> 3U))) & ((7U 
                                                  & (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__wrPtr)) 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__rdPtr))));
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_empty 
        = ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__rdPtr) 
           == (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__wrPtr));
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_empty 
        = ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__rdPtr) 
           == (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__wrPtr));
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_empty 
        = ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__rdPtr) 
           == (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__wrPtr));
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_empty 
        = ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__rdPtr) 
           == (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__wrPtr));
    vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__wr_idx_valid = 0U;
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__valid
               [0U]))) {
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__wr_idx_valid = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__valid
               [1U]))) {
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__wr_idx_valid = 1U;
    }
    vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__wr_idx = 0U;
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__valid
               [0U]))) {
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__wr_idx = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__valid
               [1U]))) {
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__wr_idx = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__valid
               [2U]))) {
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__wr_idx_valid = 1U;
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__wr_idx = 2U;
    }
    vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__wr_idx_valid = 0U;
    vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__wr_idx = 0U;
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__valid
               [0U]))) {
        vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__wr_idx_valid = 1U;
        vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__wr_idx = 0U;
    }
    vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__wr_idx_valid = 0U;
    vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__wr_idx = 0U;
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__valid
               [0U]))) {
        vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__wr_idx_valid = 1U;
        vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__wr_idx = 0U;
    }
    vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__wr_idx_valid = 0U;
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__valid
               [0U]))) {
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__wr_idx_valid = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__valid
               [1U]))) {
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__wr_idx_valid = 1U;
    }
    vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__wr_idx = 0U;
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__valid
               [0U]))) {
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__wr_idx = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__valid
               [1U]))) {
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__wr_idx = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__valid
               [2U]))) {
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__wr_idx_valid = 1U;
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__wr_idx = 2U;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1 = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T1 = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1 = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk7__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 0x40U, vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk7__DOT__i)) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1 
                = (0x3fU & ((IData)(1U) + (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk7__DOT__i 
                                           + (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T1))));
            if ((1U & (~ vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
                       [(0x3fU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1)]))) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1 = 1U;
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T1 
                    = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1;
                goto __Vlabel1;
            }
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk7__DOT__i);
        }
        __Vlabel1: ;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2 = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T2 = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2 = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk8__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 0x40U, vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk8__DOT__i)) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2 
                = (0x3fU & ((IData)(1U) + (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk8__DOT__i 
                                           + (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T2))));
            if ((1U & (~ vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
                       [(0x3fU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2)]))) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2 = 1U;
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T2 
                    = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2;
                goto __Vlabel2;
            }
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk8__DOT__i);
        }
        __Vlabel2: ;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3 = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T3 = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3 = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk9__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 0x40U, vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk9__DOT__i)) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3 
                = (0x3fU & ((IData)(1U) + (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk9__DOT__i 
                                           + (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T3))));
            if ((1U & (~ vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
                       [(0x3fU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3)]))) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3 = 1U;
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T3 
                    = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3;
                goto __Vlabel3;
            }
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk9__DOT__i 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk9__DOT__i);
        }
        __Vlabel3: ;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4 = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T4 = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4 = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk10__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 0x40U, vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk10__DOT__i)) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4 
                = (0x3fU & ((IData)(1U) + (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk10__DOT__i 
                                           + (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T4))));
            if ((1U & (~ vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
                       [(0x3fU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4)]))) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4 = 1U;
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T4 
                    = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4;
                goto __Vlabel4;
            }
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk10__DOT__i 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk10__DOT__i);
        }
        __Vlabel4: ;
    }
    vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h083e6cc3__0 
        = ((0xffU & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist 
                     >> 8U)) ^ (0xffU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist));
    vlSelf->__PVT__fetch_inst = vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem
        [(7U & (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__rdPtr))];
    vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_hc4999392__0 
        = ((0xfU & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtr)) 
           == (0xfU & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr)));
    vlSelf->__PVT__cpu_execute__DOT__jump_empty_i = 1U;
    if (vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__valid
        [0U]) {
        vlSelf->__PVT__cpu_execute__DOT__jump_empty_i = 0U;
    }
    if (vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__valid
        [1U]) {
        vlSelf->__PVT__cpu_execute__DOT__jump_empty_i = 0U;
    }
    vlSelf->__PVT__cpu_execute__DOT__alu_empty_i = 1U;
    if (vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__valid
        [0U]) {
        vlSelf->__PVT__cpu_execute__DOT__alu_empty_i = 0U;
    }
    if (vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__valid
        [1U]) {
        vlSelf->__PVT__cpu_execute__DOT__alu_empty_i = 0U;
    }
    if (vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__valid
        [2U]) {
        vlSelf->__PVT__cpu_execute__DOT__alu_empty_i = 0U;
    }
    if (vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__valid
        [3U]) {
        vlSelf->__PVT__cpu_execute__DOT__alu_empty_i = 0U;
    }
    vlSelf->__PVT__cpu_execute__DOT__cmp_empty_i = 1U;
    if (vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__valid
        [0U]) {
        vlSelf->__PVT__cpu_execute__DOT__cmp_empty_i = 0U;
    }
    if (vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__valid
        [1U]) {
        vlSelf->__PVT__cpu_execute__DOT__cmp_empty_i = 0U;
    }
    vlSelf->__PVT__cpu_execute__DOT__mul_empty_i = 1U;
    if (vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__valid
        [0U]) {
        vlSelf->__PVT__cpu_execute__DOT__mul_empty_i = 0U;
    }
    if (vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__valid
        [1U]) {
        vlSelf->__PVT__cpu_execute__DOT__mul_empty_i = 0U;
    }
    if (vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__valid
        [2U]) {
        vlSelf->__PVT__cpu_execute__DOT__mul_empty_i = 0U;
    }
    if (vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__valid
        [3U]) {
        vlSelf->__PVT__cpu_execute__DOT__mul_empty_i = 0U;
    }
    vlSelf->__PVT__cpu_execute__DOT__mem_empty_i = 
        ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr) 
         == (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr));
    vlSelf->__PVT__rob_full = (((1U & ((IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__wrPtr) 
                                       >> 4U)) != (1U 
                                                   & ((IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr) 
                                                      >> 4U))) 
                               & ((0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__wrPtr)) 
                                  == (0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[0U] 
        = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr))][0U];
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[1U] 
        = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr))][1U];
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[2U] 
        = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr))][2U];
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[3U] 
        = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr))][3U];
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U] 
        = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr))][4U];
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[5U] 
        = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr))][5U];
    vlSelf->__PVT__alu_full = 1U;
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__valid
               [0U]))) {
        vlSelf->__PVT__alu_full = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__valid
               [1U]))) {
        vlSelf->__PVT__alu_full = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__valid
               [2U]))) {
        vlSelf->__PVT__alu_full = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__valid
               [3U]))) {
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__wr_idx_valid = 1U;
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__wr_idx = 3U;
        vlSelf->__PVT__alu_full = 0U;
    }
    vlSelf->__PVT__cmp_full = 1U;
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__valid
               [0U]))) {
        vlSelf->__PVT__cmp_full = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__valid
               [1U]))) {
        vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__wr_idx_valid = 1U;
        vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__wr_idx = 1U;
        vlSelf->__PVT__cmp_full = 0U;
    }
    vlSelf->__PVT__jump_full = 1U;
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__valid
               [0U]))) {
        vlSelf->__PVT__jump_full = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__valid
               [1U]))) {
        vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__wr_idx_valid = 1U;
        vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__wr_idx = 1U;
        vlSelf->__PVT__jump_full = 0U;
    }
    vlSelf->__PVT__mul_full = 1U;
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__valid
               [0U]))) {
        vlSelf->__PVT__mul_full = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__valid
               [1U]))) {
        vlSelf->__PVT__mul_full = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__valid
               [2U]))) {
        vlSelf->__PVT__mul_full = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__valid
               [3U]))) {
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__wr_idx_valid = 1U;
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__wr_idx = 3U;
        vlSelf->__PVT__mul_full = 0U;
    }
    cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h7d88657b__0 
        = (0x1ffU & ((vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                      >> 0x17U) ^ ((vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                    >> 0xdU) ^ (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                                >> 3U))));
    vlSelf->__PVT__load_full = (((1U & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr) 
                                        >> 4U)) != 
                                 (1U & ((IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr) 
                                        >> 4U))) & 
                                ((0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr)) 
                                 == (0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))));
    vlSelf->__PVT__cpu_execute__DOT__READY_i = (vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready
                                                [(0xfU 
                                                  & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))] 
                                                & vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready
                                                [(0xfU 
                                                  & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))]);
    vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx_valid = 0U;
    if (((vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__valid
          [0U] & vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready
          [0U]) & vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready
         [0U])) {
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx_valid = 1U;
    }
    if (((vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__valid
          [1U] & vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready
          [1U]) & vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready
         [1U])) {
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx_valid = 1U;
    }
    if (((vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__valid
          [2U] & vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready
          [2U]) & vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready
         [2U])) {
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx_valid = 1U;
    }
    vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx = 0U;
    if (((vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__valid
          [0U] & vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready
          [0U]) & vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready
         [0U])) {
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx = 0U;
    }
    if (((vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__valid
          [1U] & vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready
          [1U]) & vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready
         [1U])) {
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx = 1U;
    }
    if (((vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__valid
          [2U] & vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready
          [2U]) & vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready
         [2U])) {
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx = 2U;
    }
    if (((vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__valid
          [3U] & vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready
          [3U]) & vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready
         [3U])) {
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx_valid = 1U;
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx = 3U;
    }
    vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx_valid = 0U;
    if (((vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__valid
          [0U] & vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__pr1_ready
          [0U]) & vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__pr2_ready
         [0U])) {
        vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx_valid = 1U;
        vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx = 0U;
        vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx = 0U;
    } else {
        vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx = 0U;
    }
    if (((vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__valid
          [1U] & vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__pr1_ready
          [1U]) & vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__pr2_ready
         [1U])) {
        vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx_valid = 1U;
        vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx = 1U;
    }
    vlSelf->__PVT__cpu_execute__DOT__LDorST_i = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__LDorST
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0U] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][0U];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[1U] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][1U];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[2U] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][2U];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[3U] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][3U];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[4U] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][4U];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[5U] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][5U];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[6U] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][6U];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[7U] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][7U];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[8U] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][8U];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[9U] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][9U];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xaU] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][0xaU];
    vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xbU] 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))][0xbU];
    vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx_valid = 0U;
    if (((vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__valid
          [0U] & vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__pr1_ready
          [0U]) & vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__pr2_ready
         [0U])) {
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx_valid = 1U;
    }
    if (((vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__valid
          [1U] & vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__pr1_ready
          [1U]) & vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__pr2_ready
         [1U])) {
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx_valid = 1U;
    }
    if (((vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__valid
          [2U] & vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__pr1_ready
          [2U]) & vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__pr2_ready
         [2U])) {
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx_valid = 1U;
    }
    vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx = 0U;
    if (((vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__valid
          [0U] & vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__pr1_ready
          [0U]) & vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__pr2_ready
         [0U])) {
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx = 0U;
    }
    if (((vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__valid
          [1U] & vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__pr1_ready
          [1U]) & vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__pr2_ready
         [1U])) {
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx = 1U;
    }
    if (((vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__valid
          [2U] & vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__pr1_ready
          [2U]) & vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__pr2_ready
         [2U])) {
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx = 2U;
    }
    if (((vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__valid
          [3U] & vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__pr1_ready
          [3U]) & vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__pr2_ready
         [3U])) {
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx_valid = 1U;
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx = 3U;
    }
    vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs
        [(0xfU & (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr))];
    vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid = 0U;
    if (((vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__valid
          [0U] & vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__pr1_ready
          [0U]) & vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__pr2_ready
         [0U])) {
        vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid = 1U;
        vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx = 0U;
        vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx = 0U;
    } else {
        vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx = 0U;
    }
    if (((vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__valid
          [1U] & vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__pr1_ready
          [1U]) & vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__pr2_ready
         [1U])) {
        vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid = 1U;
        vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx = 1U;
    }
    vlSelf->__PVT__commit_rob_o[0U] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][0U];
    vlSelf->__PVT__commit_rob_o[1U] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][1U];
    vlSelf->__PVT__commit_rob_o[2U] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][2U];
    vlSelf->__PVT__commit_rob_o[3U] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][3U];
    vlSelf->__PVT__commit_rob_o[4U] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][4U];
    vlSelf->__PVT__commit_rob_o[5U] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][5U];
    vlSelf->__PVT__commit_rob_o[6U] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][6U];
    vlSelf->__PVT__commit_rob_o[7U] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][7U];
    vlSelf->__PVT__commit_rob_o[8U] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][8U];
    vlSelf->__PVT__commit_rob_o[9U] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][9U];
    vlSelf->__PVT__commit_rob_o[0xaU] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][0xaU];
    vlSelf->__PVT__commit_rob_o[0xbU] = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem
        [(0xfU & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr))][0xbU];
    vlSelf->__PVT__cpu_frontend__DOT__fetchq_full = 
        ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_full) 
         | ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_full) 
            | ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_full) 
               | (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_full))));
    vlSelf->__PVT__fetch_empty = ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_empty) 
                                  | ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_empty) 
                                     | ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_empty) 
                                        | (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_empty))));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__full 
        = (((1U & ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtr) 
                   >> 4U)) != (1U & ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr) 
                                     >> 4U))) & (IData)(vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_hc4999392__0));
    vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h7334ccba__0 
        = ((0U == (7U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U] 
                         >> 6U))) | (1U == (7U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U] 
                                                  >> 6U))));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag 
        = ((IData)(cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h7d88657b__0) 
           ^ (3U & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag 
        = ((IData)(cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h7d88657b__0) 
           ^ (0xfU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag 
        = ((IData)(cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h7d88657b__0) 
           ^ (0xffU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag 
        = ((IData)(cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h7d88657b__0) 
           ^ (IData)(vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h083e6cc3__0));
    vlSelf->cpu_execute__DOT__mem__DOT____VdfgTmp_h7b9661f3__0 
        = ((IData)(vlSelf->__PVT__cpu_execute__DOT__READY_i) 
           & (IData)(vlSymsp->TOP.dmem_resp));
    __VdfgTmp_h9e6e5575__0[0U] = vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx][0U];
    __VdfgTmp_h9e6e5575__0[1U] = vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx][1U];
    __VdfgTmp_h9e6e5575__0[2U] = vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx][2U];
    __VdfgTmp_h9e6e5575__0[3U] = vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx][3U];
    __VdfgTmp_h9e6e5575__0[4U] = vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx][4U];
    __VdfgTmp_h9e6e5575__0[5U] = vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx][5U];
    __VdfgTmp_h9e6e5575__0[6U] = vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx][6U];
    __VdfgTmp_h9e6e5575__0[7U] = vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx][7U];
    __VdfgTmp_h9e6e5575__0[8U] = vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx][8U];
    __VdfgTmp_h9e6e5575__0[9U] = vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx][9U];
    __VdfgTmp_h9e6e5575__0[0xaU] = vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx][0xaU];
    __VdfgTmp_h9e6e5575__0[0xbU] = vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx][0xbU];
    vlSelf->__VdfgTmp_h83d90f8b__0 = vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs
        [vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx];
    vlSelf->__VdfgTmp_h730d8d3f__0 = vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__midcore_rs
        [vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx];
    vlSelf->__VdfgTmp_h4b50ee27__0[0U] = vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx][0U];
    vlSelf->__VdfgTmp_h4b50ee27__0[1U] = vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx][1U];
    vlSelf->__VdfgTmp_h4b50ee27__0[2U] = vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx][2U];
    vlSelf->__VdfgTmp_h4b50ee27__0[3U] = vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx][3U];
    vlSelf->__VdfgTmp_h4b50ee27__0[4U] = vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx][4U];
    vlSelf->__VdfgTmp_h4b50ee27__0[5U] = vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx][5U];
    vlSelf->__VdfgTmp_h4b50ee27__0[6U] = vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx][6U];
    vlSelf->__VdfgTmp_h4b50ee27__0[7U] = vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx][7U];
    vlSelf->__VdfgTmp_h4b50ee27__0[8U] = vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx][8U];
    vlSelf->__VdfgTmp_h4b50ee27__0[9U] = vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx][9U];
    vlSelf->__VdfgTmp_h4b50ee27__0[0xaU] = vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx][0xaU];
    vlSelf->__VdfgTmp_h4b50ee27__0[0xbU] = vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx][0xbU];
    vlSelf->cpu_execute__DOT__mem__DOT____VdfgTmp_h037763e4__0 
        = ((vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xbU] 
            >> 0x10U) & (IData)(vlSelf->__PVT__cpu_execute__DOT__READY_i));
    vlSelf->__VdfgTmp_h21fae592__0[0U] = vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx][0U];
    vlSelf->__VdfgTmp_h21fae592__0[1U] = vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx][1U];
    vlSelf->__VdfgTmp_h21fae592__0[2U] = vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx][2U];
    vlSelf->__VdfgTmp_h21fae592__0[3U] = vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx][3U];
    vlSelf->__VdfgTmp_h21fae592__0[4U] = vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx][4U];
    vlSelf->__VdfgTmp_h21fae592__0[5U] = vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx][5U];
    vlSelf->__VdfgTmp_h21fae592__0[6U] = vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx][6U];
    vlSelf->__VdfgTmp_h21fae592__0[7U] = vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx][7U];
    vlSelf->__VdfgTmp_h21fae592__0[8U] = vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx][8U];
    vlSelf->__VdfgTmp_h21fae592__0[9U] = vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx][9U];
    vlSelf->__VdfgTmp_h21fae592__0[0xaU] = vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx][0xaU];
    vlSelf->__VdfgTmp_h21fae592__0[0xbU] = vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx][0xbU];
    vlSelf->__VdfgTmp_hfd0da316__0 = vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__midcore_rs
        [vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx];
    vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr2_val 
        = ((1U & (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                          >> 0xeU))) ? vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf
           [(0x3fU & (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                              >> 2U)))] : 0U);
    vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr1_val 
        = ((1U & (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                          >> 0xfU))) ? vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf
           [(0x3fU & (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                              >> 8U)))] : 0U);
    vlSelf->__VdfgTmp_h4d6db996__0[0U] = vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx][0U];
    vlSelf->__VdfgTmp_h4d6db996__0[1U] = vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx][1U];
    vlSelf->__VdfgTmp_h4d6db996__0[2U] = vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx][2U];
    vlSelf->__VdfgTmp_h4d6db996__0[3U] = vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx][3U];
    vlSelf->__VdfgTmp_h4d6db996__0[4U] = vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx][4U];
    vlSelf->__VdfgTmp_h4d6db996__0[5U] = vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx][5U];
    vlSelf->__VdfgTmp_h4d6db996__0[6U] = vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx][6U];
    vlSelf->__VdfgTmp_h4d6db996__0[7U] = vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx][7U];
    vlSelf->__VdfgTmp_h4d6db996__0[8U] = vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx][8U];
    vlSelf->__VdfgTmp_h4d6db996__0[9U] = vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx][9U];
    vlSelf->__VdfgTmp_h4d6db996__0[0xaU] = vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx][0xaU];
    vlSelf->__VdfgTmp_h4d6db996__0[0xbU] = vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx][0xbU];
    vlSelf->__VdfgTmp_he47ebcff__0 = vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__midcore_rs
        [vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx];
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_bp_idx 
        = (0x7fU & (((vlSelf->__PVT__commit_rob_o[0xaU] 
                      << 0xaU) | (vlSelf->__PVT__commit_rob_o[0xaU] 
                                  >> 0x16U)) ^ (((vlSelf->__PVT__commit_rob_o[0xaU] 
                                                  << 0x1eU) 
                                                 | (vlSelf->__PVT__commit_rob_o[0xaU] 
                                                    >> 2U)) 
                                                ^ (
                                                   (vlSelf->__PVT__commit_rob_o[0xaU] 
                                                    << 0x16U) 
                                                   | (vlSelf->__PVT__commit_rob_o[0xaU] 
                                                      >> 0xaU)))));
    vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h9247e85f__0 
        = (0x1ffU & (((vlSelf->__PVT__commit_rob_o[0xaU] 
                       << 0xcU) | (vlSelf->__PVT__commit_rob_o[0xaU] 
                                   >> 0x14U)) ^ (((
                                                   vlSelf->__PVT__commit_rob_o[0xaU] 
                                                   << 0x16U) 
                                                  | (vlSelf->__PVT__commit_rob_o[0xaU] 
                                                     >> 0xaU)) 
                                                 ^ 
                                                 vlSelf->__PVT__commit_rob_o[0xaU])));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_way = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_found = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_way = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_found = 0U;
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & ((vlSelf->__PVT__commit_rob_o[0xaU] 
                    << 1U) | (vlSelf->__PVT__commit_rob_o[9U] 
                              >> 0x1fU)))][0U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                                  [
                                                  (0xfU 
                                                   & ((vlSelf->__PVT__commit_rob_o[0xaU] 
                                                       << 1U) 
                                                      | (vlSelf->__PVT__commit_rob_o[9U] 
                                                         >> 0x1fU)))]
                                                  [0U] 
                                                  == 
                                                  ((vlSelf->__PVT__commit_rob_o[0xaU] 
                                                    << 3U) 
                                                   | (vlSelf->__PVT__commit_rob_o[9U] 
                                                      >> 0x1dU))))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_way = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_found = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & ((vlSelf->__PVT__commit_rob_o[0xaU] 
                    << 1U) | (vlSelf->__PVT__commit_rob_o[9U] 
                              >> 0x1fU)))][1U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                                  [
                                                  (0xfU 
                                                   & ((vlSelf->__PVT__commit_rob_o[0xaU] 
                                                       << 1U) 
                                                      | (vlSelf->__PVT__commit_rob_o[9U] 
                                                         >> 0x1fU)))]
                                                  [1U] 
                                                  == 
                                                  ((vlSelf->__PVT__commit_rob_o[0xaU] 
                                                    << 3U) 
                                                   | (vlSelf->__PVT__commit_rob_o[9U] 
                                                      >> 0x1dU))))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_way = 1U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_found = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & ((vlSelf->__PVT__commit_rob_o[0xaU] 
                    << 1U) | (vlSelf->__PVT__commit_rob_o[9U] 
                              >> 0x1fU)))][2U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                                  [
                                                  (0xfU 
                                                   & ((vlSelf->__PVT__commit_rob_o[0xaU] 
                                                       << 1U) 
                                                      | (vlSelf->__PVT__commit_rob_o[9U] 
                                                         >> 0x1fU)))]
                                                  [2U] 
                                                  == 
                                                  ((vlSelf->__PVT__commit_rob_o[0xaU] 
                                                    << 3U) 
                                                   | (vlSelf->__PVT__commit_rob_o[9U] 
                                                      >> 0x1dU))))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_way = 2U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_found = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & ((vlSelf->__PVT__commit_rob_o[0xaU] 
                    << 1U) | (vlSelf->__PVT__commit_rob_o[9U] 
                              >> 0x1fU)))][3U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                                  [
                                                  (0xfU 
                                                   & ((vlSelf->__PVT__commit_rob_o[0xaU] 
                                                       << 1U) 
                                                      | (vlSelf->__PVT__commit_rob_o[9U] 
                                                         >> 0x1fU)))]
                                                  [3U] 
                                                  == 
                                                  ((vlSelf->__PVT__commit_rob_o[0xaU] 
                                                    << 3U) 
                                                   | (vlSelf->__PVT__commit_rob_o[9U] 
                                                      >> 0x1dU))))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_way = 3U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_found = 1U;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk2__DOT__w = 4U;
    if ((1U & (~ vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
               [(0xfU & ((vlSelf->__PVT__commit_rob_o[0xaU] 
                          << 1U) | (vlSelf->__PVT__commit_rob_o[9U] 
                                    >> 0x1fU)))][3U]))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_way = 3U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_found = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
               [(0xfU & ((vlSelf->__PVT__commit_rob_o[0xaU] 
                          << 1U) | (vlSelf->__PVT__commit_rob_o[9U] 
                                    >> 0x1fU)))][2U]))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_way = 2U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_found = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
               [(0xfU & ((vlSelf->__PVT__commit_rob_o[0xaU] 
                          << 1U) | (vlSelf->__PVT__commit_rob_o[9U] 
                                    >> 0x1fU)))][1U]))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_way = 1U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_found = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
               [(0xfU & ((vlSelf->__PVT__commit_rob_o[0xaU] 
                          << 1U) | (vlSelf->__PVT__commit_rob_o[9U] 
                                    >> 0x1fU)))][0U]))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_way = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_found = 1U;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk3__DOT__w = 0xffffffffU;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_install_way 
        = ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_found)
            ? (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_way)
            : ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_found)
                ? (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_way)
                : ([&]() {
                    vlSelf->__Vfunc_cpu_frontend__DOT__branch_predict__DOT__btb__DOT__plru_victim__0__p 
                        = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru
                        [(0xfU & ((vlSelf->__PVT__commit_rob_o[0xaU] 
                                   << 1U) | (vlSelf->__PVT__commit_rob_o[9U] 
                                             >> 0x1fU)))];
                    {
                        if ((1U & (IData)(vlSelf->__Vfunc_cpu_frontend__DOT__branch_predict__DOT__btb__DOT__plru_victim__0__p))) {
                            vlSelf->__Vfunc_cpu_frontend__DOT__branch_predict__DOT__btb__DOT__plru_victim__0__Vfuncout 
                                = ((4U & (IData)(vlSelf->__Vfunc_cpu_frontend__DOT__branch_predict__DOT__btb__DOT__plru_victim__0__p))
                                    ? 3U : 2U);
                            goto __Vlabel5;
                        } else {
                            vlSelf->__Vfunc_cpu_frontend__DOT__branch_predict__DOT__btb__DOT__plru_victim__0__Vfuncout 
                                = ((2U & (IData)(vlSelf->__Vfunc_cpu_frontend__DOT__branch_predict__DOT__btb__DOT__plru_victim__0__p))
                                    ? 1U : 0U);
                            goto __Vlabel5;
                        }
                        __Vlabel5: ;
                    }
                }(), (IData)(vlSelf->__Vfunc_cpu_frontend__DOT__branch_predict__DOT__btb__DOT__plru_victim__0__Vfuncout))));
    vlSelf->__PVT__monitor_rd_addr = ((0x4000U & vlSelf->__PVT__commit_rob_o[0xbU])
                                       ? (0x1fU & (
                                                   vlSelf->__PVT__commit_rob_o[0xbU] 
                                                   >> 9U))
                                       : 0U);
    vlSelf->__PVT__monitor_valid = (((IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr) 
                                     != (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__wrPtr)) 
                                    & (IData)((0x18000U 
                                               == (0x18000U 
                                                   & vlSelf->__PVT__commit_rob_o[0xbU]))));
    vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h3beb847a__0 
        = ((IData)(vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h7334ccba__0) 
           | (2U == (7U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U] 
                           >> 6U))));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0U;
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [1U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [2U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 2U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [3U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 3U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [4U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 4U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [5U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 5U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [6U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 6U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [7U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 7U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [8U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 8U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [9U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 9U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0xaU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0xaU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0xbU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0xbU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0xcU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0xcU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0xdU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0xdU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0xeU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0xeU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0xfU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0xfU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x10U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x10U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x11U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x11U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x12U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x12U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x13U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x13U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x14U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x14U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x15U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x15U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x16U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x16U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x17U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x17U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x18U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x18U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x19U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x19U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x1aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x1aU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x1bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x1bU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x1cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x1cU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x1dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x1dU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x1eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x1eU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x1fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x1fU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x20U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x20U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x21U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x21U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x22U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x22U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x23U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x23U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x24U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x24U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x25U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x25U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x26U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x26U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x27U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x27U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x28U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x28U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x29U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x29U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x2aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x2aU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x2bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x2bU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x2cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x2cU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x2dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x2dU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x2eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x2eU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x2fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x2fU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x30U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x30U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x31U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x31U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x32U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x32U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x33U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x33U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x34U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x34U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x35U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x35U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x36U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x36U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x37U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x37U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x38U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x38U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x39U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x39U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x3aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x3aU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x3bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x3bU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x3cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x3cU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x3dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x3dU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x3eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x3eU;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0U;
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [1U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [1U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [2U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [2U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 2U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [3U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [3U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 3U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [4U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [4U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 4U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [5U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [5U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 5U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [6U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [6U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 6U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [7U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [7U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 7U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [8U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [8U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 8U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [9U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [9U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 9U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0xaU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0xaU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0xaU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0xbU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0xbU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0xbU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0xcU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0xcU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0xcU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0xdU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0xdU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0xdU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0xeU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0xeU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0xeU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0xfU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0xfU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0xfU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x10U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x10U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x10U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x11U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x11U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x11U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x12U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x12U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x12U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x13U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x13U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x13U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x14U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x14U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x14U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x15U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x15U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x15U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x16U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x16U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x16U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x17U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x17U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x17U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x18U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x18U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x18U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x19U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x19U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x19U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x1aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x1aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x1aU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x1bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x1bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x1bU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x1cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x1cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x1cU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x1dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x1dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x1dU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x1eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x1eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x1eU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x1fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x1fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x1fU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x20U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x20U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x20U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x21U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x21U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x21U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x22U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x22U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x22U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x23U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x23U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x23U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x24U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x24U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x24U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x25U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x25U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x25U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x26U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x26U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x26U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x27U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x27U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x27U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x28U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x28U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x28U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x29U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x29U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x29U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x2aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x2aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x2aU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x2bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x2bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x2bU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x2cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x2cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x2cU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x2dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x2dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x2dU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x2eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x2eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x2eU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x2fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x2fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x2fU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x30U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x30U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x30U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x31U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x31U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x31U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x32U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x32U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x32U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x33U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x33U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x33U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x34U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x34U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x34U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x35U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x35U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x35U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x36U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x36U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x36U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x37U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x37U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x37U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x38U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x38U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x38U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x39U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x39U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x39U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x3aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x3aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x3aU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x3bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x3bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x3bU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x3cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x3cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x3cU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x3dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x3dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x3dU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x3eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x3eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x3eU;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 0U;
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [1U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [2U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [3U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [4U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [5U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [6U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [7U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [8U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [9U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0xaU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0xbU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0xcU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0xdU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0xeU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0xfU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x10U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x11U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x12U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x13U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x14U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x15U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x16U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x17U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x18U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x19U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x1aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x1bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x1cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x1dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x1eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x1fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x20U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x21U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x22U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x23U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x24U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x25U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x26U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x27U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x28U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x29U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x2aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x2bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x2cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x2dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x2eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x2fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x30U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x31U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x32U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x33U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x34U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x35U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x36U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x37U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x38U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x39U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x3aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x3bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x3cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x3dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x3eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
         [0x3fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0x3fU;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = 1U;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 0U;
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [1U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [1U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [2U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [2U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [3U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [3U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [4U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [4U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [5U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [5U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [6U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [6U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [7U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [7U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [8U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [8U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [9U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [9U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0xaU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0xaU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0xbU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0xbU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0xcU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0xcU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0xdU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0xdU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0xeU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0xeU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0xfU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0xfU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x10U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x10U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x11U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x11U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x12U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x12U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x13U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x13U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x14U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x14U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x15U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x15U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x16U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x16U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x17U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x17U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x18U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x18U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x19U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x19U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x1aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x1aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x1bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x1bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x1cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x1cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x1dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x1dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x1eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x1eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x1fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x1fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x20U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x20U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x21U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x21U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x22U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x22U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x23U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x23U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x24U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x24U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x25U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x25U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x26U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x26U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x27U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x27U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x28U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x28U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x29U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x29U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x2aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x2aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x2bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x2bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x2cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x2cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x2dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x2dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x2eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x2eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x2fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x2fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x30U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x30U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x31U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x31U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x32U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x32U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x33U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x33U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x34U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x34U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x35U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x35U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x36U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x36U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x37U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x37U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x38U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x38U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x39U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x39U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x3aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x3aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x3bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x3bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x3cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x3cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x3dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x3dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x3eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x3eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag
          [0x3fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u
         [0x3fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0x3fU;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = 1U;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0U;
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [1U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [2U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 2U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [3U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 3U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [4U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 4U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [5U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 5U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [6U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 6U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [7U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 7U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [8U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 8U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [9U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 9U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0xaU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0xaU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0xbU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0xbU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0xcU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0xcU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0xdU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0xdU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0xeU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0xeU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0xfU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0xfU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x10U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x10U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x11U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x11U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x12U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x12U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x13U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x13U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x14U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x14U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x15U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x15U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x16U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x16U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x17U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x17U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x18U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x18U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x19U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x19U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x1aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x1aU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x1bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x1bU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x1cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x1cU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x1dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x1dU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x1eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x1eU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x1fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x1fU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x20U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x20U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x21U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x21U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x22U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x22U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x23U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x23U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x24U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x24U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x25U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x25U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x26U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x26U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x27U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x27U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x28U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x28U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x29U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x29U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x2aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x2aU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x2bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x2bU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x2cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x2cU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x2dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x2dU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x2eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x2eU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x2fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x2fU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x30U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x30U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x31U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x31U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x32U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x32U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x33U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x33U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x34U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x34U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x35U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x35U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x36U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x36U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x37U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x37U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x38U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x38U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x39U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x39U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x3aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x3aU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x3bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x3bU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x3cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x3cU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x3dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x3dU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x3eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x3eU;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0U;
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [1U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [1U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [2U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [2U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 2U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [3U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [3U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 3U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [4U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [4U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 4U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [5U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [5U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 5U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [6U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [6U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 6U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [7U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [7U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 7U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [8U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [8U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 8U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [9U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [9U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 9U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0xaU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0xaU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0xaU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0xbU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0xbU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0xbU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0xcU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0xcU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0xcU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0xdU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0xdU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0xdU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0xeU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0xeU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0xeU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0xfU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0xfU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0xfU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x10U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x10U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x10U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x11U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x11U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x11U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x12U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x12U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x12U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x13U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x13U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x13U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x14U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x14U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x14U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x15U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x15U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x15U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x16U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x16U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x16U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x17U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x17U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x17U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x18U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x18U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x18U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x19U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x19U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x19U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x1aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x1aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x1aU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x1bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x1bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x1bU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x1cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x1cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x1cU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x1dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x1dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x1dU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x1eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x1eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x1eU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x1fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x1fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x1fU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x20U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x20U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x20U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x21U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x21U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x21U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x22U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x22U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x22U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x23U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x23U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x23U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x24U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x24U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x24U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x25U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x25U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x25U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x26U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x26U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x26U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x27U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x27U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x27U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x28U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x28U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x28U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x29U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x29U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x29U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x2aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x2aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x2aU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x2bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x2bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x2bU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x2cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x2cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x2cU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x2dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x2dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x2dU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x2eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x2eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x2eU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x2fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x2fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x2fU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x30U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x30U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x30U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x31U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x31U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x31U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x32U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x32U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x32U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x33U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x33U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x33U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x34U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x34U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x34U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x35U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x35U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x35U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x36U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x36U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x36U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x37U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x37U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x37U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x38U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x38U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x38U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x39U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x39U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x39U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x3aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x3aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x3aU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x3bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x3bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x3bU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x3cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x3cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x3cU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x3dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x3dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x3dU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x3eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x3eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x3eU;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 0U;
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [1U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [2U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [3U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [4U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [5U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [6U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [7U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [8U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [9U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0xaU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0xbU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0xcU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0xdU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0xeU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0xfU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x10U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x11U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x12U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x13U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x14U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x15U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x16U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x17U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x18U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x19U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x1aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x1bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x1cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x1dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x1eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x1fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x20U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x21U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x22U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x23U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x24U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x25U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x26U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x27U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x28U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x29U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x2aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x2bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x2cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x2dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x2eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x2fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x30U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x31U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x32U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x33U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x34U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x35U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x36U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x37U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x38U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x39U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x3aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x3bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x3cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x3dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x3eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
         [0x3fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0x3fU;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = 1U;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 0U;
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [1U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [1U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [2U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [2U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [3U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [3U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [4U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [4U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [5U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [5U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [6U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [6U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [7U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [7U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [8U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [8U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [9U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [9U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0xaU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0xaU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0xbU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0xbU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0xcU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0xcU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0xdU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0xdU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0xeU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0xeU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0xfU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0xfU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x10U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x10U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x11U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x11U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x12U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x12U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x13U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x13U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x14U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x14U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x15U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x15U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x16U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x16U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x17U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x17U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x18U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x18U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x19U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x19U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x1aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x1aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x1bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x1bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x1cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x1cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x1dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x1dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x1eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x1eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x1fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x1fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x20U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x20U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x21U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x21U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x22U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x22U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x23U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x23U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x24U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x24U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x25U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x25U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x26U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x26U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x27U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x27U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x28U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x28U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x29U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x29U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x2aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x2aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x2bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x2bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x2cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x2cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x2dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x2dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x2eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x2eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x2fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x2fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x30U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x30U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x31U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x31U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x32U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x32U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x33U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x33U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x34U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x34U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x35U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x35U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x36U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x36U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x37U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x37U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x38U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x38U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x39U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x39U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x3aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x3aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x3bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x3bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x3cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x3cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x3dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x3dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x3eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x3eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag
          [0x3fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u
         [0x3fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0x3fU;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = 1U;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0U;
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [1U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [2U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 2U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [3U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 3U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [4U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 4U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [5U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 5U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [6U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 6U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [7U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 7U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [8U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 8U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [9U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 9U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0xaU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0xaU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0xbU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0xbU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0xcU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0xcU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0xdU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0xdU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0xeU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0xeU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0xfU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0xfU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x10U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x10U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x11U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x11U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x12U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x12U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x13U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x13U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x14U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x14U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x15U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x15U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x16U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x16U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x17U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x17U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x18U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x18U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x19U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x19U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x1aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x1aU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x1bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x1bU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x1cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x1cU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x1dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x1dU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x1eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x1eU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x1fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x1fU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x20U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x20U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x21U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x21U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x22U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x22U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x23U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x23U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x24U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x24U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x25U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x25U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x26U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x26U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x27U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x27U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x28U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x28U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x29U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x29U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x2aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x2aU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x2bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x2bU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x2cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x2cU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x2dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x2dU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x2eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x2eU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x2fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x2fU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x30U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x30U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x31U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x31U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x32U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x32U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x33U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x33U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x34U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x34U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x35U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x35U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x36U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x36U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x37U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x37U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x38U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x38U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x39U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x39U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x3aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x3aU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x3bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x3bU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x3cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x3cU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x3dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x3dU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x3eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x3eU;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0U;
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [1U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [1U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [2U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [2U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 2U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [3U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [3U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 3U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [4U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [4U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 4U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [5U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [5U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 5U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [6U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [6U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 6U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [7U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [7U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 7U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [8U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [8U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 8U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [9U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [9U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 9U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0xaU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0xaU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0xaU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0xbU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0xbU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0xbU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0xcU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0xcU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0xcU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0xdU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0xdU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0xdU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0xeU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0xeU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0xeU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0xfU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0xfU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0xfU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x10U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x10U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x10U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x11U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x11U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x11U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x12U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x12U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x12U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x13U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x13U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x13U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x14U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x14U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x14U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x15U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x15U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x15U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x16U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x16U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x16U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x17U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x17U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x17U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x18U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x18U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x18U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x19U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x19U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x19U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x1aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x1aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x1aU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x1bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x1bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x1bU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x1cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x1cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x1cU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x1dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x1dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x1dU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x1eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x1eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x1eU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x1fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x1fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x1fU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x20U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x20U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x20U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x21U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x21U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x21U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x22U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x22U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x22U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x23U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x23U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x23U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x24U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x24U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x24U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x25U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x25U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x25U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x26U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x26U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x26U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x27U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x27U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x27U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x28U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x28U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x28U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x29U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x29U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x29U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x2aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x2aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x2aU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x2bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x2bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x2bU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x2cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x2cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x2cU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x2dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x2dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x2dU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x2eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x2eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x2eU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x2fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x2fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x2fU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x30U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x30U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x30U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x31U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x31U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x31U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x32U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x32U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x32U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x33U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x33U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x33U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x34U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x34U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x34U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x35U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x35U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x35U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x36U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x36U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x36U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x37U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x37U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x37U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x38U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x38U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x38U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x39U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x39U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x39U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x3aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x3aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x3aU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x3bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x3bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x3bU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x3cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x3cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x3cU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x3dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x3dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x3dU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x3eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x3eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x3eU;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 0U;
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [1U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [2U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [3U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [4U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [5U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [6U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [7U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [8U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [9U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0xaU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0xbU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0xcU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0xdU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0xeU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0xfU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x10U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x11U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x12U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x13U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x14U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x15U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x16U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x17U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x18U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x19U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x1aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x1bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x1cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x1dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x1eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x1fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x20U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x21U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x22U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x23U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x24U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x25U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x26U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x27U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x28U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x29U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x2aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x2bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x2cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x2dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x2eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x2fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x30U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x31U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x32U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x33U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x34U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x35U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x36U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x37U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x38U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x39U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x3aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x3bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x3cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x3dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x3eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
         [0x3fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0x3fU;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = 1U;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 0U;
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [1U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [1U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [2U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [2U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [3U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [3U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [4U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [4U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [5U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [5U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [6U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [6U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [7U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [7U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [8U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [8U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [9U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [9U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0xaU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0xaU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0xbU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0xbU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0xcU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0xcU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0xdU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0xdU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0xeU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0xeU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0xfU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0xfU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x10U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x10U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x11U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x11U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x12U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x12U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x13U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x13U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x14U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x14U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x15U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x15U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x16U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x16U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x17U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x17U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x18U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x18U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x19U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x19U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x1aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x1aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x1bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x1bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x1cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x1cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x1dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x1dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x1eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x1eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x1fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x1fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x20U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x20U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x21U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x21U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x22U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x22U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x23U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x23U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x24U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x24U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x25U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x25U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x26U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x26U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x27U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x27U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x28U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x28U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x29U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x29U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x2aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x2aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x2bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x2bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x2cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x2cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x2dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x2dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x2eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x2eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x2fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x2fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x30U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x30U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x31U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x31U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x32U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x32U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x33U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x33U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x34U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x34U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x35U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x35U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x36U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x36U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x37U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x37U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x38U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x38U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x39U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x39U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x3aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x3aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x3bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x3bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x3cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x3cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x3dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x3dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x3eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x3eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag
          [0x3fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u
         [0x3fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0x3fU;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = 1U;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0U;
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [1U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [2U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 2U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [3U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 3U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [4U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 4U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [5U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 5U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [6U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 6U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [7U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 7U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [8U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 8U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [9U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 9U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0xaU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0xaU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0xbU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0xbU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0xcU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0xcU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0xdU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0xdU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0xeU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0xeU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0xfU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0xfU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x10U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x10U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x11U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x11U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x12U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x12U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x13U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x13U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x14U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x14U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x15U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x15U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x16U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x16U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x17U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x17U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x18U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x18U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x19U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x19U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x1aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x1aU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x1bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x1bU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x1cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x1cU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x1dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x1dU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x1eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x1eU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x1fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x1fU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x20U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x20U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x21U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x21U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x22U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x22U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x23U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x23U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x24U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x24U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x25U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x25U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x26U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x26U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x27U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x27U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x28U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x28U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x29U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x29U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x2aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x2aU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x2bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x2bU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x2cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x2cU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x2dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x2dU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x2eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x2eU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x2fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x2fU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x30U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x30U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x31U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x31U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x32U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x32U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x33U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x33U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x34U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x34U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x35U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x35U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x36U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x36U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x37U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x37U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x38U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x38U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x39U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x39U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x3aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x3aU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x3bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x3bU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x3cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x3cU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x3dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x3dU;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x3eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x3eU;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0U;
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [1U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [1U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [2U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [2U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 2U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [3U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [3U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 3U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [4U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [4U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 4U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [5U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [5U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 5U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [6U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [6U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 6U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [7U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [7U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 7U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [8U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [8U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 8U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [9U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [9U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 9U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xaU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xaU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0xaU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xbU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xbU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0xbU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xcU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xcU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0xcU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xdU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xdU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0xdU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xeU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xeU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0xeU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xfU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xfU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0xfU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x10U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x10U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x10U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x11U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x11U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x11U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x12U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x12U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x12U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x13U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x13U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x13U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x14U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x14U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x14U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x15U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x15U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x15U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x16U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x16U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x16U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x17U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x17U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x17U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x18U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x18U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x18U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x19U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x19U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x19U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x1aU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x1bU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x1cU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x1dU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x1eU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x1fU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x20U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x20U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x20U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x21U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x21U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x21U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x22U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x22U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x22U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x23U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x23U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x23U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x24U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x24U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x24U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x25U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x25U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x25U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x26U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x26U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x26U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x27U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x27U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x27U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x28U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x28U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x28U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x29U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x29U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x29U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x2aU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x2bU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x2cU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x2dU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x2eU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x2fU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x30U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x30U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x30U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x31U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x31U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x31U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x32U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x32U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x32U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x33U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x33U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x33U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x34U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x34U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x34U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x35U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x35U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x35U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x36U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x36U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x36U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x37U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x37U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x37U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x38U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x38U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x38U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x39U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x39U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x39U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x3aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x3aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x3aU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x3bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x3bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x3bU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x3cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x3cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x3cU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x3dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x3dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x3dU;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x3eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x3eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x3eU;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 0U;
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [1U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [2U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [3U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [4U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [5U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [6U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [7U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [8U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [9U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0xaU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0xbU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0xcU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0xdU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0xeU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0xfU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x10U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x11U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x12U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x13U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x14U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x15U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x16U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x17U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x18U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x19U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x1aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x1bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x1cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x1dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x1eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x1fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x20U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x21U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x22U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x23U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x24U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x25U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x26U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x27U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x28U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x29U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x2aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x2bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x2cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x2dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x2eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x2fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x30U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x31U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x32U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x33U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x34U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x35U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x36U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x37U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x38U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x39U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x3aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x3bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x3cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x3dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x3eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
         [0x3fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0x3fU;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = 1U;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 0U;
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [1U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [1U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [2U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [2U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [3U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [3U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [4U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [4U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [5U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [5U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [6U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [6U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [7U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [7U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [8U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [8U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [9U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [9U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xaU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xaU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xbU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xbU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xcU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xcU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xdU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xdU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xeU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xeU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0xfU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0xfU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x10U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x10U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x11U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x11U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x12U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x12U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x13U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x13U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x14U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x14U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x15U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x15U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x16U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x16U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x17U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x17U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x18U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x18U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x19U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x19U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x1fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x1fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x20U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x20U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x21U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x21U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x22U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x22U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x23U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x23U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x24U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x24U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x25U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x25U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x26U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x26U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x27U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x27U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x28U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x28U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x29U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x29U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x2fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x2fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x30U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x30U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x31U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x31U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x32U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x32U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x33U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x33U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x34U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x34U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x35U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x35U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x36U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x36U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x37U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x37U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x38U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x38U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x39U] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x39U])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x3aU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x3aU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x3bU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x3bU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x3cU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x3cU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x3dU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x3dU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x3eU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x3eU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    if (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag
          [0x3fU] == (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag)) 
         & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u
         [0x3fU])) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0x3fU;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = 1U;
    }
    vlSelf->__PVT__cpu_execute__DOT__load_valid = (
                                                   (~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem_empty_i)) 
                                                   & ((~ (IData)(vlSelf->__PVT__cpu_execute__DOT__LDorST_i)) 
                                                      & (IData)(vlSelf->cpu_execute__DOT__mem__DOT____VdfgTmp_h7b9661f3__0)));
    if (vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx_valid) {
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0U] 
            = __VdfgTmp_h9e6e5575__0[0U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[1U] 
            = __VdfgTmp_h9e6e5575__0[1U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[2U] 
            = __VdfgTmp_h9e6e5575__0[2U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[3U] 
            = __VdfgTmp_h9e6e5575__0[3U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[4U] 
            = __VdfgTmp_h9e6e5575__0[4U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[5U] 
            = __VdfgTmp_h9e6e5575__0[5U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[6U] 
            = __VdfgTmp_h9e6e5575__0[6U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[7U] 
            = __VdfgTmp_h9e6e5575__0[7U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[8U] 
            = __VdfgTmp_h9e6e5575__0[8U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[9U] 
            = __VdfgTmp_h9e6e5575__0[9U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0xaU] 
            = __VdfgTmp_h9e6e5575__0[0xaU];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0xbU] 
            = __VdfgTmp_h9e6e5575__0[0xbU];
        vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
            = vlSelf->__VdfgTmp_h83d90f8b__0;
    } else {
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[0U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[1U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[1U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[2U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[2U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[3U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[3U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[4U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[4U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[5U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[5U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[6U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[6U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[7U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[7U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[8U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[8U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[9U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[9U];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0xaU] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[0xaU];
        vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0xbU] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[0xbU];
        vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i = 0ULL;
    }
    vlSelf->__PVT__cpu_execute__DOT__mul_valid = ((~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mul_empty_i)) 
                                                  & ((IData)(vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx_valid) 
                                                     & (__VdfgTmp_h9e6e5575__0[0xbU] 
                                                        >> 0x10U)));
    vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val 
        = (((IData)(vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx_valid) 
            & (IData)((vlSelf->__VdfgTmp_h83d90f8b__0 
                       >> 0xfU))) ? vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf
           [((IData)(vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx_valid)
              ? (0x3fU & (IData)((vlSelf->__VdfgTmp_h83d90f8b__0 
                                  >> 8U))) : 0U)] : 0U);
    vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val 
        = (((IData)(vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx_valid) 
            & (IData)((vlSelf->__VdfgTmp_h83d90f8b__0 
                       >> 0xeU))) ? vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf
           [((IData)(vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx_valid)
              ? (0x3fU & (IData)((vlSelf->__VdfgTmp_h83d90f8b__0 
                                  >> 2U))) : 0U)] : 0U);
    if (vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx_valid) {
        vlSelf->__PVT__cpu_execute__DOT__jump_MIDCORE_data_i 
            = vlSelf->__VdfgTmp_h730d8d3f__0;
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0U] 
            = vlSelf->__VdfgTmp_h4b50ee27__0[0U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[1U] 
            = vlSelf->__VdfgTmp_h4b50ee27__0[1U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[2U] 
            = vlSelf->__VdfgTmp_h4b50ee27__0[2U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[3U] 
            = vlSelf->__VdfgTmp_h4b50ee27__0[3U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[4U] 
            = vlSelf->__VdfgTmp_h4b50ee27__0[4U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[5U] 
            = vlSelf->__VdfgTmp_h4b50ee27__0[5U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[6U] 
            = vlSelf->__VdfgTmp_h4b50ee27__0[6U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[7U] 
            = vlSelf->__VdfgTmp_h4b50ee27__0[7U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[8U] 
            = vlSelf->__VdfgTmp_h4b50ee27__0[8U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
            = vlSelf->__VdfgTmp_h4b50ee27__0[9U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU] 
            = vlSelf->__VdfgTmp_h4b50ee27__0[0xaU];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xbU] 
            = vlSelf->__VdfgTmp_h4b50ee27__0[0xbU];
    } else {
        vlSelf->__PVT__cpu_execute__DOT__jump_MIDCORE_data_i = 0ULL;
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[0U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[1U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[1U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[2U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[2U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[3U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[3U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[4U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[4U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[5U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[5U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[6U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[6U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[7U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[7U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[8U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[8U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[9U];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[0xaU];
        vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xbU] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[0xbU];
    }
    vlSelf->__PVT__cpu_execute__DOT__lookup_jump_pr1_val 
        = (((IData)(vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx_valid) 
            & (IData)((vlSelf->__VdfgTmp_h730d8d3f__0 
                       >> 0xfU))) ? vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf
           [((IData)(vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx_valid)
              ? (0x3fU & (IData)((vlSelf->__VdfgTmp_h730d8d3f__0 
                                  >> 8U))) : 0U)] : 0U);
    vlSelf->__PVT__cpu_execute__DOT__jump_valid = (
                                                   (~ (IData)(vlSelf->__PVT__cpu_execute__DOT__jump_empty_i)) 
                                                   & ((IData)(vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx_valid) 
                                                      & (vlSelf->__VdfgTmp_h4b50ee27__0[0xbU] 
                                                         >> 0x10U)));
    vlSelf->cpu_execute__DOT__mem__DOT____VdfgTmp_hfe74eb39__0 
        = ((~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem_empty_i)) 
           & (IData)(vlSelf->cpu_execute__DOT__mem__DOT____VdfgTmp_h037763e4__0));
    if (vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx_valid) {
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0U] 
            = vlSelf->__VdfgTmp_h21fae592__0[0U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[1U] 
            = vlSelf->__VdfgTmp_h21fae592__0[1U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[2U] 
            = vlSelf->__VdfgTmp_h21fae592__0[2U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[3U] 
            = vlSelf->__VdfgTmp_h21fae592__0[3U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[4U] 
            = vlSelf->__VdfgTmp_h21fae592__0[4U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[5U] 
            = vlSelf->__VdfgTmp_h21fae592__0[5U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[6U] 
            = vlSelf->__VdfgTmp_h21fae592__0[6U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[7U] 
            = vlSelf->__VdfgTmp_h21fae592__0[7U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[8U] 
            = vlSelf->__VdfgTmp_h21fae592__0[8U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[9U] 
            = vlSelf->__VdfgTmp_h21fae592__0[9U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0xaU] 
            = vlSelf->__VdfgTmp_h21fae592__0[0xaU];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0xbU] 
            = vlSelf->__VdfgTmp_h21fae592__0[0xbU];
        vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
            = vlSelf->__VdfgTmp_hfd0da316__0;
    } else {
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[0U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[1U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[1U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[2U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[2U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[3U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[3U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[4U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[4U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[5U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[5U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[6U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[6U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[7U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[7U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[8U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[8U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[9U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[9U];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0xaU] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[0xaU];
        vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0xbU] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[0xbU];
        vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i = 0ULL;
    }
    vlSelf->__PVT__cpu_execute__DOT__alu_valid = ((~ (IData)(vlSelf->__PVT__cpu_execute__DOT__alu_empty_i)) 
                                                  & ((IData)(vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx_valid) 
                                                     & (vlSelf->__VdfgTmp_h21fae592__0[0xbU] 
                                                        >> 0x10U)));
    vlSelf->cpu_execute__DOT____Vcellinp__PRF__lookup_alu_pr1_valid 
        = ((IData)(vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx_valid) 
           & (IData)((vlSelf->__VdfgTmp_hfd0da316__0 
                      >> 0xfU)));
    vlSelf->cpu_execute__DOT____Vcellinp__PRF__lookup_alu_pr2_valid 
        = ((IData)(vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx_valid) 
           & (IData)((vlSelf->__VdfgTmp_hfd0da316__0 
                      >> 0xeU)));
    vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr 
        = ((IData)(vlSelf->cpu_execute__DOT__mem__DOT____VdfgTmp_h037763e4__0)
            ? (vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr1_val 
               + (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                          >> 0x1aU))) : 0U);
    if (vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid) {
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[0U] 
            = vlSelf->__VdfgTmp_h4d6db996__0[0U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[1U] 
            = vlSelf->__VdfgTmp_h4d6db996__0[1U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[2U] 
            = vlSelf->__VdfgTmp_h4d6db996__0[2U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[3U] 
            = vlSelf->__VdfgTmp_h4d6db996__0[3U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[4U] 
            = vlSelf->__VdfgTmp_h4d6db996__0[4U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[5U] 
            = vlSelf->__VdfgTmp_h4d6db996__0[5U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[6U] 
            = vlSelf->__VdfgTmp_h4d6db996__0[6U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[7U] 
            = vlSelf->__VdfgTmp_h4d6db996__0[7U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[8U] 
            = vlSelf->__VdfgTmp_h4d6db996__0[8U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[9U] 
            = vlSelf->__VdfgTmp_h4d6db996__0[9U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[0xaU] 
            = vlSelf->__VdfgTmp_h4d6db996__0[0xaU];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[0xbU] 
            = vlSelf->__VdfgTmp_h4d6db996__0[0xbU];
        vlSelf->cpu_execute__DOT__cmp__DOT____VdfgTmp_h2a77b1e8__0 
            = ((vlSelf->__VdfgTmp_h4d6db996__0[0xaU] 
                << 3U) | (vlSelf->__VdfgTmp_h4d6db996__0[9U] 
                          >> 0x1dU));
        vlSelf->__PVT__cpu_execute__DOT__cmp_MIDCORE_data_i 
            = vlSelf->__VdfgTmp_he47ebcff__0;
    } else {
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[0U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[0U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[1U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[1U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[2U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[2U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[3U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[3U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[4U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[4U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[5U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[5U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[6U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[6U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[7U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[7U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[8U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[8U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[9U] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[9U];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[0xaU] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[0xaU];
        vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[0xbU] 
            = Vtop_tb__ConstPool__CONST_h7f9a7980_0[0xbU];
        vlSelf->cpu_execute__DOT__cmp__DOT____VdfgTmp_h2a77b1e8__0 = 0U;
        vlSelf->__PVT__cpu_execute__DOT__cmp_MIDCORE_data_i = 0ULL;
    }
    vlSelf->__PVT__cpu_execute__DOT__cmp_valid = ((~ (IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_empty_i)) 
                                                  & ((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid) 
                                                     & (vlSelf->__VdfgTmp_h4d6db996__0[0xbU] 
                                                        >> 0x10U)));
    vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a = 
        (((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid) 
          & (IData)((vlSelf->__VdfgTmp_he47ebcff__0 
                     >> 0xfU))) ? vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf
         [((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid)
            ? (0x3fU & (IData)((vlSelf->__VdfgTmp_he47ebcff__0 
                                >> 8U))) : 0U)] : 0U);
    vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b = 
        (((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid) 
          & (IData)((vlSelf->__VdfgTmp_he47ebcff__0 
                     >> 0xeU))) ? vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf
         [((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid)
            ? (0x3fU & (IData)((vlSelf->__VdfgTmp_he47ebcff__0 
                                >> 2U))) : 0U)] : 0U);
    vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtrNext 
        = vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr;
    if (vlSelf->__PVT__monitor_valid) {
        vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtrNext 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)));
        vlSelf->__PVT__commit_branch_actual_taken = 
            (1U & vlSelf->__PVT__commit_rob_o[0U]);
        vlSelf->__Vcellinp__cpu_midcore__commit_update 
            = (1U & (vlSelf->__PVT__commit_rob_o[0xbU] 
                     >> 0xeU));
        vlSelf->__PVT__mispredict = (1U & (vlSelf->__PVT__commit_rob_o[1U] 
                                           >> 2U));
        vlSelf->cpu_frontend__DOT__branch_predict__DOT____Vcellinp__tage_predictor__update_valid 
            = (IData)((0U != (0x18U & vlSelf->__PVT__commit_rob_o[1U])));
    } else {
        vlSelf->__PVT__commit_branch_actual_taken = 0U;
        vlSelf->__Vcellinp__cpu_midcore__commit_update = 0U;
        vlSelf->__PVT__mispredict = 0U;
        vlSelf->cpu_frontend__DOT__branch_predict__DOT____Vcellinp__tage_predictor__update_valid = 0U;
    }
    vlSelf->__PVT__arat_o[0U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0U];
    vlSelf->__PVT__arat_o[1U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [1U];
    vlSelf->__PVT__arat_o[2U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [2U];
    vlSelf->__PVT__arat_o[3U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [3U];
    vlSelf->__PVT__arat_o[4U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [4U];
    vlSelf->__PVT__arat_o[5U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [5U];
    vlSelf->__PVT__arat_o[6U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [6U];
    vlSelf->__PVT__arat_o[7U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [7U];
    vlSelf->__PVT__arat_o[8U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [8U];
    vlSelf->__PVT__arat_o[9U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [9U];
    vlSelf->__PVT__arat_o[0xaU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0xaU];
    vlSelf->__PVT__arat_o[0xbU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0xbU];
    vlSelf->__PVT__arat_o[0xcU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0xcU];
    vlSelf->__PVT__arat_o[0xdU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0xdU];
    vlSelf->__PVT__arat_o[0xeU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0xeU];
    vlSelf->__PVT__arat_o[0xfU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0xfU];
    vlSelf->__PVT__arat_o[0x10U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x10U];
    vlSelf->__PVT__arat_o[0x11U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x11U];
    vlSelf->__PVT__arat_o[0x12U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x12U];
    vlSelf->__PVT__arat_o[0x13U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x13U];
    vlSelf->__PVT__arat_o[0x14U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x14U];
    vlSelf->__PVT__arat_o[0x15U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x15U];
    vlSelf->__PVT__arat_o[0x16U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x16U];
    vlSelf->__PVT__arat_o[0x17U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x17U];
    vlSelf->__PVT__arat_o[0x18U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x18U];
    vlSelf->__PVT__arat_o[0x19U] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x19U];
    vlSelf->__PVT__arat_o[0x1aU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x1aU];
    vlSelf->__PVT__arat_o[0x1bU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x1bU];
    vlSelf->__PVT__arat_o[0x1cU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x1cU];
    vlSelf->__PVT__arat_o[0x1dU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x1dU];
    vlSelf->__PVT__arat_o[0x1eU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x1eU];
    vlSelf->__PVT__arat_o[0x1fU] = vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat
        [0x1fU];
    if (((IData)(vlSelf->__PVT__monitor_valid) & (vlSelf->__PVT__commit_rob_o[0xbU] 
                                                  >> 0xeU))) {
        vlSelf->__PVT__arat_o[(0x1fU & (vlSelf->__PVT__commit_rob_o[0xbU] 
                                        >> 9U))] = 
            (0x3fU & (vlSelf->__PVT__commit_rob_o[0xbU] 
                      >> 3U));
    }
    vlSelf->__PVT__cpu_execute__DOT__mem__DOT__store_match 
        = ((IData)(vlSelf->__PVT__cpu_execute__DOT__LDorST_i) 
           & ((IData)(vlSelf->__PVT__monitor_valid) 
              & ((((vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xaU] 
                    << 3U) | (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[9U] 
                              >> 0x1dU)) == ((vlSelf->__PVT__commit_rob_o[0xaU] 
                                              << 3U) 
                                             | (vlSelf->__PVT__commit_rob_o[9U] 
                                                >> 0x1dU))) 
                 & ((((vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[8U] 
                       << 3U) | (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[7U] 
                                 >> 0x1dU)) == ((vlSelf->__PVT__commit_rob_o[8U] 
                                                 << 3U) 
                                                | (vlSelf->__PVT__commit_rob_o[7U] 
                                                   >> 0x1dU))) 
                    & ((0xfU & (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[5U] 
                                >> 0xdU)) == (0xfU 
                                              & (IData)(vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr)))))));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp 
        = (1U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__bp_table
                 [(0x7fU & ((vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                             >> 0x19U) ^ ((vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                           >> 5U) ^ 
                                          (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                           >> 0xdU))))] 
                 >> 1U));
    if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp = 4U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp 
            = (1U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_table
                     [(0x3fU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u)] 
                     >> 1U));
    } else if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp = 3U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp 
            = (1U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table
                     [(0x3fU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u)] 
                     >> 1U));
    } else if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp = 4U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp 
            = (1U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_table
                     [(0x3fU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag)] 
                     >> 1U));
    } else if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp = 2U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp 
            = (1U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table
                     [(0x3fU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u)] 
                     >> 1U));
    } else if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp = 3U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp 
            = (1U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table
                     [(0x3fU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag)] 
                     >> 1U));
    } else if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp = 1U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp 
            = (1U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table
                     [(0x3fU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u)] 
                     >> 1U));
    } else if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp = 2U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp 
            = (1U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table
                     [(0x3fU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag)] 
                     >> 1U));
    } else if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp = 1U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp 
            = (1U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table
                     [(0x3fU & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag)] 
                     >> 1U));
    }
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext 
        = vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr;
    if ((((IData)(vlSelf->__PVT__cpu_execute__DOT__load_valid) 
          | ((~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem_empty_i)) 
             & ((IData)(vlSelf->__PVT__cpu_execute__DOT__LDorST_i) 
                & (IData)(vlSelf->cpu_execute__DOT__mem__DOT____VdfgTmp_h7b9661f3__0)))) 
         & (~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem_empty_i)))) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr)));
    }
    vlSelf->__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val), 
                      VL_EXTENDS_QI(64,32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val));
    vlSelf->cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0 
        = ((0x80000000U == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val) 
           & (0xffffffffU == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val));
    vlSelf->__PVT__cpu_execute__DOT__jump__DOT__br_target 
        = ((4U == (7U & (IData)((vlSelf->__PVT__cpu_execute__DOT__jump_MIDCORE_data_i 
                                 >> 0x17U)))) ? (((
                                                   vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU] 
                                                   << 3U) 
                                                  | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                                                     >> 0x1dU)) 
                                                 + (IData)(
                                                           (vlSelf->__PVT__cpu_execute__DOT__jump_MIDCORE_data_i 
                                                            >> 0x1aU)))
            : ((5U == (7U & (IData)((vlSelf->__PVT__cpu_execute__DOT__jump_MIDCORE_data_i 
                                     >> 0x17U)))) ? 
               (0xfffffffeU & (vlSelf->__PVT__cpu_execute__DOT__lookup_jump_pr1_val 
                               + (IData)((vlSelf->__PVT__cpu_execute__DOT__jump_MIDCORE_data_i 
                                          >> 0x1aU))))
                : (((vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU] 
                     << 3U) | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                               >> 0x1dU)) + (IData)(
                                                    (vlSelf->__PVT__cpu_execute__DOT__jump_MIDCORE_data_i 
                                                     >> 0x1aU)))));
    if (vlSelf->cpu_execute__DOT____Vcellinp__PRF__lookup_alu_pr1_valid) {
        vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr1_val 
            = vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf
            [((IData)(vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx_valid)
               ? (0x3fU & (IData)((vlSelf->__VdfgTmp_hfd0da316__0 
                                   >> 8U))) : 0U)];
        vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
            = vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr1_val;
    } else {
        vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr1_val = 0U;
        vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
            = ((IData)(vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx_valid)
                ? ((vlSelf->__VdfgTmp_h21fae592__0[0xaU] 
                    << 3U) | (vlSelf->__VdfgTmp_h21fae592__0[9U] 
                              >> 0x1dU)) : 0U);
    }
    if (vlSelf->cpu_execute__DOT____Vcellinp__PRF__lookup_alu_pr2_valid) {
        vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr2_val 
            = vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf
            [((IData)(vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx_valid)
               ? (0x3fU & (IData)((vlSelf->__VdfgTmp_hfd0da316__0 
                                   >> 2U))) : 0U)];
        vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b 
            = vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr2_val;
    } else {
        vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr2_val = 0U;
        vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b 
            = ((IData)(vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx_valid)
                ? (IData)((vlSelf->__VdfgTmp_hfd0da316__0 
                           >> 0x1aU)) : 0U);
    }
    vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_en 
        = ((1U & (IData)((vlSelf->__PVT__cpu_execute__DOT__cmp_MIDCORE_data_i 
                          >> 0x12U))) ? ((1U & (IData)(
                                                       (vlSelf->__PVT__cpu_execute__DOT__cmp_MIDCORE_data_i 
                                                        >> 0x11U)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->__PVT__cpu_execute__DOT__cmp_MIDCORE_data_i 
                                                            >> 0x10U)))
                                              ? (vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a 
                                                 >= vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b)
                                              : (vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a 
                                                 < vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b))
                                          : ((1U & (IData)(
                                                           (vlSelf->__PVT__cpu_execute__DOT__cmp_MIDCORE_data_i 
                                                            >> 0x10U)))
                                              ? VL_GTES_III(32, vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a, vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b)
                                              : VL_LTS_III(32, vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a, vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b)))
            : ((1U & (~ (IData)((vlSelf->__PVT__cpu_execute__DOT__cmp_MIDCORE_data_i 
                                 >> 0x11U)))) && ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__cmp_MIDCORE_data_i 
                                                              >> 0x10U)))
                                                   ? 
                                                  (vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a 
                                                   != vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b)
                                                   : 
                                                  (vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a 
                                                   == vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b))));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__commit_pred_taken 
        = ((IData)(vlSelf->__PVT__commit_branch_actual_taken) 
           ^ (IData)(vlSelf->__PVT__mispredict));
    vlSelf->__PVT__cpu_frontend__DOT__valid_fetch = 
        ((~ ((IData)(vlSelf->__PVT__mispredict) | (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__stale_in_flight))) 
         & (IData)(vlSymsp->TOP.imem_resp));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_target = 0U;
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                   >> 2U))][0U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                   [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                             >> 2U))]
                                   [0U] == vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_target 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_target
            [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                      >> 2U))][0U];
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                   >> 2U))][1U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                   [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                             >> 2U))]
                                   [1U] == vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_target 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_target
            [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                      >> 2U))][1U];
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                   >> 2U))][2U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                   [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                             >> 2U))]
                                   [2U] == vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_target 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_target
            [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                      >> 2U))][2U];
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                   >> 2U))][3U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                   [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                             >> 2U))]
                                   [3U] == vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_target 
            = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_target
            [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                      >> 2U))][3U];
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_hit = 0U;
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                   >> 2U))][0U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                   [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                             >> 2U))]
                                   [0U] == vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_hit = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                   >> 2U))][1U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                   [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                             >> 2U))]
                                   [1U] == vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_hit = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                   >> 2U))][2U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                   [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                             >> 2U))]
                                   [2U] == vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_hit = 1U;
    }
    if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid
         [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                   >> 2U))][3U] & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag
                                   [(0xfU & (vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc 
                                             >> 2U))]
                                   [3U] == vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_hit = 1U;
    }
    if (((IData)(vlSelf->cpu_frontend__DOT__branch_predict__DOT____Vcellinp__tage_predictor__update_valid) 
         & (((vlSelf->__PVT__commit_rob_o[0xaU] << 3U) 
             | (vlSelf->__PVT__commit_rob_o[9U] >> 0x1dU)) 
            == vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_target 
            = ((vlSelf->__PVT__commit_rob_o[1U] << 0x1fU) 
               | (vlSelf->__PVT__commit_rob_o[0U] >> 1U));
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_hit = 1U;
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__fifo_valid_pop 
        = ((IData)(vlSelf->cpu_frontend__DOT__branch_predict__DOT____Vcellinp__tage_predictor__update_valid) 
           & ((~ (((1U & ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtr) 
                          >> 4U)) == (1U & ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr) 
                                            >> 4U))) 
                  & (IData)(vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_hc4999392__0))) 
              & (((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[5U] 
                   << 0x17U) | (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U] 
                                >> 9U)) == ((vlSelf->__PVT__commit_rob_o[0xaU] 
                                             << 3U) 
                                            | (vlSelf->__PVT__commit_rob_o[9U] 
                                               >> 0x1dU)))));
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0U] 
        = vlSelf->__PVT__arat_o[0U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[1U] 
        = vlSelf->__PVT__arat_o[1U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[2U] 
        = vlSelf->__PVT__arat_o[2U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[3U] 
        = vlSelf->__PVT__arat_o[3U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[4U] 
        = vlSelf->__PVT__arat_o[4U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[5U] 
        = vlSelf->__PVT__arat_o[5U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[6U] 
        = vlSelf->__PVT__arat_o[6U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[7U] 
        = vlSelf->__PVT__arat_o[7U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[8U] 
        = vlSelf->__PVT__arat_o[8U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[9U] 
        = vlSelf->__PVT__arat_o[9U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0xaU] 
        = vlSelf->__PVT__arat_o[0xaU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0xbU] 
        = vlSelf->__PVT__arat_o[0xbU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0xcU] 
        = vlSelf->__PVT__arat_o[0xcU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0xdU] 
        = vlSelf->__PVT__arat_o[0xdU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0xeU] 
        = vlSelf->__PVT__arat_o[0xeU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0xfU] 
        = vlSelf->__PVT__arat_o[0xfU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x10U] 
        = vlSelf->__PVT__arat_o[0x10U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x11U] 
        = vlSelf->__PVT__arat_o[0x11U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x12U] 
        = vlSelf->__PVT__arat_o[0x12U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x13U] 
        = vlSelf->__PVT__arat_o[0x13U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x14U] 
        = vlSelf->__PVT__arat_o[0x14U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x15U] 
        = vlSelf->__PVT__arat_o[0x15U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x16U] 
        = vlSelf->__PVT__arat_o[0x16U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x17U] 
        = vlSelf->__PVT__arat_o[0x17U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x18U] 
        = vlSelf->__PVT__arat_o[0x18U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x19U] 
        = vlSelf->__PVT__arat_o[0x19U];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x1aU] 
        = vlSelf->__PVT__arat_o[0x1aU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x1bU] 
        = vlSelf->__PVT__arat_o[0x1bU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x1cU] 
        = vlSelf->__PVT__arat_o[0x1cU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x1dU] 
        = vlSelf->__PVT__arat_o[0x1dU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x1eU] 
        = vlSelf->__PVT__arat_o[0x1eU];
    vlSymsp->TOP__top_tb__dut__cpu_midcore.__PVT__mispredict_arat[0x1fU] 
        = vlSelf->__PVT__arat_o[0x1fU];
    vlSelf->__PVT__dmem_wdata = 0U;
    vlSelf->__PVT__dmem_addr = ((IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__store_match)
                                 ? ((vlSelf->__PVT__commit_rob_o[4U] 
                                     << 0x13U) | (vlSelf->__PVT__commit_rob_o[3U] 
                                                  >> 0xdU))
                                 : vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr);
    vlSelf->__PVT__mul_ROB_exec_o[0U] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0U];
    vlSelf->__PVT__mul_ROB_exec_o[1U] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[1U];
    vlSelf->__PVT__mul_ROB_exec_o[2U] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[2U];
    vlSelf->__PVT__mul_ROB_exec_o[3U] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[3U];
    vlSelf->__PVT__mul_ROB_exec_o[4U] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[4U];
    vlSelf->__PVT__mul_ROB_exec_o[5U] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[5U];
    vlSelf->__PVT__mul_ROB_exec_o[6U] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[6U];
    vlSelf->__PVT__mul_ROB_exec_o[7U] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[7U];
    vlSelf->__PVT__mul_ROB_exec_o[8U] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[8U];
    vlSelf->__PVT__mul_ROB_exec_o[9U] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[9U];
    vlSelf->__PVT__mul_ROB_exec_o[0xaU] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0xaU];
    vlSelf->__PVT__mul_ROB_exec_o[0xbU] = vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0xbU];
    vlSelf->__PVT__mul_ROB_exec_o[5U] = ((0x1ffffU 
                                          & vlSelf->__PVT__mul_ROB_exec_o[5U]) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)))) 
                                            << 0x11U));
    vlSelf->__PVT__mul_ROB_exec_o[6U] = (((IData)((
                                                   ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)))) 
                                          >> 0xfU) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))) 
                                                     >> 0x20U)) 
                                            << 0x11U));
    vlSelf->__PVT__mul_ROB_exec_o[7U] = ((0xfffe0000U 
                                          & vlSelf->__PVT__mul_ROB_exec_o[7U]) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))) 
                                                     >> 0x20U)) 
                                            >> 0xfU));
    VL_EXTENDS_WI(65,32, __Vtemp_7, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val);
    __Vtemp_8[0U] = __Vtemp_7[0U];
    __Vtemp_8[1U] = __Vtemp_7[1U];
    __Vtemp_8[2U] = (1U & __Vtemp_7[2U]);
    VL_EXTENDS_WQ(65,33, __Vtemp_10, (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)));
    __Vtemp_11[0U] = __Vtemp_10[0U];
    __Vtemp_11[1U] = __Vtemp_10[1U];
    __Vtemp_11[2U] = (1U & __Vtemp_10[2U]);
    VL_MULS_WWW(65, __Vtemp_12, __Vtemp_8, __Vtemp_11);
    __Vtemp_15[2U] = ((IData)(((QData)((IData)(((1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                            >> 0x12U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                             >> 0x11U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                              >> 0x10U)))
                                                   ? 
                                                  ((0U 
                                                    == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                    ? vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val
                                                    : 
                                                   VL_MODDIV_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))
                                                   : 
                                                  ((0U 
                                                    == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                    ? vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val
                                                    : 
                                                   ((IData)(vlSelf->cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                     ? 0U
                                                     : 
                                                    VL_MODDIVS_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                              >> 0x10U)))
                                                   ? 
                                                  ((0U 
                                                    == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                    ? 0xffffffffU
                                                    : 
                                                   VL_DIV_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))
                                                   : 
                                                  ((0U 
                                                    == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                    ? 0xffffffffU
                                                    : 
                                                   ((IData)(vlSelf->cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                     ? 0x80000000U
                                                     : 
                                                    VL_DIVS_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)))))
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                             >> 0x11U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                              >> 0x10U)))
                                                   ? (IData)(
                                                             (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
                                                               * (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))) 
                                                              >> 0x20U))
                                                   : 
                                                  __Vtemp_12[1U])
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                              >> 0x10U)))
                                                   ? (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss 
                                                              >> 0x20U))
                                                   : (IData)(vlSelf->__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss)))))) 
                               << 0x20U)) << 8U);
    __Vtemp_15[3U] = (((IData)(((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                             >> 0x12U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                              >> 0x11U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                               >> 0x10U)))
                                                    ? 
                                                   ((0U 
                                                     == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                     ? vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val
                                                     : 
                                                    VL_MODDIV_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))
                                                    : 
                                                   ((0U 
                                                     == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                     ? vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val
                                                     : 
                                                    ((IData)(vlSelf->cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                      ? 0U
                                                      : 
                                                     VL_MODDIVS_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                               >> 0x10U)))
                                                    ? 
                                                   ((0U 
                                                     == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                     ? 0xffffffffU
                                                     : 
                                                    VL_DIV_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))
                                                    : 
                                                   ((0U 
                                                     == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                     ? 0xffffffffU
                                                     : 
                                                    ((IData)(vlSelf->cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                      ? 0x80000000U
                                                      : 
                                                     VL_DIVS_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                              >> 0x11U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                               >> 0x10U)))
                                                    ? (IData)(
                                                              (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
                                                                * (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))) 
                                                               >> 0x20U))
                                                    : 
                                                   __Vtemp_12[1U])
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                               >> 0x10U)))
                                                    ? (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss 
                                                               >> 0x20U))
                                                    : (IData)(vlSelf->__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss)))))) 
                                << 0x20U)) >> 0x18U) 
                      | ((IData)((((QData)((IData)(
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                                >> 0x12U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                                 >> 0x11U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                                  >> 0x10U)))
                                                       ? 
                                                      ((0U 
                                                        == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                        ? vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val
                                                        : 
                                                       VL_MODDIV_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))
                                                       : 
                                                      ((0U 
                                                        == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                        ? vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val
                                                        : 
                                                       ((IData)(vlSelf->cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                         ? 0U
                                                         : 
                                                        VL_MODDIVS_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                                  >> 0x10U)))
                                                       ? 
                                                      ((0U 
                                                        == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                        ? 0xffffffffU
                                                        : 
                                                       VL_DIV_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))
                                                       : 
                                                      ((0U 
                                                        == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                        ? 0xffffffffU
                                                        : 
                                                       ((IData)(vlSelf->cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                         ? 0x80000000U
                                                         : 
                                                        VL_DIVS_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                                 >> 0x11U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                                  >> 0x10U)))
                                                       ? (IData)(
                                                                 (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
                                                                   * (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))) 
                                                                  >> 0x20U))
                                                       : 
                                                      __Vtemp_12[1U])
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                                  >> 0x10U)))
                                                       ? (IData)(
                                                                 (vlSelf->__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss 
                                                                  >> 0x20U))
                                                       : (IData)(vlSelf->__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss)))))) 
                                   << 0x20U) >> 0x20U)) 
                         << 8U));
    __Vtemp_15[4U] = ((IData)((((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                             >> 0x12U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                              >> 0x11U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                               >> 0x10U)))
                                                    ? 
                                                   ((0U 
                                                     == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                     ? vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val
                                                     : 
                                                    VL_MODDIV_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))
                                                    : 
                                                   ((0U 
                                                     == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                     ? vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val
                                                     : 
                                                    ((IData)(vlSelf->cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                      ? 0U
                                                      : 
                                                     VL_MODDIVS_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                               >> 0x10U)))
                                                    ? 
                                                   ((0U 
                                                     == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                     ? 0xffffffffU
                                                     : 
                                                    VL_DIV_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))
                                                    : 
                                                   ((0U 
                                                     == vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)
                                                     ? 0xffffffffU
                                                     : 
                                                    ((IData)(vlSelf->cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                      ? 0x80000000U
                                                      : 
                                                     VL_DIVS_III(32, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val, vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val)))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                              >> 0x11U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                               >> 0x10U)))
                                                    ? (IData)(
                                                              (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val)) 
                                                                * (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val))) 
                                                               >> 0x20U))
                                                    : 
                                                   __Vtemp_12[1U])
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i 
                                                               >> 0x10U)))
                                                    ? (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss 
                                                               >> 0x20U))
                                                    : (IData)(vlSelf->__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss)))))) 
                                << 0x20U) >> 0x20U)) 
                      >> 0x18U);
    vlSelf->__PVT__mul_ROB_exec_o[1U] = (0x1fU & vlSelf->__PVT__mul_ROB_exec_o[1U]);
    vlSelf->__PVT__mul_ROB_exec_o[2U] = 0U;
    vlSelf->__PVT__mul_ROB_exec_o[3U] = (__Vtemp_15[2U] 
                                         << 5U);
    vlSelf->__PVT__mul_ROB_exec_o[4U] = ((__Vtemp_15[2U] 
                                          >> 0x1bU) 
                                         | (__Vtemp_15[3U] 
                                            << 5U));
    vlSelf->__PVT__mul_ROB_exec_o[5U] = ((0xffffe000U 
                                          & vlSelf->__PVT__mul_ROB_exec_o[5U]) 
                                         | ((__Vtemp_15[3U] 
                                             >> 0x1bU) 
                                            | (__Vtemp_15[4U] 
                                               << 5U)));
    vlSelf->__PVT__mul_ROB_exec_o[1U] = ((0xfffffffbU 
                                          & vlSelf->__PVT__mul_ROB_exec_o[1U]) 
                                         | (4U & ((0xfffffffcU 
                                                   & (vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[1U] 
                                                      << 1U)) 
                                                  | ((((vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[9U] 
                                                        << 3U) 
                                                       | (vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[8U] 
                                                          >> 0x1dU)) 
                                                      != 
                                                      ((IData)(4U) 
                                                       + 
                                                       ((vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0xaU] 
                                                         << 3U) 
                                                        | (vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[9U] 
                                                           >> 0x1dU)))) 
                                                     << 2U))));
    vlSelf->__PVT__mul_ROB_exec_o[0U] = (IData)(((QData)((IData)(
                                                                 ((IData)(4U) 
                                                                  + 
                                                                  ((vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0xaU] 
                                                                    << 3U) 
                                                                   | (vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[9U] 
                                                                      >> 0x1dU))))) 
                                                 << 1U));
    vlSelf->__PVT__mul_ROB_exec_o[1U] = ((0xfffffffeU 
                                          & vlSelf->__PVT__mul_ROB_exec_o[1U]) 
                                         | (IData)(
                                                   (((QData)((IData)(
                                                                     ((IData)(4U) 
                                                                      + 
                                                                      ((vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[0xaU] 
                                                                        << 3U) 
                                                                       | (vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i[9U] 
                                                                          >> 0x1dU))))) 
                                                     << 1U) 
                                                    >> 0x20U)));
    vlSelf->__PVT__mul_ROB_exec_o[0xbU] = ((0x17fffU 
                                            & vlSelf->__PVT__mul_ROB_exec_o[0xbU]) 
                                           | (0x1ffffU 
                                              & ((IData)(vlSelf->__PVT__cpu_execute__DOT__mul_valid) 
                                                 << 0xfU)));
    vlSelf->__PVT__cpu_execute__DOT__jump__DOT__mispredict 
        = (1U & (~ ((IData)(vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx_valid) 
                    & ((vlSelf->__VdfgTmp_h4b50ee27__0[1U] 
                        >> 1U) & (((IData)(vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx_valid)
                                    ? ((vlSelf->__VdfgTmp_h4b50ee27__0[9U] 
                                        << 3U) | (vlSelf->__VdfgTmp_h4b50ee27__0[8U] 
                                                  >> 0x1dU))
                                    : 0U) == vlSelf->__PVT__cpu_execute__DOT__jump__DOT__br_target)))));
    vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_target 
        = ((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_en)
            ? (vlSelf->cpu_execute__DOT__cmp__DOT____VdfgTmp_h2a77b1e8__0 
               + ((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid)
                   ? (IData)((vlSelf->__VdfgTmp_he47ebcff__0 
                              >> 0x1aU)) : 0U)) : ((IData)(4U) 
                                                   + vlSelf->cpu_execute__DOT__cmp__DOT____VdfgTmp_h2a77b1e8__0));
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__wrPtrNext 
        = vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__wrPtr;
    if (((IData)(vlSelf->__PVT__cpu_frontend__DOT__valid_fetch) 
         & (~ (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_full)))) {
        vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__wrPtrNext 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__wrPtr)));
    }
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__wrPtrNext 
        = vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__wrPtr;
    if (((IData)(vlSelf->__PVT__cpu_frontend__DOT__valid_fetch) 
         & (~ (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_full)))) {
        vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__wrPtrNext 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__wrPtr)));
    }
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__wrPtrNext 
        = vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__wrPtr;
    if (((IData)(vlSelf->__PVT__cpu_frontend__DOT__valid_fetch) 
         & (~ (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_full)))) {
        vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__wrPtrNext 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__wrPtr)));
    }
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__wrPtrNext 
        = vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__wrPtr;
    if (((IData)(vlSelf->__PVT__cpu_frontend__DOT__valid_fetch) 
         & (~ (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_full)))) {
        vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__wrPtrNext 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__wrPtr)));
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_ready 
        = ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_hit) 
           & (IData)(vlSymsp->TOP.imem_resp));
    vlSelf->__PVT__cpu_frontend__DOT__branch_valid 
        = ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_hit) 
           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtrNext 
        = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr;
    if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__fifo_valid_pop) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtrNext 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr)));
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T1 
            = (0x40U == (0x1c0U & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U]));
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T2 
            = (0x80U == (0x1c0U & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U]));
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T3 
            = (0xc0U == (0x1c0U & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U]));
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T4 
            = (0x100U == (0x1c0U & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U]));
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3 
            = vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h3beb847a__0;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2 
            = vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h7334ccba__0;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1 
            = (0U == (0x1c0U & vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U]));
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4 
            = ((IData)(vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h3beb847a__0) 
               | (3U == (7U & (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o[4U] 
                               >> 6U))));
    } else {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T1 = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T2 = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T3 = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T4 = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3 = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2 = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1 = 0U;
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4 = 0U;
    }
    vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask = 0U;
    vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__cpu_execute__DOT__LDorST_i)))) {
        if ((1U & (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                           >> 0x12U)))) {
            if ((1U & (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                               >> 0x11U)))) {
                vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask 
                    = (0xfU & 0U);
                vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v = 0U;
            } else if ((1U & (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                                      >> 0x10U)))) {
                vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask 
                    = (0xfU & ((IData)(3U) << (3U & vlSelf->__PVT__dmem_addr)));
                vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v 
                    = (0xffffU & (vlSymsp->TOP.dmem_rdata 
                                  >> (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                            (1U 
                                                             & (vlSelf->__PVT__dmem_addr 
                                                                >> 1U)), 4U))));
            } else {
                vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask 
                    = (0xfU & ((IData)(1U) << (3U & vlSelf->__PVT__dmem_addr)));
                vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v 
                    = (0xffU & (vlSymsp->TOP.dmem_rdata 
                                >> (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                          (3U 
                                                           & vlSelf->__PVT__dmem_addr), 3U))));
            }
        } else if ((1U & (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                                  >> 0x11U)))) {
            if ((1U & (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                               >> 0x10U)))) {
                vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask 
                    = (0xfU & 0U);
                vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v = 0U;
            } else {
                vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask 
                    = (0xfU & 0xfU);
                vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v 
                    = vlSymsp->TOP.dmem_rdata;
            }
        } else if ((1U & (IData)((vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                                  >> 0x10U)))) {
            vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask 
                = (0xfU & ((IData)(3U) << (3U & vlSelf->__PVT__dmem_addr)));
            vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v 
                = (((- (IData)((1U & (vlSymsp->TOP.dmem_rdata 
                                      >> (0x1fU & ((IData)(0xfU) 
                                                   + 
                                                   VL_SHIFTL_III(5,32,32, 
                                                                 (1U 
                                                                  & (vlSelf->__PVT__dmem_addr 
                                                                     >> 1U)), 4U))))))) 
                    << 0x10U) | (0xffffU & (vlSymsp->TOP.dmem_rdata 
                                            >> (0x1fU 
                                                & VL_SHIFTL_III(5,32,32, 
                                                                (1U 
                                                                 & (vlSelf->__PVT__dmem_addr 
                                                                    >> 1U)), 4U)))));
        } else {
            vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask 
                = (0xfU & ((IData)(1U) << (3U & vlSelf->__PVT__dmem_addr)));
            vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v 
                = (((- (IData)((1U & (vlSymsp->TOP.dmem_rdata 
                                      >> (0x1fU & ((IData)(7U) 
                                                   + 
                                                   VL_SHIFTL_III(5,32,32, 
                                                                 (3U 
                                                                  & vlSelf->__PVT__dmem_addr), 3U))))))) 
                    << 8U) | (0xffU & (vlSymsp->TOP.dmem_rdata 
                                       >> (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         (3U 
                                                          & vlSelf->__PVT__dmem_addr), 3U)))));
        }
    }
    vlSelf->__PVT__dmem_wmask = 0U;
    if (vlSelf->__PVT__cpu_execute__DOT__LDorST_i) {
        vlSelf->__PVT__dmem_wdata = ((IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__store_match)
                                      ? ((vlSelf->__PVT__commit_rob_o[2U] 
                                          << 0x1bU) 
                                         | (vlSelf->__PVT__commit_rob_o[1U] 
                                            >> 5U))
                                      : ((0U == (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                                                            >> 0x10U))))
                                          ? (((~ ((IData)(0xffU) 
                                                  << 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(5,32,32, 
                                                                   (3U 
                                                                    & vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr), 3U)))) 
                                              & vlSelf->__PVT__dmem_wdata) 
                                             | (0xffffffffULL 
                                                & ((0xffU 
                                                    & vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr2_val) 
                                                   << 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(5,32,32, 
                                                                    (3U 
                                                                     & vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr), 3U)))))
                                          : ((1U == 
                                              (7U & (IData)(
                                                            (vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                                                             >> 0x10U))))
                                              ? (((~ 
                                                   ((IData)(0xffffU) 
                                                    << 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(5,32,32, 
                                                                     (1U 
                                                                      & (vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr 
                                                                         >> 1U)), 4U)))) 
                                                  & vlSelf->__PVT__dmem_wdata) 
                                                 | (0xffffffffULL 
                                                    & ((0xffffU 
                                                        & vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr2_val) 
                                                       << 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(5,32,32, 
                                                                        (1U 
                                                                         & (vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr 
                                                                            >> 1U)), 4U)))))
                                              : ((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                                                              >> 0x10U))))
                                                  ? vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr2_val
                                                  : 0U))));
        vlSelf->__PVT__dmem_wmask = (0xfU & ((0U == 
                                              (7U & (IData)(
                                                            (vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                                                             >> 0x10U))))
                                              ? ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & vlSelf->__PVT__dmem_addr))
                                              : ((1U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                                                              >> 0x10U))))
                                                  ? 
                                                 ((IData)(3U) 
                                                  << 
                                                  (3U 
                                                   & vlSelf->__PVT__dmem_addr))
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i 
                                                               >> 0x10U))))
                                                   ? 0xfU
                                                   : 0U))));
    }
    vlSelf->__PVT__wb_mul = ((IData)(vlSelf->__PVT__cpu_execute__DOT__mul_valid) 
                             & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                >> 0xeU));
    vlSelf->__PVT__jump_ROB_exec_o[0U] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0U];
    vlSelf->__PVT__jump_ROB_exec_o[1U] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[1U];
    vlSelf->__PVT__jump_ROB_exec_o[2U] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[2U];
    vlSelf->__PVT__jump_ROB_exec_o[3U] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[3U];
    vlSelf->__PVT__jump_ROB_exec_o[4U] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[4U];
    vlSelf->__PVT__jump_ROB_exec_o[5U] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[5U];
    vlSelf->__PVT__jump_ROB_exec_o[6U] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[6U];
    vlSelf->__PVT__jump_ROB_exec_o[7U] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[7U];
    vlSelf->__PVT__jump_ROB_exec_o[8U] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[8U];
    vlSelf->__PVT__jump_ROB_exec_o[9U] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U];
    vlSelf->__PVT__jump_ROB_exec_o[0xaU] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU];
    vlSelf->__PVT__jump_ROB_exec_o[0xbU] = vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xbU];
    vlSelf->__PVT__jump_ROB_exec_o[8U] = ((0x1fffffffU 
                                           & vlSelf->__PVT__jump_ROB_exec_o[8U]) 
                                          | (((IData)(vlSelf->__PVT__cpu_execute__DOT__jump__DOT__mispredict)
                                               ? vlSelf->__PVT__cpu_execute__DOT__jump__DOT__br_target
                                               : ((
                                                   vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                                                   << 3U) 
                                                  | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[8U] 
                                                     >> 0x1dU))) 
                                             << 0x1dU));
    vlSelf->__PVT__jump_ROB_exec_o[9U] = ((0xe0000000U 
                                           & vlSelf->__PVT__jump_ROB_exec_o[9U]) 
                                          | (((IData)(vlSelf->__PVT__cpu_execute__DOT__jump__DOT__mispredict)
                                               ? vlSelf->__PVT__cpu_execute__DOT__jump__DOT__br_target
                                               : ((
                                                   vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                                                   << 3U) 
                                                  | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[8U] 
                                                     >> 0x1dU))) 
                                             >> 3U));
    vlSelf->__PVT__jump_ROB_exec_o[5U] = ((0x1ffffU 
                                           & vlSelf->__PVT__jump_ROB_exec_o[5U]) 
                                          | ((IData)(
                                                     ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_jump_pr1_val)) 
                                                      << 0x20U)) 
                                             << 0x11U));
    vlSelf->__PVT__jump_ROB_exec_o[6U] = (((IData)(
                                                   ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_jump_pr1_val)) 
                                                    << 0x20U)) 
                                           >> 0xfU) 
                                          | ((IData)(
                                                     (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_jump_pr1_val)) 
                                                       << 0x20U) 
                                                      >> 0x20U)) 
                                             << 0x11U));
    vlSelf->__PVT__jump_ROB_exec_o[7U] = ((0xfffe0000U 
                                           & vlSelf->__PVT__jump_ROB_exec_o[7U]) 
                                          | ((IData)(
                                                     (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_jump_pr1_val)) 
                                                       << 0x20U) 
                                                      >> 0x20U)) 
                                             >> 0xfU));
    vlSelf->__PVT__jump_ROB_exec_o[3U] = ((0x1fffU 
                                           & vlSelf->__PVT__jump_ROB_exec_o[3U]) 
                                          | ((IData)(
                                                     ((QData)((IData)(
                                                                      ((IData)(4U) 
                                                                       + 
                                                                       ((vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU] 
                                                                         << 3U) 
                                                                        | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                                                                           >> 0x1dU))))) 
                                                      << 0x20U)) 
                                             << 0xdU));
    vlSelf->__PVT__jump_ROB_exec_o[4U] = (((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(4U) 
                                                                     + 
                                                                     ((vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU] 
                                                                       << 3U) 
                                                                      | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                                                                         >> 0x1dU))))) 
                                                    << 0x20U)) 
                                           >> 0x13U) 
                                          | ((IData)(
                                                     (((QData)((IData)(
                                                                       ((IData)(4U) 
                                                                        + 
                                                                        ((vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU] 
                                                                          << 3U) 
                                                                         | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                                                                            >> 0x1dU))))) 
                                                       << 0x20U) 
                                                      >> 0x20U)) 
                                             << 0xdU));
    vlSelf->__PVT__jump_ROB_exec_o[5U] = ((0xffffe000U 
                                           & vlSelf->__PVT__jump_ROB_exec_o[5U]) 
                                          | ((IData)(
                                                     (((QData)((IData)(
                                                                       ((IData)(4U) 
                                                                        + 
                                                                        ((vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[0xaU] 
                                                                          << 3U) 
                                                                         | (vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i[9U] 
                                                                            >> 0x1dU))))) 
                                                       << 0x20U) 
                                                      >> 0x20U)) 
                                             >> 0x13U));
    vlSelf->__PVT__jump_ROB_exec_o[1U] = (0x1fU & vlSelf->__PVT__jump_ROB_exec_o[1U]);
    vlSelf->__PVT__jump_ROB_exec_o[2U] = 0U;
    vlSelf->__PVT__jump_ROB_exec_o[3U] = (0xffffe000U 
                                          & vlSelf->__PVT__jump_ROB_exec_o[3U]);
    vlSelf->__PVT__jump_ROB_exec_o[1U] = ((0xfffffffbU 
                                           & vlSelf->__PVT__jump_ROB_exec_o[1U]) 
                                          | ((IData)(vlSelf->__PVT__cpu_execute__DOT__jump__DOT__mispredict) 
                                             << 2U));
    vlSelf->__PVT__jump_ROB_exec_o[0U] = (IData)((1ULL 
                                                  | ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__jump__DOT__br_target)) 
                                                     << 1U)));
    vlSelf->__PVT__jump_ROB_exec_o[1U] = ((0xfffffffeU 
                                           & vlSelf->__PVT__jump_ROB_exec_o[1U]) 
                                          | (IData)(
                                                    ((1ULL 
                                                      | ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__jump__DOT__br_target)) 
                                                         << 1U)) 
                                                     >> 0x20U)));
    vlSelf->__PVT__jump_ROB_exec_o[0xbU] = ((0x17fffU 
                                             & vlSelf->__PVT__jump_ROB_exec_o[0xbU]) 
                                            | (0x1ffffU 
                                               & ((IData)(vlSelf->__PVT__cpu_execute__DOT__jump_valid) 
                                                  << 0xfU)));
    vlSelf->__PVT__alu_ROB_exec_o[0U] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0U];
    vlSelf->__PVT__alu_ROB_exec_o[1U] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[1U];
    vlSelf->__PVT__alu_ROB_exec_o[2U] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[2U];
    vlSelf->__PVT__alu_ROB_exec_o[3U] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[3U];
    vlSelf->__PVT__alu_ROB_exec_o[4U] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[4U];
    vlSelf->__PVT__alu_ROB_exec_o[5U] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[5U];
    vlSelf->__PVT__alu_ROB_exec_o[6U] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[6U];
    vlSelf->__PVT__alu_ROB_exec_o[7U] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[7U];
    vlSelf->__PVT__alu_ROB_exec_o[8U] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[8U];
    vlSelf->__PVT__alu_ROB_exec_o[9U] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[9U];
    vlSelf->__PVT__alu_ROB_exec_o[0xaU] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0xaU];
    vlSelf->__PVT__alu_ROB_exec_o[0xbU] = vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0xbU];
    vlSelf->__PVT__alu_ROB_exec_o[5U] = ((0x1ffffU 
                                          & vlSelf->__PVT__alu_ROB_exec_o[5U]) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr1_val)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr2_val)))) 
                                            << 0x11U));
    vlSelf->__PVT__alu_ROB_exec_o[6U] = (((IData)((
                                                   ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr1_val)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr2_val)))) 
                                          >> 0xfU) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr1_val)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr2_val))) 
                                                     >> 0x20U)) 
                                            << 0x11U));
    vlSelf->__PVT__alu_ROB_exec_o[7U] = ((0xfffe0000U 
                                          & vlSelf->__PVT__alu_ROB_exec_o[7U]) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr1_val)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr2_val))) 
                                                     >> 0x20U)) 
                                            >> 0xfU));
    __Vtemp_18[2U] = ((IData)(((QData)((IData)(((1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                            >> 0x16U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                             >> 0x15U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                              >> 0x14U)))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x13U)))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a, 
                                                                  (0x1fU 
                                                                   & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                    : 0U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                              >> 0x14U)))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x13U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                    - vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))))
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                             >> 0x15U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                              >> 0x14U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x13U)))
                                                    ? 
                                                   (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                    & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)
                                                    : 
                                                   (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                    | vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x13U)))
                                                    ? 
                                                   (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                    : 
                                                   (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                    ^ vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                              >> 0x14U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x13U)))
                                                    ? 
                                                   (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                    < vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)
                                                    : 
                                                   VL_LTS_III(32, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x13U)))
                                                    ? 
                                                   (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                    : 
                                                   (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                    + vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))))))) 
                               << 0x20U)) << 8U);
    __Vtemp_18[3U] = (((IData)(((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                             >> 0x16U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                              >> 0x15U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x14U)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a, 
                                                                   (0x1fU 
                                                                    & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                     : 0U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x14U)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     - vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                              >> 0x15U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x14U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)
                                                     : 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     | vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                     : 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     ^ vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x14U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     < vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)
                                                     : 
                                                    VL_LTS_III(32, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                     : 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     + vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))))))) 
                                << 0x20U)) >> 0x18U) 
                      | ((IData)((((QData)((IData)(
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x16U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                 >> 0x15U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                  >> 0x14U)))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                   >> 0x13U)))
                                                        ? 
                                                       VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a, 
                                                                      (0x1fU 
                                                                       & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                        : 0U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                  >> 0x14U)))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                   >> 0x13U)))
                                                        ? 0U
                                                        : 
                                                       (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                        - vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                 >> 0x15U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                  >> 0x14U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                   >> 0x13U)))
                                                        ? 
                                                       (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                        & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)
                                                        : 
                                                       (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                        | vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                   >> 0x13U)))
                                                        ? 
                                                       (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                        : 
                                                       (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                        ^ vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                  >> 0x14U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                   >> 0x13U)))
                                                        ? 
                                                       (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                        < vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)
                                                        : 
                                                       VL_LTS_III(32, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                   >> 0x13U)))
                                                        ? 
                                                       (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                        << 
                                                        (0x1fU 
                                                         & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                        : 
                                                       (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                        + vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))))))) 
                                   << 0x20U) >> 0x20U)) 
                         << 8U));
    __Vtemp_18[4U] = ((IData)((((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                             >> 0x16U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                              >> 0x15U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x14U)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a, 
                                                                   (0x1fU 
                                                                    & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                     : 0U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x14U)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     - vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                              >> 0x15U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x14U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)
                                                     : 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     | vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                     : 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     ^ vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                               >> 0x14U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     < vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b)
                                                     : 
                                                    VL_LTS_III(32, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a, vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i 
                                                                >> 0x13U)))
                                                     ? 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))
                                                     : 
                                                    (vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a 
                                                     + vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b))))))) 
                                << 0x20U) >> 0x20U)) 
                      >> 0x18U);
    vlSelf->__PVT__alu_ROB_exec_o[1U] = (0x1fU & vlSelf->__PVT__alu_ROB_exec_o[1U]);
    vlSelf->__PVT__alu_ROB_exec_o[2U] = 0U;
    vlSelf->__PVT__alu_ROB_exec_o[3U] = (__Vtemp_18[2U] 
                                         << 5U);
    vlSelf->__PVT__alu_ROB_exec_o[4U] = ((__Vtemp_18[2U] 
                                          >> 0x1bU) 
                                         | (__Vtemp_18[3U] 
                                            << 5U));
    vlSelf->__PVT__alu_ROB_exec_o[5U] = ((0xffffe000U 
                                          & vlSelf->__PVT__alu_ROB_exec_o[5U]) 
                                         | ((__Vtemp_18[3U] 
                                             >> 0x1bU) 
                                            | (__Vtemp_18[4U] 
                                               << 5U)));
    vlSelf->__PVT__alu_ROB_exec_o[1U] = ((0xfffffffbU 
                                          & vlSelf->__PVT__alu_ROB_exec_o[1U]) 
                                         | (4U & ((0xfffffffcU 
                                                   & (vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[1U] 
                                                      << 1U)) 
                                                  | ((((vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[9U] 
                                                        << 3U) 
                                                       | (vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[8U] 
                                                          >> 0x1dU)) 
                                                      != 
                                                      ((IData)(4U) 
                                                       + 
                                                       ((vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0xaU] 
                                                         << 3U) 
                                                        | (vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[9U] 
                                                           >> 0x1dU)))) 
                                                     << 2U))));
    vlSelf->__PVT__alu_ROB_exec_o[0U] = (IData)(((QData)((IData)(
                                                                 ((IData)(4U) 
                                                                  + 
                                                                  ((vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0xaU] 
                                                                    << 3U) 
                                                                   | (vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[9U] 
                                                                      >> 0x1dU))))) 
                                                 << 1U));
    vlSelf->__PVT__alu_ROB_exec_o[1U] = ((0xfffffffeU 
                                          & vlSelf->__PVT__alu_ROB_exec_o[1U]) 
                                         | (IData)(
                                                   (((QData)((IData)(
                                                                     ((IData)(4U) 
                                                                      + 
                                                                      ((vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[0xaU] 
                                                                        << 3U) 
                                                                       | (vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i[9U] 
                                                                          >> 0x1dU))))) 
                                                     << 1U) 
                                                    >> 0x20U)));
    vlSelf->__PVT__alu_ROB_exec_o[0xbU] = ((0x17fffU 
                                            & vlSelf->__PVT__alu_ROB_exec_o[0xbU]) 
                                           | (0x1ffffU 
                                              & ((IData)(vlSelf->__PVT__cpu_execute__DOT__alu_valid) 
                                                 << 0xfU)));
    vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__mispredict 
        = ((((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid) 
             & (vlSelf->__VdfgTmp_h4d6db996__0[1U] 
                >> 1U)) != (IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_en)) 
           | (((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid)
                ? ((vlSelf->__VdfgTmp_h4d6db996__0[9U] 
                    << 3U) | (vlSelf->__VdfgTmp_h4d6db996__0[8U] 
                              >> 0x1dU)) : 0U) != vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_target));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtrNext 
        = vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtr;
    if (((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_ready) 
         & (~ (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__full)))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtrNext 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtr)));
    }
    vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc_next 
        = ((IData)(vlSymsp->TOP__top_tb.__Vcellinp__dut__rst)
            ? 0x60000000U : ((IData)(vlSelf->__PVT__mispredict)
                              ? ((vlSelf->__PVT__commit_rob_o[1U] 
                                  << 0x1fU) | (vlSelf->__PVT__commit_rob_o[0U] 
                                               >> 1U))
                              : ((IData)(vlSelf->__PVT__cpu_frontend__DOT__fetchq_full)
                                  ? vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc
                                  : (((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_valid) 
                                      & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp))
                                      ? vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_target
                                      : ((IData)(4U) 
                                         + vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc)))));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[2U] 
        = ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[1U] 
        = ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[0U] 
        = ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__decrement_all_u = 0U;
    if ((4U != (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                   & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                  + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                     & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                 + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                    & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                   & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1))))) {
        if ((3U != (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                       & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                      + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                         & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                     + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                        & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                    + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                       & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1))))) {
            if ((2U == (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                          + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                             & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                         + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                            & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                        + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1))))) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk13__DOT__i = 4U;
            }
            if ((2U != (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                          + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                             & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                         + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                            & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                        + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1))))) {
                if ((1U != (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                               & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                              + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                                 & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                             + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                                & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                            + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                               & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1))))) {
                    if (((0U == (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                                    & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                                   + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                                      & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                                  + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                                     & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                                 + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                                    & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1)))) 
                         & ((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                              | (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3)) 
                             | (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2)) 
                            | (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1)))) {
                        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__decrement_all_u = 1U;
                    }
                }
                if ((1U == (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                               & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                              + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                                 & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                             + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                                & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                            + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                               & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1))))) {
                    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk14__DOT__i = 4U;
                }
            }
        }
        if ((3U == (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                       & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                      + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                         & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                     + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                        & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                    + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                       & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1))))) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk12__DOT__i = 4U;
        }
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[3U] 
        = ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4));
    vlSelf->__PVT__mem_ROB_exec_o[0U] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0U];
    vlSelf->__PVT__mem_ROB_exec_o[1U] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[1U];
    vlSelf->__PVT__mem_ROB_exec_o[2U] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[2U];
    vlSelf->__PVT__mem_ROB_exec_o[3U] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[3U];
    vlSelf->__PVT__mem_ROB_exec_o[4U] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[4U];
    vlSelf->__PVT__mem_ROB_exec_o[5U] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[5U];
    vlSelf->__PVT__mem_ROB_exec_o[6U] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[6U];
    vlSelf->__PVT__mem_ROB_exec_o[7U] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[7U];
    vlSelf->__PVT__mem_ROB_exec_o[8U] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[8U];
    vlSelf->__PVT__mem_ROB_exec_o[9U] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[9U];
    vlSelf->__PVT__mem_ROB_exec_o[0xaU] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xaU];
    vlSelf->__PVT__mem_ROB_exec_o[0xbU] = vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xbU];
    vlSelf->__PVT__mem_ROB_exec_o[5U] = ((0x1ffffU 
                                          & vlSelf->__PVT__mem_ROB_exec_o[5U]) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr1_val)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr2_val)))) 
                                            << 0x11U));
    vlSelf->__PVT__mem_ROB_exec_o[6U] = (((IData)((
                                                   ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr1_val)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr2_val)))) 
                                          >> 0xfU) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr1_val)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr2_val))) 
                                                     >> 0x20U)) 
                                            << 0x11U));
    vlSelf->__PVT__mem_ROB_exec_o[7U] = ((0xfffe0000U 
                                          & vlSelf->__PVT__mem_ROB_exec_o[7U]) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr1_val)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr2_val))) 
                                                     >> 0x20U)) 
                                            >> 0xfU));
    vlSelf->__PVT__mem_ROB_exec_o[2U] = ((0x1fU & vlSelf->__PVT__mem_ROB_exec_o[2U]) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask)) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(vlSelf->__PVT__dmem_wmask)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP.dmem_rdata))))) 
                                            << 5U));
    vlSelf->__PVT__mem_ROB_exec_o[3U] = (((IData)((
                                                   ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->__PVT__dmem_wmask)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSymsp->TOP.dmem_rdata))))) 
                                          >> 0x1bU) 
                                         | ((vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr 
                                             << 0xdU) 
                                            | ((IData)(
                                                       ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask)) 
                                                          << 0x24U) 
                                                         | (((QData)((IData)(vlSelf->__PVT__dmem_wmask)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSymsp->TOP.dmem_rdata)))) 
                                                        >> 0x20U)) 
                                               << 5U)));
    vlSelf->__PVT__mem_ROB_exec_o[4U] = ((0xffffe000U 
                                          & vlSelf->__PVT__mem_ROB_exec_o[4U]) 
                                         | (((0x1fU 
                                              & (vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr 
                                                 >> 0x13U)) 
                                             | ((IData)(
                                                        ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask)) 
                                                           << 0x24U) 
                                                          | (((QData)((IData)(vlSelf->__PVT__dmem_wmask)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSymsp->TOP.dmem_rdata)))) 
                                                         >> 0x20U)) 
                                                >> 0x1bU)) 
                                            | (0x1fe0U 
                                               & (vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr 
                                                  >> 0x13U))));
    vlSelf->__PVT__mem_ROB_exec_o[1U] = ((0x1fU & vlSelf->__PVT__mem_ROB_exec_o[1U]) 
                                         | (vlSelf->__PVT__dmem_wdata 
                                            << 5U));
    vlSelf->__PVT__mem_ROB_exec_o[2U] = ((0xffffffe0U 
                                          & vlSelf->__PVT__mem_ROB_exec_o[2U]) 
                                         | (vlSelf->__PVT__dmem_wdata 
                                            >> 0x1bU));
    vlSelf->__PVT__mem_ROB_exec_o[1U] = ((0xfffffffbU 
                                          & vlSelf->__PVT__mem_ROB_exec_o[1U]) 
                                         | (4U & ((0xfffffffcU 
                                                   & (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[1U] 
                                                      << 1U)) 
                                                  | ((((vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[9U] 
                                                        << 3U) 
                                                       | (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[8U] 
                                                          >> 0x1dU)) 
                                                      != 
                                                      ((IData)(4U) 
                                                       + 
                                                       ((vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xaU] 
                                                         << 3U) 
                                                        | (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[9U] 
                                                           >> 0x1dU)))) 
                                                     << 2U))));
    vlSelf->__PVT__mem_ROB_exec_o[0U] = (IData)(((QData)((IData)(
                                                                 ((IData)(4U) 
                                                                  + 
                                                                  ((vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xaU] 
                                                                    << 3U) 
                                                                   | (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[9U] 
                                                                      >> 0x1dU))))) 
                                                 << 1U));
    vlSelf->__PVT__mem_ROB_exec_o[1U] = ((0xfffffffeU 
                                          & vlSelf->__PVT__mem_ROB_exec_o[1U]) 
                                         | (IData)(
                                                   (((QData)((IData)(
                                                                     ((IData)(4U) 
                                                                      + 
                                                                      ((vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xaU] 
                                                                        << 3U) 
                                                                       | (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[9U] 
                                                                          >> 0x1dU))))) 
                                                     << 1U) 
                                                    >> 0x20U)));
    vlSelf->__PVT__mem_ROB_exec_o[4U] = ((0x1fffU & 
                                          vlSelf->__PVT__mem_ROB_exec_o[4U]) 
                                         | (vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v 
                                            << 0xdU));
    vlSelf->__PVT__mem_ROB_exec_o[5U] = ((0xffffe000U 
                                          & vlSelf->__PVT__mem_ROB_exec_o[5U]) 
                                         | (vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v 
                                            >> 0x13U));
    vlSelf->__PVT__mem_ROB_exec_o[0xbU] = ((0x17fffU 
                                            & vlSelf->__PVT__mem_ROB_exec_o[0xbU]) 
                                           | (0x1ffffU 
                                              & (((IData)(vlSelf->__PVT__cpu_execute__DOT__LDorST_i)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__cpu_execute__DOT__LDorST_i) 
                                                   && (((((~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem_empty_i)) 
                                                          & (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xbU] 
                                                             >> 0x10U)) 
                                                         & (IData)(vlSelf->__PVT__cpu_execute__DOT__READY_i)) 
                                                        & (~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__store_committed))) 
                                                       & (~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem__DOT__store_match))))
                                                   : 
                                                  ((((~ (IData)(vlSelf->__PVT__cpu_execute__DOT__mem_empty_i)) 
                                                     & (vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i[0xbU] 
                                                        >> 0x10U)) 
                                                    & (IData)(vlSelf->__PVT__cpu_execute__DOT__READY_i)) 
                                                   & (IData)(vlSymsp->TOP.dmem_resp))) 
                                                 << 0xfU)));
    vlSelf->__PVT__wb_jump = ((IData)(vlSelf->__PVT__cpu_execute__DOT__jump_valid) 
                              & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                 >> 0xeU));
    vlSelf->__PVT__wb_alu = ((IData)(vlSelf->__PVT__cpu_execute__DOT__alu_valid) 
                             & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                >> 0xeU));
    vlSelf->__PVT__cmp_ROB_exec_o[0U] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[0U];
    vlSelf->__PVT__cmp_ROB_exec_o[1U] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[1U];
    vlSelf->__PVT__cmp_ROB_exec_o[2U] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[2U];
    vlSelf->__PVT__cmp_ROB_exec_o[3U] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[3U];
    vlSelf->__PVT__cmp_ROB_exec_o[4U] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[4U];
    vlSelf->__PVT__cmp_ROB_exec_o[5U] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[5U];
    vlSelf->__PVT__cmp_ROB_exec_o[6U] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[6U];
    vlSelf->__PVT__cmp_ROB_exec_o[7U] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[7U];
    vlSelf->__PVT__cmp_ROB_exec_o[8U] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[8U];
    vlSelf->__PVT__cmp_ROB_exec_o[9U] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[9U];
    vlSelf->__PVT__cmp_ROB_exec_o[0xaU] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[0xaU];
    vlSelf->__PVT__cmp_ROB_exec_o[0xbU] = vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[0xbU];
    vlSelf->__PVT__cmp_ROB_exec_o[8U] = ((0x1fffffffU 
                                          & vlSelf->__PVT__cmp_ROB_exec_o[8U]) 
                                         | (((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__mispredict)
                                              ? vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_target
                                              : ((vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[9U] 
                                                  << 3U) 
                                                 | (vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[8U] 
                                                    >> 0x1dU))) 
                                            << 0x1dU));
    vlSelf->__PVT__cmp_ROB_exec_o[9U] = ((0xe0000000U 
                                          & vlSelf->__PVT__cmp_ROB_exec_o[9U]) 
                                         | (((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__mispredict)
                                              ? vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_target
                                              : ((vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[9U] 
                                                  << 3U) 
                                                 | (vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i[8U] 
                                                    >> 0x1dU))) 
                                            >> 3U));
    vlSelf->__PVT__cmp_ROB_exec_o[5U] = ((0x1ffffU 
                                          & vlSelf->__PVT__cmp_ROB_exec_o[5U]) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b)))) 
                                            << 0x11U));
    vlSelf->__PVT__cmp_ROB_exec_o[6U] = (((IData)((
                                                   ((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b)))) 
                                          >> 0xfU) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b))) 
                                                     >> 0x20U)) 
                                            << 0x11U));
    vlSelf->__PVT__cmp_ROB_exec_o[7U] = ((0xfffe0000U 
                                          & vlSelf->__PVT__cmp_ROB_exec_o[7U]) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b))) 
                                                     >> 0x20U)) 
                                            >> 0xfU));
    vlSelf->__PVT__cmp_ROB_exec_o[1U] = (0x1fU & vlSelf->__PVT__cmp_ROB_exec_o[1U]);
    vlSelf->__PVT__cmp_ROB_exec_o[2U] = 0U;
    vlSelf->__PVT__cmp_ROB_exec_o[3U] = 0U;
    vlSelf->__PVT__cmp_ROB_exec_o[4U] = 0U;
    vlSelf->__PVT__cmp_ROB_exec_o[5U] = (0xffffe000U 
                                         & vlSelf->__PVT__cmp_ROB_exec_o[5U]);
    vlSelf->__PVT__cmp_ROB_exec_o[1U] = ((0xfffffffbU 
                                          & vlSelf->__PVT__cmp_ROB_exec_o[1U]) 
                                         | ((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__mispredict) 
                                            << 2U));
    vlSelf->__PVT__cmp_ROB_exec_o[0U] = (IData)((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_target)) 
                                                  << 1U) 
                                                 | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_en))));
    vlSelf->__PVT__cmp_ROB_exec_o[1U] = ((0xfffffffeU 
                                          & vlSelf->__PVT__cmp_ROB_exec_o[1U]) 
                                         | (IData)(
                                                   ((((QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_target)) 
                                                      << 1U) 
                                                     | (QData)((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_en))) 
                                                    >> 0x20U)));
    vlSelf->__PVT__cmp_ROB_exec_o[0xbU] = ((0x17fffU 
                                            & vlSelf->__PVT__cmp_ROB_exec_o[0xbU]) 
                                           | (0x1ffffU 
                                              & ((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_valid) 
                                                 << 0xfU)));
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count = 0U;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 0U;
    if ((4U == (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                   & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                  + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                     & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                 + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                    & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                   & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1))))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk11__DOT__i = 4U;
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [0U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_4)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 1U;
            }
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [1U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_4)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 2U;
            }
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [2U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_4)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 3U;
            }
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [3U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_4)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 4U;
            }
        }
    } else if ((3U == (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                          & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                         + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                            & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                        + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                       + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                          & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1))))) {
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [0U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_3)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 1U;
            }
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [1U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_3)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 2U;
            }
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [2U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_3)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 3U;
            }
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [3U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_3)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 4U;
            }
        }
    } else if ((2U == (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                          & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                         + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                            & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                        + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                       + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                          & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1))))) {
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [0U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_2)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 1U;
            }
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [1U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_2)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 2U;
            }
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [2U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_2)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 3U;
            }
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [3U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                = ((IData)(1U) + vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count);
            if ((vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count 
                 == vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_2)) {
                vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 4U;
            }
        }
    } else if ((1U == (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                          & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                         + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                            & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                        + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                       + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                          & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1))))) {
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [0U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 1U;
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [1U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 2U;
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [2U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 3U;
        }
        if (vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate
            [3U]) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 4U;
        }
    } else if (((0U == (((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4)) 
                          + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3) 
                             & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3))) 
                         + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2) 
                            & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2))) 
                        + ((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1) 
                           & (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1)))) 
                & ((((IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4) 
                     | (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3)) 
                    | (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2)) 
                   | (IData)(vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1)))) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = 0U;
    }
    vlSelf->__PVT__wb_load = ((IData)(vlSelf->__PVT__cpu_execute__DOT__load_valid) 
                              & (vlSelf->__PVT__mem_ROB_exec_o[0xbU] 
                                 >> 0xeU));
    vlSelf->__PVT__cpu_commit__DOT__rob__DOT__wb_update 
        = (1U & ((vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                  | (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                     | (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                        | (vlSelf->__PVT__mem_ROB_exec_o[0xbU] 
                           | vlSelf->__PVT__mul_ROB_exec_o[0xbU])))) 
                 >> 0xfU));
    vlSelf->__PVT__wb_cmp = ((IData)(vlSelf->__PVT__cpu_execute__DOT__cmp_valid) 
                             & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                >> 0xeU));
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf_next[__Vilp] 
            = vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (vlSelf->__PVT__wb_alu) {
        vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf_next[(0x3fU 
                                                             & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                                                >> 3U))] 
            = ((vlSelf->__PVT__alu_ROB_exec_o[5U] << 0x13U) 
               | (vlSelf->__PVT__alu_ROB_exec_o[4U] 
                  >> 0xdU));
    }
    if (vlSelf->__PVT__wb_cmp) {
        vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf_next[(0x3fU 
                                                             & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                                                >> 3U))] 
            = ((vlSelf->__PVT__cmp_ROB_exec_o[5U] << 0x13U) 
               | (vlSelf->__PVT__cmp_ROB_exec_o[4U] 
                  >> 0xdU));
    }
    if (vlSelf->__PVT__wb_load) {
        vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf_next[(0x3fU 
                                                             & (vlSelf->__PVT__mem_ROB_exec_o[0xbU] 
                                                                >> 3U))] 
            = ((vlSelf->__PVT__mem_ROB_exec_o[5U] << 0x13U) 
               | (vlSelf->__PVT__mem_ROB_exec_o[4U] 
                  >> 0xdU));
    }
    if (vlSelf->__PVT__wb_jump) {
        vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf_next[(0x3fU 
                                                             & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                                                >> 3U))] 
            = ((vlSelf->__PVT__jump_ROB_exec_o[5U] 
                << 0x13U) | (vlSelf->__PVT__jump_ROB_exec_o[4U] 
                             >> 0xdU));
    }
    if (vlSelf->__PVT__wb_mul) {
        vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf_next[(0x3fU 
                                                             & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                                                >> 3U))] 
            = ((vlSelf->__PVT__mul_ROB_exec_o[5U] << 0x13U) 
               | (vlSelf->__PVT__mul_ROB_exec_o[4U] 
                  >> 0xdU));
    }
    vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf_next[0U] = 0U;
}
