// Branch Target Buffer — 4-way set-associative, tree PLRU replacement.
//
// Parameter:
//   BTB_SETS — number of sets (power of 2, >= 2)
//
// 4-way tree PLRU — 3 bits per set:
//
//          p[0]
//         /    \
//       p[1]  p[2]
//       / \   / \
//      W0 W1 W2 W3
//
//   bit = 0 → left  subtree is LRU candidate
//   bit = 1 → right subtree is LRU candidate
//
// Lookup is purely combinational.
// Update fires on posedge when update_en=1.
//   Caller gates update_en with (commit_is_branch || commit_is_jump).
// PLRU updated on install only, not on lookup hits.

module btb
import rv32i_types::*;
#(
    parameter int unsigned BTB_SETS = 8
)(
    input  logic        clk,
    input  logic        rst,

    // Lookup (combinational)
    input  logic [31:0] lookup_pc,
    output logic [31:0] lookup_target,
    output logic        lookup_hit,

    // Update (synchronous, on branch/jump commit)
    input  logic        update_en,
    input  logic [31:0] update_pc,
    input  logic [31:0] update_target
);

    localparam int unsigned WAYS     = 4;
    localparam int unsigned SET_BITS = $clog2(BTB_SETS);

    // Storage arrays
    logic           btb_valid  [BTB_SETS][WAYS];
    logic [31:0]    btb_tag    [BTB_SETS][WAYS];
    logic [31:0]    btb_target [BTB_SETS][WAYS];
    logic [2:0]     btb_plru   [BTB_SETS];  // 3 bits: p[0]=root, p[1]=left, p[2]=right

    // Set index — skip bottom 2 bits (4-byte aligned instructions)
    logic [SET_BITS-1:0] lookup_sidx;
    logic [SET_BITS-1:0] update_sidx;
    assign lookup_sidx = lookup_pc[2 +: SET_BITS];
    assign update_sidx = update_pc[2 +: SET_BITS];

    // -------------------------------------------------------------------------
    // PLRU victim: follow p bits down the tree to find LRU way
    //
    //   p[0]=0 → victim in left  half (W0/W1) → check p[1]
    //   p[0]=1 → victim in right half (W2/W3) → check p[2]
    //   p[1]=0 → victim is W0,  p[1]=1 → victim is W1
    //   p[2]=0 → victim is W2,  p[2]=1 → victim is W3
    // -------------------------------------------------------------------------
    function automatic logic [1:0] plru_victim(input logic [2:0] p);
        if (!p[0]) return p[1] ? 2'd1 : 2'd0;
        else       return p[2] ? 2'd3 : 2'd2;
    endfunction

    // -------------------------------------------------------------------------
    // PLRU update: after accessing 'way', point bits away from it
    //
    //   W0 (00): p[0]=1 (point right), p[1]=1 (point toward W1)
    //   W1 (01): p[0]=1 (point right), p[1]=0 (point toward W0)
    //   W2 (10): p[0]=0 (point left),  p[2]=1 (point toward W3)
    //   W3 (11): p[0]=0 (point left),  p[2]=0 (point toward W2)
    // -------------------------------------------------------------------------
    function automatic logic [2:0] plru_update(input logic [2:0] p, input logic [1:0] way);
        logic [2:0] np;
        np    = p;
        np[0] = ~way[1];          // way[1]=0 → left half accessed → point right (1)
        if (!way[1]) np[1] = ~way[0];   // in left  half: point away from accessed way
        else         np[2] = ~way[0];   // in right half: point away from accessed way
        return np;
    endfunction

    // -------------------------------------------------------------------------
    // Lookup (combinational)
    // Forwarding: if update_en fires for the same PC we are looking up this
    // cycle, bypass the array and use update_target directly so the fetch
    // sees the correct target without waiting a cycle.
    // -------------------------------------------------------------------------
    always_comb begin
        lookup_hit    = 1'b0;
        lookup_target = '0;
        for (int w = 0; w < WAYS; w++) begin
            if (btb_valid[lookup_sidx][w] && btb_tag[lookup_sidx][w] == lookup_pc) begin
                lookup_hit    = 1'b1;
                lookup_target = btb_target[lookup_sidx][w];
            end
        end
        // Forward from update port if same PC is being installed this cycle
        if (update_en && update_pc == lookup_pc) begin
            lookup_hit    = 1'b1;
            lookup_target = update_target;
        end
    end

    // -------------------------------------------------------------------------
    // Update: find install way (combinational)
    // Priority: existing entry > first invalid > PLRU victim
    // -------------------------------------------------------------------------
    logic [1:0] update_hit_way,   update_free_way,   update_install_way;
    logic       update_hit_found,  update_free_found;

    always_comb begin
        update_hit_way    = '0;
        update_hit_found  = 1'b0;
        update_free_way   = '0;
        update_free_found = 1'b0;

        // Check if PC already in BTB (update target in-place)
        for (int w = 0; w < WAYS; w++) begin
            if (btb_valid[update_sidx][w] && btb_tag[update_sidx][w] == update_pc) begin
                update_hit_way   = 2'(w);
                update_hit_found = 1'b1;
            end
        end
        // Find first invalid way (scan high to low so lowest index wins)
        for (int w = WAYS-1; w >= 0; w--) begin
            if (!btb_valid[update_sidx][w]) begin
                update_free_way   = 2'(w);
                update_free_found = 1'b1;
            end
        end

        if      (update_hit_found)  update_install_way = update_hit_way;
        else if (update_free_found) update_install_way = update_free_way;
        else                        update_install_way = plru_victim(btb_plru[update_sidx]);
    end

    // -------------------------------------------------------------------------
    // Update (sequential)
    // -------------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (rst) begin
            for (int s = 0; s < BTB_SETS; s++) begin
                btb_plru[s] <= '0;
                for (int w = 0; w < WAYS; w++)
                    btb_valid[s][w] <= 1'b0;
            end
        end else if (update_en) begin
            btb_valid  [update_sidx][update_install_way] <= 1'b1;
            btb_tag    [update_sidx][update_install_way] <= update_pc;
            btb_target [update_sidx][update_install_way] <= update_target;
            btb_plru   [update_sidx]                     <= plru_update(btb_plru[update_sidx], update_install_way);
        end
    end

endmodule : btb
