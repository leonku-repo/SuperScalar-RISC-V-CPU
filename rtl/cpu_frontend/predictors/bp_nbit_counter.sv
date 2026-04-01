// N-bit saturating counter branch predictor.
//
// Parameters:
//   COUNTER_BITS — N, width of each saturating counter (e.g. 2 for classic 2-bit predictor)
//   PHT_ENTRIES  — number of counters in the table (power of 2)
//
// Only decides taken/not-taken. Branch target is handled externally by the BTB.
//
// Each counter:
//   MSB = 1 → predict taken
//   MSB = 0 → predict not taken
//   Increment (saturate at max) when branch actually taken
//   Decrement (saturate at 0)   when branch actually not taken

module bp_nbit_counter
import rv32i_types::*;
#(
    parameter int unsigned COUNTER_BITS = 2,
    parameter int unsigned PHT_ENTRIES  = 64
)(
    input   logic           clk,
    input   logic           rst,

    // Lookup
    input   logic [31:0]    pc_i,
    output  logic           branch_taken,

    // Training
    input   logic           commit_is_branch,
    input   logic           commit_branch_actual_taken,
    input   logic [31:0]    commit_pc
);

    localparam int unsigned IDX_BITS = $clog2(PHT_ENTRIES);
    localparam logic [COUNTER_BITS-1:0] CNT_MAX = '1;
    localparam logic [COUNTER_BITS-1:0] CNT_MIN = '0;

    // Pattern History Table
    logic [COUNTER_BITS-1:0] pht [PHT_ENTRIES];

    // PC index into PHT (skip bottom 2 bits — word aligned)
    logic [IDX_BITS-1:0] lookup_idx;
    logic [IDX_BITS-1:0] train_idx;
    assign lookup_idx = pc_i     [2 +: IDX_BITS];
    assign train_idx  = commit_pc[2 +: IDX_BITS];

    // Prediction: MSB of counter
    assign branch_taken = pht[lookup_idx][COUNTER_BITS-1];

    // Training
    always_ff @(posedge clk) begin
        if (rst) begin
            for (int i = 0; i < PHT_ENTRIES; i++)
                pht[i] <= '0;
        end else if (commit_is_branch) begin
            if (commit_branch_actual_taken) begin
                if (pht[train_idx] != CNT_MAX)
                    pht[train_idx] <= pht[train_idx] + 1'b1;
            end else begin
                if (pht[train_idx] != CNT_MIN)
                    pht[train_idx] <= pht[train_idx] - 1'b1;
            end
        end
    end

endmodule : bp_nbit_counter
