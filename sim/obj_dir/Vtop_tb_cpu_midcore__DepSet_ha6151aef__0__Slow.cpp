// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb_cpu_midcore.h"

VL_ATTR_COLD void Vtop_tb_cpu_midcore___ctor_var_reset(Vtop_tb_cpu_midcore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_tb_cpu_midcore___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exec_mispredict = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exec_mispredict_rob_idx = VL_RAND_RESET_I(6);
    vlSelf->__PVT__rdPtr_i = VL_RAND_RESET_I(6);
    vlSelf->__PVT__spec_load_mispredict = VL_RAND_RESET_I(1);
    vlSelf->__PVT__spec_load_rob_idx_i = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__recover_srat_i[__Vi0] = VL_RAND_RESET_I(7);
    }
    VL_RAND_RESET_W(128, vlSelf->__PVT__recover_alloc_list_i);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__spec_load_recover_srat_i[__Vi0] = VL_RAND_RESET_I(7);
    }
    VL_RAND_RESET_W(128, vlSelf->__PVT__spec_load_recover_alloc_list_i);
    VL_RAND_RESET_W(128, vlSelf->__PVT__bt_rebuild_i);
    vlSelf->__PVT__checkpoint_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cp_checkpoint_id_i = VL_RAND_RESET_I(3);
    vlSelf->__PVT__lc_checkpoint_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lc_checkpoint_id_i = VL_RAND_RESET_I(6);
    vlSelf->__PVT__decode_request = VL_RAND_RESET_I(1);
    vlSelf->__PVT__empty_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_taken_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_next_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rob_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alu_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cmp_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__store_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__jump_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_full = VL_RAND_RESET_I(1);
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
    vlSelf->__PVT__commit_update = VL_RAND_RESET_I(1);
    vlSelf->__PVT__commit_update_old_p = VL_RAND_RESET_I(7);
    vlSelf->__PVT__allocate_rob_entry = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(382, vlSelf->__PVT__ROB_midcore_o);
    vlSelf->__PVT__MIDCORE_midcore_o = VL_RAND_RESET_Q(60);
    vlSelf->__PVT__cp_dispatch_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cp_dispatch_rob_idx = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__cp_dispatch_srat[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->__PVT__lc_dispatch_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lc_dispatch_rob_idx_o = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__lc_dispatch_srat_o[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->__PVT__cp_rename_update_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cp_rename_update_pr_o = VL_RAND_RESET_I(7);
    vlSelf->__PVT__stall = VL_RAND_RESET_I(1);
    vlSelf->stall_rob_full = VL_RAND_RESET_I(1);
    vlSelf->stall_alu_full = VL_RAND_RESET_I(1);
    vlSelf->stall_cmp_full = VL_RAND_RESET_I(1);
    vlSelf->stall_load_full = VL_RAND_RESET_I(1);
    vlSelf->stall_store_full = VL_RAND_RESET_I(1);
    vlSelf->stall_jump_full = VL_RAND_RESET_I(1);
    vlSelf->stall_mul_full = VL_RAND_RESET_I(1);
    vlSelf->stall_no_free_pr = VL_RAND_RESET_I(1);
    vlSelf->stall_checkpoint_full = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(382, vlSelf->__PVT__ROB_decode_o);
    VL_RAND_RESET_W(382, vlSelf->__PVT__ROB_rename1_o);
    VL_RAND_RESET_W(382, vlSelf->__PVT__ROB_rename2_o);
    VL_RAND_RESET_W(382, vlSelf->__PVT__ROB_rename1_reg);
    VL_RAND_RESET_W(382, vlSelf->__PVT__ROB_rename2_reg);
    vlSelf->__PVT__MIDCORE_decode_o = VL_RAND_RESET_Q(60);
    vlSelf->__PVT__MIDCORE_rename1_o = VL_RAND_RESET_Q(60);
    vlSelf->__PVT__MIDCORE_rename2_o = VL_RAND_RESET_Q(60);
    vlSelf->__PVT__MIDCORE_rename1_reg = VL_RAND_RESET_Q(60);
    vlSelf->__PVT__MIDCORE_rename2_reg = VL_RAND_RESET_Q(60);
    vlSelf->__PVT__MIDCORE_rename2_wb_updated = VL_RAND_RESET_Q(60);
    vlSelf->__PVT__srat_lookup_rs1 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__srat_o[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->__PVT__free_pr = VL_RAND_RESET_I(7);
    vlSelf->__PVT__free_pr_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rename_update_ar = VL_RAND_RESET_I(5);
    vlSelf->__PVT__is_br_or_jump = VL_RAND_RESET_I(1);
    vlSelf->stall_lc_checkpoint_full = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_hc8d9bbac__0 = 0;
    vlSelf->__VdfgTmp_h1b7601cf__0 = 0;
    vlSelf->__PVT__decode__DOT__i_imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode__DOT__rs1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode__DOT__rs2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode__DOT__imm_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode__DOT__dispatch_to = VL_RAND_RESET_I(3);
    vlSelf->__PVT__decode__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->decode__DOT____VdfgExtracted_hf4d07035__0 = VL_RAND_RESET_I(1);
    vlSelf->decode__DOT____VdfgTmp_h90d7ced5__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__srat__DOT__srat[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__srat__DOT__srat_next[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->__PVT__srat__DOT__unnamedblk1__DOT__i = 0;
    VL_RAND_RESET_W(128, vlSelf->__PVT__busy_table__DOT__bt);
    VL_RAND_RESET_W(128, vlSelf->__PVT__busy_table__DOT__bt_next);
    VL_RAND_RESET_W(128, vlSelf->__PVT__free_list__DOT__free_list);
    VL_RAND_RESET_W(128, vlSelf->__PVT__free_list__DOT__free_list_next);
    vlSelf->__PVT__rename2__DOT__pr1_busy_tmp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rename2__DOT__pr2_busy_tmp = VL_RAND_RESET_I(1);
}
