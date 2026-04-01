// performs SRAT lookup, currently combinational lookup
module rename1
import rv32i_types::*;
(
    input   rob_t                   ROB_decode_i,
    input   midcore_t               MIDCORE_decode_i,

    // lookup SRAT
    output  logic   [4:0]           rs1_o,
    output  logic   [4:0]           rs2_o,
    output  logic   [4:0]           rd_o,   
    input   logic   [PRF_IDX-1:0]   pr1_i,
    input   logic   [PRF_IDX-1:0]   pr2_i,
    input   logic   [PRF_IDX-1:0]   old_pr_i,  

    output  rob_t                   ROB_rename1_o,
    output  midcore_t               MIDCORE_rename1_o
);

    assign rs1_o = ROB_decode_i.rs1_addr;
    assign rs2_o = ROB_decode_i.rs2_addr;
    assign rd_o  = ROB_decode_i.rd_arch;

    ///////////////////////////////////////////////////////
    ///////////         Midcore         ///////////////////
    ///////////////////////////////////////////////////////
    always_comb begin 
        MIDCORE_rename1_o                 = MIDCORE_decode_i;
        // rename 1
        MIDCORE_rename1_o.pr1             = MIDCORE_decode_i.pr1_valid ? pr1_i : '0;
        MIDCORE_rename1_o.pr2             = MIDCORE_decode_i.pr2_valid ? pr2_i : '0;
        //rename 2
        MIDCORE_rename1_o.pr1_busy        = '0;
        MIDCORE_rename1_o.pr2_busy        = '0;     
    end
    // // decode
    // assign MIDCORE_rename1_o.imm_o           = MIDCORE_decode_i.imm_o;
    // assign MIDCORE_rename1_o.dispatch_to     = MIDCORE_decode_i.dispatch_to;
    // assign MIDCORE_rename1_o.alu_op          = MIDCORE_decode_i.alu_op;
    // assign MIDCORE_rename1_o.funct3          = MIDCORE_decode_i.funct3;
    // assign MIDCORE_rename1_o.pr1_valid       = MIDCORE_decode_i.pr1_valid;
    // assign MIDCORE_rename1_o.pr2_valid       = MIDCORE_decode_i.pr2_valid;
    // // rename 1
    // assign MIDCORE_rename1_o.pr1             = MIDCORE_decode_i.pr1_valid ? pr1_i : '0;
    // assign MIDCORE_rename1_o.pr2             = MIDCORE_decode_i.pr2_valid ? pr2_i : '0;
    // //rename 2
    // assign MIDCORE_rename1_o.pr1_busy        = '0;
    // assign MIDCORE_rename1_o.pr2_busy        = '0;


    ///////////////////////////////////////////////////////
    ///////////         ROB         ///////////////////////
    ///////////////////////////////////////////////////////
    always_comb begin 
        ROB_rename1_o             = ROB_decode_i;
        // rename
        ROB_rename1_o.old_p       = ROB_decode_i.rd_valid ? old_pr_i : '0;   
        ROB_rename1_o.new_p       = '0;   
        ROB_rename1_o.rob_entry   = '0;
        //execute
        ROB_rename1_o.rs1_rdata   = '0; 
        ROB_rename1_o.rs2_rdata   = '0; 
        ROB_rename1_o.rd_wdata    = '0; 
        ROB_rename1_o.mem_addr    = '0; 
        ROB_rename1_o.mem_rmask   = '0; 
        ROB_rename1_o.mem_wmask   = '0; 
        ROB_rename1_o.mem_rdata   = '0; 
        ROB_rename1_o.mem_wdata   = '0; 
        ROB_rename1_o.mispredict  = '0; 
        ROB_rename1_o.target_pc   = '0; 
        ROB_rename1_o.branch_actual_taken = '0;
        // wb
        ROB_rename1_o.done        = '0;  
    end
    // // decode
    // assign ROB_rename1_o.valid       = ROB_decode_i.valid      ;
    // assign ROB_rename1_o.rd_valid    = ROB_decode_i.rd_valid   ;
    // assign ROB_rename1_o.rd_arch     = ROB_decode_i.rd_arch    ;
    // assign ROB_rename1_o.pc          = ROB_decode_i.pc         ;
    // assign ROB_rename1_o.inst        = ROB_decode_i.inst       ;
    // assign ROB_rename1_o.rs1_valid   = ROB_decode_i.rs1_valid  ;
    // assign ROB_rename1_o.rs2_valid   = ROB_decode_i.rs2_valid  ;
    // assign ROB_rename1_o.rs1_addr    = ROB_decode_i.rs1_addr   ;
    // assign ROB_rename1_o.rs2_addr    = ROB_decode_i.rs2_addr   ;
    // assign ROB_rename1_o.is_branch   = ROB_decode_i.is_branch  ;
    // assign ROB_rename1_o.pred_taken  = ROB_decode_i.pred_taken ;
    // // rename
    // assign ROB_rename1_o.old_p       = ROB_decode_i.rd_valid ? old_pr_i : '0;   
    // assign ROB_rename1_o.new_p       = '0;   
    // assign ROB_rename1_o.rob_entry   = '0;
    // //execute
    // assign ROB_rename1_o.rs1_rdata   = '0; 
    // assign ROB_rename1_o.rs2_rdata   = '0; 
    // assign ROB_rename1_o.rd_wdata    = '0; 
    // assign ROB_rename1_o.mem_addr    = '0; 
    // assign ROB_rename1_o.mem_rmask   = '0; 
    // assign ROB_rename1_o.mem_wmask   = '0; 
    // assign ROB_rename1_o.mem_rdata   = '0; 
    // assign ROB_rename1_o.mem_wdata   = '0; 
    // assign ROB_rename1_o.mispredict  = '0; 
    // assign ROB_rename1_o.target_pc   = '0; 
    // // wb
    // assign ROB_rename1_o.done        = '0;          
endmodule