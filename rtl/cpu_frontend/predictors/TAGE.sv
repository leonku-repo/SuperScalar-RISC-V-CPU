module TAGE 
(
    input   logic           clk,
    input   logic           rst,

    input   logic   [31:0]  lookup_pc,
    input   logic           lookup_valid,
    output  logic           lookup_prediction,
    output  logic   [31:0]  lookup_target,
    output  logic           lookup_ready,

    input   logic   [31:0]  update_pc,
    input   logic           update_prediction,
    input   logic           update_actual,
    input   logic   [31:0]  update_target,
    input   logic           update_valid,

    input   logic           flush       // mispredict: discard in-flight FIFO entries
);
    // -----------------------------------------------
    // Counter
    // -----------------------------------------------
    logic [64:0] alloc_cand_ctr [4:0];
    logic [64:0] alloc_ctr [4:0];
    logic [64:0] pred_ctr [4:0];
    logic [64:0] mispred_ctr [4:0];
    logic [64:0] tag_u_match_ctr [4:0];
    logic [64:0] tag_match_ctr [4:0];
    logic [64:0] T4_fail_alloc_ctr;
    // -----------------------------------------------
    // SET PARAMETER
    // -----------------------------------------------
    localparam bp_size = 128;
    localparam t1_size = 64;
    localparam t2_size = 64;
    localparam t3_size = 64;
    localparam t4_size = 64;
    localparam t1_tag_size = 9;
    localparam t2_tag_size = 9;
    localparam t3_tag_size = 9;
    localparam t4_tag_size = 9;
    localparam hist_size = 32;
    localparam bp_width = $clog2(bp_size);
    localparam t1_width = $clog2(t1_size);
    localparam t2_width = $clog2(t2_size);
    localparam t3_width = $clog2(t3_size);
    localparam t4_width = $clog2(t4_size);
    // -----------------------------------------------
    // Define Update Info Type
    // -----------------------------------------------
    typedef struct packed {
        logic   [31:0]  pc;         // fetch PC — used to match FIFO entry to commit
        logic   [2:0]   pred;   //1~4 (table)
        int             pred_idx;   // chosen entry
        logic           t1_match;   // as alt_pred
        logic           t2_match;   // as alt_pred
        logic           t3_match;   // as alt_pred
        int             t1_idx;     // as alt_pred
        int             t2_idx;     // as alt_pred
        int             t3_idx;     // as alt_pred
        logic           t1_diff;    // as alt_pred
        logic           t2_diff;    // as alt_pred
        logic           t3_diff;    // as alt_pred
    } update_info_t;
    //--------------------------------------------------------------------
    // TABLE
    //---------------------------------------------------------------------
    logic [1:0]             bp_table [bp_size-1:0];
    logic [1:0]             t1_table [t1_size-1:0];
    logic [1:0]             t2_table [t2_size-1:0];
    logic [1:0]             t3_table [t3_size-1:0];
    logic [1:0]             t4_table [t4_size-1:0];
    logic                   t1_u     [t1_size-1:0];
    logic                   t2_u     [t2_size-1:0];
    logic                   t3_u     [t3_size-1:0];
    logic                   t4_u     [t4_size-1:0];
    logic [t1_tag_size-1:0] t1_tag   [t1_size-1:0];
    logic [t2_tag_size-1:0] t2_tag   [t2_size-1:0];
    logic [t3_tag_size-1:0] t3_tag   [t3_size-1:0];
    logic [t4_tag_size-1:0] t4_tag   [t4_size-1:0];
    logic [hist_size-1:0]   ghist                 ;
    logic [hist_size-1:0]   phist                 ;
    logic [7:0]             lfsr                  ;
    //---------------------------------------------------------------------
    // HASH
    //---------------------------------------------------------------------
    logic [bp_width-1:0] update_bp_idx, lookup_bp_idx;
    // assign lookup_bp_idx = lookup_pc[31:27] ^ lookup_pc[11:7] ^ lookup_pc[17:13];
    // assign update_bp_idx = update_pc[31:27] ^ update_pc[11:7] ^ update_pc[17:13];
    assign lookup_bp_idx = lookup_pc[31:(32-bp_width)] ^ lookup_pc[11:(12-bp_width)] ^ lookup_pc[(12+bp_width):13];
    assign update_bp_idx = update_pc[31:(32-bp_width)] ^ update_pc[11:(12-bp_width)] ^ update_pc[(12+bp_width):13];

    logic [t1_tag_size-1:0] update_t1_tag, lookup_t1_tag;
    assign lookup_t1_tag = lookup_pc[31:23] ^ lookup_pc[21:13] ^ lookup_pc[11:3] ^ ghist[1:0];// ^ phist[1:0];
    assign update_t1_tag = update_pc[31:23] ^ update_pc[21:13] ^ update_pc[11:3] ^ ghist[1:0];// ^ phist[1:0];

    logic [t2_tag_size-1:0] update_t2_tag, lookup_t2_tag;
    assign lookup_t2_tag = lookup_pc[31:23] ^ lookup_pc[21:13] ^ lookup_pc[11:3] ^ ghist[3:0];// ^ phist[3:0];
    assign update_t2_tag = update_pc[31:23] ^ update_pc[21:13] ^ update_pc[11:3] ^ ghist[3:0];// ^ phist[3:0];

    logic [t3_tag_size-1:0] update_t3_tag, lookup_t3_tag;
    assign lookup_t3_tag = lookup_pc[31:23] ^ lookup_pc[21:13] ^ lookup_pc[11:3] ^ ghist[7:0];// ^ phist[7:0];
    assign update_t3_tag = update_pc[31:23] ^ update_pc[21:13] ^ update_pc[11:3] ^ ghist[7:0];// ^ phist[7:0];

    logic [t4_tag_size-1:0] update_t4_tag, lookup_t4_tag;
    assign lookup_t4_tag = lookup_pc[31:23] ^ lookup_pc[21:13] ^ lookup_pc[11:3] ^ ghist[15:8] ^ ghist[7:0];// ^ phist[15:8] ^ phist[7:0];
    assign update_t4_tag = update_pc[31:23] ^ update_pc[21:13] ^ update_pc[11:3] ^ ghist[15:8] ^ ghist[7:0];// ^ phist[15:8] ^ phist[7:0];
    //---------------------------------------------------------------------
    // LFSR
    //---------------------------------------------------------------------
    always_ff @( posedge clk ) begin
        if(rst) lfsr <= 8'hA5;
        else    lfsr <= {lfsr[6:0], lfsr[7] ^ lfsr[5] ^ lfsr[4] ^ lfsr[3]};
    end

    int conflict_2, conflict_3, conflict_4;
    always_comb begin
        case(lfsr[1:0])
            2'd1, 2'd2:         conflict_2 = 2;
            2'd3:               conflict_2 = 1;
            2'd0:               conflict_2 = lfsr[2] ? 2:1;
            default:            conflict_2 = lfsr[2] ? 2:1;
        endcase
    end
    always_comb begin
        case(lfsr[2:0])
            3'd1, 3'd2, 3'd3, 3'd4:     conflict_3 = 3;
            3'd5, 3'd6:                conflict_3 = 2;
            3'd7:                      conflict_3 = 1;
            3'd0:                      conflict_3 = lfsr[3] ? 2:1;
            default:                   conflict_3 = lfsr[3] ? 2:1;
        endcase
    end
    always_comb begin
        case(lfsr[3:0])
            4'd1, 4'd2, 4'd3, 4'd4, 4'd5, 4'd6, 4'd7, 4'd8:     conflict_4 = 4;
            4'd9, 4'd10, 4'd11, 4'd12:                          conflict_4 = 3;
            4'd13, 4'd14:                                       conflict_4 = 2;
            4'd15:                                              conflict_4 = 1;
            4'd0:                                               conflict_4 = lfsr[4] ? 2:1;
        endcase
    end

    //---------------------------------------------------------------------
    // HISTORY
    //---------------------------------------------------------------------
    always_ff @( posedge clk ) begin 
        if(rst) begin
            ghist <= '0;
            ghist <= '0;
        end
        else if(update_valid) begin
            ghist <= {ghist[hist_size-2:0], update_actual};
            phist <= {phist[hist_size-2:0], update_pc[14]};
        end
        else begin
            ghist <= ghist;
            phist <= phist;
        end
    end
    //---------------------------------------------------------------------
    // T0 UPDATE
    //---------------------------------------------------------------------
    always_ff @( posedge clk ) begin
        if(rst) begin
            for(int i=0; i<bp_size; i++) begin
                bp_table[i] <= '0;
            end
        end
        else if(update_valid) begin
            if(update_actual)
                bp_table[update_bp_idx] <= (bp_table[update_bp_idx] != 2'b11) ? (bp_table[update_bp_idx] + 1'b1) : bp_table[update_bp_idx];
            else
                bp_table[update_bp_idx] <= (bp_table[update_bp_idx] != 2'b00) ? (bp_table[update_bp_idx] - 1'b1) : bp_table[update_bp_idx];
        end
        else begin
            bp_table <= bp_table;
        end
    end
    //---------------------------------------------------------------------
    // T0 LOOKUP
    //---------------------------------------------------------------------
    logic t0_prediction;
    assign t0_prediction = bp_table[lookup_bp_idx][1];
    //---------------------------------------------------------------------
    // TAGGED LOOKUP
    //---------------------------------------------------------------------
    logic                   found1_tag_u,   found2_tag_u,   found3_tag_u,   found4_tag_u;
    logic                   found1_tag,     found2_tag,     found3_tag,     found4_tag;
    int                     idx1_tag_u,     idx2_tag_u,     idx3_tag_u,     idx4_tag_u;
    int                     idx1_tag,       idx2_tag,       idx3_tag,       idx4_tag;

    logic   [2:0]           pred_tmp;
    int                     pred_idx_tmp;
    logic                   t1_match_tmp,   t2_match_tmp,   t3_match_tmp;

    logic                   lookup_prediction_tmp;
    update_info_t           update_info_w;

    always_comb begin 
        found1_tag_u = '0;
        found1_tag = '0;
        idx1_tag_u = '0;
        idx1_tag = '0;

        for(int i=0; i<t1_size; i++) begin
            if((t1_tag[i] == lookup_t1_tag) && (t1_u[i] == 1'b1)) begin
                found1_tag_u = 1'b1;
                idx1_tag_u = i;
            end
            if(t1_tag[i] == lookup_t1_tag) begin
                found1_tag = 1'b1;
                idx1_tag = i;
            end
        end
    end
    always_comb begin 
        found2_tag_u = '0;
        found2_tag = '0;
        idx2_tag_u = '0;
        idx2_tag = '0;

        for(int i=0; i<t2_size; i++) begin
            if((t2_tag[i] == lookup_t2_tag) && (t2_u[i] == 1'b1)) begin
                found2_tag_u = 1'b1;
                idx2_tag_u = i;
            end
            if(t2_tag[i] == lookup_t2_tag) begin
                found2_tag = 1'b1;
                idx2_tag = i;
            end
        end
    end
    always_comb begin 
        found3_tag_u = '0;
        found3_tag = '0;
        idx3_tag_u = '0;
        idx3_tag = '0;

        for(int i=0; i<t3_size; i++) begin
            if((t3_tag[i] == lookup_t3_tag) && (t3_u[i] == 1'b1)) begin
                found3_tag_u = 1'b1;
                idx3_tag_u = i;
            end
            if(t3_tag[i] == lookup_t3_tag) begin
                found3_tag = 1'b1;
                idx3_tag = i;
            end
        end
    end
    always_comb begin 
        found4_tag_u = '0;
        found4_tag = '0;
        idx4_tag_u = '0;
        idx4_tag = '0;

        for(int i=0; i<t4_size; i++) begin
            if((t4_tag[i] == lookup_t4_tag) && (t4_u[i] == 1'b1)) begin
                found4_tag_u = 1'b1;
                idx4_tag_u = i;
            end
            if(t4_tag[i] == lookup_t4_tag) begin
                found4_tag = 1'b1;
                idx4_tag = i;
            end
        end
    end

    always_comb begin 
        lookup_prediction_tmp = t0_prediction;
        pred_tmp = '0;
        pred_idx_tmp = '0;
        t1_match_tmp = '0;
        t2_match_tmp = '0;
        t3_match_tmp = '0;

        if(found4_tag_u) begin
            lookup_prediction_tmp = t4_table[idx4_tag_u][1];
            pred_tmp = 3'd4;
            pred_idx_tmp = idx4_tag_u;
            t1_match_tmp = found1_tag;
            t2_match_tmp = found2_tag;
            t3_match_tmp = found3_tag;
        end
        else if(found3_tag_u) begin
            lookup_prediction_tmp = t3_table[idx3_tag_u][1];
            pred_tmp = 3'd3;
            pred_idx_tmp = idx3_tag_u;
            t1_match_tmp = found1_tag;
            t2_match_tmp = found2_tag;
            t3_match_tmp = '0;
        end
        else if(found4_tag) begin
            lookup_prediction_tmp = t4_table[idx4_tag][1];
            pred_tmp = 3'd4;
            pred_idx_tmp = idx4_tag;
            t1_match_tmp = found1_tag;
            t2_match_tmp = found2_tag;
            t3_match_tmp = found3_tag;
        end
        else if(found2_tag_u) begin
            lookup_prediction_tmp = t2_table[idx2_tag_u][1];
            pred_tmp = 3'd2;
            pred_idx_tmp = idx2_tag_u;
            t1_match_tmp = found1_tag;
            t2_match_tmp = '0;
            t3_match_tmp = '0;
        end
        else if(found3_tag) begin
            lookup_prediction_tmp = t3_table[idx3_tag][1];
            pred_tmp = 3'd3;
            pred_idx_tmp = idx3_tag;
            t1_match_tmp = found1_tag;
            t2_match_tmp = found2_tag;
            t3_match_tmp = '0;
        end
        else if(found1_tag_u) begin
            lookup_prediction_tmp = t1_table[idx1_tag_u][1];
            pred_tmp = 3'd1;
            pred_idx_tmp = idx1_tag_u;
            t1_match_tmp = '0;
            t2_match_tmp = '0;
            t3_match_tmp = '0;
        end
        else if(found2_tag) begin
            lookup_prediction_tmp = t2_table[idx2_tag][1];
            pred_tmp = 3'd2;
            pred_idx_tmp = idx2_tag;
            t1_match_tmp = found1_tag;
            t2_match_tmp = '0;
            t3_match_tmp = '0;
        end
        else if(found1_tag) begin
            lookup_prediction_tmp = t1_table[idx1_tag][1];
            pred_tmp = 3'd1;
            pred_idx_tmp = idx1_tag;
            t1_match_tmp = '0;
            t2_match_tmp = '0;
            t3_match_tmp = '0;
        end
    end

    assign update_info_w.pc         =   lookup_pc;
    assign update_info_w.pred       =   pred_tmp;
    assign update_info_w.pred_idx   =   pred_idx_tmp;
    assign update_info_w.t1_match   =   t1_match_tmp;
    assign update_info_w.t2_match   =   t2_match_tmp;
    assign update_info_w.t3_match   =   t3_match_tmp;
    assign update_info_w.t1_idx     =   idx1_tag;
    assign update_info_w.t2_idx     =   idx2_tag;
    assign update_info_w.t3_idx     =   idx3_tag;
    assign update_info_w.t1_diff    =   (lookup_prediction_tmp != t1_table[idx1_tag][1]);
    assign update_info_w.t2_diff    =   (lookup_prediction_tmp != t2_table[idx2_tag][1]);
    assign update_info_w.t3_diff    =   (lookup_prediction_tmp != t3_table[idx3_tag][1]);
    //--------------------------------------------------------------------
    // FIFO
    //---------------------------------------------------------------------
    update_info_t   mem [15:0];
    update_info_t   data_o;
    logic [4:0]     wrPtr, wrPtrNext;
    logic [4:0]     rdPtr, rdPtrNext;
    logic           full;
    logic           empty;

    always_comb begin
        wrPtrNext = wrPtr;
        rdPtrNext = rdPtr;
        if(lookup_valid && !full) begin
            wrPtrNext = wrPtr + 1'b1;
        end
        if(fifo_valid_pop) begin
            rdPtrNext = rdPtr + 1'b1;
        end
    end
    always_ff @( posedge clk ) begin
        if(rst) begin
            wrPtr <= '0;
            rdPtr <= '0;
        end
        else if(flush) begin
            // If the mispredicting branch is at the FIFO front, pop it first
            // so its entry is used for the update, then discard everything else.
            rdPtr <= rdPtrNext;
            wrPtr <= rdPtrNext;
        end
        else begin
            wrPtr <= wrPtrNext;
            rdPtr <= rdPtrNext;
        end
    end
    always_ff @( posedge clk ) begin 
        if(rst) begin
            for(int i=0; i<16; i++) begin
                mem[i].pred    <= '0;
                mem[i].pred_idx<= '0;
                mem[i].t1_match <= '0;
                mem[i].t2_match <= '0;
                mem[i].t3_match <= '0;
                mem[i].t1_idx <= '0;
                mem[i].t2_idx <= '0;
                mem[i].t3_idx <= '0;
                mem[i].t1_diff <= '0;
                mem[i].t2_diff <= '0;
                mem[i].t3_diff <= '0;
                
            end
        end
        else if(!full && lookup_valid) begin
            mem[wrPtr[3:0]] <= update_info_w;
        end
        else begin
            mem[wrPtr[3:0]] <= mem[wrPtr[3:0]];
        end
    end
    assign data_o = mem[rdPtr[3:0]];
    assign empty  = (wrPtr[4] == rdPtr[4]) && (wrPtr[3:0] == rdPtr[3:0]);
    assign full   = (wrPtr[4] != rdPtr[4]) && (wrPtr[3:0] == rdPtr[3:0]);

    // Valid pop: branch commits, FIFO not empty, and front entry belongs to this branch
    logic fifo_valid_pop;
    assign fifo_valid_pop = update_valid && !empty && (data_o.pc == update_pc);
    //--------------------------------------------------------------------
    // TAGGED UPDATE CONTROL
    //---------------------------------------------------------------------
    logic   update_alt_T1,  update_alt_T2,  update_alt_T3;
    logic   update_T1,      update_T2,      update_T3,      update_T4;
    logic   alloc_T1,       alloc_T2,       alloc_T3,       alloc_T4;
    logic   avl_T1,         avl_T2,         avl_T3,         avl_T4;
    int     avl_idx_T1,     avl_idx_T2,     avl_idx_T3,     avl_idx_T4;

    logic [t1_width-1:0] prev_idx_T1;
    logic [t2_width-1:0] prev_idx_T2;
    logic [t3_width-1:0] prev_idx_T3;
    logic [t4_width-1:0] prev_idx_T4;

    logic       alloc_candidate [3:0];
    logic [2:0] alloc_position; // 1~4
    logic       decrement_all_u;

    // assign update_alt_T1 = update_valid && (data_o.t1_match) && data_o.t1_diff;
    // assign update_alt_T2 = update_valid && (data_o.t2_match) && data_o.t2_diff;
    // assign update_alt_T3 = update_valid && (data_o.t3_match) && data_o.t3_diff;
    assign update_alt_T1 = '0;
    assign update_alt_T2 = '0;
    assign update_alt_T3 = '0;
    assign update_T1 = fifo_valid_pop && (data_o.pred == 3'd1);
    assign update_T2 = fifo_valid_pop && (data_o.pred == 3'd2);
    assign update_T3 = fifo_valid_pop && (data_o.pred == 3'd3);
    assign update_T4 = fifo_valid_pop && (data_o.pred == 3'd4);
    assign alloc_T1  = fifo_valid_pop && (data_o.pred inside {3'd0});
    assign alloc_T2  = fifo_valid_pop && (data_o.pred inside {3'd0, 3'd1});
    assign alloc_T3  = fifo_valid_pop && (data_o.pred inside {3'd0, 3'd1, 3'd2});
    assign alloc_T4  = fifo_valid_pop && (data_o.pred inside {3'd0, 3'd1, 3'd2, 3'd3});

    always_ff @( posedge clk ) begin 
        if(rst)                             prev_idx_T1 <= '0;
        else if(alloc_position == 3'd1)     prev_idx_T1 <= avl_idx_T1[t1_width-1:0];
        else                                prev_idx_T1 <= prev_idx_T1;
    end
    always_ff @( posedge clk ) begin 
        if(rst)                             prev_idx_T2 <= '0;
        else if(alloc_position == 3'd2)     prev_idx_T2 <= avl_idx_T2[t2_width-1:0];
        else                                prev_idx_T2 <= prev_idx_T2;
    end
    always_ff @( posedge clk ) begin 
        if(rst)                             prev_idx_T3 <= '0;
        else if(alloc_position == 3'd3)     prev_idx_T3 <= avl_idx_T3[t3_width-1:0];
        else                                prev_idx_T3 <= prev_idx_T3;
    end
    always_ff @( posedge clk ) begin 
        if(rst)                             prev_idx_T4 <= '0;
        else if(alloc_position == 3'd4)     prev_idx_T4 <= avl_idx_T4[t4_width-1:0];
        else                                prev_idx_T4 <= prev_idx_T4;
    end

    int idx1,idx2,idx3,idx4;
    always_comb begin 
        avl_T1 = '0;
        avl_idx_T1 = '0;
        idx1 = '0;
        for(int i=0; i<t1_size; i++) begin
            idx1 = (i+1+prev_idx_T1) % t1_size;
            if(t1_u[idx1]==1'b0) begin
                avl_T1 = 1'b1;
                avl_idx_T1 = idx1;
                break;
            end
        end
    end
    always_comb begin 
        avl_T2 = '0;
        avl_idx_T2 = '0;
        idx2 = '0;
        for(int i=0; i<t2_size; i++) begin
            idx2 = (i+1+prev_idx_T2) % t2_size;
            if(t2_u[idx2]==1'b0) begin
                avl_T2 = 1'b1;
                avl_idx_T2 = idx2;
                break;
            end
        end
    end
    always_comb begin 
        avl_T3 = '0;
        avl_idx_T3 = '0;
        idx3 = '0;
        for(int i=0; i<t3_size; i++) begin
            idx3 = (i+1+prev_idx_T3) % t3_size;
            if(t3_u[idx3]==1'b0) begin
                avl_T3 = 1'b1;
                avl_idx_T3 = idx3;
                break;
            end
        end
    end
    always_comb begin 
        avl_T4 = '0;
        avl_idx_T4 = '0;
        idx4 = '0;
        for(int i=0; i<t4_size; i++) begin
            idx4 = (i+1+prev_idx_T4) % t4_size;
            if(t4_u[idx4]==1'b0) begin
                avl_T4 = 1'b1;
                avl_idx_T4 = idx4;
                break;
            end
        end
    end
    
    // assign alloc_candidate = {(alloc_T4 && avl_T4), (alloc_T3 && avl_T3), (alloc_T2 && avl_T2), (alloc_T1 && avl_T1)};
    assign alloc_candidate[0] = (alloc_T1 && avl_T1);
    assign alloc_candidate[1] = (alloc_T2 && avl_T2);
    assign alloc_candidate[2] = (alloc_T3 && avl_T3);
    assign alloc_candidate[3] = (alloc_T4 && avl_T4);

    int count;
    always_comb begin 
        count = 0;
        decrement_all_u = 1'b0;
        alloc_position = 3'd0;

        if((alloc_T4 && avl_T4) + (alloc_T3 && avl_T3) + (alloc_T2 && avl_T2) + (alloc_T1 && avl_T1) == 4) begin
            for(int i=0; i<4; i++) begin
                if(alloc_candidate[i]) begin
                    count++;
                    if(count == conflict_4) begin
                        alloc_position = i[2:0] + 1'b1;
                    end
                end
            end
        end
        else if((alloc_T4 && avl_T4) + (alloc_T3 && avl_T3) + (alloc_T2 && avl_T2) + (alloc_T1 && avl_T1) == 3) begin
            for(int i=0; i<4; i++) begin
                if(alloc_candidate[i]) begin
                    count++;
                    if(count == conflict_3) begin
                        alloc_position = i[2:0] + 1'b1;
                    end
                end
            end
        end
        else if((alloc_T4 && avl_T4) + (alloc_T3 && avl_T3) + (alloc_T2 && avl_T2) + (alloc_T1 && avl_T1) == 2) begin
            for(int i=0; i<4; i++) begin
                if(alloc_candidate[i]) begin
                    count++;
                    if(count == conflict_2) begin
                        alloc_position = i[2:0] + 1'b1;
                    end
                end
            end
        end
        else if((alloc_T4 && avl_T4) + (alloc_T3 && avl_T3) + (alloc_T2 && avl_T2) + (alloc_T1 && avl_T1) == 1) begin
            for(int i=0; i<4; i++) begin
                if(alloc_candidate[i]) begin
                    alloc_position = i[2:0] + 1'b1;
                end
            end
        end
        else if(((alloc_T4 && avl_T4) + (alloc_T3 && avl_T3) + (alloc_T2 && avl_T2) + (alloc_T1 && avl_T1) == 0) && (alloc_T4 || alloc_T3 || alloc_T2 || alloc_T1))begin
            decrement_all_u = 1'b1;
            alloc_position = '0;
        end
    end
    //--------------------------------------------------------------------
    // TAGGED UPDATE CONTROL
    //---------------------------------------------------------------------
    // T1
    always_ff @( posedge clk ) begin 
        if(rst) begin
            for(int i=0; i<t1_size; i++) begin
                t1_table[i] <= '0;
                t1_tag[i] <= '0;
                t1_u[i] <= '0;
            end
        end
        else if(update_T1) begin
            t1_u[data_o.pred_idx] <= (update_prediction == update_actual) ? 1'b1 : 1'b0;

            if(update_actual) begin
                t1_table[data_o.pred_idx] <= (t1_table[data_o.pred_idx] != 2'b11) ? (t1_table[data_o.pred_idx] + 1'b1) : t1_table[data_o.pred_idx];
            end
            else begin
                t1_table[data_o.pred_idx] <= (t1_table[data_o.pred_idx] != 2'b00) ? (t1_table[data_o.pred_idx] - 1'b1) : t1_table[data_o.pred_idx];
            end
        end
        else if(alloc_position == 3'd1) begin
            t1_u[avl_idx_T1] <= 1'b0;
            t1_table[avl_idx_T1] <= update_actual ? 2'b10 : 2'b01;
            t1_tag[avl_idx_T1] <= update_t1_tag;
        end
        else if(update_alt_T1) begin
            t1_u[data_o.t1_idx] <= (update_prediction == update_actual) ? 1'b0 : 1'b1;

            if(!update_actual) begin
                t1_table[data_o.t1_idx] <= (t1_table[data_o.t1_idx] != 2'b11) ? (t1_table[data_o.t1_idx] + 1'b1) : t1_table[data_o.t1_idx];
            end
            else begin
                t1_table[data_o.t1_idx] <= (t1_table[data_o.t1_idx] != 2'b00) ? (t1_table[data_o.t1_idx] - 1'b1) : t1_table[data_o.t1_idx];
            end
        end
        else if(decrement_all_u && alloc_T1) begin
            for(int i=0; i<t1_size; i++) begin
                t1_u[i]   <= '0;
            end
        end
        else begin
            t1_u <= t1_u;
            t1_tag <= t1_tag;
            t1_table <= t1_table;
        end
    end
    // T2
    always_ff @( posedge clk ) begin 
        if(rst) begin
            for(int i=0; i<t2_size; i++) begin
                t2_table[i] <= '0;
                t2_tag[i] <= '0;
                t2_u[i] <= '0;
            end
        end
        else if(update_T2) begin
            t2_u[data_o.pred_idx] <= (update_prediction == update_actual) ? 1'b1 : 1'b0;

            if(update_actual) begin
                t2_table[data_o.pred_idx] <= (t2_table[data_o.pred_idx] != 2'b11) ? (t2_table[data_o.pred_idx] + 1'b1) : t2_table[data_o.pred_idx];
            end
            else begin
                t2_table[data_o.pred_idx] <= (t2_table[data_o.pred_idx] != 2'b00) ? (t2_table[data_o.pred_idx] - 1'b1) : t2_table[data_o.pred_idx];
            end
        end
        else if(alloc_position == 3'd2) begin
            t2_u[avl_idx_T2] <= 1'b0;
            t2_table[avl_idx_T2] <= update_actual ? 2'b10 : 2'b01;
            t2_tag[avl_idx_T2] <= update_t2_tag;
        end
        else if(update_alt_T2) begin
            t2_u[data_o.t2_idx] <= (update_prediction == update_actual) ? 1'b0 : 1'b1;

            if(!update_actual) begin
                t2_table[data_o.t2_idx] <= (t2_table[data_o.t2_idx] != 2'b11) ? (t2_table[data_o.t2_idx] + 1'b1) : t2_table[data_o.t2_idx];
            end
            else begin
                t2_table[data_o.t2_idx] <= (t2_table[data_o.t2_idx] != 2'b00) ? (t2_table[data_o.t2_idx] - 1'b1) : t2_table[data_o.t2_idx];
            end
        end
        else if(decrement_all_u && alloc_T2) begin
            for(int i=0; i<t2_size; i++) begin
                t2_u[i]   <= '0;
            end
        end
        else begin
            t2_u <= t2_u;
            t2_tag <= t2_tag;
            t2_table <= t2_table;
        end
    end
    // T3
    always_ff @( posedge clk ) begin 
        if(rst) begin
            for(int i=0; i<t3_size; i++) begin
                t3_table[i] <= '0;
                t3_tag[i] <= '0;
                t3_u[i] <= '0;
            end
        end
        else if(update_T3) begin
            t3_u[data_o.pred_idx] <= (update_prediction == update_actual) ? 1'b1 : 1'b0;

            if(update_actual) begin
                t3_table[data_o.pred_idx] <= (t3_table[data_o.pred_idx] != 2'b11) ? (t3_table[data_o.pred_idx] + 1'b1) : t3_table[data_o.pred_idx];
            end
            else begin
                t3_table[data_o.pred_idx] <= (t3_table[data_o.pred_idx] != 2'b00) ? (t3_table[data_o.pred_idx] - 1'b1) : t3_table[data_o.pred_idx];
            end
        end
        else if(alloc_position == 3'd3) begin
            t3_u[avl_idx_T3] <= 1'b0;
            t3_table[avl_idx_T3] <= update_actual ? 2'b10 : 2'b01;
            t3_tag[avl_idx_T3] <= update_t3_tag;
        end
        else if(update_alt_T3) begin
            t3_u[data_o.t3_idx] <= (update_prediction == update_actual) ? 1'b0 : 1'b1;

            if(!update_actual) begin
                t3_table[data_o.t3_idx] <= (t3_table[data_o.t3_idx] != 2'b11) ? (t3_table[data_o.t3_idx] + 1'b1) : t3_table[data_o.t3_idx];
            end
            else begin
                t3_table[data_o.t3_idx] <= (t3_table[data_o.t3_idx] != 2'b00) ? (t3_table[data_o.t3_idx] - 1'b1) : t3_table[data_o.t3_idx];
            end
        end
        else if(decrement_all_u && alloc_T3) begin
            for(int i=0; i<t3_size; i++) begin
                t3_u[i]   <= '0;
            end
        end
        else begin
            t3_u <= t3_u;
            t3_tag <= t3_tag;
            t3_table <= t3_table;
        end
    end
    // T4
    always_ff @( posedge clk ) begin 
        if(rst) begin
            for(int i=0; i<t4_size; i++) begin
                t4_table[i] <= '0;
                t4_tag[i] <= '0;
                t4_u[i] <= '0;
            end
        end
        else if(update_T4) begin
            t4_u[data_o.pred_idx] <= (update_prediction == update_actual) ? 1'b1 : 1'b0;

            if(update_actual) begin
                t4_table[data_o.pred_idx] <= (t4_table[data_o.pred_idx] != 2'b11) ? (t4_table[data_o.pred_idx] + 1'b1) : t4_table[data_o.pred_idx];
            end
            else begin
                t4_table[data_o.pred_idx] <= (t4_table[data_o.pred_idx] != 2'b00) ? (t4_table[data_o.pred_idx] - 1'b1) : t4_table[data_o.pred_idx];
            end
        end
        else if(alloc_position == 3'd4) begin
            t4_u[avl_idx_T4] <= 1'b0;
            t4_table[avl_idx_T4] <= update_actual ? 2'b10 : 2'b01;
            t4_tag[avl_idx_T4] <= update_t4_tag;
        end
        else if(decrement_all_u && alloc_T4) begin
            for(int i=0; i<t4_size; i++) begin
                t4_u[i]   <= '0;
            end
        end
        else begin
            t4_u <= t4_u;
            t4_tag <= t4_tag;
            t4_table <= t4_table;
        end
    end
    //--------------------------------------------------------------------
    // FINAL — combinational output so fetch gets zero-latency prediction
    //---------------------------------------------------------------------
    assign lookup_ready      = lookup_valid;
    assign lookup_prediction = lookup_prediction_tmp;
    assign lookup_target     = '0;

    logic [31:0]    target_q;
    always_ff @( posedge clk ) begin 
        target_q <= update_target;
    end
    // -----------------------------------------------
    // Counter Implementation
    // -----------------------------------------------
    always_ff @( posedge clk ) begin 
        if(rst) begin
            for(int i=0; i<5; i++) begin
                alloc_cand_ctr[i] <= '0;
            end
        end
        else if(alloc_T1 && avl_T1) alloc_cand_ctr[1] <= alloc_cand_ctr[1] + 1'b1;
        else if(alloc_T2 && avl_T2) alloc_cand_ctr[2] <= alloc_cand_ctr[2] + 1'b1;
        else if(alloc_T3 && avl_T3) alloc_cand_ctr[3] <= alloc_cand_ctr[3] + 1'b1;
        else if(alloc_T4 && avl_T4) alloc_cand_ctr[4] <= alloc_cand_ctr[4] + 1'b1;
        else alloc_cand_ctr <= alloc_cand_ctr;
    end
    always_ff @( posedge clk ) begin 
        if(rst) begin
            for(int i=0; i<5; i++) begin
                alloc_ctr[i] <= '0;
            end
        end
        else if(alloc_position == 3'd1) alloc_ctr[1] <= alloc_ctr[1] + 1'b1;
        else if(alloc_position == 3'd2) alloc_ctr[2] <= alloc_ctr[2] + 1'b1;
        else if(alloc_position == 3'd3) alloc_ctr[3] <= alloc_ctr[3] + 1'b1;
        else if(alloc_position == 3'd4) alloc_ctr[4] <= alloc_ctr[4] + 1'b1;
        else alloc_ctr <= alloc_ctr;
    end
    always_ff @( posedge clk ) begin 
        if(rst) begin
            for(int i=0; i<5; i++) begin
                pred_ctr[i] <= '0;
            end
        end
        else if(update_valid && data_o.pred == 3'd0) pred_ctr[0] <= pred_ctr[0] + 1'b1;
        else if(update_valid && data_o.pred == 3'd1) pred_ctr[1] <= pred_ctr[1] + 1'b1;
        else if(update_valid && data_o.pred == 3'd2) pred_ctr[2] <= pred_ctr[2] + 1'b1;
        else if(update_valid && data_o.pred == 3'd3) pred_ctr[3] <= pred_ctr[3] + 1'b1;
        else if(update_valid && data_o.pred == 3'd4) pred_ctr[4] <= pred_ctr[4] + 1'b1;
        else pred_ctr <= pred_ctr;
    end
    always_ff @( posedge clk ) begin 
        if(rst) begin
            for(int i=0; i<5; i++) begin
                mispred_ctr[i] <= '0;
            end
        end
        else if(update_valid && data_o.pred == 3'd0 && (update_prediction != update_actual)) mispred_ctr[0] <= mispred_ctr[0] + 1'b1;
        else if(update_valid && data_o.pred == 3'd1 && (update_prediction != update_actual)) mispred_ctr[1] <= mispred_ctr[1] + 1'b1;
        else if(update_valid && data_o.pred == 3'd2 && (update_prediction != update_actual)) mispred_ctr[2] <= mispred_ctr[2] + 1'b1;
        else if(update_valid && data_o.pred == 3'd3 && (update_prediction != update_actual)) mispred_ctr[3] <= mispred_ctr[3] + 1'b1;
        else if(update_valid && data_o.pred == 3'd4 && (update_prediction != update_actual)) mispred_ctr[4] <= mispred_ctr[4] + 1'b1;
        else mispred_ctr <= mispred_ctr;
    end
    always_ff @( posedge clk ) begin 
        if(rst) begin
            for(int i=0; i<5; i++) begin
                tag_u_match_ctr[i] <= '0;
            end
        end
        else if(lookup_valid && found1_tag_u) tag_u_match_ctr[1] <= tag_u_match_ctr[1] + 1'b1;
        else if(lookup_valid && found2_tag_u) tag_u_match_ctr[2] <= tag_u_match_ctr[2] + 1'b1;
        else if(lookup_valid && found3_tag_u) tag_u_match_ctr[3] <= tag_u_match_ctr[3] + 1'b1;
        else if(lookup_valid && found4_tag_u) tag_u_match_ctr[4] <= tag_u_match_ctr[4] + 1'b1;
        else tag_u_match_ctr <= tag_u_match_ctr;
    end
    always_ff @( posedge clk ) begin 
        if(rst) begin
            for(int i=0; i<5; i++) begin
                tag_match_ctr[i] <= '0;
            end
        end
        else if(lookup_valid && found1_tag) tag_match_ctr[1] <= tag_match_ctr[1] + 1'b1;
        else if(lookup_valid && found2_tag) tag_match_ctr[2] <= tag_match_ctr[2] + 1'b1;
        else if(lookup_valid && found3_tag) tag_match_ctr[3] <= tag_match_ctr[3] + 1'b1;
        else if(lookup_valid && found4_tag) tag_match_ctr[4] <= tag_match_ctr[4] + 1'b1;
        else tag_match_ctr <= tag_match_ctr;
    end
    always_ff @( posedge clk ) begin 
        if(rst) T4_fail_alloc_ctr <= '0;
        else if(alloc_T4 && !avl_T4) T4_fail_alloc_ctr <= T4_fail_alloc_ctr + 1'b1;
        else T4_fail_alloc_ctr <= T4_fail_alloc_ctr;
    end
endmodule


