// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb_cpu_execute.h"

VL_ATTR_COLD void Vtop_tb_cpu_execute___ctor_var_reset(Vtop_tb_cpu_execute* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_tb_cpu_execute___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exec_mispredict = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exec_mispredict_rob_idx = VL_RAND_RESET_I(6);
    vlSelf->__PVT__rdPtr_i = VL_RAND_RESET_I(6);
    vlSelf->__PVT__load_commit_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_commit_rob_entry_i = VL_RAND_RESET_I(6);
    vlSelf->__PVT__load_commit_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__store_commit_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__store_commit_rob_entry_i = VL_RAND_RESET_I(6);
    vlSelf->__PVT__store_commit_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alu_full_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cmp_full_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_full_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__store_full_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__jump_full_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_full_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_alu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_load = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_jump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_cmp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_mul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_fwd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_alu_pr = VL_RAND_RESET_I(7);
    vlSelf->__PVT__wb_load_pr = VL_RAND_RESET_I(7);
    vlSelf->__PVT__wb_jump_pr = VL_RAND_RESET_I(7);
    vlSelf->__PVT__wb_cmp_pr = VL_RAND_RESET_I(7);
    vlSelf->__PVT__wb_mul_pr = VL_RAND_RESET_I(7);
    vlSelf->__PVT__wb_fwd_pr = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(382, vlSelf->__PVT__ROB_midcore_i);
    vlSelf->__PVT__MIDCORE_midcore_i = VL_RAND_RESET_Q(60);
    VL_RAND_RESET_W(382, vlSelf->__PVT__alu_ROB_exec_o);
    VL_RAND_RESET_W(382, vlSelf->__PVT__cmp_ROB_exec_o);
    VL_RAND_RESET_W(382, vlSelf->__PVT__jump_ROB_exec_o);
    VL_RAND_RESET_W(382, vlSelf->__PVT__mem_ROB_exec_o);
    VL_RAND_RESET_W(382, vlSelf->__PVT__mul_ROB_exec_o);
    vlSelf->__PVT__cmp_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__jump_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__store_wb_valid_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(382, vlSelf->__PVT__store_wb_rob_data_o);
    vlSelf->__PVT__fwd_ROB_exec_valid_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(382, vlSelf->__PVT__fwd_ROB_exec_o);
    vlSelf->__PVT__spec_load_mispredict_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__spec_load_recover_pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__spec_load_rob_idx_o = VL_RAND_RESET_I(6);
    vlSelf->__PVT__spec_load_checkpoint_id_o = VL_RAND_RESET_I(6);
    vlSelf->__PVT__dmem_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem_wmask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_resp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alu_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lookup_alu_pr1_val = VL_RAND_RESET_I(32);
    vlSelf->__PVT__lookup_jump_pr1_val = VL_RAND_RESET_I(32);
    vlSelf->__PVT__lookup_mul_pr1_val = VL_RAND_RESET_I(32);
    vlSelf->__PVT__lookup_alu_pr2_val = VL_RAND_RESET_I(32);
    vlSelf->__PVT__lookup_mul_pr2_val = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(382, vlSelf->__PVT__alu_ROB_data_i);
    VL_RAND_RESET_W(382, vlSelf->__PVT__cmp_ROB_data_i);
    VL_RAND_RESET_W(382, vlSelf->__PVT__jump_ROB_data_i);
    VL_RAND_RESET_W(382, vlSelf->__PVT__mul_ROB_data_i);
    vlSelf->__PVT__alu_MIDCORE_data_i = VL_RAND_RESET_Q(60);
    vlSelf->__PVT__cmp_MIDCORE_data_i = VL_RAND_RESET_Q(60);
    vlSelf->__PVT__jump_MIDCORE_data_i = VL_RAND_RESET_Q(60);
    vlSelf->__PVT__mul_MIDCORE_data_i = VL_RAND_RESET_Q(60);
    vlSelf->__PVT__alu_empty_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cmp_empty_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__jump_empty_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_empty_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__store_done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(382, vlSelf->__PVT__wb_load_rob_data);
    vlSelf->__Vcellinp__PRF__lookup_alu_pr2_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__PRF__lookup_alu_pr1_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__alu_rs__wr_en = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__cmp_rs__wr_en = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__jump_rs__wr_en = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__lsq__wr_en = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__mul_rs__wr_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__PRF__DOT__prf[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__PRF__DOT__prf_next[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__PRF__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__alu_rs__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(382, vlSelf->__PVT__alu_rs__DOT__rob_rs[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__alu_rs__DOT__midcore_rs[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__alu_rs__DOT__pr1_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__alu_rs__DOT__pr2_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__alu_rs__DOT__valid_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(382, vlSelf->__PVT__alu_rs__DOT__rob_rs_next[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__alu_rs__DOT__midcore_rs_next[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__alu_rs__DOT__pr1_ready_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__alu_rs__DOT__pr2_ready_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__alu_rs__DOT__wr_idx = VL_RAND_RESET_I(3);
    vlSelf->__PVT__alu_rs__DOT__rd_idx = VL_RAND_RESET_I(3);
    vlSelf->__PVT__alu_rs__DOT__wr_idx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alu_rs__DOT__rd_idx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alu_rs__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->__PVT__alu_rs__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->__PVT__alu_rs__DOT__unnamedblk9__DOT__i = 0;
    vlSelf->__PVT__alu__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alu__DOT__b = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cmp_rs__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(382, vlSelf->__PVT__cmp_rs__DOT__rob_rs[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cmp_rs__DOT__midcore_rs[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cmp_rs__DOT__pr1_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cmp_rs__DOT__pr2_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cmp_rs__DOT__valid_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(382, vlSelf->__PVT__cmp_rs__DOT__rob_rs_next[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cmp_rs__DOT__midcore_rs_next[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cmp_rs__DOT__pr1_ready_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cmp_rs__DOT__pr2_ready_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__cmp_rs__DOT__wr_idx = VL_RAND_RESET_I(2);
    vlSelf->__PVT__cmp_rs__DOT__rd_idx = VL_RAND_RESET_I(2);
    vlSelf->__PVT__cmp_rs__DOT__wr_idx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cmp_rs__DOT__rd_idx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cmp_rs__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->__PVT__cmp_rs__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->__PVT__cmp_rs__DOT__unnamedblk9__DOT__i = 0;
    vlSelf->__PVT__cmp__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cmp__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cmp__DOT__br_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cmp__DOT__br_target = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cmp__DOT__mispredict = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__jump_rs__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(382, vlSelf->__PVT__jump_rs__DOT__rob_rs[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__jump_rs__DOT__midcore_rs[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__jump_rs__DOT__pr1_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__jump_rs__DOT__pr2_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__jump_rs__DOT__valid_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(382, vlSelf->__PVT__jump_rs__DOT__rob_rs_next[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__jump_rs__DOT__midcore_rs_next[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__jump_rs__DOT__pr1_ready_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__jump_rs__DOT__pr2_ready_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__jump_rs__DOT__wr_idx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__jump_rs__DOT__rd_idx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__jump_rs__DOT__wr_idx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__jump_rs__DOT__rd_idx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__jump_rs__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->__PVT__jump_rs__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->__PVT__jump_rs__DOT__unnamedblk9__DOT__i = 0;
    vlSelf->__PVT__jump__DOT__br_target = VL_RAND_RESET_I(32);
    vlSelf->__PVT__jump__DOT__mispredict = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__mem__DOT__dmem_rmask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mem__DOT__lat_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem__DOT__lat_rmask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mem__DOT__lat_wmask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mem__DOT__lat_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem__DOT__lat_funct3 = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(382, vlSelf->__PVT__mem__DOT__lat_rob_data);
    vlSelf->__PVT__mem__DOT__lat_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem__DOT__flush_load = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem__DOT__rd_v = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__mul_rs__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(382, vlSelf->__PVT__mul_rs__DOT__rob_rs[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__mul_rs__DOT__midcore_rs[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__mul_rs__DOT__pr1_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__mul_rs__DOT__pr2_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__mul_rs__DOT__valid_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(382, vlSelf->__PVT__mul_rs__DOT__rob_rs_next[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__mul_rs__DOT__midcore_rs_next[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__mul_rs__DOT__pr1_ready_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__mul_rs__DOT__pr2_ready_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__mul_rs__DOT__wr_idx = VL_RAND_RESET_I(2);
    vlSelf->__PVT__mul_rs__DOT__rd_idx = VL_RAND_RESET_I(2);
    vlSelf->__PVT__mul_rs__DOT__wr_idx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_rs__DOT__rd_idx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_rs__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->__PVT__mul_rs__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->__PVT__mul_rs__DOT__unnamedblk9__DOT__i = 0;
    vlSelf->__PVT__mul_unit__DOT__result_ss = VL_RAND_RESET_Q(64);
    vlSelf->mul_unit__DOT____VdfgTmp_hd48f2dee__0 = 0;
    vlSelf->__VdfgTmp_h2f1d1f15__0 = 0;
    vlSelf->__VdfgTmp_hd1094721__0 = 0;
    vlSelf->__VdfgTmp_h53ffcfca__0 = 0;
    vlSelf->__VdfgTmp_hc98bfb62__0 = 0;
}
