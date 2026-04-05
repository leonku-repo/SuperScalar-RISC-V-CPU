// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb_cpu.h"

VL_ATTR_COLD void Vtop_tb_cpu___ctor_var_reset(Vtop_tb_cpu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_tb_cpu___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imem_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imem_resp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dmem_wmask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_resp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fetch_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alu_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cmp_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__jump_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_alu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_load = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_jump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_cmp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_mul = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(371, vlSelf->__PVT__alu_ROB_exec_o);
    VL_RAND_RESET_W(371, vlSelf->__PVT__cmp_ROB_exec_o);
    VL_RAND_RESET_W(371, vlSelf->__PVT__jump_ROB_exec_o);
    VL_RAND_RESET_W(371, vlSelf->__PVT__mem_ROB_exec_o);
    VL_RAND_RESET_W(371, vlSelf->__PVT__mul_ROB_exec_o);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__arat_o[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->__PVT__recover_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rob_full = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(371, vlSelf->__PVT__commit_rob_o);
    vlSelf->__PVT__commit_branch_actual_taken = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exec_mispredict = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exec_recover_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exec_mispredict_rob_idx = VL_RAND_RESET_I(4);
    vlSelf->__PVT__exec_checkpoint_id = VL_RAND_RESET_I(2);
    vlSelf->__PVT__cmp_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__jump_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bt_rebuild = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__checkpoint_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cp_checkpoint_id = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__recover_srat[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__cp_dispatch_srat[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->__PVT__commit_mispredict = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__cpu_midcore__commit_update = VL_RAND_RESET_I(1);
    vlSelf->__PVT__order = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__monitor_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__cpu_frontend__DOT__fetchq_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__valid_fetch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb_target = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__commit_pred_taken = VL_RAND_RESET_I(1);
    vlSelf->cpu_frontend__DOT__branch_predict__DOT____Vcellinp__tage_predictor__update_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_target[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_way = VL_RAND_RESET_I(2);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_way = VL_RAND_RESET_I(2);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_install_way = VL_RAND_RESET_I(2);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_hit_found = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__update_free_found = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk2__DOT__w = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk3__DOT__w = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk4__DOT__s = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__w = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_cand_ctr[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_ctr[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_ctr[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mispred_ctr[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_u_match_ctr[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__tag_match_ctr[__Vi0]);
    }
    VL_RAND_RESET_W(65, vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__T4_fail_alloc_ctr);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__bp_table[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_table[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_u[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_u[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_u[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_u[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_tag[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t4_tag[__Vi0] = VL_RAND_RESET_I(9);
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__phist = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lfsr = VL_RAND_RESET_I(8);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_bp_idx = VL_RAND_RESET_I(7);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t1_tag = VL_RAND_RESET_I(9);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t2_tag = VL_RAND_RESET_I(9);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t3_tag = VL_RAND_RESET_I(9);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_t4_tag = VL_RAND_RESET_I(9);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_2 = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_3 = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__conflict_4 = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag_u = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag_u = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag_u = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag_u = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found1_tag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found2_tag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found3_tag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__found4_tag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag_u = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag_u = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag_u = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag_u = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1_tag = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2_tag = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3_tag = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4_tag = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_tmp = VL_RAND_RESET_I(3);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__pred_idx_tmp = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_match_tmp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_match_tmp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_match_tmp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__lookup_prediction_tmp = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(169, vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(169, vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__data_o);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__wrPtrNext = VL_RAND_RESET_I(5);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__rdPtrNext = VL_RAND_RESET_I(5);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__fifo_valid_pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__update_T4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_T4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_T4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T1 = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T2 = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T3 = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__avl_idx_T4 = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T2 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T3 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__prev_idx_T4 = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_candidate[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__alloc_position = VL_RAND_RESET_I(3);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__decrement_all_u = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx1 = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx2 = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx3 = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__idx4 = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__count = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__target_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk9__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk10__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk11__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk12__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk13__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk14__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk15__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk16__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk17__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk18__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk19__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk20__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk21__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk22__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk23__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk24__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk25__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk26__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk27__DOT__i = 0;
    vlSelf->__PVT__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__unnamedblk28__DOT__i = 0;
    vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h9247e85f__0 = 0;
    vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h083e6cc3__0 = 0;
    vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_hc4999392__0 = 0;
    vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h7334ccba__0 = 0;
    vlSelf->cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT____VdfgTmp_h3beb847a__0 = 0;
    vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_frontend__DOT__fetch__DOT__stale_in_flight = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_full = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__wrPtr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__wrPtrNext = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__rdPtr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__rdPtrNext = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__branch_taken_fifo__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__wrPtr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__wrPtrNext = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__rdPtr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__rdPtrNext = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_fifo__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__wrPtr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__wrPtrNext = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__rdPtr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__rdPtrNext = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__pc_next_fifo__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__wrPtr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__wrPtrNext = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__rdPtr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__rdPtrNext = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cpu_frontend__DOT__fetch_queue__DOT__inst_fifo__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__PVT__cpu_execute__DOT__LDorST_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__READY_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__alu_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__load_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__mul_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr1_val = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr1_val = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_execute__DOT__lookup_jump_pr1_val = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr1_val = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_execute__DOT__lookup_alu_pr2_val = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_execute__DOT__lookup_lsq_pr2_val = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_execute__DOT__lookup_mul_pr2_val = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(371, vlSelf->__PVT__cpu_execute__DOT__alu_ROB_data_i);
    VL_RAND_RESET_W(371, vlSelf->__PVT__cpu_execute__DOT__cmp_ROB_data_i);
    VL_RAND_RESET_W(371, vlSelf->__PVT__cpu_execute__DOT__mem_ROB_data_i);
    VL_RAND_RESET_W(371, vlSelf->__PVT__cpu_execute__DOT__jump_ROB_data_i);
    VL_RAND_RESET_W(371, vlSelf->__PVT__cpu_execute__DOT__mul_ROB_data_i);
    vlSelf->__PVT__cpu_execute__DOT__alu_MIDCORE_data_i = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__cpu_execute__DOT__cmp_MIDCORE_data_i = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__cpu_execute__DOT__mem_MIDCORE_data_i = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__cpu_execute__DOT__jump_MIDCORE_data_i = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__cpu_execute__DOT__mul_MIDCORE_data_i = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__cpu_execute__DOT__alu_empty_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__cmp_empty_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__mem_empty_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__jump_empty_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__mul_empty_i = VL_RAND_RESET_I(1);
    vlSelf->cpu_execute__DOT____Vcellinp__PRF__lookup_alu_pr2_valid = VL_RAND_RESET_I(1);
    vlSelf->cpu_execute__DOT____Vcellinp__PRF__lookup_alu_pr1_valid = VL_RAND_RESET_I(1);
    vlSelf->cpu_execute__DOT____Vcellinp__alu_rs__wr_en = VL_RAND_RESET_I(1);
    vlSelf->cpu_execute__DOT____Vcellinp__cmp_rs__wr_en = VL_RAND_RESET_I(1);
    vlSelf->cpu_execute__DOT____Vcellinp__jump_rs__wr_en = VL_RAND_RESET_I(1);
    vlSelf->cpu_execute__DOT____Vcellinp__lsq__rd_en = VL_RAND_RESET_I(1);
    vlSelf->cpu_execute__DOT____Vcellinp__lsq__wr_en = VL_RAND_RESET_I(1);
    vlSelf->cpu_execute__DOT____Vcellinp__mul_rs__wr_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__prf_next[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__cpu_execute__DOT__PRF__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(371, vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rob_rs[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__midcore_rs[__Vi0] = VL_RAND_RESET_Q(58);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__pr1_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__pr2_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__valid_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(371, vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rob_rs_next[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__midcore_rs_next[__Vi0] = VL_RAND_RESET_Q(58);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__pr1_ready_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__pr2_ready_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__wr_idx = VL_RAND_RESET_I(2);
    vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx = VL_RAND_RESET_I(2);
    vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__wr_idx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__rd_idx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->__PVT__cpu_execute__DOT__alu_rs__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->__PVT__cpu_execute__DOT__alu__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_execute__DOT__alu__DOT__b = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(371, vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rob_rs[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__midcore_rs[__Vi0] = VL_RAND_RESET_Q(58);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__pr1_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__pr2_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__valid_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(371, vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rob_rs_next[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__midcore_rs_next[__Vi0] = VL_RAND_RESET_Q(58);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__pr1_ready_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__pr2_ready_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__wr_idx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__wr_idx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__rd_idx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->__PVT__cpu_execute__DOT__cmp_rs__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__br_target = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_execute__DOT__cmp__DOT__mispredict = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(371, vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rob_rs[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__midcore_rs[__Vi0] = VL_RAND_RESET_Q(58);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__pr1_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__pr2_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__valid_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(371, vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rob_rs_next[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__midcore_rs_next[__Vi0] = VL_RAND_RESET_Q(58);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__pr1_ready_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__pr2_ready_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__wr_idx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__wr_idx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__rd_idx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->__PVT__cpu_execute__DOT__jump_rs__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->__PVT__cpu_execute__DOT__jump__DOT__br_target = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_execute__DOT__jump__DOT__mispredict = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__LDorST[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(371, vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rob_rs[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__midcore_rs[__Vi0] = VL_RAND_RESET_Q(58);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__pr1_ready_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__pr2_ready_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__wrPtrNext = VL_RAND_RESET_I(5);
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__rdPtrNext = VL_RAND_RESET_I(5);
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__committed = VL_RAND_RESET_I(16);
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_occupied = VL_RAND_RESET_I(16);
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_old_enough = VL_RAND_RESET_I(16);
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_survivor = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_entry_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_mispredict_age = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__exec_new_wrPtr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__cpu_execute__DOT__lsq__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->__PVT__cpu_execute__DOT__mem__DOT__dmem_rmask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cpu_execute__DOT__mem__DOT__store_match = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__mem__DOT__rd_v = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_execute__DOT__mem__DOT__store_committed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__mem__DOT__prf_addr = VL_RAND_RESET_I(32);
    vlSelf->cpu_execute__DOT__mem__DOT____VdfgTmp_h7b9661f3__0 = 0;
    vlSelf->cpu_execute__DOT__mem__DOT____VdfgTmp_he05e7ede__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(371, vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs[__Vi0] = VL_RAND_RESET_Q(58);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__valid_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(371, vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rob_rs_next[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__midcore_rs_next[__Vi0] = VL_RAND_RESET_Q(58);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__pr1_ready_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__pr2_ready_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__wr_idx = VL_RAND_RESET_I(2);
    vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx = VL_RAND_RESET_I(2);
    vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__wr_idx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__rd_idx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->__PVT__cpu_execute__DOT__mul_rs__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->__PVT__cpu_execute__DOT__mul_unit__DOT__result_ss = VL_RAND_RESET_Q(64);
    vlSelf->cpu_execute__DOT__mul_unit__DOT____VdfgTmp_hd48f2dee__0 = 0;
    vlSelf->cpu_commit__DOT____Vcellinp__rob__wr_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(371, vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(371, vlSelf->__PVT__cpu_commit__DOT__rob__DOT__mem_next[__Vi0]);
    }
    vlSelf->__PVT__cpu_commit__DOT__rob__DOT__wrPtr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__cpu_commit__DOT__rob__DOT__wrPtrNext = VL_RAND_RESET_I(5);
    vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__cpu_commit__DOT__rob__DOT__rdPtrNext = VL_RAND_RESET_I(5);
    vlSelf->__PVT__cpu_commit__DOT__rob__DOT__wb_update = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_commit__DOT__rob__DOT__f1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_commit__DOT__rob__DOT__f2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_commit__DOT__rob__DOT__f3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_commit__DOT__rob__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->__PVT__cpu_commit__DOT__rob__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->__PVT__cpu_commit__DOT__rob__DOT__unnamedblk4__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__cpu_commit__DOT__arat__DOT__arat[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->__PVT__cpu_commit__DOT__arat__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__PVT__cpu_commit__DOT__branch_recovery__DOT__cmp_mp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_commit__DOT__branch_recovery__DOT__jump_mp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_commit__DOT__branch_recovery__DOT__pick_cmp = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__checkpoint__DOT__cp_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__checkpoint__DOT__cp_rob_idx[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->__PVT__checkpoint__DOT__cp_srat_snap[__Vi0][__Vi1] = VL_RAND_RESET_I(6);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__checkpoint__DOT__cp_alloc_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__checkpoint__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->__PVT__checkpoint__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0;
    vlSelf->__PVT__checkpoint__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->__PVT__checkpoint__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->__PVT__checkpoint__DOT__unnamedblk7__DOT__j = 0;
    VL_ZERO_RESET_W(371, vlSelf->__VdfgTmp_h4d6ddaf4__0);
    VL_ZERO_RESET_W(371, vlSelf->__VdfgTmp_h4b518085__0);
    VL_ZERO_RESET_W(371, vlSelf->__VdfgTmp_h21fa4430__0);
    VL_ZERO_RESET_W(371, vlSelf->__VdfgTmp_h9e6fb4d7__0);
    vlSelf->__VdfgTmp_hfd0da316__0 = 0;
    vlSelf->__VdfgTmp_he47ebcff__0 = 0;
    vlSelf->__VdfgTmp_h730d8d3f__0 = 0;
    vlSelf->__VdfgTmp_h83d90f8b__0 = 0;
    vlSelf->__Vfunc_cpu_frontend__DOT__branch_predict__DOT__btb__DOT__plru_victim__0__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_cpu_frontend__DOT__branch_predict__DOT__btb__DOT__plru_victim__0__p = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__order = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru__v0 = 0;
    vlSelf->__Vdlyvdim0__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru__v16 = 0;
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru__v16 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_plru__v16 = 0;
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid__v0 = 0;
    vlSelf->__Vdlyvdim0__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid__v64 = 0;
    vlSelf->__Vdlyvdim1__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid__v64 = 0;
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_valid__v64 = 0;
    vlSelf->__Vdlyvdim0__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_target__v0 = 0;
    vlSelf->__Vdlyvdim1__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_target__v0 = 0;
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_target__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_target__v0 = 0;
    vlSelf->__Vdlyvdim0__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag__v0 = 0;
    vlSelf->__Vdlyvdim1__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag__v0 = 0;
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__btb__DOT__btb_tag__v0 = 0;
    vlSelf->__Vdly__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__ghist = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v6 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v13 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v15 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v16 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v17 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v18 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v19 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v20 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v21 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v22 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v23 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v24 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v25 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v26 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v27 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v28 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v29 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v30 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v31 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v32 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v33 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v34 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v35 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v36 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v37 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v38 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v39 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v40 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v41 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v42 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v43 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v44 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v45 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v46 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v47 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v48 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v49 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v50 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v51 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v52 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v53 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v54 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v55 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v56 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v57 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v58 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v59 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v60 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v61 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v62 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v63 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v64 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v65 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v66 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v67 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v68 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v69 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v70 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v71 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v72 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v73 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v74 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v75 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v76 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v77 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v78 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v79 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v80 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v81 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v82 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v83 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v84 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v85 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v86 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v87 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v88 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v89 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v90 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v91 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v92 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v93 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v94 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v95 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v96 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v97 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v98 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v99 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v100 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v101 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v102 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v103 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v104 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v105 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v106 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v107 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v108 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v109 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v110 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v111 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v112 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v113 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v114 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v115 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v116 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v117 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v118 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v119 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v120 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v121 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v122 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v123 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v124 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v125 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v126 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v127 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v128 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v129 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v130 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v131 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v132 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v133 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v134 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v135 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v136 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v137 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v138 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v139 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v140 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v141 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v142 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v143 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v144 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v145 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v146 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v147 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v148 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v149 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v150 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v151 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v152 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v153 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v154 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v155 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v156 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v157 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v158 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v159 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v160 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v161 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v162 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v163 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v164 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v165 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v166 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v167 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v168 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v169 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v170 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v171 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v172 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v173 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v174 = 0;
    vlSelf->__Vdlyvlsb__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v175 = 0;
    vlSelf->__Vdlyvdim0__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v176 = 0;
    VL_RAND_RESET_W(169, vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v176);
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__mem__v176 = 0;
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v0 = 0;
    vlSelf->__Vdlyvdim0__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v64 = 0;
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v64 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v64 = 0;
    vlSelf->__Vdlyvdim0__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v65 = 0;
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v65 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v65 = 0;
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v66 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v66 = 0;
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v67 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v68 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v69 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v70 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v71 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v72 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v73 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v74 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v75 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v76 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v77 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v78 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v79 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v80 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v81 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v82 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v83 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v84 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v85 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v86 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v87 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v88 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v89 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v90 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v91 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v92 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v93 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v94 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v95 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v96 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v97 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v98 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v99 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v100 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v101 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v102 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v103 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v104 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v105 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v106 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v107 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v108 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v109 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v110 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v111 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v112 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v113 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v114 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v115 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v116 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v117 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v118 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v119 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v120 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v121 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v122 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v123 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v124 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v125 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v126 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v127 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v128 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_table__v129 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v0 = 0;
    vlSelf->__Vdlyvdim0__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v64 = 0;
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v64 = 0;
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v64 = 0;
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v65 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v65 = 0;
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v66 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v67 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v68 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v69 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v70 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v71 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v72 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v73 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v74 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v75 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v76 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v77 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v78 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v79 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v80 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v81 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v82 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v83 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v84 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v85 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v86 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v87 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v88 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v89 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v90 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v91 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v92 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v93 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v94 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v95 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v96 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v97 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v98 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v99 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v100 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v101 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v102 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v103 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v104 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v105 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v106 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v107 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v108 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v109 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v110 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v111 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v112 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v113 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v114 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v115 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v116 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v117 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v118 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v119 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v120 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v121 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v122 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v123 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v124 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v125 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v126 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v127 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t1_tag__v128 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v0 = 0;
    vlSelf->__Vdlyvdim0__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v64 = 0;
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v64 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v64 = 0;
    vlSelf->__Vdlyvdim0__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v65 = 0;
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v65 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v65 = 0;
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v66 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v66 = 0;
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v67 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v68 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v69 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v70 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v71 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v72 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v73 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v74 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v75 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v76 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v77 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v78 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v79 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v80 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v81 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v82 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v83 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v84 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v85 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v86 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v87 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v88 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v89 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v90 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v91 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v92 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v93 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v94 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v95 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v96 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v97 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v98 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v99 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v100 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v101 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v102 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v103 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v104 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v105 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v106 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v107 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v108 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v109 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v110 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v111 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v112 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v113 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v114 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v115 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v116 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v117 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v118 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v119 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v120 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v121 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v122 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v123 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v124 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v125 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v126 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v127 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v128 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_table__v129 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v0 = 0;
    vlSelf->__Vdlyvdim0__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v64 = 0;
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v64 = 0;
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v64 = 0;
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v65 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v65 = 0;
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v66 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v67 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v68 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v69 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v70 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v71 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v72 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v73 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v74 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v75 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v76 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v77 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v78 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v79 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v80 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v81 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v82 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v83 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v84 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v85 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v86 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v87 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v88 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v89 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v90 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v91 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v92 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v93 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v94 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v95 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v96 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v97 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v98 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v99 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v100 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v101 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v102 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v103 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v104 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v105 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v106 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v107 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v108 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v109 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v110 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v111 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v112 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v113 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v114 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v115 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v116 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v117 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v118 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v119 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v120 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v121 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v122 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v123 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v124 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v125 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v126 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v127 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t2_tag__v128 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v0 = 0;
    vlSelf->__Vdlyvdim0__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v64 = 0;
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v64 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v64 = 0;
    vlSelf->__Vdlyvdim0__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v65 = 0;
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v65 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v65 = 0;
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v66 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v66 = 0;
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v67 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v68 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v69 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v70 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v71 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v72 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v73 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v74 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v75 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v76 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v77 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v78 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v79 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v80 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v81 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v82 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v83 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v84 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v85 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v86 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v87 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v88 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v89 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v90 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v91 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v92 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v93 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v94 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v95 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v96 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v97 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v98 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v99 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v100 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v101 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v102 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v103 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v104 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v105 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v106 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v107 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v108 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v109 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v110 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v111 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v112 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v113 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v114 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v115 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v116 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v117 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v118 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v119 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v120 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v121 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v122 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v123 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v124 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v125 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v126 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v127 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v128 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu_frontend__DOT__branch_predict__DOT__tage_predictor__DOT__t3_table__v129 = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__cpu_frontend__DOT__fetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__cpu_execute__DOT__PRF__DOT__prf__v0 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v64 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__cpu_execute__DOT__PRF__DOT__prf__v64 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v65 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v66 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v67 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v68 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v69 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v70 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v71 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v72 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v73 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v74 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v75 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v76 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v77 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v78 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v79 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v80 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v81 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v82 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v83 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v84 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v85 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v86 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v87 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v88 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v89 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v90 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v91 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v92 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v93 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v94 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v95 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v96 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v97 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v98 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v99 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v100 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v101 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v102 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v103 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v104 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v105 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v106 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v107 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v108 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v109 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v110 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v111 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v112 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v113 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v114 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v115 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v116 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v117 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v118 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v119 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v120 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v121 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v122 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v123 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v124 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v125 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v126 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__cpu_execute__DOT__PRF__DOT__prf__v127 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__cpu_execute__DOT__alu_rs__DOT__valid__v0 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__valid__v4 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__alu_rs__DOT__valid__v4 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__valid__v5 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__valid__v6 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__valid__v7 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__alu_rs__DOT__valid__v8 = 0;
    vlSelf->__Vdlyvset__cpu_execute__DOT__alu_rs__DOT__valid__v9 = 0;
    vlSelf->__Vdlyvset__cpu_execute__DOT__alu_rs__DOT__valid__v10 = 0;
    vlSelf->__Vdlyvset__cpu_execute__DOT__alu_rs__DOT__valid__v11 = 0;
    vlSelf->__Vdlyvset__cpu_execute__DOT__alu_rs__DOT__rob_rs__v0 = 0;
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__rob_rs__v4);
    vlSelf->__Vdlyvset__cpu_execute__DOT__alu_rs__DOT__rob_rs__v4 = 0;
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__rob_rs__v5);
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__rob_rs__v6);
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__rob_rs__v7);
    vlSelf->__Vdlyvset__cpu_execute__DOT__alu_rs__DOT__midcore_rs__v0 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__midcore_rs__v4 = VL_RAND_RESET_Q(58);
    vlSelf->__Vdlyvset__cpu_execute__DOT__alu_rs__DOT__midcore_rs__v4 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__midcore_rs__v5 = VL_RAND_RESET_Q(58);
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__midcore_rs__v6 = VL_RAND_RESET_Q(58);
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__midcore_rs__v7 = VL_RAND_RESET_Q(58);
    vlSelf->__Vdlyvset__cpu_execute__DOT__alu_rs__DOT__pr1_ready__v0 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__pr1_ready__v4 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__alu_rs__DOT__pr1_ready__v4 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__pr1_ready__v5 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__pr1_ready__v6 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__pr1_ready__v7 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__pr1_ready__v8 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__alu_rs__DOT__pr1_ready__v8 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__pr1_ready__v9 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__pr1_ready__v10 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__pr1_ready__v11 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__alu_rs__DOT__pr2_ready__v0 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__pr2_ready__v4 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__alu_rs__DOT__pr2_ready__v4 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__pr2_ready__v5 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__pr2_ready__v6 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__pr2_ready__v7 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__pr2_ready__v8 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__alu_rs__DOT__pr2_ready__v8 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__pr2_ready__v9 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__pr2_ready__v10 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__alu_rs__DOT__pr2_ready__v11 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__cmp_rs__DOT__valid__v0 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__cmp_rs__DOT__valid__v2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__cmp_rs__DOT__valid__v2 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__cmp_rs__DOT__valid__v3 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__cmp_rs__DOT__valid__v4 = 0;
    vlSelf->__Vdlyvset__cpu_execute__DOT__cmp_rs__DOT__valid__v5 = 0;
    vlSelf->__Vdlyvset__cpu_execute__DOT__cmp_rs__DOT__rob_rs__v0 = 0;
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_execute__DOT__cmp_rs__DOT__rob_rs__v2);
    vlSelf->__Vdlyvset__cpu_execute__DOT__cmp_rs__DOT__rob_rs__v2 = 0;
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_execute__DOT__cmp_rs__DOT__rob_rs__v3);
    vlSelf->__Vdlyvset__cpu_execute__DOT__cmp_rs__DOT__midcore_rs__v0 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__cmp_rs__DOT__midcore_rs__v2 = VL_RAND_RESET_Q(58);
    vlSelf->__Vdlyvset__cpu_execute__DOT__cmp_rs__DOT__midcore_rs__v2 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__cmp_rs__DOT__midcore_rs__v3 = VL_RAND_RESET_Q(58);
    vlSelf->__Vdlyvset__cpu_execute__DOT__cmp_rs__DOT__pr1_ready__v0 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__cmp_rs__DOT__pr1_ready__v2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__cmp_rs__DOT__pr1_ready__v2 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__cmp_rs__DOT__pr1_ready__v3 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__cmp_rs__DOT__pr1_ready__v4 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__cmp_rs__DOT__pr1_ready__v4 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__cmp_rs__DOT__pr1_ready__v5 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__cmp_rs__DOT__pr2_ready__v0 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__cmp_rs__DOT__pr2_ready__v2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__cmp_rs__DOT__pr2_ready__v2 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__cmp_rs__DOT__pr2_ready__v3 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__cmp_rs__DOT__pr2_ready__v4 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__cmp_rs__DOT__pr2_ready__v4 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__cmp_rs__DOT__pr2_ready__v5 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__jump_rs__DOT__valid__v0 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__jump_rs__DOT__valid__v2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__jump_rs__DOT__valid__v2 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__jump_rs__DOT__valid__v3 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__jump_rs__DOT__valid__v4 = 0;
    vlSelf->__Vdlyvset__cpu_execute__DOT__jump_rs__DOT__valid__v5 = 0;
    vlSelf->__Vdlyvset__cpu_execute__DOT__jump_rs__DOT__rob_rs__v0 = 0;
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_execute__DOT__jump_rs__DOT__rob_rs__v2);
    vlSelf->__Vdlyvset__cpu_execute__DOT__jump_rs__DOT__rob_rs__v2 = 0;
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_execute__DOT__jump_rs__DOT__rob_rs__v3);
    vlSelf->__Vdlyvset__cpu_execute__DOT__jump_rs__DOT__midcore_rs__v0 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__jump_rs__DOT__midcore_rs__v2 = VL_RAND_RESET_Q(58);
    vlSelf->__Vdlyvset__cpu_execute__DOT__jump_rs__DOT__midcore_rs__v2 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__jump_rs__DOT__midcore_rs__v3 = VL_RAND_RESET_Q(58);
    vlSelf->__Vdlyvset__cpu_execute__DOT__jump_rs__DOT__pr1_ready__v0 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__jump_rs__DOT__pr1_ready__v2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__jump_rs__DOT__pr1_ready__v2 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__jump_rs__DOT__pr1_ready__v3 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__jump_rs__DOT__pr1_ready__v4 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__jump_rs__DOT__pr1_ready__v4 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__jump_rs__DOT__pr1_ready__v5 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__jump_rs__DOT__pr2_ready__v0 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__jump_rs__DOT__pr2_ready__v2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__jump_rs__DOT__pr2_ready__v2 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__jump_rs__DOT__pr2_ready__v3 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__jump_rs__DOT__pr2_ready__v4 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__jump_rs__DOT__pr2_ready__v4 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__jump_rs__DOT__pr2_ready__v5 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__lsq__DOT__LDorST__v0 = 0;
    vlSelf->__Vdlyvdim0__cpu_execute__DOT__lsq__DOT__LDorST__v16 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__LDorST__v16 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__lsq__DOT__LDorST__v16 = 0;
    vlSelf->__Vdlyvdim0__cpu_execute__DOT__lsq__DOT__LDorST__v17 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__LDorST__v17 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__lsq__DOT__LDorST__v17 = 0;
    vlSelf->__Vdlyvset__cpu_execute__DOT__lsq__DOT__rob_rs__v0 = 0;
    vlSelf->__Vdlyvdim0__cpu_execute__DOT__lsq__DOT__rob_rs__v16 = 0;
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__rob_rs__v16);
    vlSelf->__Vdlyvset__cpu_execute__DOT__lsq__DOT__rob_rs__v16 = 0;
    vlSelf->__Vdlyvdim0__cpu_execute__DOT__lsq__DOT__rob_rs__v17 = 0;
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__rob_rs__v17);
    vlSelf->__Vdlyvset__cpu_execute__DOT__lsq__DOT__rob_rs__v17 = 0;
    vlSelf->__Vdlyvset__cpu_execute__DOT__lsq__DOT__midcore_rs__v0 = 0;
    vlSelf->__Vdlyvdim0__cpu_execute__DOT__lsq__DOT__midcore_rs__v16 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__midcore_rs__v16 = VL_RAND_RESET_Q(58);
    vlSelf->__Vdlyvset__cpu_execute__DOT__lsq__DOT__midcore_rs__v16 = 0;
    vlSelf->__Vdlyvdim0__cpu_execute__DOT__lsq__DOT__midcore_rs__v17 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__midcore_rs__v17 = VL_RAND_RESET_Q(58);
    vlSelf->__Vdlyvset__cpu_execute__DOT__lsq__DOT__midcore_rs__v17 = 0;
    vlSelf->__Vdlyvset__cpu_execute__DOT__lsq__DOT__pr1_ready__v0 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v16 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__lsq__DOT__pr1_ready__v16 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v17 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v18 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v19 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v20 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v21 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v22 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v23 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v24 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v25 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v26 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v27 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v28 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v29 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v30 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v31 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v32 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__lsq__DOT__pr1_ready__v32 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v33 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v34 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v35 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v36 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v37 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v38 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v39 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v40 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v41 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v42 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v43 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v44 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v45 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v46 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v47 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__cpu_execute__DOT__lsq__DOT__pr1_ready__v48 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr1_ready__v48 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__lsq__DOT__pr1_ready__v48 = 0;
    vlSelf->__Vdlyvset__cpu_execute__DOT__lsq__DOT__pr2_ready__v0 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v16 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__lsq__DOT__pr2_ready__v16 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v17 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v18 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v19 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v20 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v21 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v22 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v23 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v24 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v25 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v26 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v27 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v28 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v29 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v30 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v31 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v32 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__lsq__DOT__pr2_ready__v32 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v33 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v34 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v35 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v36 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v37 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v38 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v39 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v40 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v41 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v42 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v43 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v44 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v45 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v46 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v47 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__cpu_execute__DOT__lsq__DOT__pr2_ready__v48 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__lsq__DOT__pr2_ready__v48 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__lsq__DOT__pr2_ready__v48 = 0;
    vlSelf->__Vdlyvset__cpu_execute__DOT__mul_rs__DOT__valid__v0 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__valid__v4 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__mul_rs__DOT__valid__v4 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__valid__v5 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__valid__v6 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__valid__v7 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__mul_rs__DOT__valid__v8 = 0;
    vlSelf->__Vdlyvset__cpu_execute__DOT__mul_rs__DOT__valid__v9 = 0;
    vlSelf->__Vdlyvset__cpu_execute__DOT__mul_rs__DOT__valid__v10 = 0;
    vlSelf->__Vdlyvset__cpu_execute__DOT__mul_rs__DOT__valid__v11 = 0;
    vlSelf->__Vdlyvset__cpu_execute__DOT__mul_rs__DOT__rob_rs__v0 = 0;
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__rob_rs__v4);
    vlSelf->__Vdlyvset__cpu_execute__DOT__mul_rs__DOT__rob_rs__v4 = 0;
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__rob_rs__v5);
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__rob_rs__v6);
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__rob_rs__v7);
    vlSelf->__Vdlyvset__cpu_execute__DOT__mul_rs__DOT__midcore_rs__v0 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__midcore_rs__v4 = VL_RAND_RESET_Q(58);
    vlSelf->__Vdlyvset__cpu_execute__DOT__mul_rs__DOT__midcore_rs__v4 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__midcore_rs__v5 = VL_RAND_RESET_Q(58);
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__midcore_rs__v6 = VL_RAND_RESET_Q(58);
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__midcore_rs__v7 = VL_RAND_RESET_Q(58);
    vlSelf->__Vdlyvset__cpu_execute__DOT__mul_rs__DOT__pr1_ready__v0 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__pr1_ready__v4 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__mul_rs__DOT__pr1_ready__v4 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__pr1_ready__v5 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__pr1_ready__v6 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__pr1_ready__v7 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__pr1_ready__v8 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__mul_rs__DOT__pr1_ready__v8 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__pr1_ready__v9 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__pr1_ready__v10 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__pr1_ready__v11 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__mul_rs__DOT__pr2_ready__v0 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__pr2_ready__v4 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__mul_rs__DOT__pr2_ready__v4 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__pr2_ready__v5 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__pr2_ready__v6 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__pr2_ready__v7 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__pr2_ready__v8 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_execute__DOT__mul_rs__DOT__pr2_ready__v8 = 0;
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__pr2_ready__v9 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__pr2_ready__v10 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu_execute__DOT__mul_rs__DOT__pr2_ready__v11 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_commit__DOT__rob__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_commit__DOT__rob__DOT__mem__v16);
    vlSelf->__Vdlyvset__cpu_commit__DOT__rob__DOT__mem__v16 = 0;
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_commit__DOT__rob__DOT__mem__v17);
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_commit__DOT__rob__DOT__mem__v18);
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_commit__DOT__rob__DOT__mem__v19);
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_commit__DOT__rob__DOT__mem__v20);
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_commit__DOT__rob__DOT__mem__v21);
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_commit__DOT__rob__DOT__mem__v22);
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_commit__DOT__rob__DOT__mem__v23);
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_commit__DOT__rob__DOT__mem__v24);
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_commit__DOT__rob__DOT__mem__v25);
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_commit__DOT__rob__DOT__mem__v26);
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_commit__DOT__rob__DOT__mem__v27);
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_commit__DOT__rob__DOT__mem__v28);
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_commit__DOT__rob__DOT__mem__v29);
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_commit__DOT__rob__DOT__mem__v30);
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_commit__DOT__rob__DOT__mem__v31);
    vlSelf->__Vdlyvdim0__cpu_commit__DOT__rob__DOT__mem__v32 = 0;
    VL_RAND_RESET_W(371, vlSelf->__Vdlyvval__cpu_commit__DOT__rob__DOT__mem__v32);
    vlSelf->__Vdlyvset__cpu_commit__DOT__rob__DOT__mem__v32 = 0;
    vlSelf->__Vdlyvset__cpu_commit__DOT__rob__DOT__mem__v33 = 0;
    vlSelf->__Vdlyvset__cpu_commit__DOT__rob__DOT__mem__v34 = 0;
    vlSelf->__Vdlyvset__cpu_commit__DOT__rob__DOT__mem__v35 = 0;
    vlSelf->__Vdlyvset__cpu_commit__DOT__rob__DOT__mem__v36 = 0;
    vlSelf->__Vdlyvset__cpu_commit__DOT__rob__DOT__mem__v37 = 0;
    vlSelf->__Vdlyvset__cpu_commit__DOT__rob__DOT__mem__v38 = 0;
    vlSelf->__Vdlyvset__cpu_commit__DOT__rob__DOT__mem__v39 = 0;
    vlSelf->__Vdlyvset__cpu_commit__DOT__rob__DOT__mem__v40 = 0;
    vlSelf->__Vdlyvset__cpu_commit__DOT__rob__DOT__mem__v41 = 0;
    vlSelf->__Vdlyvset__cpu_commit__DOT__rob__DOT__mem__v42 = 0;
    vlSelf->__Vdlyvset__cpu_commit__DOT__rob__DOT__mem__v43 = 0;
    vlSelf->__Vdlyvset__cpu_commit__DOT__rob__DOT__mem__v44 = 0;
    vlSelf->__Vdlyvset__cpu_commit__DOT__rob__DOT__mem__v45 = 0;
    vlSelf->__Vdlyvset__cpu_commit__DOT__rob__DOT__mem__v46 = 0;
    vlSelf->__Vdlyvset__cpu_commit__DOT__rob__DOT__mem__v47 = 0;
    vlSelf->__Vdlyvset__cpu_commit__DOT__rob__DOT__mem__v48 = 0;
    vlSelf->__Vdlyvset__cpu_commit__DOT__arat__DOT__arat__v0 = 0;
    vlSelf->__Vdlyvdim0__cpu_commit__DOT__arat__DOT__arat__v32 = 0;
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v32 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvset__cpu_commit__DOT__arat__DOT__arat__v32 = 0;
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v33 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvset__cpu_commit__DOT__arat__DOT__arat__v33 = 0;
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v34 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v35 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v36 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v37 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v38 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v39 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v40 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v41 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v42 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v43 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v44 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v45 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v46 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v47 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v48 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v49 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v50 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v51 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v52 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v53 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v54 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v55 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v56 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v57 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v58 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v59 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v60 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v61 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v62 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v63 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__cpu_commit__DOT__arat__DOT__arat__v64 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvset__checkpoint__DOT__cp_valid__v0 = 0;
    vlSelf->__Vdlyvlsb__checkpoint__DOT__cp_alloc_list__v4 = 0;
    vlSelf->__Vdlyvset__checkpoint__DOT__cp_alloc_list__v4 = 0;
    vlSelf->__Vdlyvlsb__checkpoint__DOT__cp_alloc_list__v5 = 0;
    vlSelf->__Vdlyvset__checkpoint__DOT__cp_alloc_list__v5 = 0;
    vlSelf->__Vdlyvlsb__checkpoint__DOT__cp_alloc_list__v6 = 0;
    vlSelf->__Vdlyvset__checkpoint__DOT__cp_alloc_list__v6 = 0;
    vlSelf->__Vdlyvlsb__checkpoint__DOT__cp_alloc_list__v7 = 0;
    vlSelf->__Vdlyvset__checkpoint__DOT__cp_alloc_list__v7 = 0;
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_valid__v4 = 0;
    vlSelf->__Vdlyvset__checkpoint__DOT__cp_valid__v4 = 0;
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_valid__v5 = 0;
    vlSelf->__Vdlyvset__checkpoint__DOT__cp_valid__v5 = 0;
    vlSelf->__Vdlyvset__checkpoint__DOT__cp_valid__v6 = 0;
    vlSelf->__Vdlyvset__checkpoint__DOT__cp_valid__v7 = 0;
    vlSelf->__Vdlyvset__checkpoint__DOT__cp_valid__v8 = 0;
    vlSelf->__Vdlyvset__checkpoint__DOT__cp_valid__v9 = 0;
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_valid__v10 = 0;
    vlSelf->__Vdlyvset__checkpoint__DOT__cp_valid__v10 = 0;
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_rob_idx__v4 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_rob_idx__v4 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_alloc_list__v8 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_alloc_list__v8 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v128 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v128 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v129 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v129 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v130 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v130 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v131 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v131 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v132 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v132 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v133 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v133 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v134 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v134 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v135 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v135 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v136 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v136 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v137 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v137 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v138 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v138 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v139 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v139 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v140 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v140 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v141 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v141 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v142 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v142 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v143 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v143 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v144 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v144 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v145 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v145 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v146 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v146 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v147 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v147 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v148 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v148 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v149 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v149 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v150 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v150 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v151 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v151 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v152 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v152 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v153 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v153 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v154 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v154 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v155 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v155 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v156 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v156 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v157 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v157 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v158 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v158 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__checkpoint__DOT__cp_srat_snap__v159 = 0;
    vlSelf->__Vdlyvval__checkpoint__DOT__cp_srat_snap__v159 = VL_RAND_RESET_I(6);
}
