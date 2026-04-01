module cpu
import rv32i_types::*;
(
    input   logic           clk,
    input   logic           rst,

    // Instruction memory port (read-only)
    output  logic   [31:0]  imem_addr,
    output  logic           imem_read,
    input   logic   [31:0]  imem_rdata,
    input   logic           imem_resp,

    // Data memory port (read-write)
    output  logic   [31:0]  dmem_addr,
    output  logic           dmem_read,
    output  logic           dmem_write,
    output  logic   [3:0]   dmem_wmask,
    input   logic   [31:0]  dmem_rdata,
    output  logic   [31:0]  dmem_wdata,
    input   logic           dmem_resp
);
// order, rvfi
    // fetch
    logic                       fetch_empty;
    logic                       fetch_branch_taken;
    logic   [31:0]              fetch_pc;
    logic   [31:0]              fetch_pc_next;
    logic   [31:0]              fetch_inst;
    // midcore
    logic                       decode_request;
    rob_t                       ROB_midcore_o;
    midcore_t                   MIDCORE_midcore_o;
    // execute/writeback
    logic                       alu_full;
    logic                       cmp_full;
    logic                       load_full;
    logic                       store_full;
    logic                       jump_full;
    logic                       mul_full;
    logic                       wb_alu;
    logic                       wb_load;
    logic                       wb_jump;
    logic                       wb_cmp;
    logic                       wb_mul;
    logic   [PRF_IDX-1:0]       wb_alu_pr;
    logic   [PRF_IDX-1:0]       wb_load_pr;
    logic   [PRF_IDX-1:0]       wb_jump_pr;
    logic   [PRF_IDX-1:0]       wb_cmp_pr;
    logic   [PRF_IDX-1:0]       wb_mul_pr;
    rob_t                       alu_ROB_exec_o;
    rob_t                       cmp_ROB_exec_o;
    rob_t                       jump_ROB_exec_o;
    rob_t                       mem_ROB_exec_o;
    rob_t                       mul_ROB_exec_o;
    // commit
    logic   [PRF_IDX-1:0]       arat_o [32];
    logic                       mispredict;
    logic   [31:0]              recover_pc;
    logic                       rob_full;
    logic                       commit;
    rob_t                       commit_rob_o;
    logic   [ROB_IDX-1:0]       rob_wr_idx;
    logic   [ROB_IDX-1:0]       rob_rd_idx;
    logic                       commit_is_branch;
    logic                       commit_is_jump;
    logic                       commit_branch_actual_taken;
    logic   [31:0]              commit_pc;


    cpu_frontend cpu_frontend(
        .clk(clk),
        .rst(rst),
        .imem_addr(imem_addr),
        .imem_read(imem_read),
        .imem_rdata(imem_rdata),
        .imem_resp(imem_resp),
        .branch_mispredict(mispredict),
        .recover_pc(recover_pc),
        .commit_is_branch(commit_is_branch),
        .commit_is_jump(commit_is_jump),
        .commit_branch_actual_taken(commit_branch_actual_taken),
        .commit_pc(commit_pc),
        .decode_request(decode_request),
        .empty_o(fetch_empty),
        .branch_taken_o(fetch_branch_taken),
        .pc_o(fetch_pc),
        .pc_next_o(fetch_pc_next),
        .inst_o(fetch_inst)
    );

    cpu_midcore cpu_midcore(
        .clk(clk),
        .rst(rst),
        .mispredict(mispredict),
        .mispredict_arat(arat_o),
        .decode_request(decode_request),
        .empty_i(fetch_empty),
        .branch_taken_i(fetch_branch_taken),
        .pc_i(fetch_pc),
        .pc_next_i(fetch_pc_next),
        .inst_i(fetch_inst),
        .rob_full(rob_full),
        .alu_full(alu_full),
        .cmp_full(cmp_full),
        .load_full(load_full),
        .store_full(store_full),
        .jump_full(jump_full),
        .mul_full(mul_full),
        .wb_alu(wb_alu),
        .wb_load(wb_load),
        .wb_jump(wb_jump),
        .wb_cmp(wb_cmp),
        .wb_mul(wb_mul),
        .wb_alu_pr(wb_alu_pr),
        .wb_load_pr(wb_load_pr),
        .wb_jump_pr(wb_jump_pr),
        .wb_cmp_pr(wb_cmp_pr),
        .wb_mul_pr(wb_mul_pr),
        .commit_update(commit && commit_rob_o.rd_valid),
        .commit_update_old_p(commit_rob_o.old_p),
        .allocate_rob_entry(rob_wr_idx),
        .ROB_midcore_o(ROB_midcore_o),
        .MIDCORE_midcore_o(MIDCORE_midcore_o)
    );

    cpu_execute cpu_execute(
        .clk(clk),
        .rst(rst),
        .mispredict(mispredict),
        .commit(commit),
        .commit_pc(commit_rob_o.pc),
        .commit_inst(commit_rob_o.inst),
        .commit_rob_entry(rob_rd_idx),
        .commit_mem_addr(commit_rob_o.mem_addr),
        .commit_mem_wdata(commit_rob_o.mem_wdata),
        .alu_full_o(alu_full),
        .cmp_full_o(cmp_full),
        .load_full_o(load_full),
        .store_full_o(store_full),
        .jump_full_o(jump_full),
        .mul_full_o(mul_full),
        .wb_alu(wb_alu),
        .wb_load(wb_load),
        .wb_jump(wb_jump),
        .wb_cmp(wb_cmp),
        .wb_mul(wb_mul),
        .wb_alu_pr(wb_alu_pr),
        .wb_load_pr(wb_load_pr),
        .wb_jump_pr(wb_jump_pr),
        .wb_cmp_pr(wb_cmp_pr),
        .wb_mul_pr(wb_mul_pr),
        .ROB_midcore_i(ROB_midcore_o),
        .MIDCORE_midcore_i(MIDCORE_midcore_o),
        .alu_ROB_exec_o(alu_ROB_exec_o),
        .cmp_ROB_exec_o(cmp_ROB_exec_o),
        .jump_ROB_exec_o(jump_ROB_exec_o),
        .mem_ROB_exec_o(mem_ROB_exec_o),
        .mul_ROB_exec_o(mul_ROB_exec_o),
        .dmem_addr(dmem_addr),
        .dmem_read(dmem_read),
        .dmem_write(dmem_write),
        .dmem_wmask(dmem_wmask),
        .dmem_rdata(dmem_rdata),
        .dmem_wdata(dmem_wdata),
        .dmem_resp(dmem_resp)
    );

    cpu_commit cpu_commit(
        .clk(clk),
        .rst(rst),
        .rob_data_i(ROB_midcore_o),
        .alu_ROB_exec_i(alu_ROB_exec_o),
        .cmp_ROB_exec_i(cmp_ROB_exec_o),
        .jump_ROB_exec_i(jump_ROB_exec_o),
        .mem_ROB_exec_i(mem_ROB_exec_o),
        .mul_ROB_exec_i(mul_ROB_exec_o),
        .rob_wr_idx(rob_wr_idx),
        .rob_rd_idx(rob_rd_idx),
        .rob_full(rob_full),
        .commit(commit),
        .commit_rob_o(commit_rob_o),   
        .mispredict(mispredict),
        .recover_pc(recover_pc),
        .commit_is_branch(commit_is_branch),
        .commit_is_jump(commit_is_jump),
        .commit_branch_actual_taken(commit_branch_actual_taken),
        .commit_branch_pc(commit_pc),
        .arat_o(arat_o)
    );

    logic   [63:0]  order;
    always_ff @( posedge clk ) begin
        if (rst) begin
            order <= '0;
        end else begin
            if (commit) begin
                order <= order + 'd1;
            end
        end
    end

    logic           monitor_valid;
    logic   [63:0]  monitor_order;
    logic   [31:0]  monitor_inst;
    logic   [4:0]   monitor_rs1_addr;
    logic   [4:0]   monitor_rs2_addr;
    logic   [31:0]  monitor_rs1_rdata;
    logic   [31:0]  monitor_rs2_rdata;
    logic   [4:0]   monitor_rd_addr;
    logic   [31:0]  monitor_rd_wdata;
    logic   [31:0]  monitor_pc_rdata;
    logic   [31:0]  monitor_pc_wdata;
    logic   [31:0]  monitor_mem_addr;
    logic   [3:0]   monitor_mem_rmask;
    logic   [3:0]   monitor_mem_wmask;
    logic   [31:0]  monitor_mem_rdata;
    logic   [31:0]  monitor_mem_wdata;

    // Fill this out
    assign monitor_valid     = commit;
    assign monitor_order     = order;
    assign monitor_inst      = commit_rob_o.inst;
    assign monitor_rs1_addr  = commit_rob_o.rs1_valid ? commit_rob_o.rs1_addr : 5'd0;
    assign monitor_rs2_addr  = commit_rob_o.rs2_valid ? commit_rob_o.rs2_addr : 5'd0;
    assign monitor_rs1_rdata = commit_rob_o.rs1_valid ? commit_rob_o.rs1_rdata : 32'd0;
    assign monitor_rs2_rdata = commit_rob_o.rs2_valid ? commit_rob_o.rs2_rdata : 32'd0;
    assign monitor_rd_addr   = commit_rob_o.rd_valid ? commit_rob_o.rd_arch : 5'd0;
    assign monitor_rd_wdata  = commit_rob_o.rd_wdata;
    assign monitor_pc_rdata  = commit_rob_o.pc;
    assign monitor_pc_wdata  = commit_rob_o.pc_next;
    assign monitor_mem_addr  = commit_rob_o.mem_addr;
    assign monitor_mem_rmask = commit_rob_o.mem_rmask;
    assign monitor_mem_wmask = commit_rob_o.mem_wmask;
    assign monitor_mem_rdata = commit_rob_o.mem_rdata;
    assign monitor_mem_wdata = commit_rob_o.mem_wdata;

endmodule : cpu
