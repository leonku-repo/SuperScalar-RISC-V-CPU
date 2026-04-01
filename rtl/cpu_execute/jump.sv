module jump
import rv32i_types::*;
(
    input   rob_t                       ROB_data_i,
    input   midcore_t                   MIDCORE_data_i,
    input   logic                       empty_i,
    // input   logic                       full_i,
    input   logic       [31:0]          lookup_jump_pr1_val,
    output  rob_t                       ROB_data_o,
    output  logic                       jump_valid
);
    logic   [31:0]  br_target;
    logic           mispredict;

    always_comb begin
        case(MIDCORE_data_i.dispatch_to)
            3'd4:    br_target = ROB_data_i.pc      + MIDCORE_data_i.imm_o;
            3'd5:    br_target = (lookup_jump_pr1_val + MIDCORE_data_i.imm_o) & ~32'd1;
            default: br_target = ROB_data_i.pc      + MIDCORE_data_i.imm_o;
        endcase
    end
    
    // output
    assign jump_valid = !empty_i && ROB_data_i.valid;
    assign mispredict = (!ROB_data_i.pred_taken) || (ROB_data_i.pc_next != br_target);

    always_comb begin 
        ROB_data_o              = ROB_data_i;
        ROB_data_o.pc_next      = mispredict ? br_target : ROB_data_i.pc_next;
        ROB_data_o.rs1_rdata    = lookup_jump_pr1_val;
        ROB_data_o.rs2_rdata    = '0;
        ROB_data_o.rd_wdata     = ROB_data_i.pc + 32'd4;
        ROB_data_o.mem_addr     = '0;
        ROB_data_o.mem_rmask    = '0;
        ROB_data_o.mem_wmask    = '0;
        ROB_data_o.mem_rdata    = '0;
        ROB_data_o.mem_wdata    = '0;
        ROB_data_o.mispredict   = mispredict;
        ROB_data_o.target_pc    = br_target;
        ROB_data_o.branch_actual_taken = '1;
        ROB_data_o.done         = jump_valid;
    end

endmodule: jump

