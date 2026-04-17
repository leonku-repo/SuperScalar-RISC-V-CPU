// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb_cpu_execute.h"

extern const VlWide<12>/*383:0*/ Vtop_tb__ConstPool__CONST_h7e30f2cb_0;

VL_ATTR_COLD void Vtop_tb_cpu_execute___stl_sequent__TOP__top_tb__dut__cpu_execute__0(Vtop_tb_cpu_execute* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_tb_cpu_execute___stl_sequent__TOP__top_tb__dut__cpu_execute__0\n"); );
    // Init
    IData/*31:0*/ cmp__DOT____VdfgTmp_h2625da61__0;
    cmp__DOT____VdfgTmp_h2625da61__0 = 0;
    VlWide<12>/*381:0*/ __VdfgTmp_h33641dd6__0;
    VL_ZERO_W(382, __VdfgTmp_h33641dd6__0);
    VlWide<12>/*381:0*/ __VdfgTmp_haf14404e__0;
    VL_ZERO_W(382, __VdfgTmp_haf14404e__0);
    VlWide<12>/*381:0*/ __VdfgTmp_he713134e__0;
    VL_ZERO_W(382, __VdfgTmp_he713134e__0);
    VlWide<12>/*381:0*/ __VdfgTmp_hae4358bf__0;
    VL_ZERO_W(382, __VdfgTmp_hae4358bf__0);
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_13;
    // Body
    vlSelf->__PVT__alu_rs__DOT__wr_idx_valid = 0U;
    if ((1U & (~ vlSelf->__PVT__alu_rs__DOT__valid[0U]))) {
        vlSelf->__PVT__alu_rs__DOT__wr_idx_valid = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__alu_rs__DOT__valid[1U]))) {
        vlSelf->__PVT__alu_rs__DOT__wr_idx_valid = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__alu_rs__DOT__valid[2U]))) {
        vlSelf->__PVT__alu_rs__DOT__wr_idx_valid = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__alu_rs__DOT__valid[3U]))) {
        vlSelf->__PVT__alu_rs__DOT__wr_idx_valid = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__alu_rs__DOT__valid[4U]))) {
        vlSelf->__PVT__alu_rs__DOT__wr_idx_valid = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__alu_rs__DOT__valid[5U]))) {
        vlSelf->__PVT__alu_rs__DOT__wr_idx_valid = 1U;
    }
    vlSelf->__PVT__alu_rs__DOT__wr_idx = 0U;
    if ((1U & (~ vlSelf->__PVT__alu_rs__DOT__valid[0U]))) {
        vlSelf->__PVT__alu_rs__DOT__wr_idx = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__alu_rs__DOT__valid[1U]))) {
        vlSelf->__PVT__alu_rs__DOT__wr_idx = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__alu_rs__DOT__valid[2U]))) {
        vlSelf->__PVT__alu_rs__DOT__wr_idx = 2U;
    }
    if ((1U & (~ vlSelf->__PVT__alu_rs__DOT__valid[3U]))) {
        vlSelf->__PVT__alu_rs__DOT__wr_idx = 3U;
    }
    if ((1U & (~ vlSelf->__PVT__alu_rs__DOT__valid[4U]))) {
        vlSelf->__PVT__alu_rs__DOT__wr_idx = 4U;
    }
    if ((1U & (~ vlSelf->__PVT__alu_rs__DOT__valid[5U]))) {
        vlSelf->__PVT__alu_rs__DOT__wr_idx = 5U;
    }
    if ((1U & (~ vlSelf->__PVT__alu_rs__DOT__valid[6U]))) {
        vlSelf->__PVT__alu_rs__DOT__wr_idx_valid = 1U;
        vlSelf->__PVT__alu_rs__DOT__wr_idx = 6U;
    }
    vlSelf->__PVT__cmp_rs__DOT__wr_idx_valid = 0U;
    if ((1U & (~ vlSelf->__PVT__cmp_rs__DOT__valid[0U]))) {
        vlSelf->__PVT__cmp_rs__DOT__wr_idx_valid = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__cmp_rs__DOT__valid[1U]))) {
        vlSelf->__PVT__cmp_rs__DOT__wr_idx_valid = 1U;
    }
    vlSelf->__PVT__cmp_rs__DOT__wr_idx = 0U;
    if ((1U & (~ vlSelf->__PVT__cmp_rs__DOT__valid[0U]))) {
        vlSelf->__PVT__cmp_rs__DOT__wr_idx = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__cmp_rs__DOT__valid[1U]))) {
        vlSelf->__PVT__cmp_rs__DOT__wr_idx = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__cmp_rs__DOT__valid[2U]))) {
        vlSelf->__PVT__cmp_rs__DOT__wr_idx_valid = 1U;
        vlSelf->__PVT__cmp_rs__DOT__wr_idx = 2U;
    }
    vlSelf->__PVT__jump_rs__DOT__wr_idx_valid = 0U;
    vlSelf->__PVT__jump_rs__DOT__wr_idx = 0U;
    if ((1U & (~ vlSelf->__PVT__jump_rs__DOT__valid
               [0U]))) {
        vlSelf->__PVT__jump_rs__DOT__wr_idx_valid = 1U;
        vlSelf->__PVT__jump_rs__DOT__wr_idx = 0U;
    }
    vlSelf->__PVT__mul_rs__DOT__wr_idx_valid = 0U;
    if ((1U & (~ vlSelf->__PVT__mul_rs__DOT__valid[0U]))) {
        vlSelf->__PVT__mul_rs__DOT__wr_idx_valid = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__mul_rs__DOT__valid[1U]))) {
        vlSelf->__PVT__mul_rs__DOT__wr_idx_valid = 1U;
    }
    vlSelf->__PVT__mul_rs__DOT__wr_idx = 0U;
    if ((1U & (~ vlSelf->__PVT__mul_rs__DOT__valid[0U]))) {
        vlSelf->__PVT__mul_rs__DOT__wr_idx = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__mul_rs__DOT__valid[1U]))) {
        vlSelf->__PVT__mul_rs__DOT__wr_idx = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__mul_rs__DOT__valid[2U]))) {
        vlSelf->__PVT__mul_rs__DOT__wr_idx_valid = 1U;
        vlSelf->__PVT__mul_rs__DOT__wr_idx = 2U;
    }
    vlSelf->__PVT__mem__DOT__rd_v = 0U;
    if ((2U == (IData)(vlSelf->__PVT__mem__DOT__state))) {
        vlSelf->__PVT__mem__DOT__rd_v = ((4U & (IData)(vlSelf->__PVT__mem__DOT__lat_funct3))
                                          ? ((2U & (IData)(vlSelf->__PVT__mem__DOT__lat_funct3))
                                              ? 0U : 
                                             ((1U & (IData)(vlSelf->__PVT__mem__DOT__lat_funct3))
                                               ? (0xffffU 
                                                  & (vlSelf->__PVT__mem__DOT__lat_rdata 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(5,32,32, 
                                                                      (1U 
                                                                       & (vlSelf->__PVT__mem__DOT__lat_addr 
                                                                          >> 1U)), 4U))))
                                               : (0xffU 
                                                  & (vlSelf->__PVT__mem__DOT__lat_rdata 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(5,32,32, 
                                                                      (3U 
                                                                       & vlSelf->__PVT__mem__DOT__lat_addr), 3U))))))
                                          : ((2U & (IData)(vlSelf->__PVT__mem__DOT__lat_funct3))
                                              ? ((1U 
                                                  & (IData)(vlSelf->__PVT__mem__DOT__lat_funct3))
                                                  ? 0U
                                                  : vlSelf->__PVT__mem__DOT__lat_rdata)
                                              : ((1U 
                                                  & (IData)(vlSelf->__PVT__mem__DOT__lat_funct3))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->__PVT__mem__DOT__lat_rdata 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & ((IData)(0xfU) 
                                                                      + 
                                                                      VL_SHIFTL_III(5,32,32, 
                                                                                (1U 
                                                                                & (vlSelf->__PVT__mem__DOT__lat_addr 
                                                                                >> 1U)), 4U))))))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & (vlSelf->__PVT__mem__DOT__lat_rdata 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(5,32,32, 
                                                                         (1U 
                                                                          & (vlSelf->__PVT__mem__DOT__lat_addr 
                                                                             >> 1U)), 4U)))))
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->__PVT__mem__DOT__lat_rdata 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      VL_SHIFTL_III(5,32,32, 
                                                                                (3U 
                                                                                & vlSelf->__PVT__mem__DOT__lat_addr), 3U))))))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & (vlSelf->__PVT__mem__DOT__lat_rdata 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(5,32,32, 
                                                                         (3U 
                                                                          & vlSelf->__PVT__mem__DOT__lat_addr), 3U))))))));
    }
    vlSelf->__PVT__alu_full_o = 1U;
    if ((1U & (~ vlSelf->__PVT__alu_rs__DOT__valid[0U]))) {
        vlSelf->__PVT__alu_full_o = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__alu_rs__DOT__valid[1U]))) {
        vlSelf->__PVT__alu_full_o = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__alu_rs__DOT__valid[2U]))) {
        vlSelf->__PVT__alu_full_o = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__alu_rs__DOT__valid[3U]))) {
        vlSelf->__PVT__alu_full_o = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__alu_rs__DOT__valid[4U]))) {
        vlSelf->__PVT__alu_full_o = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__alu_rs__DOT__valid[5U]))) {
        vlSelf->__PVT__alu_full_o = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__alu_rs__DOT__valid[6U]))) {
        vlSelf->__PVT__alu_full_o = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__alu_rs__DOT__valid[7U]))) {
        vlSelf->__PVT__alu_rs__DOT__wr_idx_valid = 1U;
        vlSelf->__PVT__alu_rs__DOT__wr_idx = 7U;
        vlSelf->__PVT__alu_full_o = 0U;
    }
    vlSelf->__PVT__cmp_full_o = 1U;
    if ((1U & (~ vlSelf->__PVT__cmp_rs__DOT__valid[0U]))) {
        vlSelf->__PVT__cmp_full_o = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__cmp_rs__DOT__valid[1U]))) {
        vlSelf->__PVT__cmp_full_o = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__cmp_rs__DOT__valid[2U]))) {
        vlSelf->__PVT__cmp_full_o = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__cmp_rs__DOT__valid[3U]))) {
        vlSelf->__PVT__cmp_rs__DOT__wr_idx_valid = 1U;
        vlSelf->__PVT__cmp_rs__DOT__wr_idx = 3U;
        vlSelf->__PVT__cmp_full_o = 0U;
    }
    vlSelf->__PVT__jump_full_o = 1U;
    if ((1U & (~ vlSelf->__PVT__jump_rs__DOT__valid
               [0U]))) {
        vlSelf->__PVT__jump_full_o = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__jump_rs__DOT__valid
               [1U]))) {
        vlSelf->__PVT__jump_rs__DOT__wr_idx_valid = 1U;
        vlSelf->__PVT__jump_rs__DOT__wr_idx = 1U;
        vlSelf->__PVT__jump_full_o = 0U;
    }
    vlSelf->__PVT__mul_full_o = 1U;
    if ((1U & (~ vlSelf->__PVT__mul_rs__DOT__valid[0U]))) {
        vlSelf->__PVT__mul_full_o = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__mul_rs__DOT__valid[1U]))) {
        vlSelf->__PVT__mul_full_o = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__mul_rs__DOT__valid[2U]))) {
        vlSelf->__PVT__mul_full_o = 0U;
    }
    if ((1U & (~ vlSelf->__PVT__mul_rs__DOT__valid[3U]))) {
        vlSelf->__PVT__mul_rs__DOT__wr_idx_valid = 1U;
        vlSelf->__PVT__mul_rs__DOT__wr_idx = 3U;
        vlSelf->__PVT__mul_full_o = 0U;
    }
    vlSelf->__PVT__alu_empty_i = 1U;
    if (vlSelf->__PVT__alu_rs__DOT__valid[0U]) {
        vlSelf->__PVT__alu_empty_i = 0U;
    }
    if (vlSelf->__PVT__alu_rs__DOT__valid[1U]) {
        vlSelf->__PVT__alu_empty_i = 0U;
    }
    if (vlSelf->__PVT__alu_rs__DOT__valid[2U]) {
        vlSelf->__PVT__alu_empty_i = 0U;
    }
    if (vlSelf->__PVT__alu_rs__DOT__valid[3U]) {
        vlSelf->__PVT__alu_empty_i = 0U;
    }
    if (vlSelf->__PVT__alu_rs__DOT__valid[4U]) {
        vlSelf->__PVT__alu_empty_i = 0U;
    }
    if (vlSelf->__PVT__alu_rs__DOT__valid[5U]) {
        vlSelf->__PVT__alu_empty_i = 0U;
    }
    if (vlSelf->__PVT__alu_rs__DOT__valid[6U]) {
        vlSelf->__PVT__alu_empty_i = 0U;
    }
    if (vlSelf->__PVT__alu_rs__DOT__valid[7U]) {
        vlSelf->__PVT__alu_empty_i = 0U;
    }
    vlSelf->__PVT__mul_empty_i = 1U;
    if (vlSelf->__PVT__mul_rs__DOT__valid[0U]) {
        vlSelf->__PVT__mul_empty_i = 0U;
    }
    if (vlSelf->__PVT__mul_rs__DOT__valid[1U]) {
        vlSelf->__PVT__mul_empty_i = 0U;
    }
    if (vlSelf->__PVT__mul_rs__DOT__valid[2U]) {
        vlSelf->__PVT__mul_empty_i = 0U;
    }
    if (vlSelf->__PVT__mul_rs__DOT__valid[3U]) {
        vlSelf->__PVT__mul_empty_i = 0U;
    }
    vlSelf->__PVT__mul_rs__DOT__rd_idx_valid = 0U;
    if (((vlSelf->__PVT__mul_rs__DOT__valid[0U] & vlSelf->__PVT__mul_rs__DOT__pr1_ready
          [0U]) & vlSelf->__PVT__mul_rs__DOT__pr2_ready
         [0U])) {
        vlSelf->__PVT__mul_rs__DOT__rd_idx_valid = 1U;
    }
    if (((vlSelf->__PVT__mul_rs__DOT__valid[1U] & vlSelf->__PVT__mul_rs__DOT__pr1_ready
          [1U]) & vlSelf->__PVT__mul_rs__DOT__pr2_ready
         [1U])) {
        vlSelf->__PVT__mul_rs__DOT__rd_idx_valid = 1U;
    }
    if (((vlSelf->__PVT__mul_rs__DOT__valid[2U] & vlSelf->__PVT__mul_rs__DOT__pr1_ready
          [2U]) & vlSelf->__PVT__mul_rs__DOT__pr2_ready
         [2U])) {
        vlSelf->__PVT__mul_rs__DOT__rd_idx_valid = 1U;
    }
    vlSelf->__PVT__mul_rs__DOT__rd_idx = 0U;
    if (((vlSelf->__PVT__mul_rs__DOT__valid[0U] & vlSelf->__PVT__mul_rs__DOT__pr1_ready
          [0U]) & vlSelf->__PVT__mul_rs__DOT__pr2_ready
         [0U])) {
        vlSelf->__PVT__mul_rs__DOT__rd_idx = 0U;
    }
    if (((vlSelf->__PVT__mul_rs__DOT__valid[1U] & vlSelf->__PVT__mul_rs__DOT__pr1_ready
          [1U]) & vlSelf->__PVT__mul_rs__DOT__pr2_ready
         [1U])) {
        vlSelf->__PVT__mul_rs__DOT__rd_idx = 1U;
    }
    if (((vlSelf->__PVT__mul_rs__DOT__valid[2U] & vlSelf->__PVT__mul_rs__DOT__pr1_ready
          [2U]) & vlSelf->__PVT__mul_rs__DOT__pr2_ready
         [2U])) {
        vlSelf->__PVT__mul_rs__DOT__rd_idx = 2U;
    }
    if (((vlSelf->__PVT__mul_rs__DOT__valid[3U] & vlSelf->__PVT__mul_rs__DOT__pr1_ready
          [3U]) & vlSelf->__PVT__mul_rs__DOT__pr2_ready
         [3U])) {
        vlSelf->__PVT__mul_rs__DOT__rd_idx_valid = 1U;
        vlSelf->__PVT__mul_rs__DOT__rd_idx = 3U;
    }
    vlSelf->__PVT__jump_empty_i = 1U;
    if (vlSelf->__PVT__jump_rs__DOT__valid[0U]) {
        vlSelf->__PVT__jump_empty_i = 0U;
    }
    if (vlSelf->__PVT__jump_rs__DOT__valid[1U]) {
        vlSelf->__PVT__jump_empty_i = 0U;
    }
    vlSelf->__PVT__cmp_empty_i = 1U;
    if (vlSelf->__PVT__cmp_rs__DOT__valid[0U]) {
        vlSelf->__PVT__cmp_empty_i = 0U;
    }
    if (vlSelf->__PVT__cmp_rs__DOT__valid[1U]) {
        vlSelf->__PVT__cmp_empty_i = 0U;
    }
    if (vlSelf->__PVT__cmp_rs__DOT__valid[2U]) {
        vlSelf->__PVT__cmp_empty_i = 0U;
    }
    if (vlSelf->__PVT__cmp_rs__DOT__valid[3U]) {
        vlSelf->__PVT__cmp_empty_i = 0U;
    }
    vlSelf->__PVT__alu_rs__DOT__rd_idx_valid = 0U;
    if (((vlSelf->__PVT__alu_rs__DOT__valid[0U] & vlSelf->__PVT__alu_rs__DOT__pr1_ready
          [0U]) & vlSelf->__PVT__alu_rs__DOT__pr2_ready
         [0U])) {
        vlSelf->__PVT__alu_rs__DOT__rd_idx_valid = 1U;
    }
    if (((vlSelf->__PVT__alu_rs__DOT__valid[1U] & vlSelf->__PVT__alu_rs__DOT__pr1_ready
          [1U]) & vlSelf->__PVT__alu_rs__DOT__pr2_ready
         [1U])) {
        vlSelf->__PVT__alu_rs__DOT__rd_idx_valid = 1U;
    }
    if (((vlSelf->__PVT__alu_rs__DOT__valid[2U] & vlSelf->__PVT__alu_rs__DOT__pr1_ready
          [2U]) & vlSelf->__PVT__alu_rs__DOT__pr2_ready
         [2U])) {
        vlSelf->__PVT__alu_rs__DOT__rd_idx_valid = 1U;
    }
    if (((vlSelf->__PVT__alu_rs__DOT__valid[3U] & vlSelf->__PVT__alu_rs__DOT__pr1_ready
          [3U]) & vlSelf->__PVT__alu_rs__DOT__pr2_ready
         [3U])) {
        vlSelf->__PVT__alu_rs__DOT__rd_idx_valid = 1U;
    }
    if (((vlSelf->__PVT__alu_rs__DOT__valid[4U] & vlSelf->__PVT__alu_rs__DOT__pr1_ready
          [4U]) & vlSelf->__PVT__alu_rs__DOT__pr2_ready
         [4U])) {
        vlSelf->__PVT__alu_rs__DOT__rd_idx_valid = 1U;
    }
    if (((vlSelf->__PVT__alu_rs__DOT__valid[5U] & vlSelf->__PVT__alu_rs__DOT__pr1_ready
          [5U]) & vlSelf->__PVT__alu_rs__DOT__pr2_ready
         [5U])) {
        vlSelf->__PVT__alu_rs__DOT__rd_idx_valid = 1U;
    }
    if (((vlSelf->__PVT__alu_rs__DOT__valid[6U] & vlSelf->__PVT__alu_rs__DOT__pr1_ready
          [6U]) & vlSelf->__PVT__alu_rs__DOT__pr2_ready
         [6U])) {
        vlSelf->__PVT__alu_rs__DOT__rd_idx_valid = 1U;
    }
    vlSelf->__PVT__alu_rs__DOT__rd_idx = 0U;
    if (((vlSelf->__PVT__alu_rs__DOT__valid[0U] & vlSelf->__PVT__alu_rs__DOT__pr1_ready
          [0U]) & vlSelf->__PVT__alu_rs__DOT__pr2_ready
         [0U])) {
        vlSelf->__PVT__alu_rs__DOT__rd_idx = 0U;
    }
    if (((vlSelf->__PVT__alu_rs__DOT__valid[1U] & vlSelf->__PVT__alu_rs__DOT__pr1_ready
          [1U]) & vlSelf->__PVT__alu_rs__DOT__pr2_ready
         [1U])) {
        vlSelf->__PVT__alu_rs__DOT__rd_idx = 1U;
    }
    if (((vlSelf->__PVT__alu_rs__DOT__valid[2U] & vlSelf->__PVT__alu_rs__DOT__pr1_ready
          [2U]) & vlSelf->__PVT__alu_rs__DOT__pr2_ready
         [2U])) {
        vlSelf->__PVT__alu_rs__DOT__rd_idx = 2U;
    }
    if (((vlSelf->__PVT__alu_rs__DOT__valid[3U] & vlSelf->__PVT__alu_rs__DOT__pr1_ready
          [3U]) & vlSelf->__PVT__alu_rs__DOT__pr2_ready
         [3U])) {
        vlSelf->__PVT__alu_rs__DOT__rd_idx = 3U;
    }
    if (((vlSelf->__PVT__alu_rs__DOT__valid[4U] & vlSelf->__PVT__alu_rs__DOT__pr1_ready
          [4U]) & vlSelf->__PVT__alu_rs__DOT__pr2_ready
         [4U])) {
        vlSelf->__PVT__alu_rs__DOT__rd_idx = 4U;
    }
    if (((vlSelf->__PVT__alu_rs__DOT__valid[5U] & vlSelf->__PVT__alu_rs__DOT__pr1_ready
          [5U]) & vlSelf->__PVT__alu_rs__DOT__pr2_ready
         [5U])) {
        vlSelf->__PVT__alu_rs__DOT__rd_idx = 5U;
    }
    if (((vlSelf->__PVT__alu_rs__DOT__valid[6U] & vlSelf->__PVT__alu_rs__DOT__pr1_ready
          [6U]) & vlSelf->__PVT__alu_rs__DOT__pr2_ready
         [6U])) {
        vlSelf->__PVT__alu_rs__DOT__rd_idx = 6U;
    }
    if (((vlSelf->__PVT__alu_rs__DOT__valid[7U] & vlSelf->__PVT__alu_rs__DOT__pr1_ready
          [7U]) & vlSelf->__PVT__alu_rs__DOT__pr2_ready
         [7U])) {
        vlSelf->__PVT__alu_rs__DOT__rd_idx_valid = 1U;
        vlSelf->__PVT__alu_rs__DOT__rd_idx = 7U;
    }
    vlSelf->__PVT__store_done = ((4U == (IData)(vlSelf->__PVT__mem__DOT__state)) 
                                 & (IData)(vlSymsp->TOP.dmem_resp));
    vlSelf->__PVT__jump_rs__DOT__rd_idx_valid = 0U;
    if (((vlSelf->__PVT__jump_rs__DOT__valid[0U] & 
          vlSelf->__PVT__jump_rs__DOT__pr1_ready[0U]) 
         & vlSelf->__PVT__jump_rs__DOT__pr2_ready[0U])) {
        vlSelf->__PVT__jump_rs__DOT__rd_idx_valid = 1U;
        vlSelf->__PVT__jump_rs__DOT__rd_idx = 0U;
        vlSelf->__PVT__jump_rs__DOT__rd_idx = 0U;
    } else {
        vlSelf->__PVT__jump_rs__DOT__rd_idx = 0U;
    }
    if (((vlSelf->__PVT__jump_rs__DOT__valid[1U] & 
          vlSelf->__PVT__jump_rs__DOT__pr1_ready[1U]) 
         & vlSelf->__PVT__jump_rs__DOT__pr2_ready[1U])) {
        vlSelf->__PVT__jump_rs__DOT__rd_idx_valid = 1U;
        vlSelf->__PVT__jump_rs__DOT__rd_idx = 1U;
    }
    vlSelf->__PVT__cmp_rs__DOT__rd_idx_valid = 0U;
    if (((vlSelf->__PVT__cmp_rs__DOT__valid[0U] & vlSelf->__PVT__cmp_rs__DOT__pr1_ready
          [0U]) & vlSelf->__PVT__cmp_rs__DOT__pr2_ready
         [0U])) {
        vlSelf->__PVT__cmp_rs__DOT__rd_idx_valid = 1U;
    }
    if (((vlSelf->__PVT__cmp_rs__DOT__valid[1U] & vlSelf->__PVT__cmp_rs__DOT__pr1_ready
          [1U]) & vlSelf->__PVT__cmp_rs__DOT__pr2_ready
         [1U])) {
        vlSelf->__PVT__cmp_rs__DOT__rd_idx_valid = 1U;
    }
    if (((vlSelf->__PVT__cmp_rs__DOT__valid[2U] & vlSelf->__PVT__cmp_rs__DOT__pr1_ready
          [2U]) & vlSelf->__PVT__cmp_rs__DOT__pr2_ready
         [2U])) {
        vlSelf->__PVT__cmp_rs__DOT__rd_idx_valid = 1U;
    }
    vlSelf->__PVT__cmp_rs__DOT__rd_idx = 0U;
    if (((vlSelf->__PVT__cmp_rs__DOT__valid[0U] & vlSelf->__PVT__cmp_rs__DOT__pr1_ready
          [0U]) & vlSelf->__PVT__cmp_rs__DOT__pr2_ready
         [0U])) {
        vlSelf->__PVT__cmp_rs__DOT__rd_idx = 0U;
    }
    if (((vlSelf->__PVT__cmp_rs__DOT__valid[1U] & vlSelf->__PVT__cmp_rs__DOT__pr1_ready
          [1U]) & vlSelf->__PVT__cmp_rs__DOT__pr2_ready
         [1U])) {
        vlSelf->__PVT__cmp_rs__DOT__rd_idx = 1U;
    }
    if (((vlSelf->__PVT__cmp_rs__DOT__valid[2U] & vlSelf->__PVT__cmp_rs__DOT__pr1_ready
          [2U]) & vlSelf->__PVT__cmp_rs__DOT__pr2_ready
         [2U])) {
        vlSelf->__PVT__cmp_rs__DOT__rd_idx = 2U;
    }
    if (((vlSelf->__PVT__cmp_rs__DOT__valid[3U] & vlSelf->__PVT__cmp_rs__DOT__pr1_ready
          [3U]) & vlSelf->__PVT__cmp_rs__DOT__pr2_ready
         [3U])) {
        vlSelf->__PVT__cmp_rs__DOT__rd_idx_valid = 1U;
        vlSelf->__PVT__cmp_rs__DOT__rd_idx = 3U;
    }
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
    __VdfgTmp_hae4358bf__0[0U] = vlSelf->__PVT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__mul_rs__DOT__rd_idx][0U];
    __VdfgTmp_hae4358bf__0[1U] = vlSelf->__PVT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__mul_rs__DOT__rd_idx][1U];
    __VdfgTmp_hae4358bf__0[2U] = vlSelf->__PVT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__mul_rs__DOT__rd_idx][2U];
    __VdfgTmp_hae4358bf__0[3U] = vlSelf->__PVT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__mul_rs__DOT__rd_idx][3U];
    __VdfgTmp_hae4358bf__0[4U] = vlSelf->__PVT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__mul_rs__DOT__rd_idx][4U];
    __VdfgTmp_hae4358bf__0[5U] = vlSelf->__PVT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__mul_rs__DOT__rd_idx][5U];
    __VdfgTmp_hae4358bf__0[6U] = vlSelf->__PVT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__mul_rs__DOT__rd_idx][6U];
    __VdfgTmp_hae4358bf__0[7U] = vlSelf->__PVT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__mul_rs__DOT__rd_idx][7U];
    __VdfgTmp_hae4358bf__0[8U] = vlSelf->__PVT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__mul_rs__DOT__rd_idx][8U];
    __VdfgTmp_hae4358bf__0[9U] = vlSelf->__PVT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__mul_rs__DOT__rd_idx][9U];
    __VdfgTmp_hae4358bf__0[0xaU] = vlSelf->__PVT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__mul_rs__DOT__rd_idx][0xaU];
    __VdfgTmp_hae4358bf__0[0xbU] = vlSelf->__PVT__mul_rs__DOT__rob_rs
        [vlSelf->__PVT__mul_rs__DOT__rd_idx][0xbU];
    vlSelf->__VdfgTmp_hc98bfb62__0 = vlSelf->__PVT__mul_rs__DOT__midcore_rs
        [vlSelf->__PVT__mul_rs__DOT__rd_idx];
    __VdfgTmp_he713134e__0[0U] = vlSelf->__PVT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__alu_rs__DOT__rd_idx][0U];
    __VdfgTmp_he713134e__0[1U] = vlSelf->__PVT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__alu_rs__DOT__rd_idx][1U];
    __VdfgTmp_he713134e__0[2U] = vlSelf->__PVT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__alu_rs__DOT__rd_idx][2U];
    __VdfgTmp_he713134e__0[3U] = vlSelf->__PVT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__alu_rs__DOT__rd_idx][3U];
    __VdfgTmp_he713134e__0[4U] = vlSelf->__PVT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__alu_rs__DOT__rd_idx][4U];
    __VdfgTmp_he713134e__0[5U] = vlSelf->__PVT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__alu_rs__DOT__rd_idx][5U];
    __VdfgTmp_he713134e__0[6U] = vlSelf->__PVT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__alu_rs__DOT__rd_idx][6U];
    __VdfgTmp_he713134e__0[7U] = vlSelf->__PVT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__alu_rs__DOT__rd_idx][7U];
    __VdfgTmp_he713134e__0[8U] = vlSelf->__PVT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__alu_rs__DOT__rd_idx][8U];
    __VdfgTmp_he713134e__0[9U] = vlSelf->__PVT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__alu_rs__DOT__rd_idx][9U];
    __VdfgTmp_he713134e__0[0xaU] = vlSelf->__PVT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__alu_rs__DOT__rd_idx][0xaU];
    __VdfgTmp_he713134e__0[0xbU] = vlSelf->__PVT__alu_rs__DOT__rob_rs
        [vlSelf->__PVT__alu_rs__DOT__rd_idx][0xbU];
    vlSelf->__VdfgTmp_h2f1d1f15__0 = vlSelf->__PVT__alu_rs__DOT__midcore_rs
        [vlSelf->__PVT__alu_rs__DOT__rd_idx];
    vlSelf->__VdfgTmp_h53ffcfca__0 = vlSelf->__PVT__jump_rs__DOT__midcore_rs
        [vlSelf->__PVT__jump_rs__DOT__rd_idx];
    __VdfgTmp_haf14404e__0[0U] = vlSelf->__PVT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__jump_rs__DOT__rd_idx][0U];
    __VdfgTmp_haf14404e__0[1U] = vlSelf->__PVT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__jump_rs__DOT__rd_idx][1U];
    __VdfgTmp_haf14404e__0[2U] = vlSelf->__PVT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__jump_rs__DOT__rd_idx][2U];
    __VdfgTmp_haf14404e__0[3U] = vlSelf->__PVT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__jump_rs__DOT__rd_idx][3U];
    __VdfgTmp_haf14404e__0[4U] = vlSelf->__PVT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__jump_rs__DOT__rd_idx][4U];
    __VdfgTmp_haf14404e__0[5U] = vlSelf->__PVT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__jump_rs__DOT__rd_idx][5U];
    __VdfgTmp_haf14404e__0[6U] = vlSelf->__PVT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__jump_rs__DOT__rd_idx][6U];
    __VdfgTmp_haf14404e__0[7U] = vlSelf->__PVT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__jump_rs__DOT__rd_idx][7U];
    __VdfgTmp_haf14404e__0[8U] = vlSelf->__PVT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__jump_rs__DOT__rd_idx][8U];
    __VdfgTmp_haf14404e__0[9U] = vlSelf->__PVT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__jump_rs__DOT__rd_idx][9U];
    __VdfgTmp_haf14404e__0[0xaU] = vlSelf->__PVT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__jump_rs__DOT__rd_idx][0xaU];
    __VdfgTmp_haf14404e__0[0xbU] = vlSelf->__PVT__jump_rs__DOT__rob_rs
        [vlSelf->__PVT__jump_rs__DOT__rd_idx][0xbU];
    __VdfgTmp_h33641dd6__0[0U] = vlSelf->__PVT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cmp_rs__DOT__rd_idx][0U];
    __VdfgTmp_h33641dd6__0[1U] = vlSelf->__PVT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cmp_rs__DOT__rd_idx][1U];
    __VdfgTmp_h33641dd6__0[2U] = vlSelf->__PVT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cmp_rs__DOT__rd_idx][2U];
    __VdfgTmp_h33641dd6__0[3U] = vlSelf->__PVT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cmp_rs__DOT__rd_idx][3U];
    __VdfgTmp_h33641dd6__0[4U] = vlSelf->__PVT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cmp_rs__DOT__rd_idx][4U];
    __VdfgTmp_h33641dd6__0[5U] = vlSelf->__PVT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cmp_rs__DOT__rd_idx][5U];
    __VdfgTmp_h33641dd6__0[6U] = vlSelf->__PVT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cmp_rs__DOT__rd_idx][6U];
    __VdfgTmp_h33641dd6__0[7U] = vlSelf->__PVT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cmp_rs__DOT__rd_idx][7U];
    __VdfgTmp_h33641dd6__0[8U] = vlSelf->__PVT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cmp_rs__DOT__rd_idx][8U];
    __VdfgTmp_h33641dd6__0[9U] = vlSelf->__PVT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cmp_rs__DOT__rd_idx][9U];
    __VdfgTmp_h33641dd6__0[0xaU] = vlSelf->__PVT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cmp_rs__DOT__rd_idx][0xaU];
    __VdfgTmp_h33641dd6__0[0xbU] = vlSelf->__PVT__cmp_rs__DOT__rob_rs
        [vlSelf->__PVT__cmp_rs__DOT__rd_idx][0xbU];
    vlSelf->__VdfgTmp_hd1094721__0 = vlSelf->__PVT__cmp_rs__DOT__midcore_rs
        [vlSelf->__PVT__cmp_rs__DOT__rd_idx];
    if (vlSelf->__PVT__mul_rs__DOT__rd_idx_valid) {
        vlSelf->__PVT__mul_ROB_data_i[0U] = __VdfgTmp_hae4358bf__0[0U];
        vlSelf->__PVT__mul_ROB_data_i[1U] = __VdfgTmp_hae4358bf__0[1U];
        vlSelf->__PVT__mul_ROB_data_i[2U] = __VdfgTmp_hae4358bf__0[2U];
        vlSelf->__PVT__mul_ROB_data_i[3U] = __VdfgTmp_hae4358bf__0[3U];
        vlSelf->__PVT__mul_ROB_data_i[4U] = __VdfgTmp_hae4358bf__0[4U];
        vlSelf->__PVT__mul_ROB_data_i[5U] = __VdfgTmp_hae4358bf__0[5U];
        vlSelf->__PVT__mul_ROB_data_i[6U] = __VdfgTmp_hae4358bf__0[6U];
        vlSelf->__PVT__mul_ROB_data_i[7U] = __VdfgTmp_hae4358bf__0[7U];
        vlSelf->__PVT__mul_ROB_data_i[8U] = __VdfgTmp_hae4358bf__0[8U];
        vlSelf->__PVT__mul_ROB_data_i[9U] = __VdfgTmp_hae4358bf__0[9U];
        vlSelf->__PVT__mul_ROB_data_i[0xaU] = __VdfgTmp_hae4358bf__0[0xaU];
        vlSelf->__PVT__mul_ROB_data_i[0xbU] = __VdfgTmp_hae4358bf__0[0xbU];
        vlSelf->__PVT__mul_MIDCORE_data_i = vlSelf->__VdfgTmp_hc98bfb62__0;
    } else {
        vlSelf->__PVT__mul_ROB_data_i[0U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0U];
        vlSelf->__PVT__mul_ROB_data_i[1U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[1U];
        vlSelf->__PVT__mul_ROB_data_i[2U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[2U];
        vlSelf->__PVT__mul_ROB_data_i[3U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[3U];
        vlSelf->__PVT__mul_ROB_data_i[4U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[4U];
        vlSelf->__PVT__mul_ROB_data_i[5U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[5U];
        vlSelf->__PVT__mul_ROB_data_i[6U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[6U];
        vlSelf->__PVT__mul_ROB_data_i[7U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[7U];
        vlSelf->__PVT__mul_ROB_data_i[8U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[8U];
        vlSelf->__PVT__mul_ROB_data_i[9U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[9U];
        vlSelf->__PVT__mul_ROB_data_i[0xaU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xaU];
        vlSelf->__PVT__mul_ROB_data_i[0xbU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xbU];
        vlSelf->__PVT__mul_MIDCORE_data_i = 0ULL;
    }
    vlSelf->__PVT__mul_valid = ((~ (IData)(vlSelf->__PVT__mul_empty_i)) 
                                & ((IData)(vlSelf->__PVT__mul_rs__DOT__rd_idx_valid) 
                                   & (__VdfgTmp_hae4358bf__0[0xbU] 
                                      >> 0x1dU)));
    vlSelf->__PVT__lookup_mul_pr1_val = (((IData)(vlSelf->__PVT__mul_rs__DOT__rd_idx_valid) 
                                          & (IData)(
                                                    (vlSelf->__VdfgTmp_hc98bfb62__0 
                                                     >> 0x11U)))
                                          ? vlSelf->__PVT__PRF__DOT__prf
                                         [((IData)(vlSelf->__PVT__mul_rs__DOT__rd_idx_valid)
                                            ? (0x7fU 
                                               & (IData)(
                                                         (vlSelf->__VdfgTmp_hc98bfb62__0 
                                                          >> 9U)))
                                            : 0U)] : 0U);
    vlSelf->__PVT__lookup_mul_pr2_val = (((IData)(vlSelf->__PVT__mul_rs__DOT__rd_idx_valid) 
                                          & (IData)(
                                                    (vlSelf->__VdfgTmp_hc98bfb62__0 
                                                     >> 0x10U)))
                                          ? vlSelf->__PVT__PRF__DOT__prf
                                         [((IData)(vlSelf->__PVT__mul_rs__DOT__rd_idx_valid)
                                            ? (0x7fU 
                                               & (IData)(
                                                         (vlSelf->__VdfgTmp_hc98bfb62__0 
                                                          >> 2U)))
                                            : 0U)] : 0U);
    if (vlSelf->__PVT__alu_rs__DOT__rd_idx_valid) {
        vlSelf->__PVT__alu_ROB_data_i[0U] = __VdfgTmp_he713134e__0[0U];
        vlSelf->__PVT__alu_ROB_data_i[1U] = __VdfgTmp_he713134e__0[1U];
        vlSelf->__PVT__alu_ROB_data_i[2U] = __VdfgTmp_he713134e__0[2U];
        vlSelf->__PVT__alu_ROB_data_i[3U] = __VdfgTmp_he713134e__0[3U];
        vlSelf->__PVT__alu_ROB_data_i[4U] = __VdfgTmp_he713134e__0[4U];
        vlSelf->__PVT__alu_ROB_data_i[5U] = __VdfgTmp_he713134e__0[5U];
        vlSelf->__PVT__alu_ROB_data_i[6U] = __VdfgTmp_he713134e__0[6U];
        vlSelf->__PVT__alu_ROB_data_i[7U] = __VdfgTmp_he713134e__0[7U];
        vlSelf->__PVT__alu_ROB_data_i[8U] = __VdfgTmp_he713134e__0[8U];
        vlSelf->__PVT__alu_ROB_data_i[9U] = __VdfgTmp_he713134e__0[9U];
        vlSelf->__PVT__alu_ROB_data_i[0xaU] = __VdfgTmp_he713134e__0[0xaU];
        vlSelf->__PVT__alu_ROB_data_i[0xbU] = __VdfgTmp_he713134e__0[0xbU];
        vlSelf->__PVT__alu_MIDCORE_data_i = vlSelf->__VdfgTmp_h2f1d1f15__0;
    } else {
        vlSelf->__PVT__alu_ROB_data_i[0U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0U];
        vlSelf->__PVT__alu_ROB_data_i[1U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[1U];
        vlSelf->__PVT__alu_ROB_data_i[2U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[2U];
        vlSelf->__PVT__alu_ROB_data_i[3U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[3U];
        vlSelf->__PVT__alu_ROB_data_i[4U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[4U];
        vlSelf->__PVT__alu_ROB_data_i[5U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[5U];
        vlSelf->__PVT__alu_ROB_data_i[6U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[6U];
        vlSelf->__PVT__alu_ROB_data_i[7U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[7U];
        vlSelf->__PVT__alu_ROB_data_i[8U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[8U];
        vlSelf->__PVT__alu_ROB_data_i[9U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[9U];
        vlSelf->__PVT__alu_ROB_data_i[0xaU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xaU];
        vlSelf->__PVT__alu_ROB_data_i[0xbU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xbU];
        vlSelf->__PVT__alu_MIDCORE_data_i = 0ULL;
    }
    vlSelf->__PVT__alu_valid = ((~ (IData)(vlSelf->__PVT__alu_empty_i)) 
                                & ((IData)(vlSelf->__PVT__alu_rs__DOT__rd_idx_valid) 
                                   & (__VdfgTmp_he713134e__0[0xbU] 
                                      >> 0x1dU)));
    vlSelf->__Vcellinp__PRF__lookup_alu_pr1_valid = 
        ((IData)(vlSelf->__PVT__alu_rs__DOT__rd_idx_valid) 
         & (IData)((vlSelf->__VdfgTmp_h2f1d1f15__0 
                    >> 0x11U)));
    vlSelf->__Vcellinp__PRF__lookup_alu_pr2_valid = 
        ((IData)(vlSelf->__PVT__alu_rs__DOT__rd_idx_valid) 
         & (IData)((vlSelf->__VdfgTmp_h2f1d1f15__0 
                    >> 0x10U)));
    if (vlSelf->__PVT__jump_rs__DOT__rd_idx_valid) {
        vlSelf->__PVT__jump_MIDCORE_data_i = vlSelf->__VdfgTmp_h53ffcfca__0;
        vlSelf->__PVT__jump_ROB_data_i[0U] = __VdfgTmp_haf14404e__0[0U];
        vlSelf->__PVT__jump_ROB_data_i[1U] = __VdfgTmp_haf14404e__0[1U];
        vlSelf->__PVT__jump_ROB_data_i[2U] = __VdfgTmp_haf14404e__0[2U];
        vlSelf->__PVT__jump_ROB_data_i[3U] = __VdfgTmp_haf14404e__0[3U];
        vlSelf->__PVT__jump_ROB_data_i[4U] = __VdfgTmp_haf14404e__0[4U];
        vlSelf->__PVT__jump_ROB_data_i[5U] = __VdfgTmp_haf14404e__0[5U];
        vlSelf->__PVT__jump_ROB_data_i[6U] = __VdfgTmp_haf14404e__0[6U];
        vlSelf->__PVT__jump_ROB_data_i[7U] = __VdfgTmp_haf14404e__0[7U];
        vlSelf->__PVT__jump_ROB_data_i[8U] = __VdfgTmp_haf14404e__0[8U];
        vlSelf->__PVT__jump_ROB_data_i[9U] = __VdfgTmp_haf14404e__0[9U];
        vlSelf->__PVT__jump_ROB_data_i[0xaU] = __VdfgTmp_haf14404e__0[0xaU];
        vlSelf->__PVT__jump_ROB_data_i[0xbU] = __VdfgTmp_haf14404e__0[0xbU];
    } else {
        vlSelf->__PVT__jump_MIDCORE_data_i = 0ULL;
        vlSelf->__PVT__jump_ROB_data_i[0U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0U];
        vlSelf->__PVT__jump_ROB_data_i[1U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[1U];
        vlSelf->__PVT__jump_ROB_data_i[2U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[2U];
        vlSelf->__PVT__jump_ROB_data_i[3U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[3U];
        vlSelf->__PVT__jump_ROB_data_i[4U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[4U];
        vlSelf->__PVT__jump_ROB_data_i[5U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[5U];
        vlSelf->__PVT__jump_ROB_data_i[6U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[6U];
        vlSelf->__PVT__jump_ROB_data_i[7U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[7U];
        vlSelf->__PVT__jump_ROB_data_i[8U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[8U];
        vlSelf->__PVT__jump_ROB_data_i[9U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[9U];
        vlSelf->__PVT__jump_ROB_data_i[0xaU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xaU];
        vlSelf->__PVT__jump_ROB_data_i[0xbU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xbU];
    }
    vlSelf->__PVT__lookup_jump_pr1_val = (((IData)(vlSelf->__PVT__jump_rs__DOT__rd_idx_valid) 
                                           & (IData)(
                                                     (vlSelf->__VdfgTmp_h53ffcfca__0 
                                                      >> 0x11U)))
                                           ? vlSelf->__PVT__PRF__DOT__prf
                                          [((IData)(vlSelf->__PVT__jump_rs__DOT__rd_idx_valid)
                                             ? (0x7fU 
                                                & (IData)(
                                                          (vlSelf->__VdfgTmp_h53ffcfca__0 
                                                           >> 9U)))
                                             : 0U)]
                                           : 0U);
    vlSelf->__PVT__jump_valid_o = ((~ (IData)(vlSelf->__PVT__jump_empty_i)) 
                                   & ((IData)(vlSelf->__PVT__jump_rs__DOT__rd_idx_valid) 
                                      & (__VdfgTmp_haf14404e__0[0xbU] 
                                         >> 0x1dU)));
    if (vlSelf->__PVT__cmp_rs__DOT__rd_idx_valid) {
        vlSelf->__PVT__cmp_ROB_data_i[0U] = __VdfgTmp_h33641dd6__0[0U];
        vlSelf->__PVT__cmp_ROB_data_i[1U] = __VdfgTmp_h33641dd6__0[1U];
        vlSelf->__PVT__cmp_ROB_data_i[2U] = __VdfgTmp_h33641dd6__0[2U];
        vlSelf->__PVT__cmp_ROB_data_i[3U] = __VdfgTmp_h33641dd6__0[3U];
        vlSelf->__PVT__cmp_ROB_data_i[4U] = __VdfgTmp_h33641dd6__0[4U];
        vlSelf->__PVT__cmp_ROB_data_i[5U] = __VdfgTmp_h33641dd6__0[5U];
        vlSelf->__PVT__cmp_ROB_data_i[6U] = __VdfgTmp_h33641dd6__0[6U];
        vlSelf->__PVT__cmp_ROB_data_i[7U] = __VdfgTmp_h33641dd6__0[7U];
        vlSelf->__PVT__cmp_ROB_data_i[8U] = __VdfgTmp_h33641dd6__0[8U];
        vlSelf->__PVT__cmp_ROB_data_i[9U] = __VdfgTmp_h33641dd6__0[9U];
        vlSelf->__PVT__cmp_ROB_data_i[0xaU] = __VdfgTmp_h33641dd6__0[0xaU];
        vlSelf->__PVT__cmp_ROB_data_i[0xbU] = __VdfgTmp_h33641dd6__0[0xbU];
        cmp__DOT____VdfgTmp_h2625da61__0 = ((__VdfgTmp_h33641dd6__0[0xbU] 
                                             << 0x18U) 
                                            | (__VdfgTmp_h33641dd6__0[0xaU] 
                                               >> 8U));
        vlSelf->__PVT__cmp_MIDCORE_data_i = vlSelf->__VdfgTmp_hd1094721__0;
    } else {
        vlSelf->__PVT__cmp_ROB_data_i[0U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0U];
        vlSelf->__PVT__cmp_ROB_data_i[1U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[1U];
        vlSelf->__PVT__cmp_ROB_data_i[2U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[2U];
        vlSelf->__PVT__cmp_ROB_data_i[3U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[3U];
        vlSelf->__PVT__cmp_ROB_data_i[4U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[4U];
        vlSelf->__PVT__cmp_ROB_data_i[5U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[5U];
        vlSelf->__PVT__cmp_ROB_data_i[6U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[6U];
        vlSelf->__PVT__cmp_ROB_data_i[7U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[7U];
        vlSelf->__PVT__cmp_ROB_data_i[8U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[8U];
        vlSelf->__PVT__cmp_ROB_data_i[9U] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[9U];
        vlSelf->__PVT__cmp_ROB_data_i[0xaU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xaU];
        vlSelf->__PVT__cmp_ROB_data_i[0xbU] = Vtop_tb__ConstPool__CONST_h7e30f2cb_0[0xbU];
        cmp__DOT____VdfgTmp_h2625da61__0 = 0U;
        vlSelf->__PVT__cmp_MIDCORE_data_i = 0ULL;
    }
    vlSelf->__PVT__cmp_valid_o = ((~ (IData)(vlSelf->__PVT__cmp_empty_i)) 
                                  & ((IData)(vlSelf->__PVT__cmp_rs__DOT__rd_idx_valid) 
                                     & (__VdfgTmp_h33641dd6__0[0xbU] 
                                        >> 0x1dU)));
    vlSelf->__PVT__cmp__DOT__a = (((IData)(vlSelf->__PVT__cmp_rs__DOT__rd_idx_valid) 
                                   & (IData)((vlSelf->__VdfgTmp_hd1094721__0 
                                              >> 0x11U)))
                                   ? vlSelf->__PVT__PRF__DOT__prf
                                  [((IData)(vlSelf->__PVT__cmp_rs__DOT__rd_idx_valid)
                                     ? (0x7fU & (IData)(
                                                        (vlSelf->__VdfgTmp_hd1094721__0 
                                                         >> 9U)))
                                     : 0U)] : 0U);
    vlSelf->__PVT__cmp__DOT__b = (((IData)(vlSelf->__PVT__cmp_rs__DOT__rd_idx_valid) 
                                   & (IData)((vlSelf->__VdfgTmp_hd1094721__0 
                                              >> 0x10U)))
                                   ? vlSelf->__PVT__PRF__DOT__prf
                                  [((IData)(vlSelf->__PVT__cmp_rs__DOT__rd_idx_valid)
                                     ? (0x7fU & (IData)(
                                                        (vlSelf->__VdfgTmp_hd1094721__0 
                                                         >> 2U)))
                                     : 0U)] : 0U);
    vlSelf->__PVT__mul_unit__DOT__result_ss = VL_MULS_QQQ(64, 
                                                          VL_EXTENDS_QI(64,32, vlSelf->__PVT__lookup_mul_pr1_val), 
                                                          VL_EXTENDS_QI(64,32, vlSelf->__PVT__lookup_mul_pr2_val));
    vlSelf->mul_unit__DOT____VdfgTmp_hd48f2dee__0 = 
        ((0x80000000U == vlSelf->__PVT__lookup_mul_pr1_val) 
         & (0xffffffffU == vlSelf->__PVT__lookup_mul_pr2_val));
    if (vlSelf->__Vcellinp__PRF__lookup_alu_pr1_valid) {
        vlSelf->__PVT__lookup_alu_pr1_val = vlSelf->__PVT__PRF__DOT__prf
            [((IData)(vlSelf->__PVT__alu_rs__DOT__rd_idx_valid)
               ? (0x7fU & (IData)((vlSelf->__VdfgTmp_h2f1d1f15__0 
                                   >> 9U))) : 0U)];
        vlSelf->__PVT__alu__DOT__a = vlSelf->__PVT__lookup_alu_pr1_val;
    } else {
        vlSelf->__PVT__lookup_alu_pr1_val = 0U;
        vlSelf->__PVT__alu__DOT__a = ((IData)(vlSelf->__PVT__alu_rs__DOT__rd_idx_valid)
                                       ? ((__VdfgTmp_he713134e__0[0xbU] 
                                           << 0x18U) 
                                          | (__VdfgTmp_he713134e__0[0xaU] 
                                             >> 8U))
                                       : 0U);
    }
    if (vlSelf->__Vcellinp__PRF__lookup_alu_pr2_valid) {
        vlSelf->__PVT__lookup_alu_pr2_val = vlSelf->__PVT__PRF__DOT__prf
            [((IData)(vlSelf->__PVT__alu_rs__DOT__rd_idx_valid)
               ? (0x7fU & (IData)((vlSelf->__VdfgTmp_h2f1d1f15__0 
                                   >> 2U))) : 0U)];
        vlSelf->__PVT__alu__DOT__b = vlSelf->__PVT__lookup_alu_pr2_val;
    } else {
        vlSelf->__PVT__lookup_alu_pr2_val = 0U;
        vlSelf->__PVT__alu__DOT__b = ((IData)(vlSelf->__PVT__alu_rs__DOT__rd_idx_valid)
                                       ? (IData)((vlSelf->__VdfgTmp_h2f1d1f15__0 
                                                  >> 0x1cU))
                                       : 0U);
    }
    vlSelf->__PVT__jump__DOT__br_target = ((4U == (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__jump_MIDCORE_data_i 
                                                              >> 0x19U))))
                                            ? (((vlSelf->__PVT__jump_ROB_data_i[0xbU] 
                                                 << 0x18U) 
                                                | (vlSelf->__PVT__jump_ROB_data_i[0xaU] 
                                                   >> 8U)) 
                                               + (IData)(
                                                         (vlSelf->__PVT__jump_MIDCORE_data_i 
                                                          >> 0x1cU)))
                                            : ((5U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__jump_MIDCORE_data_i 
                                                            >> 0x19U))))
                                                ? (0xfffffffeU 
                                                   & (vlSelf->__PVT__lookup_jump_pr1_val 
                                                      + (IData)(
                                                                (vlSelf->__PVT__jump_MIDCORE_data_i 
                                                                 >> 0x1cU))))
                                                : (
                                                   ((vlSelf->__PVT__jump_ROB_data_i[0xbU] 
                                                     << 0x18U) 
                                                    | (vlSelf->__PVT__jump_ROB_data_i[0xaU] 
                                                       >> 8U)) 
                                                   + (IData)(
                                                             (vlSelf->__PVT__jump_MIDCORE_data_i 
                                                              >> 0x1cU)))));
    vlSelf->__PVT__cmp__DOT__br_en = ((1U & (IData)(
                                                    (vlSelf->__PVT__cmp_MIDCORE_data_i 
                                                     >> 0x14U)))
                                       ? ((1U & (IData)(
                                                        (vlSelf->__PVT__cmp_MIDCORE_data_i 
                                                         >> 0x13U)))
                                           ? ((1U & (IData)(
                                                            (vlSelf->__PVT__cmp_MIDCORE_data_i 
                                                             >> 0x12U)))
                                               ? (vlSelf->__PVT__cmp__DOT__a 
                                                  >= vlSelf->__PVT__cmp__DOT__b)
                                               : (vlSelf->__PVT__cmp__DOT__a 
                                                  < vlSelf->__PVT__cmp__DOT__b))
                                           : ((1U & (IData)(
                                                            (vlSelf->__PVT__cmp_MIDCORE_data_i 
                                                             >> 0x12U)))
                                               ? VL_GTES_III(32, vlSelf->__PVT__cmp__DOT__a, vlSelf->__PVT__cmp__DOT__b)
                                               : VL_LTS_III(32, vlSelf->__PVT__cmp__DOT__a, vlSelf->__PVT__cmp__DOT__b)))
                                       : ((1U & (~ (IData)(
                                                           (vlSelf->__PVT__cmp_MIDCORE_data_i 
                                                            >> 0x13U)))) 
                                          && ((1U & (IData)(
                                                            (vlSelf->__PVT__cmp_MIDCORE_data_i 
                                                             >> 0x12U)))
                                               ? (vlSelf->__PVT__cmp__DOT__a 
                                                  != vlSelf->__PVT__cmp__DOT__b)
                                               : (vlSelf->__PVT__cmp__DOT__a 
                                                  == vlSelf->__PVT__cmp__DOT__b))));
    vlSelf->__PVT__mul_ROB_exec_o[0U] = vlSelf->__PVT__mul_ROB_data_i[0U];
    vlSelf->__PVT__mul_ROB_exec_o[1U] = vlSelf->__PVT__mul_ROB_data_i[1U];
    vlSelf->__PVT__mul_ROB_exec_o[2U] = vlSelf->__PVT__mul_ROB_data_i[2U];
    vlSelf->__PVT__mul_ROB_exec_o[3U] = vlSelf->__PVT__mul_ROB_data_i[3U];
    vlSelf->__PVT__mul_ROB_exec_o[4U] = vlSelf->__PVT__mul_ROB_data_i[4U];
    vlSelf->__PVT__mul_ROB_exec_o[5U] = vlSelf->__PVT__mul_ROB_data_i[5U];
    vlSelf->__PVT__mul_ROB_exec_o[6U] = vlSelf->__PVT__mul_ROB_data_i[6U];
    vlSelf->__PVT__mul_ROB_exec_o[7U] = vlSelf->__PVT__mul_ROB_data_i[7U];
    vlSelf->__PVT__mul_ROB_exec_o[8U] = vlSelf->__PVT__mul_ROB_data_i[8U];
    vlSelf->__PVT__mul_ROB_exec_o[9U] = vlSelf->__PVT__mul_ROB_data_i[9U];
    vlSelf->__PVT__mul_ROB_exec_o[0xaU] = vlSelf->__PVT__mul_ROB_data_i[0xaU];
    vlSelf->__PVT__mul_ROB_exec_o[0xbU] = vlSelf->__PVT__mul_ROB_data_i[0xbU];
    vlSelf->__PVT__mul_ROB_exec_o[5U] = ((0xfffffffU 
                                          & vlSelf->__PVT__mul_ROB_exec_o[5U]) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__lookup_mul_pr1_val)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->__PVT__lookup_mul_pr2_val)))) 
                                            << 0x1cU));
    vlSelf->__PVT__mul_ROB_exec_o[6U] = (((IData)((
                                                   ((QData)((IData)(vlSelf->__PVT__lookup_mul_pr1_val)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->__PVT__lookup_mul_pr2_val)))) 
                                          >> 4U) | 
                                         ((IData)((
                                                   (((QData)((IData)(vlSelf->__PVT__lookup_mul_pr1_val)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->__PVT__lookup_mul_pr2_val))) 
                                                   >> 0x20U)) 
                                          << 0x1cU));
    vlSelf->__PVT__mul_ROB_exec_o[7U] = ((0xf0000000U 
                                          & vlSelf->__PVT__mul_ROB_exec_o[7U]) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__lookup_mul_pr1_val)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__lookup_mul_pr2_val))) 
                                                     >> 0x20U)) 
                                            >> 4U));
    VL_EXTENDS_WI(65,32, __Vtemp_3, vlSelf->__PVT__lookup_mul_pr1_val);
    __Vtemp_4[0U] = __Vtemp_3[0U];
    __Vtemp_4[1U] = __Vtemp_3[1U];
    __Vtemp_4[2U] = (1U & __Vtemp_3[2U]);
    VL_EXTENDS_WQ(65,33, __Vtemp_6, (QData)((IData)(vlSelf->__PVT__lookup_mul_pr2_val)));
    __Vtemp_7[0U] = __Vtemp_6[0U];
    __Vtemp_7[1U] = __Vtemp_6[1U];
    __Vtemp_7[2U] = (1U & __Vtemp_6[2U]);
    VL_MULS_WWW(65, __Vtemp_8, __Vtemp_4, __Vtemp_7);
    __Vtemp_11[2U] = ((IData)(((QData)((IData)(((1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                            >> 0x14U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                             >> 0x13U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                              >> 0x12U)))
                                                   ? 
                                                  ((0U 
                                                    == vlSelf->__PVT__lookup_mul_pr2_val)
                                                    ? vlSelf->__PVT__lookup_mul_pr1_val
                                                    : 
                                                   VL_MODDIV_III(32, vlSelf->__PVT__lookup_mul_pr1_val, vlSelf->__PVT__lookup_mul_pr2_val))
                                                   : 
                                                  ((0U 
                                                    == vlSelf->__PVT__lookup_mul_pr2_val)
                                                    ? vlSelf->__PVT__lookup_mul_pr1_val
                                                    : 
                                                   ((IData)(vlSelf->mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                     ? 0U
                                                     : 
                                                    VL_MODDIVS_III(32, vlSelf->__PVT__lookup_mul_pr1_val, vlSelf->__PVT__lookup_mul_pr2_val))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                              >> 0x12U)))
                                                   ? 
                                                  ((0U 
                                                    == vlSelf->__PVT__lookup_mul_pr2_val)
                                                    ? 0xffffffffU
                                                    : 
                                                   VL_DIV_III(32, vlSelf->__PVT__lookup_mul_pr1_val, vlSelf->__PVT__lookup_mul_pr2_val))
                                                   : 
                                                  ((0U 
                                                    == vlSelf->__PVT__lookup_mul_pr2_val)
                                                    ? 0xffffffffU
                                                    : 
                                                   ((IData)(vlSelf->mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                     ? 0x80000000U
                                                     : 
                                                    VL_DIVS_III(32, vlSelf->__PVT__lookup_mul_pr1_val, vlSelf->__PVT__lookup_mul_pr2_val)))))
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                             >> 0x13U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                              >> 0x12U)))
                                                   ? (IData)(
                                                             (((QData)((IData)(vlSelf->__PVT__lookup_mul_pr1_val)) 
                                                               * (QData)((IData)(vlSelf->__PVT__lookup_mul_pr2_val))) 
                                                              >> 0x20U))
                                                   : 
                                                  __Vtemp_8[1U])
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                              >> 0x12U)))
                                                   ? (IData)(
                                                             (vlSelf->__PVT__mul_unit__DOT__result_ss 
                                                              >> 0x20U))
                                                   : (IData)(vlSelf->__PVT__mul_unit__DOT__result_ss)))))) 
                               << 0x20U)) << 8U);
    __Vtemp_11[3U] = (((IData)(((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                             >> 0x14U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                              >> 0x13U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                               >> 0x12U)))
                                                    ? 
                                                   ((0U 
                                                     == vlSelf->__PVT__lookup_mul_pr2_val)
                                                     ? vlSelf->__PVT__lookup_mul_pr1_val
                                                     : 
                                                    VL_MODDIV_III(32, vlSelf->__PVT__lookup_mul_pr1_val, vlSelf->__PVT__lookup_mul_pr2_val))
                                                    : 
                                                   ((0U 
                                                     == vlSelf->__PVT__lookup_mul_pr2_val)
                                                     ? vlSelf->__PVT__lookup_mul_pr1_val
                                                     : 
                                                    ((IData)(vlSelf->mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                      ? 0U
                                                      : 
                                                     VL_MODDIVS_III(32, vlSelf->__PVT__lookup_mul_pr1_val, vlSelf->__PVT__lookup_mul_pr2_val))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                               >> 0x12U)))
                                                    ? 
                                                   ((0U 
                                                     == vlSelf->__PVT__lookup_mul_pr2_val)
                                                     ? 0xffffffffU
                                                     : 
                                                    VL_DIV_III(32, vlSelf->__PVT__lookup_mul_pr1_val, vlSelf->__PVT__lookup_mul_pr2_val))
                                                    : 
                                                   ((0U 
                                                     == vlSelf->__PVT__lookup_mul_pr2_val)
                                                     ? 0xffffffffU
                                                     : 
                                                    ((IData)(vlSelf->mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                      ? 0x80000000U
                                                      : 
                                                     VL_DIVS_III(32, vlSelf->__PVT__lookup_mul_pr1_val, vlSelf->__PVT__lookup_mul_pr2_val)))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                              >> 0x13U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                               >> 0x12U)))
                                                    ? (IData)(
                                                              (((QData)((IData)(vlSelf->__PVT__lookup_mul_pr1_val)) 
                                                                * (QData)((IData)(vlSelf->__PVT__lookup_mul_pr2_val))) 
                                                               >> 0x20U))
                                                    : 
                                                   __Vtemp_8[1U])
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                               >> 0x12U)))
                                                    ? (IData)(
                                                              (vlSelf->__PVT__mul_unit__DOT__result_ss 
                                                               >> 0x20U))
                                                    : (IData)(vlSelf->__PVT__mul_unit__DOT__result_ss)))))) 
                                << 0x20U)) >> 0x18U) 
                      | ((IData)((((QData)((IData)(
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                                >> 0x14U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                                 >> 0x13U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                                  >> 0x12U)))
                                                       ? 
                                                      ((0U 
                                                        == vlSelf->__PVT__lookup_mul_pr2_val)
                                                        ? vlSelf->__PVT__lookup_mul_pr1_val
                                                        : 
                                                       VL_MODDIV_III(32, vlSelf->__PVT__lookup_mul_pr1_val, vlSelf->__PVT__lookup_mul_pr2_val))
                                                       : 
                                                      ((0U 
                                                        == vlSelf->__PVT__lookup_mul_pr2_val)
                                                        ? vlSelf->__PVT__lookup_mul_pr1_val
                                                        : 
                                                       ((IData)(vlSelf->mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                         ? 0U
                                                         : 
                                                        VL_MODDIVS_III(32, vlSelf->__PVT__lookup_mul_pr1_val, vlSelf->__PVT__lookup_mul_pr2_val))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                                  >> 0x12U)))
                                                       ? 
                                                      ((0U 
                                                        == vlSelf->__PVT__lookup_mul_pr2_val)
                                                        ? 0xffffffffU
                                                        : 
                                                       VL_DIV_III(32, vlSelf->__PVT__lookup_mul_pr1_val, vlSelf->__PVT__lookup_mul_pr2_val))
                                                       : 
                                                      ((0U 
                                                        == vlSelf->__PVT__lookup_mul_pr2_val)
                                                        ? 0xffffffffU
                                                        : 
                                                       ((IData)(vlSelf->mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                         ? 0x80000000U
                                                         : 
                                                        VL_DIVS_III(32, vlSelf->__PVT__lookup_mul_pr1_val, vlSelf->__PVT__lookup_mul_pr2_val)))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                                 >> 0x13U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                                  >> 0x12U)))
                                                       ? (IData)(
                                                                 (((QData)((IData)(vlSelf->__PVT__lookup_mul_pr1_val)) 
                                                                   * (QData)((IData)(vlSelf->__PVT__lookup_mul_pr2_val))) 
                                                                  >> 0x20U))
                                                       : 
                                                      __Vtemp_8[1U])
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                                  >> 0x12U)))
                                                       ? (IData)(
                                                                 (vlSelf->__PVT__mul_unit__DOT__result_ss 
                                                                  >> 0x20U))
                                                       : (IData)(vlSelf->__PVT__mul_unit__DOT__result_ss)))))) 
                                   << 0x20U) >> 0x20U)) 
                         << 8U));
    __Vtemp_11[4U] = ((IData)((((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                             >> 0x14U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                              >> 0x13U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                               >> 0x12U)))
                                                    ? 
                                                   ((0U 
                                                     == vlSelf->__PVT__lookup_mul_pr2_val)
                                                     ? vlSelf->__PVT__lookup_mul_pr1_val
                                                     : 
                                                    VL_MODDIV_III(32, vlSelf->__PVT__lookup_mul_pr1_val, vlSelf->__PVT__lookup_mul_pr2_val))
                                                    : 
                                                   ((0U 
                                                     == vlSelf->__PVT__lookup_mul_pr2_val)
                                                     ? vlSelf->__PVT__lookup_mul_pr1_val
                                                     : 
                                                    ((IData)(vlSelf->mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                      ? 0U
                                                      : 
                                                     VL_MODDIVS_III(32, vlSelf->__PVT__lookup_mul_pr1_val, vlSelf->__PVT__lookup_mul_pr2_val))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                               >> 0x12U)))
                                                    ? 
                                                   ((0U 
                                                     == vlSelf->__PVT__lookup_mul_pr2_val)
                                                     ? 0xffffffffU
                                                     : 
                                                    VL_DIV_III(32, vlSelf->__PVT__lookup_mul_pr1_val, vlSelf->__PVT__lookup_mul_pr2_val))
                                                    : 
                                                   ((0U 
                                                     == vlSelf->__PVT__lookup_mul_pr2_val)
                                                     ? 0xffffffffU
                                                     : 
                                                    ((IData)(vlSelf->mul_unit__DOT____VdfgTmp_hd48f2dee__0)
                                                      ? 0x80000000U
                                                      : 
                                                     VL_DIVS_III(32, vlSelf->__PVT__lookup_mul_pr1_val, vlSelf->__PVT__lookup_mul_pr2_val)))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                              >> 0x13U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                               >> 0x12U)))
                                                    ? (IData)(
                                                              (((QData)((IData)(vlSelf->__PVT__lookup_mul_pr1_val)) 
                                                                * (QData)((IData)(vlSelf->__PVT__lookup_mul_pr2_val))) 
                                                               >> 0x20U))
                                                    : 
                                                   __Vtemp_8[1U])
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mul_MIDCORE_data_i 
                                                               >> 0x12U)))
                                                    ? (IData)(
                                                              (vlSelf->__PVT__mul_unit__DOT__result_ss 
                                                               >> 0x20U))
                                                    : (IData)(vlSelf->__PVT__mul_unit__DOT__result_ss)))))) 
                                << 0x20U) >> 0x20U)) 
                      >> 0x18U);
    vlSelf->__PVT__mul_ROB_exec_o[1U] = (0x3fffU & 
                                         vlSelf->__PVT__mul_ROB_exec_o[1U]);
    vlSelf->__PVT__mul_ROB_exec_o[2U] = 0U;
    vlSelf->__PVT__mul_ROB_exec_o[3U] = (__Vtemp_11[2U] 
                                         << 0xeU);
    vlSelf->__PVT__mul_ROB_exec_o[4U] = ((__Vtemp_11[2U] 
                                          >> 0x12U) 
                                         | (__Vtemp_11[3U] 
                                            << 0xeU));
    vlSelf->__PVT__mul_ROB_exec_o[5U] = ((0xffc00000U 
                                          & vlSelf->__PVT__mul_ROB_exec_o[5U]) 
                                         | ((__Vtemp_11[3U] 
                                             >> 0x12U) 
                                            | (__Vtemp_11[4U] 
                                               << 0xeU)));
    vlSelf->__PVT__mul_ROB_exec_o[1U] = ((0xfffff7ffU 
                                          & vlSelf->__PVT__mul_ROB_exec_o[1U]) 
                                         | (0x800U 
                                            & ((0xfffff800U 
                                                & (vlSelf->__PVT__mul_ROB_data_i[1U] 
                                                   << 1U)) 
                                               | ((((vlSelf->__PVT__mul_ROB_data_i[0xaU] 
                                                     << 0x18U) 
                                                    | (vlSelf->__PVT__mul_ROB_data_i[9U] 
                                                       >> 8U)) 
                                                   != 
                                                   ((IData)(4U) 
                                                    + 
                                                    ((vlSelf->__PVT__mul_ROB_data_i[0xbU] 
                                                      << 0x18U) 
                                                     | (vlSelf->__PVT__mul_ROB_data_i[0xaU] 
                                                        >> 8U)))) 
                                                  << 0xbU))));
    vlSelf->__PVT__mul_ROB_exec_o[0U] = ((0x1ffU & 
                                          vlSelf->__PVT__mul_ROB_exec_o[0U]) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     ((IData)(4U) 
                                                                      + 
                                                                      ((vlSelf->__PVT__mul_ROB_data_i[0xbU] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->__PVT__mul_ROB_data_i[0xaU] 
                                                                          >> 8U))))) 
                                                     << 1U)) 
                                            << 9U));
    vlSelf->__PVT__mul_ROB_exec_o[1U] = ((0xfffffc00U 
                                          & vlSelf->__PVT__mul_ROB_exec_o[1U]) 
                                         | (((IData)(
                                                     ((QData)((IData)(
                                                                      ((IData)(4U) 
                                                                       + 
                                                                       ((vlSelf->__PVT__mul_ROB_data_i[0xbU] 
                                                                         << 0x18U) 
                                                                        | (vlSelf->__PVT__mul_ROB_data_i[0xaU] 
                                                                           >> 8U))))) 
                                                      << 1U)) 
                                             >> 0x17U) 
                                            | ((IData)(
                                                       (((QData)((IData)(
                                                                         ((IData)(4U) 
                                                                          + 
                                                                          ((vlSelf->__PVT__mul_ROB_data_i[0xbU] 
                                                                            << 0x18U) 
                                                                           | (vlSelf->__PVT__mul_ROB_data_i[0xaU] 
                                                                              >> 8U))))) 
                                                         << 1U) 
                                                        >> 0x20U)) 
                                               << 9U)));
    vlSelf->__PVT__mul_ROB_exec_o[0xbU] = ((0x2fffffffU 
                                            & vlSelf->__PVT__mul_ROB_exec_o[0xbU]) 
                                           | (0x3fffffffU 
                                              & ((IData)(vlSelf->__PVT__mul_valid) 
                                                 << 0x1cU)));
    vlSelf->__PVT__jump__DOT__mispredict = (1U & (~ 
                                                  ((IData)(vlSelf->__PVT__jump_rs__DOT__rd_idx_valid) 
                                                   & ((__VdfgTmp_haf14404e__0[1U] 
                                                       >> 0xaU) 
                                                      & (((IData)(vlSelf->__PVT__jump_rs__DOT__rd_idx_valid)
                                                           ? 
                                                          ((__VdfgTmp_haf14404e__0[0xaU] 
                                                            << 0x18U) 
                                                           | (__VdfgTmp_haf14404e__0[9U] 
                                                              >> 8U))
                                                           : 0U) 
                                                         == vlSelf->__PVT__jump__DOT__br_target)))));
    vlSelf->__PVT__cmp__DOT__br_target = ((IData)(vlSelf->__PVT__cmp__DOT__br_en)
                                           ? (cmp__DOT____VdfgTmp_h2625da61__0 
                                              + ((IData)(vlSelf->__PVT__cmp_rs__DOT__rd_idx_valid)
                                                  ? (IData)(
                                                            (vlSelf->__VdfgTmp_hd1094721__0 
                                                             >> 0x1cU))
                                                  : 0U))
                                           : ((IData)(4U) 
                                              + cmp__DOT____VdfgTmp_h2625da61__0));
    vlSelf->__PVT__wb_mul = ((IData)(vlSelf->__PVT__mul_valid) 
                             & (vlSelf->__PVT__mul_ROB_exec_o[0xbU] 
                                >> 0x1bU));
    vlSelf->__PVT__alu_ROB_exec_o[0U] = vlSelf->__PVT__alu_ROB_data_i[0U];
    vlSelf->__PVT__alu_ROB_exec_o[1U] = vlSelf->__PVT__alu_ROB_data_i[1U];
    vlSelf->__PVT__alu_ROB_exec_o[2U] = vlSelf->__PVT__alu_ROB_data_i[2U];
    vlSelf->__PVT__alu_ROB_exec_o[3U] = vlSelf->__PVT__alu_ROB_data_i[3U];
    vlSelf->__PVT__alu_ROB_exec_o[4U] = vlSelf->__PVT__alu_ROB_data_i[4U];
    vlSelf->__PVT__alu_ROB_exec_o[5U] = vlSelf->__PVT__alu_ROB_data_i[5U];
    vlSelf->__PVT__alu_ROB_exec_o[6U] = vlSelf->__PVT__alu_ROB_data_i[6U];
    vlSelf->__PVT__alu_ROB_exec_o[7U] = vlSelf->__PVT__alu_ROB_data_i[7U];
    vlSelf->__PVT__alu_ROB_exec_o[8U] = vlSelf->__PVT__alu_ROB_data_i[8U];
    vlSelf->__PVT__alu_ROB_exec_o[9U] = vlSelf->__PVT__alu_ROB_data_i[9U];
    vlSelf->__PVT__alu_ROB_exec_o[0xaU] = vlSelf->__PVT__alu_ROB_data_i[0xaU];
    vlSelf->__PVT__alu_ROB_exec_o[0xbU] = vlSelf->__PVT__alu_ROB_data_i[0xbU];
    vlSelf->__PVT__alu_ROB_exec_o[5U] = ((0xfffffffU 
                                          & vlSelf->__PVT__alu_ROB_exec_o[5U]) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__lookup_alu_pr1_val)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->__PVT__lookup_alu_pr2_val)))) 
                                            << 0x1cU));
    vlSelf->__PVT__alu_ROB_exec_o[6U] = (((IData)((
                                                   ((QData)((IData)(vlSelf->__PVT__lookup_alu_pr1_val)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->__PVT__lookup_alu_pr2_val)))) 
                                          >> 4U) | 
                                         ((IData)((
                                                   (((QData)((IData)(vlSelf->__PVT__lookup_alu_pr1_val)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->__PVT__lookup_alu_pr2_val))) 
                                                   >> 0x20U)) 
                                          << 0x1cU));
    vlSelf->__PVT__alu_ROB_exec_o[7U] = ((0xf0000000U 
                                          & vlSelf->__PVT__alu_ROB_exec_o[7U]) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__lookup_alu_pr1_val)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__lookup_alu_pr2_val))) 
                                                     >> 0x20U)) 
                                            >> 4U));
    __Vtemp_13[2U] = ((IData)(((QData)((IData)(((1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                            >> 0x18U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                             >> 0x17U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                              >> 0x16U)))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                               >> 0x15U)))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__alu__DOT__a, 
                                                                  (0x1fU 
                                                                   & vlSelf->__PVT__alu__DOT__b))
                                                    : 0U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                              >> 0x16U)))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                               >> 0x15U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelf->__PVT__alu__DOT__a 
                                                    - vlSelf->__PVT__alu__DOT__b))))
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                             >> 0x17U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                              >> 0x16U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                               >> 0x15U)))
                                                    ? 
                                                   (vlSelf->__PVT__alu__DOT__a 
                                                    & vlSelf->__PVT__alu__DOT__b)
                                                    : 
                                                   (vlSelf->__PVT__alu__DOT__a 
                                                    | vlSelf->__PVT__alu__DOT__b))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                               >> 0x15U)))
                                                    ? 
                                                   (vlSelf->__PVT__alu__DOT__a 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->__PVT__alu__DOT__b))
                                                    : 
                                                   (vlSelf->__PVT__alu__DOT__a 
                                                    ^ vlSelf->__PVT__alu__DOT__b)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                              >> 0x16U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                               >> 0x15U)))
                                                    ? 
                                                   (vlSelf->__PVT__alu__DOT__a 
                                                    < vlSelf->__PVT__alu__DOT__b)
                                                    : 
                                                   VL_LTS_III(32, vlSelf->__PVT__alu__DOT__a, vlSelf->__PVT__alu__DOT__b))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                               >> 0x15U)))
                                                    ? 
                                                   (vlSelf->__PVT__alu__DOT__a 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelf->__PVT__alu__DOT__b))
                                                    : 
                                                   (vlSelf->__PVT__alu__DOT__a 
                                                    + vlSelf->__PVT__alu__DOT__b))))))) 
                               << 0x20U)) << 8U);
    __Vtemp_13[3U] = (((IData)(((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                             >> 0x18U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                              >> 0x17U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                               >> 0x16U)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                >> 0x15U)))
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__alu__DOT__a, 
                                                                   (0x1fU 
                                                                    & vlSelf->__PVT__alu__DOT__b))
                                                     : 0U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                               >> 0x16U)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                >> 0x15U)))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->__PVT__alu__DOT__a 
                                                     - vlSelf->__PVT__alu__DOT__b))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                              >> 0x17U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                               >> 0x16U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                >> 0x15U)))
                                                     ? 
                                                    (vlSelf->__PVT__alu__DOT__a 
                                                     & vlSelf->__PVT__alu__DOT__b)
                                                     : 
                                                    (vlSelf->__PVT__alu__DOT__a 
                                                     | vlSelf->__PVT__alu__DOT__b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                >> 0x15U)))
                                                     ? 
                                                    (vlSelf->__PVT__alu__DOT__a 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->__PVT__alu__DOT__b))
                                                     : 
                                                    (vlSelf->__PVT__alu__DOT__a 
                                                     ^ vlSelf->__PVT__alu__DOT__b)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                               >> 0x16U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                >> 0x15U)))
                                                     ? 
                                                    (vlSelf->__PVT__alu__DOT__a 
                                                     < vlSelf->__PVT__alu__DOT__b)
                                                     : 
                                                    VL_LTS_III(32, vlSelf->__PVT__alu__DOT__a, vlSelf->__PVT__alu__DOT__b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                >> 0x15U)))
                                                     ? 
                                                    (vlSelf->__PVT__alu__DOT__a 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->__PVT__alu__DOT__b))
                                                     : 
                                                    (vlSelf->__PVT__alu__DOT__a 
                                                     + vlSelf->__PVT__alu__DOT__b))))))) 
                                << 0x20U)) >> 0x18U) 
                      | ((IData)((((QData)((IData)(
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                >> 0x18U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                 >> 0x17U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                  >> 0x16U)))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                   >> 0x15U)))
                                                        ? 
                                                       VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__alu__DOT__a, 
                                                                      (0x1fU 
                                                                       & vlSelf->__PVT__alu__DOT__b))
                                                        : 0U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                  >> 0x16U)))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                   >> 0x15U)))
                                                        ? 0U
                                                        : 
                                                       (vlSelf->__PVT__alu__DOT__a 
                                                        - vlSelf->__PVT__alu__DOT__b))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                 >> 0x17U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                  >> 0x16U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                   >> 0x15U)))
                                                        ? 
                                                       (vlSelf->__PVT__alu__DOT__a 
                                                        & vlSelf->__PVT__alu__DOT__b)
                                                        : 
                                                       (vlSelf->__PVT__alu__DOT__a 
                                                        | vlSelf->__PVT__alu__DOT__b))
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                   >> 0x15U)))
                                                        ? 
                                                       (vlSelf->__PVT__alu__DOT__a 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->__PVT__alu__DOT__b))
                                                        : 
                                                       (vlSelf->__PVT__alu__DOT__a 
                                                        ^ vlSelf->__PVT__alu__DOT__b)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                  >> 0x16U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                   >> 0x15U)))
                                                        ? 
                                                       (vlSelf->__PVT__alu__DOT__a 
                                                        < vlSelf->__PVT__alu__DOT__b)
                                                        : 
                                                       VL_LTS_III(32, vlSelf->__PVT__alu__DOT__a, vlSelf->__PVT__alu__DOT__b))
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                   >> 0x15U)))
                                                        ? 
                                                       (vlSelf->__PVT__alu__DOT__a 
                                                        << 
                                                        (0x1fU 
                                                         & vlSelf->__PVT__alu__DOT__b))
                                                        : 
                                                       (vlSelf->__PVT__alu__DOT__a 
                                                        + vlSelf->__PVT__alu__DOT__b))))))) 
                                   << 0x20U) >> 0x20U)) 
                         << 8U));
    __Vtemp_13[4U] = ((IData)((((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                             >> 0x18U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                              >> 0x17U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                               >> 0x16U)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                >> 0x15U)))
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__alu__DOT__a, 
                                                                   (0x1fU 
                                                                    & vlSelf->__PVT__alu__DOT__b))
                                                     : 0U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                               >> 0x16U)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                >> 0x15U)))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->__PVT__alu__DOT__a 
                                                     - vlSelf->__PVT__alu__DOT__b))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                              >> 0x17U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                               >> 0x16U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                >> 0x15U)))
                                                     ? 
                                                    (vlSelf->__PVT__alu__DOT__a 
                                                     & vlSelf->__PVT__alu__DOT__b)
                                                     : 
                                                    (vlSelf->__PVT__alu__DOT__a 
                                                     | vlSelf->__PVT__alu__DOT__b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                >> 0x15U)))
                                                     ? 
                                                    (vlSelf->__PVT__alu__DOT__a 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->__PVT__alu__DOT__b))
                                                     : 
                                                    (vlSelf->__PVT__alu__DOT__a 
                                                     ^ vlSelf->__PVT__alu__DOT__b)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                               >> 0x16U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                >> 0x15U)))
                                                     ? 
                                                    (vlSelf->__PVT__alu__DOT__a 
                                                     < vlSelf->__PVT__alu__DOT__b)
                                                     : 
                                                    VL_LTS_III(32, vlSelf->__PVT__alu__DOT__a, vlSelf->__PVT__alu__DOT__b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__alu_MIDCORE_data_i 
                                                                >> 0x15U)))
                                                     ? 
                                                    (vlSelf->__PVT__alu__DOT__a 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->__PVT__alu__DOT__b))
                                                     : 
                                                    (vlSelf->__PVT__alu__DOT__a 
                                                     + vlSelf->__PVT__alu__DOT__b))))))) 
                                << 0x20U) >> 0x20U)) 
                      >> 0x18U);
    vlSelf->__PVT__alu_ROB_exec_o[1U] = (0x3fffU & 
                                         vlSelf->__PVT__alu_ROB_exec_o[1U]);
    vlSelf->__PVT__alu_ROB_exec_o[2U] = 0U;
    vlSelf->__PVT__alu_ROB_exec_o[3U] = (__Vtemp_13[2U] 
                                         << 0xeU);
    vlSelf->__PVT__alu_ROB_exec_o[4U] = ((__Vtemp_13[2U] 
                                          >> 0x12U) 
                                         | (__Vtemp_13[3U] 
                                            << 0xeU));
    vlSelf->__PVT__alu_ROB_exec_o[5U] = ((0xffc00000U 
                                          & vlSelf->__PVT__alu_ROB_exec_o[5U]) 
                                         | ((__Vtemp_13[3U] 
                                             >> 0x12U) 
                                            | (__Vtemp_13[4U] 
                                               << 0xeU)));
    vlSelf->__PVT__alu_ROB_exec_o[1U] = ((0xfffff7ffU 
                                          & vlSelf->__PVT__alu_ROB_exec_o[1U]) 
                                         | (0x800U 
                                            & ((0xfffff800U 
                                                & (vlSelf->__PVT__alu_ROB_data_i[1U] 
                                                   << 1U)) 
                                               | ((((vlSelf->__PVT__alu_ROB_data_i[0xaU] 
                                                     << 0x18U) 
                                                    | (vlSelf->__PVT__alu_ROB_data_i[9U] 
                                                       >> 8U)) 
                                                   != 
                                                   ((IData)(4U) 
                                                    + 
                                                    ((vlSelf->__PVT__alu_ROB_data_i[0xbU] 
                                                      << 0x18U) 
                                                     | (vlSelf->__PVT__alu_ROB_data_i[0xaU] 
                                                        >> 8U)))) 
                                                  << 0xbU))));
    vlSelf->__PVT__alu_ROB_exec_o[0U] = ((0x1ffU & 
                                          vlSelf->__PVT__alu_ROB_exec_o[0U]) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     ((IData)(4U) 
                                                                      + 
                                                                      ((vlSelf->__PVT__alu_ROB_data_i[0xbU] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->__PVT__alu_ROB_data_i[0xaU] 
                                                                          >> 8U))))) 
                                                     << 1U)) 
                                            << 9U));
    vlSelf->__PVT__alu_ROB_exec_o[1U] = ((0xfffffc00U 
                                          & vlSelf->__PVT__alu_ROB_exec_o[1U]) 
                                         | (((IData)(
                                                     ((QData)((IData)(
                                                                      ((IData)(4U) 
                                                                       + 
                                                                       ((vlSelf->__PVT__alu_ROB_data_i[0xbU] 
                                                                         << 0x18U) 
                                                                        | (vlSelf->__PVT__alu_ROB_data_i[0xaU] 
                                                                           >> 8U))))) 
                                                      << 1U)) 
                                             >> 0x17U) 
                                            | ((IData)(
                                                       (((QData)((IData)(
                                                                         ((IData)(4U) 
                                                                          + 
                                                                          ((vlSelf->__PVT__alu_ROB_data_i[0xbU] 
                                                                            << 0x18U) 
                                                                           | (vlSelf->__PVT__alu_ROB_data_i[0xaU] 
                                                                              >> 8U))))) 
                                                         << 1U) 
                                                        >> 0x20U)) 
                                               << 9U)));
    vlSelf->__PVT__alu_ROB_exec_o[0xbU] = ((0x2fffffffU 
                                            & vlSelf->__PVT__alu_ROB_exec_o[0xbU]) 
                                           | (0x3fffffffU 
                                              & ((IData)(vlSelf->__PVT__alu_valid) 
                                                 << 0x1cU)));
    vlSelf->__PVT__jump_ROB_exec_o[0U] = vlSelf->__PVT__jump_ROB_data_i[0U];
    vlSelf->__PVT__jump_ROB_exec_o[1U] = vlSelf->__PVT__jump_ROB_data_i[1U];
    vlSelf->__PVT__jump_ROB_exec_o[2U] = vlSelf->__PVT__jump_ROB_data_i[2U];
    vlSelf->__PVT__jump_ROB_exec_o[3U] = vlSelf->__PVT__jump_ROB_data_i[3U];
    vlSelf->__PVT__jump_ROB_exec_o[4U] = vlSelf->__PVT__jump_ROB_data_i[4U];
    vlSelf->__PVT__jump_ROB_exec_o[5U] = vlSelf->__PVT__jump_ROB_data_i[5U];
    vlSelf->__PVT__jump_ROB_exec_o[6U] = vlSelf->__PVT__jump_ROB_data_i[6U];
    vlSelf->__PVT__jump_ROB_exec_o[7U] = vlSelf->__PVT__jump_ROB_data_i[7U];
    vlSelf->__PVT__jump_ROB_exec_o[8U] = vlSelf->__PVT__jump_ROB_data_i[8U];
    vlSelf->__PVT__jump_ROB_exec_o[9U] = vlSelf->__PVT__jump_ROB_data_i[9U];
    vlSelf->__PVT__jump_ROB_exec_o[0xaU] = vlSelf->__PVT__jump_ROB_data_i[0xaU];
    vlSelf->__PVT__jump_ROB_exec_o[0xbU] = vlSelf->__PVT__jump_ROB_data_i[0xbU];
    vlSelf->__PVT__jump_ROB_exec_o[9U] = ((0xffU & 
                                           vlSelf->__PVT__jump_ROB_exec_o[9U]) 
                                          | (((IData)(vlSelf->__PVT__jump__DOT__mispredict)
                                               ? vlSelf->__PVT__jump__DOT__br_target
                                               : ((
                                                   vlSelf->__PVT__jump_ROB_data_i[0xaU] 
                                                   << 0x18U) 
                                                  | (vlSelf->__PVT__jump_ROB_data_i[9U] 
                                                     >> 8U))) 
                                             << 8U));
    vlSelf->__PVT__jump_ROB_exec_o[0xaU] = ((0xffffff00U 
                                             & vlSelf->__PVT__jump_ROB_exec_o[0xaU]) 
                                            | (((IData)(vlSelf->__PVT__jump__DOT__mispredict)
                                                 ? vlSelf->__PVT__jump__DOT__br_target
                                                 : 
                                                ((vlSelf->__PVT__jump_ROB_data_i[0xaU] 
                                                  << 0x18U) 
                                                 | (vlSelf->__PVT__jump_ROB_data_i[9U] 
                                                    >> 8U))) 
                                               >> 0x18U));
    vlSelf->__PVT__jump_ROB_exec_o[5U] = ((0xfffffffU 
                                           & vlSelf->__PVT__jump_ROB_exec_o[5U]) 
                                          | ((IData)(
                                                     ((QData)((IData)(vlSelf->__PVT__lookup_jump_pr1_val)) 
                                                      << 0x20U)) 
                                             << 0x1cU));
    vlSelf->__PVT__jump_ROB_exec_o[6U] = (((IData)(
                                                   ((QData)((IData)(vlSelf->__PVT__lookup_jump_pr1_val)) 
                                                    << 0x20U)) 
                                           >> 4U) | 
                                          ((IData)(
                                                   (((QData)((IData)(vlSelf->__PVT__lookup_jump_pr1_val)) 
                                                     << 0x20U) 
                                                    >> 0x20U)) 
                                           << 0x1cU));
    vlSelf->__PVT__jump_ROB_exec_o[7U] = ((0xf0000000U 
                                           & vlSelf->__PVT__jump_ROB_exec_o[7U]) 
                                          | ((IData)(
                                                     (((QData)((IData)(vlSelf->__PVT__lookup_jump_pr1_val)) 
                                                       << 0x20U) 
                                                      >> 0x20U)) 
                                             >> 4U));
    vlSelf->__PVT__jump_ROB_exec_o[3U] = ((0x3fffffU 
                                           & vlSelf->__PVT__jump_ROB_exec_o[3U]) 
                                          | ((IData)(
                                                     ((QData)((IData)(
                                                                      ((IData)(4U) 
                                                                       + 
                                                                       ((vlSelf->__PVT__jump_ROB_data_i[0xbU] 
                                                                         << 0x18U) 
                                                                        | (vlSelf->__PVT__jump_ROB_data_i[0xaU] 
                                                                           >> 8U))))) 
                                                      << 0x20U)) 
                                             << 0x16U));
    vlSelf->__PVT__jump_ROB_exec_o[4U] = (((IData)(
                                                   ((QData)((IData)(
                                                                    ((IData)(4U) 
                                                                     + 
                                                                     ((vlSelf->__PVT__jump_ROB_data_i[0xbU] 
                                                                       << 0x18U) 
                                                                      | (vlSelf->__PVT__jump_ROB_data_i[0xaU] 
                                                                         >> 8U))))) 
                                                    << 0x20U)) 
                                           >> 0xaU) 
                                          | ((IData)(
                                                     (((QData)((IData)(
                                                                       ((IData)(4U) 
                                                                        + 
                                                                        ((vlSelf->__PVT__jump_ROB_data_i[0xbU] 
                                                                          << 0x18U) 
                                                                         | (vlSelf->__PVT__jump_ROB_data_i[0xaU] 
                                                                            >> 8U))))) 
                                                       << 0x20U) 
                                                      >> 0x20U)) 
                                             << 0x16U));
    vlSelf->__PVT__jump_ROB_exec_o[5U] = ((0xffc00000U 
                                           & vlSelf->__PVT__jump_ROB_exec_o[5U]) 
                                          | ((IData)(
                                                     (((QData)((IData)(
                                                                       ((IData)(4U) 
                                                                        + 
                                                                        ((vlSelf->__PVT__jump_ROB_data_i[0xbU] 
                                                                          << 0x18U) 
                                                                         | (vlSelf->__PVT__jump_ROB_data_i[0xaU] 
                                                                            >> 8U))))) 
                                                       << 0x20U) 
                                                      >> 0x20U)) 
                                             >> 0xaU));
    vlSelf->__PVT__jump_ROB_exec_o[1U] = (0x3fffU & 
                                          vlSelf->__PVT__jump_ROB_exec_o[1U]);
    vlSelf->__PVT__jump_ROB_exec_o[2U] = 0U;
    vlSelf->__PVT__jump_ROB_exec_o[3U] = (0xffc00000U 
                                          & vlSelf->__PVT__jump_ROB_exec_o[3U]);
    vlSelf->__PVT__jump_ROB_exec_o[1U] = ((0xfffff7ffU 
                                           & vlSelf->__PVT__jump_ROB_exec_o[1U]) 
                                          | ((IData)(vlSelf->__PVT__jump__DOT__mispredict) 
                                             << 0xbU));
    vlSelf->__PVT__jump_ROB_exec_o[0U] = ((0x1ffU & 
                                           vlSelf->__PVT__jump_ROB_exec_o[0U]) 
                                          | ((IData)(
                                                     (1ULL 
                                                      | ((QData)((IData)(vlSelf->__PVT__jump__DOT__br_target)) 
                                                         << 1U))) 
                                             << 9U));
    vlSelf->__PVT__jump_ROB_exec_o[1U] = ((0xfffffc00U 
                                           & vlSelf->__PVT__jump_ROB_exec_o[1U]) 
                                          | (((IData)(
                                                      (1ULL 
                                                       | ((QData)((IData)(vlSelf->__PVT__jump__DOT__br_target)) 
                                                          << 1U))) 
                                              >> 0x17U) 
                                             | ((IData)(
                                                        ((1ULL 
                                                          | ((QData)((IData)(vlSelf->__PVT__jump__DOT__br_target)) 
                                                             << 1U)) 
                                                         >> 0x20U)) 
                                                << 9U)));
    vlSelf->__PVT__jump_ROB_exec_o[0xbU] = ((0x2fffffffU 
                                             & vlSelf->__PVT__jump_ROB_exec_o[0xbU]) 
                                            | (0x3fffffffU 
                                               & ((IData)(vlSelf->__PVT__jump_valid_o) 
                                                  << 0x1cU)));
    vlSelf->__PVT__cmp__DOT__mispredict = ((((IData)(vlSelf->__PVT__cmp_rs__DOT__rd_idx_valid) 
                                             & (__VdfgTmp_h33641dd6__0[1U] 
                                                >> 0xaU)) 
                                            != (IData)(vlSelf->__PVT__cmp__DOT__br_en)) 
                                           | (((IData)(vlSelf->__PVT__cmp_rs__DOT__rd_idx_valid)
                                                ? (
                                                   (__VdfgTmp_h33641dd6__0[0xaU] 
                                                    << 0x18U) 
                                                   | (__VdfgTmp_h33641dd6__0[9U] 
                                                      >> 8U))
                                                : 0U) 
                                              != vlSelf->__PVT__cmp__DOT__br_target));
    vlSelf->__PVT__wb_alu = ((IData)(vlSelf->__PVT__alu_valid) 
                             & (vlSelf->__PVT__alu_ROB_exec_o[0xbU] 
                                >> 0x1bU));
    vlSelf->__PVT__wb_jump = ((IData)(vlSelf->__PVT__jump_valid_o) 
                              & (vlSelf->__PVT__jump_ROB_exec_o[0xbU] 
                                 >> 0x1bU));
    vlSelf->__PVT__cmp_ROB_exec_o[0U] = vlSelf->__PVT__cmp_ROB_data_i[0U];
    vlSelf->__PVT__cmp_ROB_exec_o[1U] = vlSelf->__PVT__cmp_ROB_data_i[1U];
    vlSelf->__PVT__cmp_ROB_exec_o[2U] = vlSelf->__PVT__cmp_ROB_data_i[2U];
    vlSelf->__PVT__cmp_ROB_exec_o[3U] = vlSelf->__PVT__cmp_ROB_data_i[3U];
    vlSelf->__PVT__cmp_ROB_exec_o[4U] = vlSelf->__PVT__cmp_ROB_data_i[4U];
    vlSelf->__PVT__cmp_ROB_exec_o[5U] = vlSelf->__PVT__cmp_ROB_data_i[5U];
    vlSelf->__PVT__cmp_ROB_exec_o[6U] = vlSelf->__PVT__cmp_ROB_data_i[6U];
    vlSelf->__PVT__cmp_ROB_exec_o[7U] = vlSelf->__PVT__cmp_ROB_data_i[7U];
    vlSelf->__PVT__cmp_ROB_exec_o[8U] = vlSelf->__PVT__cmp_ROB_data_i[8U];
    vlSelf->__PVT__cmp_ROB_exec_o[9U] = vlSelf->__PVT__cmp_ROB_data_i[9U];
    vlSelf->__PVT__cmp_ROB_exec_o[0xaU] = vlSelf->__PVT__cmp_ROB_data_i[0xaU];
    vlSelf->__PVT__cmp_ROB_exec_o[0xbU] = vlSelf->__PVT__cmp_ROB_data_i[0xbU];
    vlSelf->__PVT__cmp_ROB_exec_o[9U] = ((0xffU & vlSelf->__PVT__cmp_ROB_exec_o[9U]) 
                                         | (((IData)(vlSelf->__PVT__cmp__DOT__mispredict)
                                              ? vlSelf->__PVT__cmp__DOT__br_target
                                              : ((vlSelf->__PVT__cmp_ROB_data_i[0xaU] 
                                                  << 0x18U) 
                                                 | (vlSelf->__PVT__cmp_ROB_data_i[9U] 
                                                    >> 8U))) 
                                            << 8U));
    vlSelf->__PVT__cmp_ROB_exec_o[0xaU] = ((0xffffff00U 
                                            & vlSelf->__PVT__cmp_ROB_exec_o[0xaU]) 
                                           | (((IData)(vlSelf->__PVT__cmp__DOT__mispredict)
                                                ? vlSelf->__PVT__cmp__DOT__br_target
                                                : (
                                                   (vlSelf->__PVT__cmp_ROB_data_i[0xaU] 
                                                    << 0x18U) 
                                                   | (vlSelf->__PVT__cmp_ROB_data_i[9U] 
                                                      >> 8U))) 
                                              >> 0x18U));
    vlSelf->__PVT__cmp_ROB_exec_o[5U] = ((0xfffffffU 
                                          & vlSelf->__PVT__cmp_ROB_exec_o[5U]) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__cmp__DOT__a)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->__PVT__cmp__DOT__b)))) 
                                            << 0x1cU));
    vlSelf->__PVT__cmp_ROB_exec_o[6U] = (((IData)((
                                                   ((QData)((IData)(vlSelf->__PVT__cmp__DOT__a)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->__PVT__cmp__DOT__b)))) 
                                          >> 4U) | 
                                         ((IData)((
                                                   (((QData)((IData)(vlSelf->__PVT__cmp__DOT__a)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->__PVT__cmp__DOT__b))) 
                                                   >> 0x20U)) 
                                          << 0x1cU));
    vlSelf->__PVT__cmp_ROB_exec_o[7U] = ((0xf0000000U 
                                          & vlSelf->__PVT__cmp_ROB_exec_o[7U]) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__cmp__DOT__a)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cmp__DOT__b))) 
                                                     >> 0x20U)) 
                                            >> 4U));
    vlSelf->__PVT__cmp_ROB_exec_o[1U] = (0x3fffU & 
                                         vlSelf->__PVT__cmp_ROB_exec_o[1U]);
    vlSelf->__PVT__cmp_ROB_exec_o[2U] = 0U;
    vlSelf->__PVT__cmp_ROB_exec_o[3U] = 0U;
    vlSelf->__PVT__cmp_ROB_exec_o[4U] = 0U;
    vlSelf->__PVT__cmp_ROB_exec_o[5U] = (0xffc00000U 
                                         & vlSelf->__PVT__cmp_ROB_exec_o[5U]);
    vlSelf->__PVT__cmp_ROB_exec_o[1U] = ((0xfffff7ffU 
                                          & vlSelf->__PVT__cmp_ROB_exec_o[1U]) 
                                         | ((IData)(vlSelf->__PVT__cmp__DOT__mispredict) 
                                            << 0xbU));
    vlSelf->__PVT__cmp_ROB_exec_o[0U] = ((0x1ffU & 
                                          vlSelf->__PVT__cmp_ROB_exec_o[0U]) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__cmp__DOT__br_target)) 
                                                      << 1U) 
                                                     | (QData)((IData)(vlSelf->__PVT__cmp__DOT__br_en)))) 
                                            << 9U));
    vlSelf->__PVT__cmp_ROB_exec_o[1U] = ((0xfffffc00U 
                                          & vlSelf->__PVT__cmp_ROB_exec_o[1U]) 
                                         | (((IData)(
                                                     (((QData)((IData)(vlSelf->__PVT__cmp__DOT__br_target)) 
                                                       << 1U) 
                                                      | (QData)((IData)(vlSelf->__PVT__cmp__DOT__br_en)))) 
                                             >> 0x17U) 
                                            | ((IData)(
                                                       ((((QData)((IData)(vlSelf->__PVT__cmp__DOT__br_target)) 
                                                          << 1U) 
                                                         | (QData)((IData)(vlSelf->__PVT__cmp__DOT__br_en))) 
                                                        >> 0x20U)) 
                                               << 9U)));
    vlSelf->__PVT__cmp_ROB_exec_o[0xbU] = ((0x2fffffffU 
                                            & vlSelf->__PVT__cmp_ROB_exec_o[0xbU]) 
                                           | (0x3fffffffU 
                                              & ((IData)(vlSelf->__PVT__cmp_valid_o) 
                                                 << 0x1cU)));
    vlSelf->__PVT__wb_cmp = ((IData)(vlSelf->__PVT__cmp_valid_o) 
                             & (vlSelf->__PVT__cmp_ROB_exec_o[0xbU] 
                                >> 0x1bU));
}
