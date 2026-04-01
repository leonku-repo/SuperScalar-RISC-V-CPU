// cpu midcore has two stages (decode and rename1 are combined):
// 1. decode+rename1 - decode instruction, look up SRAT for rs1, rs2, rd
// 2. rename 2       - looks up free list and busy table
//                     updates free list, busy table, SRAT
//                     dispatch to execute stage (MIDCORE_midcore_o + ROB_midcore_o)
//                     allocate new ROB entry (ROB_midcore_o)
// stall condition:
// - execute not jammed
// - ROB not full
// - fetch queue not empty
module cpu_midcore
import rv32i_types::*;
(
    input   logic                   clk,
    input   logic                   rst,
    
    input   logic                   mispredict,
    input   logic   [PRF_IDX-1:0]   mispredict_arat [32],

    // fetch queue
    output  logic                   decode_request,
    input   logic                   empty_i,
    input   logic                   branch_taken_i,
    input   logic   [31:0]          pc_i,
    input   logic   [31:0]          pc_next_i,
    input   logic   [31:0]          inst_i,

    // ROB, store, load, reservation station, jump, mul full?
    input   logic                   rob_full,
    input   logic                   alu_full,
    input   logic                   cmp_full,
    input   logic                   load_full,
    input   logic                   store_full,
    input   logic                   jump_full,
    input   logic                   mul_full,

    // from writeback (cpu_execute)
    input   logic                   wb_alu,
    input   logic                   wb_load,
    input   logic                   wb_jump,
    input   logic                   wb_cmp,
    input   logic                   wb_mul,
    input   logic   [PRF_IDX-1:0]   wb_alu_pr,
    input   logic   [PRF_IDX-1:0]   wb_load_pr,
    input   logic   [PRF_IDX-1:0]   wb_jump_pr,
    input   logic   [PRF_IDX-1:0]   wb_cmp_pr,
    input   logic   [PRF_IDX-1:0]   wb_mul_pr,

    // from commit
    input   logic                   commit_update,
    input   logic   [PRF_IDX-1:0]   commit_update_old_p,  

    // from rob, what entry rename2 allocated
    input   logic   [ROB_IDX-1:0]   allocate_rob_entry,

    // TO ROB, allocate new entry
    // TO dispatch
    output  rob_t                   ROB_midcore_o,  //TO ROB and execute at the same time.
    output  midcore_t               MIDCORE_midcore_o
);


logic       stall;
logic       stall_rob_full    /*verilator public*/;
logic       stall_alu_full    /*verilator public*/;
logic       stall_cmp_full    /*verilator public*/;
logic       stall_load_full   /*verilator public*/;
logic       stall_store_full  /*verilator public*/;
logic       stall_jump_full   /*verilator public*/;
logic       stall_mul_full    /*verilator public*/;
logic       stall_no_free_pr  /*verilator public*/;
rob_t       ROB_decode_o,   ROB_rename1_o,   ROB_rename2_o;
rob_t       ROB_rename1_reg, ROB_rename2_reg;
midcore_t   MIDCORE_decode_o,   MIDCORE_rename1_o,   MIDCORE_rename2_o;
midcore_t   MIDCORE_rename1_reg, MIDCORE_rename2_reg;
midcore_t   MIDCORE_rename2_wb_updated;  // rename2_reg with busy bits updated by any wb during stall

logic   [4:0]           srat_lookup_rs1, srat_lookup_rs2, srat_lookup_rd;
logic   [PRF_IDX-1:0]   srat_lookup_pr1, srat_lookup_pr2, srat_lookup_old_pr;
logic   [PRF_IDX-1:0]   bt_lookup_pr1, bt_lookup_pr2;
logic                   bt_pr1_busy, bt_pr2_busy;
logic   [PRF_IDX-1:0]   free_pr;
logic                   free_pr_valid;

logic                   rename_update;
logic   [PRF_IDX-1:0]   rename_update_pr;
logic   [4:0]           rename_update_ar;

// assign stall = full + valid free pr + fetch q empty
// assign decode_request = !
assign stall_rob_full   = rob_full;
assign stall_alu_full   = alu_full   && (MIDCORE_rename2_reg.dispatch_to == 3'd0);
assign stall_cmp_full   = cmp_full   && (MIDCORE_rename2_reg.dispatch_to == 3'd1);
assign stall_load_full  = load_full  && (MIDCORE_rename2_reg.dispatch_to == 3'd2);
assign stall_store_full = store_full && (MIDCORE_rename2_reg.dispatch_to == 3'd3);
assign stall_jump_full  = jump_full  && (MIDCORE_rename2_reg.dispatch_to == 3'd4 ||
                                         MIDCORE_rename2_reg.dispatch_to == 3'd5);
assign stall_mul_full   = mul_full   && (MIDCORE_rename2_reg.dispatch_to == 3'd6);
assign stall_no_free_pr = ROB_rename2_o.rd_valid && !free_pr_valid;
assign stall            = stall_rob_full | stall_alu_full | stall_cmp_full |
                          stall_load_full | stall_store_full | stall_jump_full |
                          stall_mul_full  | stall_no_free_pr;

assign decode_request = !stall && !empty_i;


// Gate valid with !stall: ROB_rename2_reg holds its value while stalled, so without
// this mask, downstream consumers (ROB wr_en, all RS/LSQ wr_en) would see valid=1
// every stall cycle and allocate a duplicate entry for the same instruction.
always_comb begin
    ROB_midcore_o       = '0;
    MIDCORE_midcore_o   = '0;
    if(!stall) begin
        ROB_midcore_o     = ROB_rename2_reg;
        MIDCORE_midcore_o = MIDCORE_rename2_reg;
    end
end

always_ff @( posedge clk ) begin
    if(rst || mispredict) begin
        ROB_rename1_reg <= '0;
        ROB_rename2_reg <= '0;
    end
    else if(!stall) begin
        ROB_rename1_reg <= ROB_rename1_o;
        ROB_rename2_reg <= ROB_rename2_o;
        // wrPtr_o = wrPtr (registered, no comb loop). At this posedge, wr_en fires if the
        // instruction currently in rename2_reg is dispatching (!stall && valid && !mispredict).
        // That increments wrPtr to wrPtr+1. The instruction we are latching NOW will dispatch
        // next cycle into mem[wrPtr+1], so tag it with wrPtr + wr_en.
        ROB_rename2_reg.rob_entry <= allocate_rob_entry
                                     + ROB_IDX'(ROB_rename2_reg.valid && !mispredict);
    end
    else begin
        ROB_rename1_reg <= ROB_rename1_reg;
        ROB_rename2_reg <= ROB_rename2_reg;
    end
end
// During a stall, a writeback may fire for an operand of the instruction
// held in rename2_reg. That instruction is not in any RS yet, so the normal
// RS wakeup path misses it. Update pr1_busy/pr2_busy here so that when the
// stall clears and the instruction dispatches, the RS sees the correct state.
always_comb begin
    MIDCORE_rename2_wb_updated = MIDCORE_rename2_reg;
    if (stall) begin
        if (MIDCORE_rename2_reg.pr1_valid && (
            (wb_alu  && (MIDCORE_rename2_reg.pr1 == wb_alu_pr )) ||
            (wb_load && (MIDCORE_rename2_reg.pr1 == wb_load_pr)) ||
            (wb_jump && (MIDCORE_rename2_reg.pr1 == wb_jump_pr)) ||
            (wb_cmp  && (MIDCORE_rename2_reg.pr1 == wb_cmp_pr )) ||
            (wb_mul  && (MIDCORE_rename2_reg.pr1 == wb_mul_pr ))
        )) MIDCORE_rename2_wb_updated.pr1_busy = 1'b0;
        if (MIDCORE_rename2_reg.pr2_valid && (
            (wb_alu  && (MIDCORE_rename2_reg.pr2 == wb_alu_pr )) ||
            (wb_load && (MIDCORE_rename2_reg.pr2 == wb_load_pr)) ||
            (wb_jump && (MIDCORE_rename2_reg.pr2 == wb_jump_pr)) ||
            (wb_cmp  && (MIDCORE_rename2_reg.pr2 == wb_cmp_pr )) ||
            (wb_mul  && (MIDCORE_rename2_reg.pr2 == wb_mul_pr ))
        )) MIDCORE_rename2_wb_updated.pr2_busy = 1'b0;
    end
end

always_ff @( posedge clk ) begin
    if(rst || mispredict) begin
        MIDCORE_rename1_reg <= '0;
        MIDCORE_rename2_reg <= '0;
    end
    else if(!stall) begin
        MIDCORE_rename1_reg <= MIDCORE_rename1_o;
        MIDCORE_rename2_reg <= MIDCORE_rename2_o;
    end
    else begin
        MIDCORE_rename1_reg <= MIDCORE_rename1_reg;
        MIDCORE_rename2_reg <= MIDCORE_rename2_wb_updated;
    end
end

///////////////////////////////////////////////////
//////////////  stage1: decode + rename1  /////////
///////////////////////////////////////////////////
decode decode(
    .branch_taken_i(branch_taken_i),
    .pc_i(pc_i),
    .inst_i(inst_i),
    .pc_next_i(pc_next_i),
    .fq_empty_i(empty_i),
    .ROB_decode_o(ROB_decode_o),
    .MIDCORE_decode_o(MIDCORE_decode_o)
);
srat srat(
    .clk(clk),
    .rst(rst),
    .rs1_i(srat_lookup_rs1),
    .rs2_i(srat_lookup_rs2),
    .rd_i(srat_lookup_rd),
    .pr1_o(srat_lookup_pr1),
    .pr2_o(srat_lookup_pr2),
    .old_pr_o(srat_lookup_old_pr),
    .rename_update(rename_update && !stall),
    .rename_update_ar(rename_update_ar),
    .rename_update_pr(rename_update_pr),
    .mispredict_update(mispredict),
    .mispredict_update_arat(mispredict_arat)
);
rename1 rename1(
    .ROB_decode_i(ROB_decode_o),
    .MIDCORE_decode_i(MIDCORE_decode_o),
    .rs1_o(srat_lookup_rs1),
    .rs2_o(srat_lookup_rs2),
    .rd_o(srat_lookup_rd),   
    .pr1_i(srat_lookup_pr1),
    .pr2_i(srat_lookup_pr2),
    .old_pr_i(srat_lookup_old_pr),  
    .ROB_rename1_o(ROB_rename1_o),
    .MIDCORE_rename1_o(MIDCORE_rename1_o)
);
///////////////////////////////////////////////////
//////////////  stage2: rename2  //////////////////
///////////////////////////////////////////////////
busy_table busy_table(
    .clk(clk),
    .rst(rst),
    .pr1_i(bt_lookup_pr1),
    .pr2_i(bt_lookup_pr2),
    .pr1_busy(bt_pr1_busy),
    .pr2_busy(bt_pr2_busy),
    .rename_update(rename_update && !stall),
    .rename_update_pr(rename_update_pr),
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
    .mispredict_update(mispredict)
);
free_list free_list(
    .clk(clk),
    .rst(rst),
    .free_pr(free_pr),
    .free_pr_valid(free_pr_valid),
    .rename_update(rename_update && !stall),
    .rename_update_pr(rename_update_pr),
    .commit_update(commit_update),
    .commit_update_pr(commit_update_old_p),
    .mispredict_update(mispredict),
    .mispredict_update_arat(mispredict_arat)
);
rename2 rename2(
    .ROB_rename1_i(ROB_rename1_reg),
    .MIDCORE_rename1_i(MIDCORE_rename1_reg),
    .pr1_o(bt_lookup_pr1),
    .pr2_o(bt_lookup_pr2),
    .pr1_busy(bt_pr1_busy),
    .pr2_busy(bt_pr2_busy),
    .free_pr(free_pr),
    .free_pr_valid(free_pr_valid),
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
    .rename_update(rename_update),
    .rename_update_pr(rename_update_pr),
    .rename_update_ar(rename_update_ar),
    .MIDCORE_rename2_o(MIDCORE_rename2_o),
    .allocate_rob_entry(allocate_rob_entry),
    .ROB_rename2_o(ROB_rename2_o)
);




endmodule