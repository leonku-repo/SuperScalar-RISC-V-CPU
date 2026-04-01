module mem
import rv32i_types::*;
(
    input   logic                       clk,
    input   logic                       rst,
    // from load store queue
    input   rob_t                       ROB_data_i,
    input   midcore_t                   MIDCORE_data_i,
    input   logic                       LDorST_i,
    input   logic                       empty_i,
    input   logic                       READY_i,
    // input   logic                       full_i,
    // from physical register file
    input   logic       [31:0]          lookup_alu_pr1_val,
    input   logic       [31:0]          lookup_alu_pr2_val,
    // from commit (Store is only executed after store is commited)
    // Send ROB_data_o to wb first to trigger ROB commit, but only trigger dmem_write after store commit from ROB
    input   logic                       commit,         // check commit signal
    input   logic       [31:0]          commit_pc,      // check if pc match with top store
    input   logic       [31:0]          commit_inst,    // check if inst match with top
    input   logic       [ROB_IDX-1:0]   commit_rob_entry,
    input   logic       [31:0]          commit_mem_addr,    // frozen addr from ROB (used at store_match)
    input   logic       [31:0]          commit_mem_wdata,   // frozen wdata from ROB (used at store_match)
    // send to wb to update ROB
    output  rob_t                       ROB_data_o,
    output  logic                       load_valid,     // used as rd_en to pop lsq => pop when dmem rdata is back
    output  logic                       store_valid,    // used as rd_en to pop lsq => pop when dmem wdata is written
    // send to DMEM
    output  logic       [31:0]          dmem_addr,
    output  logic                       dmem_read,
    output  logic                       dmem_write,
    output  logic       [3:0]           dmem_wmask,
    input   logic       [31:0]          dmem_rdata,
    output  logic       [31:0]          dmem_wdata,
    input   logic                       dmem_resp
);
    logic   [3:0]   dmem_rmask;
    logic           store_match; //commit store is same as lsq top store
    logic   [31:0]  rd_v;
    logic           done;
    logic           store_committed; // set when store_match fires, cleared when dmem_resp fires

    always_ff @(posedge clk) begin
        if (rst || (store_committed && dmem_resp))
            store_committed <= 1'b0;
        else if (store_match)
            store_committed <= 1'b1;
        else 
            store_committed <= store_committed;
    end
    
    // DATA MEMORY
    assign store_match = (LDorST_i) && commit &&
                         (ROB_data_i.pc == commit_pc) && 
                         (ROB_data_i.inst == commit_inst) &&
                         (ROB_data_i.rob_entry == commit_rob_entry);
    // At store_match use the frozen ROB addr (safe against PR1 drift); otherwise use live PRF for loads/pending stores.
    logic [31:0] prf_addr;
    assign prf_addr  = (ROB_data_i.valid && READY_i) ? (lookup_alu_pr1_val + MIDCORE_data_i.imm_o) : '0;
    assign dmem_addr = store_match ? commit_mem_addr : prf_addr;
    assign dmem_read =  !empty_i && (ROB_data_i.valid && READY_i) && (!LDorST_i);
    assign dmem_write = !empty_i && (ROB_data_i.valid && READY_i) && store_match;
    always_comb begin 
        dmem_rmask = '0;
        if(!LDorST_i) begin
            unique case (MIDCORE_data_i.funct3)
                lb, lbu: dmem_rmask = 4'b0001 << dmem_addr[1:0];
                lh, lhu: dmem_rmask = 4'b0011 << dmem_addr[1:0];
                lw:      dmem_rmask = 4'b1111;
                default: dmem_rmask = '0;
            endcase
        end
    end
    always_comb begin
        rd_v = '0;
        if(!LDorST_i) begin
            unique case (MIDCORE_data_i.funct3)
                lb : rd_v = {{24{dmem_rdata[7 +8 *dmem_addr[1:0]]}}, dmem_rdata[8 *dmem_addr[1:0] +: 8 ]};
                lbu: rd_v = {{24{1'b0}}                             , dmem_rdata[8 *dmem_addr[1:0] +: 8 ]};
                lh : rd_v = {{16{dmem_rdata[15+16*dmem_addr[1]  ]}}, dmem_rdata[16*dmem_addr[1]   +: 16]};
                lhu: rd_v = {{16{1'b0}}                             , dmem_rdata[16*dmem_addr[1]   +: 16]};
                lw : rd_v = dmem_rdata;
                default: rd_v = '0;
            endcase
        end
    end
    always_comb begin 
        dmem_wmask = '0;
        if(LDorST_i) begin
            unique case (MIDCORE_data_i.funct3)
                sb: dmem_wmask = 4'b0001 << dmem_addr[1:0];
                sh: dmem_wmask = 4'b0011 << dmem_addr[1:0];
                sw: dmem_wmask = 4'b1111;
                default: dmem_wmask = '0;
            endcase
        end
    end
    always_comb begin
        dmem_wdata = '0;
        if(LDorST_i) begin
            if (store_match) begin
                // commit_mem_wdata is already byte-lane-formatted from the initial execute;
                // use it directly — do NOT re-slice, that would discard the placed bytes.
                dmem_wdata = commit_mem_wdata;
            end else begin
                unique case (MIDCORE_data_i.funct3)
                    sb: dmem_wdata[8 *prf_addr[1:0] +: 8 ] = lookup_alu_pr2_val[7 :0];
                    sh: dmem_wdata[16*prf_addr[1]   +: 16] = lookup_alu_pr2_val[15:0];
                    sw: dmem_wdata = lookup_alu_pr2_val;
                    default: dmem_wdata = '0;
                endcase
            end
        end
    end
    always_comb begin 
        done = '0;
        case(LDorST_i)
            1'b0:       done = !empty_i && ROB_data_i.valid && READY_i && dmem_resp;    // load  -> load commit only when DMEM responds
            1'b1:       done = !empty_i && ROB_data_i.valid && READY_i && !store_committed && !store_match; // store -> pulse until commit, then hold off until LSQ pops
            default:    done = '0;
        endcase
    end
    
    // ROB_t for Write Back
    always_comb begin 
        ROB_data_o              = ROB_data_i;
        ROB_data_o.rs1_rdata    = lookup_alu_pr1_val;
        ROB_data_o.rs2_rdata    = lookup_alu_pr2_val;
        ROB_data_o.mem_addr     = prf_addr;
        ROB_data_o.mem_rmask    = dmem_rmask;
        ROB_data_o.mem_wmask    = dmem_wmask;
        ROB_data_o.mem_rdata    = dmem_rdata;
        ROB_data_o.mem_wdata    = dmem_wdata;
        ROB_data_o.mispredict   = ROB_data_i.pred_taken || (ROB_data_i.pc_next != ROB_data_i.pc + 32'd4);
        ROB_data_o.target_pc    = ROB_data_i.pc + 32'd4;
        ROB_data_o.branch_actual_taken = '0;
        ROB_data_o.rd_wdata     = rd_v;
        ROB_data_o.done         = done;
    end

    // for load store queue rd_en
    assign load_valid  = !empty_i && !LDorST_i && READY_i && dmem_resp;
    assign store_valid = !empty_i &&  LDorST_i && READY_i && dmem_resp;
endmodule