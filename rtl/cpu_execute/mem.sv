// mem.sv
//
// Memory execution unit. Handles dmem_read (loads) and dmem_write (committed stores).
// Forwarded loads bypass this module entirely and are handled inside lsq.sv.
//
// Arbitration (single dmem port): committed store > load.
//
// State machine:
//   IDLE       → LOAD       : load_issue_valid && !store_issue_valid
//   IDLE       → STORE      : store_issue_valid
//   LOAD       → LOAD_WB   : dmem_resp && !flush_load
//   LOAD       → LOAD_DRAIN : flush_load && !dmem_resp   (mispredict, drain pending resp)
//   LOAD       → IDLE       : flush_load &&  dmem_resp   (resp and mispredict same cycle)
//   LOAD_WB    → IDLE       : always (one cycle; WB suppressed if flush_load fires)
//   LOAD_DRAIN → IDLE       : dmem_resp
//   STORE      → IDLE       : dmem_resp
//
// Transaction data is latched on IDLE→LOAD/STORE. dmem_rdata is latched on
// LOAD→LOAD_WB so WB signals are stable for exactly one cycle in LOAD_WB.

module mem
import rv32i_types::*;
(
    input  logic                    clk,
    input  logic                    rst,

    // ── Load issue (from lsq.sv) ──────────────────────────────────────
    input  logic                    load_issue_valid_i,
    input  logic   [31:0]           load_issue_addr_i,
    input  logic   [3:0]            load_issue_rmask_i,
    input  logic   [PRF_IDX-1:0]    load_issue_new_p_i,
    input  rob_t                    load_issue_rob_data_i,   // rs1_rdata pre-filled by lsq.sv
    input  logic   [2:0]            load_issue_funct3_i,

    // ── Store issue (from lsq.sv, only when committed) ────────────────
    input  logic                    store_issue_valid_i,
    input  logic   [31:0]           store_issue_addr_i,
    input  logic   [3:0]            store_issue_wmask_i,
    input  logic   [31:0]           store_issue_wdata_i,
    input  rob_t                    store_issue_rob_data_i,

    // ── Mispredict inputs (to abort in-flight loads) ──────────────────
    input  logic                    exec_mispredict,
    input  logic   [ROB_IDX-1:0]    exec_mispredict_rob_idx,
    input  logic                    spec_load_mispredict,
    input  logic   [ROB_IDX-1:0]    spec_load_rob_idx,
    input  logic   [ROB_IDX-1:0]    rob_rdPtr_i,

    // ── Feedback to lsq.sv ────────────────────────────────────────────
    output logic                    load_done_o,
    output logic   [ROB_IDX-1:0]    load_done_rob_entry_o,
    output logic                    store_done_o,

    // ── Load writeback (→ PRF, busy_table, RS, ROB) ───────────────────
    output logic                    wb_load_valid_o,
    output logic   [PRF_IDX-1:0]    wb_load_pr_o,
    output logic   [31:0]           wb_load_val_o,
    output rob_t                    wb_load_rob_data_o,

    // ── DMEM interface ────────────────────────────────────────────────
    output logic   [31:0]           dmem_addr,
    output logic                    dmem_read,
    output logic                    dmem_write,
    // dmem_rmask is internal — cpu.sv reads mem_rmask from the committed ROB entry for RVFI
    output logic   [3:0]            dmem_wmask,
    output logic   [31:0]           dmem_wdata,
    input  logic   [31:0]           dmem_rdata,
    input  logic                    dmem_resp
);

// =====================================================================
// State machine
// =====================================================================
typedef enum logic [2:0] {
    MEM_IDLE       = 3'd0,
    MEM_LOAD       = 3'd1,
    MEM_LOAD_WB    = 3'd2,
    MEM_LOAD_DRAIN = 3'd3,
    MEM_STORE      = 3'd4
} mem_state_t;

mem_state_t state;

// Latched transaction data
logic   [3:0]         dmem_rmask;   // internal — drives dmem_read byte enables
logic   [31:0]        lat_addr;
logic   [3:0]         lat_rmask;
logic   [3:0]         lat_wmask;
logic   [31:0]        lat_wdata;
logic   [2:0]         lat_funct3;
rob_t                 lat_rob_data;
logic   [31:0]        lat_rdata;    // dmem_rdata latched at LOAD→LOAD_WB

// =====================================================================
// flush_load: mispredict covers the in-flight load.
// Only meaningful in MEM_LOAD / MEM_LOAD_WB — committed stores in MEM_STORE
// have already passed rdPtr so their age wraps and would falsely trigger
// the age comparison without the state guard.
// =====================================================================
logic flush_load;
always_comb begin
    flush_load = 1'b0;
    if (state == MEM_LOAD || state == MEM_LOAD_WB) begin
        if (exec_mispredict &&
            ROB_IDX'(lat_rob_data.rob_entry - rob_rdPtr_i) >
            ROB_IDX'(exec_mispredict_rob_idx              - rob_rdPtr_i))
            flush_load = 1'b1;
        if (spec_load_mispredict &&
            ROB_IDX'(lat_rob_data.rob_entry - rob_rdPtr_i) >
            ROB_IDX'(spec_load_rob_idx                    - rob_rdPtr_i))
            flush_load = 1'b1;
    end else if (state == MEM_IDLE && load_issue_valid_i && !store_issue_valid_i) begin
        // Mispredict covers the incoming load before we even send a request.
        // Stay in IDLE and suppress dmem_read — no request sent, no drain needed.
        if (exec_mispredict &&
            ROB_IDX'(load_issue_rob_data_i.rob_entry - rob_rdPtr_i) >
            ROB_IDX'(exec_mispredict_rob_idx          - rob_rdPtr_i))
            flush_load = 1'b1;
        if (spec_load_mispredict &&
            ROB_IDX'(load_issue_rob_data_i.rob_entry - rob_rdPtr_i) >
            ROB_IDX'(spec_load_rob_idx                - rob_rdPtr_i))
            flush_load = 1'b1;
    end
end

// =====================================================================
// State transitions + data latching
// =====================================================================
always_ff @(posedge clk) begin
    if (rst) begin
        state        <= MEM_IDLE;
        lat_addr     <= '0;
        lat_rmask    <= '0;
        lat_wmask    <= '0;
        lat_wdata    <= '0;
        lat_funct3   <= '0;
        lat_rob_data <= '0;
        lat_rdata    <= '0;
    end else begin
        case (state)
            MEM_IDLE: begin
                if (store_issue_valid_i) begin
                    state        <= MEM_STORE;
                    lat_addr     <= store_issue_addr_i;
                    lat_wmask    <= store_issue_wmask_i;
                    lat_wdata    <= store_issue_wdata_i;
                    lat_rob_data <= store_issue_rob_data_i;
                end else if (load_issue_valid_i && !flush_load) begin
                    state        <= MEM_LOAD;
                    lat_addr     <= load_issue_addr_i;
                    lat_rmask    <= load_issue_rmask_i;
                    lat_funct3   <= load_issue_funct3_i;
                    lat_rob_data <= load_issue_rob_data_i;
                end
            end

            MEM_LOAD: begin
                if (flush_load) begin
                    // Mispredict: skip WB. If resp already here, drain is done.
                    state <= dmem_resp ? MEM_IDLE : MEM_LOAD_DRAIN;
                end else if (dmem_resp) begin
                    state     <= MEM_LOAD_WB;
                    lat_rdata <= dmem_rdata;    // latch before dmem_rdata disappears
                end
            end

            MEM_LOAD_WB:    state <= MEM_IDLE;  // one cycle; WB outputs driven combinationally

            MEM_LOAD_DRAIN: if (dmem_resp) state <= MEM_IDLE;

            MEM_STORE:      if (dmem_resp) state <= MEM_IDLE;

            default:        state <= MEM_IDLE;
        endcase
    end
end

// =====================================================================
// DMEM outputs
// IDLE: use live issue signals for cycle 0 of the transaction.
// LOAD/STORE: use latched data to hold request until dmem_resp.
// =====================================================================
always_comb begin : dmem_outputs
    dmem_addr  = '0;
    dmem_read  = 1'b0;
    dmem_write = 1'b0;
    dmem_rmask = '0;
    dmem_wmask = '0;
    dmem_wdata = '0;

    case (state)
        MEM_IDLE: begin
            if (store_issue_valid_i) begin
                dmem_addr  = store_issue_addr_i;
                dmem_write = 1'b1;
                dmem_wmask = store_issue_wmask_i;
                dmem_wdata = store_issue_wdata_i;
            end else if (load_issue_valid_i && !flush_load) begin
                dmem_addr  = load_issue_addr_i;
                dmem_read  = 1'b1;
                dmem_rmask = load_issue_rmask_i;
            end
        end
        MEM_LOAD: begin
            dmem_addr  = lat_addr;
            dmem_read  = 1'b1;
            dmem_rmask = lat_rmask;
        end
        MEM_STORE: begin
            dmem_addr  = lat_addr;
            dmem_write = 1'b1;
            dmem_wmask = lat_wmask;
            dmem_wdata = lat_wdata;
        end
        // MEM_LOAD_WB, MEM_LOAD_DRAIN: no dmem request
        default: ;
    endcase
end

// =====================================================================
// Completion signals to lsq.sv
// load_done suppressed if flush_load fires during LOAD_WB (edge case:
// mispredict fires one cycle after dmem_resp, same cycle as WB).
// =====================================================================
assign load_done_o           = (state == MEM_LOAD_WB);
assign load_done_rob_entry_o = lat_rob_data.rob_entry;
assign store_done_o          = (state == MEM_STORE) && dmem_resp;

// =====================================================================
// Load writeback (LOAD_WB only, suppressed on flush_load)
// =====================================================================
logic [31:0] rd_v;

always_comb begin : rd_val_comp
    rd_v = '0;
    if (state == MEM_LOAD_WB) begin
        case (lat_funct3)
            3'b000: rd_v = {{24{lat_rdata[7  + 8 *lat_addr[1:0]]}}, lat_rdata[8 *lat_addr[1:0] +: 8 ]};  // lb
            3'b100: rd_v = {24'b0,                                   lat_rdata[8 *lat_addr[1:0] +: 8 ]};  // lbu
            3'b001: rd_v = {{16{lat_rdata[15 + 16*lat_addr[1]  ]}}, lat_rdata[16*lat_addr[1]   +: 16]};  // lh
            3'b101: rd_v = {16'b0,                                   lat_rdata[16*lat_addr[1]   +: 16]};  // lhu
            3'b010: rd_v = lat_rdata;                                                                       // lw
            default: rd_v = '0;
        endcase
    end
end

assign wb_load_valid_o = (state == MEM_LOAD_WB) && !flush_load && lat_rob_data.rd_valid;
assign wb_load_pr_o    = lat_rob_data.new_p;
assign wb_load_val_o   = rd_v;

always_comb begin : wb_load_rob_comp
    wb_load_rob_data_o = '0;
    if ((state == MEM_LOAD_WB) && !flush_load) begin
        // rs1_rdata pre-filled by lsq.sv in load_issue_rob_data
        wb_load_rob_data_o                     = lat_rob_data;
        wb_load_rob_data_o.rs2_rdata           = '0;
        wb_load_rob_data_o.mem_addr            = lat_addr;
        wb_load_rob_data_o.mem_rmask           = lat_rmask;
        wb_load_rob_data_o.mem_wmask           = '0;
        wb_load_rob_data_o.mem_rdata           = lat_rdata;
        wb_load_rob_data_o.mem_wdata           = '0;
        wb_load_rob_data_o.mispredict          = '0;
        wb_load_rob_data_o.target_pc           = lat_rob_data.pc + 32'd4;
        wb_load_rob_data_o.branch_actual_taken = '0;
        wb_load_rob_data_o.rd_wdata            = rd_v;
        wb_load_rob_data_o.done                = 1'b1;
    end
end

endmodule : mem
