// performs BT lookup, currently combinational lookup
// performs freelist lookup, currently combinational lookup
// updates BT, freelist, SRAT
// dispatch to Reservation station or load queue or store queue or Jump queue
// allocate new ROB entry
module rename2
import rv32i_types::*;
(
    input   rob_t                   ROB_rename1_i,
    input   midcore_t               MIDCORE_rename1_i,
    // lookup BT
    output  logic   [PRF_IDX-1:0]   pr1_o,
    output  logic   [PRF_IDX-1:0]   pr2_o,
    input   logic                   pr1_busy,
    input   logic                   pr2_busy,
    // lookup freelist
    input   logic   [PRF_IDX-1:0]   free_pr,
    input   logic                   free_pr_valid,
    // writeback
    input   logic                   wb_alu,
    input   logic                   wb_load,
    input   logic                   wb_jump,
    input   logic                   wb_cmp,
    input   logic                   wb_mul,
    input   logic                   wb_fwd,
    input   logic   [PRF_IDX-1:0]   wb_alu_pr,
    input   logic   [PRF_IDX-1:0]   wb_load_pr,
    input   logic   [PRF_IDX-1:0]   wb_jump_pr,
    input   logic   [PRF_IDX-1:0]   wb_cmp_pr,
    input   logic   [PRF_IDX-1:0]   wb_mul_pr,
    input   logic   [PRF_IDX-1:0]   wb_fwd_pr,
    // update BT, freelist, SRAT shared signals
    output  logic                   rename_update,
    output  logic   [PRF_IDX-1:0]   rename_update_pr,
    output  logic   [4:0]           rename_update_ar,
    // dispatch
    output  midcore_t               MIDCORE_rename2_o,
    // new ROB entry
    input   logic   [ROB_IDX-1:0]   allocate_rob_entry,
    output  rob_t                   ROB_rename2_o
);
    logic   pr1_busy_tmp;
    logic   pr2_busy_tmp;

    always_comb begin 
        // default consider busy table
        pr1_busy_tmp = MIDCORE_rename1_i.pr1_valid ? pr1_busy : 1'b0;
        // then consider write back
        if(MIDCORE_rename1_i.pr1_valid && ((wb_alu  && (MIDCORE_rename1_i.pr1 == wb_alu_pr ))
                                            || (wb_load && (MIDCORE_rename1_i.pr1 == wb_load_pr))
                                            || (wb_jump && (MIDCORE_rename1_i.pr1 == wb_jump_pr))
                                            || (wb_cmp  && (MIDCORE_rename1_i.pr1 == wb_cmp_pr ))
                                            || (wb_mul  && (MIDCORE_rename1_i.pr1 == wb_mul_pr ))
                                            || (wb_fwd  && (MIDCORE_rename1_i.pr1 == wb_fwd_pr ))
                                            )
        ) begin
            pr1_busy_tmp = 1'b0;
        end
    end
    always_comb begin
        // default consider busy table
        pr2_busy_tmp = MIDCORE_rename1_i.pr2_valid ? pr2_busy : 1'b0;
        // then consider write back
        if(MIDCORE_rename1_i.pr2_valid && ((wb_alu  && (MIDCORE_rename1_i.pr2 == wb_alu_pr ))
                                            || (wb_load && (MIDCORE_rename1_i.pr2 == wb_load_pr))
                                            || (wb_jump && (MIDCORE_rename1_i.pr2 == wb_jump_pr))
                                            || (wb_cmp  && (MIDCORE_rename1_i.pr2 == wb_cmp_pr ))
                                            || (wb_mul  && (MIDCORE_rename1_i.pr2 == wb_mul_pr ))
                                            || (wb_fwd  && (MIDCORE_rename1_i.pr2 == wb_fwd_pr ))
                                            )
        ) begin
            pr2_busy_tmp = 1'b0;
        end
    end

    assign pr1_o = MIDCORE_rename1_i.pr1_valid ? MIDCORE_rename1_i.pr1 : '0;
    assign pr2_o = MIDCORE_rename1_i.pr2_valid ? MIDCORE_rename1_i.pr2 : '0;
    assign rename_update = ROB_rename1_i.valid && ROB_rename1_i.rd_valid;
    assign rename_update_pr = free_pr_valid ? free_pr : '0;
    assign rename_update_ar = ROB_rename1_i.rd_valid ? ROB_rename1_i.rd_arch : '0;


    ///////////////////////////////////////////////////////
    ///////////         Midcore         ///////////////////
    ///////////////////////////////////////////////////////
    always_comb begin 
        MIDCORE_rename2_o                 = MIDCORE_rename1_i;
        MIDCORE_rename2_o.pr1_busy        = pr1_busy_tmp;
        MIDCORE_rename2_o.pr2_busy        = pr2_busy_tmp;
    end
    // // decode
    // assign MIDCORE_rename2_o.imm_o           = MIDCORE_rename1_i.imm_o      ;
    // assign MIDCORE_rename2_o.dispatch_to     = MIDCORE_rename1_i.dispatch_to;
    // assign MIDCORE_rename2_o.alu_op          = MIDCORE_rename1_i.alu_op     ;
    // assign MIDCORE_rename2_o.funct3          = MIDCORE_rename1_i.funct3     ;
    // assign MIDCORE_rename2_o.pr1_valid       = MIDCORE_rename1_i.pr1_valid  ;
    // assign MIDCORE_rename2_o.pr2_valid       = MIDCORE_rename1_i.pr2_valid  ;
    // // rename 1
    // assign MIDCORE_rename2_o.pr1             = MIDCORE_rename1_i.pr1;
    // assign MIDCORE_rename2_o.pr2             = MIDCORE_rename1_i.pr2;
    // //rename 2
    // assign MIDCORE_rename2_o.pr1_busy        = MIDCORE_rename1_i.pr1_valid ? pr1_busy : 1'b0;
    // assign MIDCORE_rename2_o.pr2_busy        = MIDCORE_rename1_i.pr2_valid ? pr2_busy : 1'b0;

    ///////////////////////////////////////////////////////
    ///////////         ROB         ///////////////////////
    ///////////////////////////////////////////////////////
    always_comb begin
        ROB_rename2_o = ROB_rename1_i;
        ROB_rename2_o.new_p      = (ROB_rename1_i.rd_valid && free_pr_valid) ? free_pr : '0;
        ROB_rename2_o.rob_entry  = allocate_rob_entry;
        //execute
        ROB_rename2_o.rs1_rdata  = '0;
        ROB_rename2_o.rs2_rdata  = '0;
        ROB_rename2_o.rd_wdata   = '0;
        ROB_rename2_o.mem_addr   = '0;
        ROB_rename2_o.mem_rmask  = '0;
        ROB_rename2_o.mem_wmask  = '0;
        ROB_rename2_o.mem_rdata  = '0;
        ROB_rename2_o.mem_wdata  = '0;
        ROB_rename2_o.mispredict = '0;
        ROB_rename2_o.target_pc  = '0;
        ROB_rename2_o.branch_actual_taken = '0;
        // wb
        ROB_rename2_o.done       = '0;
    end
    // // decode
    // assign ROB_rename2_o.valid      = ROB_rename1_i.valid     ;
    // assign ROB_rename2_o.rd_valid   = ROB_rename1_i.rd_valid  ;
    // assign ROB_rename2_o.rd_arch    = ROB_rename1_i.rd_arch   ;
    // assign ROB_rename2_o.pc         = ROB_rename1_i.pc        ;
    // assign ROB_rename2_o.inst       = ROB_rename1_i.inst      ;
    // assign ROB_rename2_o.rs1_valid  = ROB_rename1_i.rs1_valid ;
    // assign ROB_rename2_o.rs2_valid  = ROB_rename1_i.rs2_valid ;
    // assign ROB_rename2_o.rs1_addr   = ROB_rename1_i.rs1_addr  ;
    // assign ROB_rename2_o.rs2_addr   = ROB_rename1_i.rs2_addr  ;
    // assign ROB_rename2_o.is_branch  = ROB_rename1_i.is_branch ;
    // assign ROB_rename2_o.pred_taken = ROB_rename1_i.pred_taken;
    // // rename
    // assign ROB_rename2_o.old_p      = ROB_rename1_i.old_p;
    // assign ROB_rename2_o.new_p      = (ROB_rename1_i.rd_valid && free_pr_valid) free_pr ? '0;
    // assign ROB_rename2_o.rob_entry  = allocate_rob_entry;
    // //execute
    // assign ROB_rename2_o.rs1_rdata  = '0;
    // assign ROB_rename2_o.rs2_rdata  = '0;
    // assign ROB_rename2_o.rd_wdata   = '0;
    // assign ROB_rename2_o.mem_addr   = '0;
    // assign ROB_rename2_o.mem_rmask  = '0;
    // assign ROB_rename2_o.mem_wmask  = '0;
    // assign ROB_rename2_o.mem_rdata  = '0;
    // assign ROB_rename2_o.mem_wdata  = '0;  
    // assign ROB_rename2_o.mispredict = '0; 
    // assign ROB_rename2_o.target_pc  = '0;
    // // wb
    // assign ROB_rename2_o.done       = '0;
          
endmodule