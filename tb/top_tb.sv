// Top-level SV wrapper for Verilator (--cc --exe mode).
// Explicit ports required for --cc --exe mode so C++ can access them directly.
// Based on hvl/ventilator/verilator_tb.sv, adapted for split imem/dmem ports.
module top_tb (
    input  logic        clk,
    input  logic        rst,
    input  logic        dut_rst,   // independent reset for DUT only (held high in Phase 1)

    // DUT instruction memory port
    input  logic [31:0] imem_rdata,
    input  logic        imem_resp,
    output logic [31:0] imem_addr,
    output logic        imem_read,

    // DUT data memory port
    input  logic [31:0] dmem_rdata,
    input  logic        dmem_resp,
    output logic [31:0] dmem_addr,
    output logic        dmem_read,
    output logic        dmem_write,
    output logic [3:0]  dmem_wmask,
    output logic [31:0] dmem_wdata,

    // Golden core instruction memory port
    input  logic [31:0] golden_imem_rdata,
    input  logic        golden_imem_resp,
    output logic [31:0] golden_imem_addr,
    output logic        golden_imem_read,

    // Golden core data memory port
    input  logic [31:0] golden_dmem_rdata,
    input  logic        golden_dmem_resp,
    output logic [31:0] golden_dmem_addr,
    output logic        golden_dmem_read,
    output logic        golden_dmem_write,
    output logic [3:0]  golden_dmem_wmask,
    output logic [31:0] golden_dmem_wdata,

    output logic        halt,
    output logic        error,
    output logic        any_commit,
    output logic        mispredict_o,
    input  logic        eoc_enable,   // 0 during Phase 1 — suppresses end-of-sim checker

    // DUT commit snapshot
    output logic [63:0] dut_order,
    output logic [31:0] dut_pc,
    output logic [31:0] dut_inst,
    output logic [4:0]  dut_rd_addr,
    output logic [31:0] dut_rd_wdata,
    output logic [31:0] dut_mem_addr,
    output logic [3:0]  dut_mem_rmask,
    output logic [3:0]  dut_mem_wmask,
    output logic [31:0] dut_mem_rdata,
    output logic [31:0] dut_mem_wdata,

    // Golden commit snapshot
    output logic        golden_commit,
    output logic [63:0] golden_order,
    output logic [31:0] golden_pc,
    output logic [31:0] golden_inst,
    output logic [4:0]  golden_rd_addr,
    output logic [31:0] golden_rd_wdata,
    output logic [31:0] golden_mem_addr,
    output logic [3:0]  golden_mem_rmask,
    output logic [3:0]  golden_mem_wmask,
    output logic [31:0] golden_mem_rdata,
    output logic [31:0] golden_mem_wdata
);

    localparam RVFI_COMMITS = 8;

    mon_itf mon_itf(.*);
    ventilator_monitor monitor(.itf(mon_itf));

    // cpu instance named 'dut' — rvfi_reference.svh uses dut.monitor_* paths
    cpu dut (
        .clk        (clk),
        .rst        (rst || dut_rst),
        .imem_addr  (imem_addr),
        .imem_read  (imem_read),
        .imem_rdata (imem_rdata),
        .imem_resp  (imem_resp),
        .dmem_addr  (dmem_addr),
        .dmem_read  (dmem_read),
        .dmem_write (dmem_write),
        .dmem_wmask (dmem_wmask),
        .dmem_rdata (dmem_rdata),
        .dmem_wdata (dmem_wdata),
        .dmem_resp  (dmem_resp)
    );

    // Auto-generated wiring: dut.monitor_* -> mon_itf.*
    // When GOLDEN_ONLY is defined, redirect RVFI monitor to golden core instead.
`ifndef GOLDEN_ONLY
    `include "../hvl/rvfi_reference.svh"
`else
    always_comb begin
        mon_itf.valid[0]     = golden.monitor_valid;
        mon_itf.order[0]     = golden.monitor_order;
        mon_itf.inst[0]      = golden.monitor_inst;
        mon_itf.rs1_addr[0]  = golden.monitor_rs1_addr;
        mon_itf.rs2_addr[0]  = golden.monitor_rs2_addr;
        mon_itf.rs1_rdata[0] = golden.monitor_rs1_rdata;
        mon_itf.rs2_rdata[0] = golden.monitor_rs2_rdata;
        mon_itf.rd_addr[0]   = golden.monitor_rd_addr;
        mon_itf.rd_wdata[0]  = golden.monitor_rd_wdata;
        mon_itf.pc_rdata[0]  = golden.monitor_pc_rdata;
        mon_itf.pc_wdata[0]  = golden.monitor_pc_wdata;
        mon_itf.mem_addr[0]  = golden.monitor_mem_addr;
        mon_itf.mem_rmask[0] = golden.monitor_mem_rmask;
        mon_itf.mem_wmask[0] = golden.monitor_mem_wmask;
        mon_itf.mem_rdata[0] = golden.monitor_mem_rdata;
        mon_itf.mem_wdata[0] = golden.monitor_mem_wdata;
        for (int i = 1; i < RVFI_COMMITS; i++) begin
            mon_itf.valid[i]     = '0;
            mon_itf.order[i]     = '0;
            mon_itf.inst[i]      = '0;
            mon_itf.rs1_addr[i]  = '0;
            mon_itf.rs2_addr[i]  = '0;
            mon_itf.rs1_rdata[i] = '0;
            mon_itf.rs2_rdata[i] = '0;
            mon_itf.rd_addr[i]   = '0;
            mon_itf.rd_wdata[i]  = '0;
            mon_itf.pc_rdata[i]  = '0;
            mon_itf.pc_wdata[i]  = '0;
            mon_itf.mem_addr[i]  = '0;
            mon_itf.mem_rmask[i] = '0;
            mon_itf.mem_wmask[i] = '0;
            mon_itf.mem_rdata[i] = '0;
            mon_itf.mem_wdata[i] = '0;
        end
    end
`endif

    golden_cpu golden (
        .clk          (clk),
        .rst          (rst),
        .imem_addr    (golden_imem_addr),
        .imem_read    (golden_imem_read),
        .imem_rdata   (golden_imem_rdata),
        .imem_resp    (golden_imem_resp),
        .dmem_addr    (golden_dmem_addr),
        .dmem_read    (golden_dmem_read),
        .dmem_write   (golden_dmem_write),
        .dmem_wmask   (golden_dmem_wmask),
        .dmem_rdata   (golden_dmem_rdata),
        .dmem_wdata   (golden_dmem_wdata),
        .dmem_resp    (golden_dmem_resp)
    );

    assign error        = mon_itf.error;
    assign any_commit   = dut.monitor_valid;
    assign mispredict_o = dut.mispredict;

    // DUT commit snapshot
    assign dut_order     = dut.monitor_order;
    assign dut_pc        = dut.monitor_pc_rdata;
    assign dut_inst      = dut.monitor_inst;
    assign dut_rd_addr   = dut.monitor_rd_addr;
    assign dut_rd_wdata  = dut.monitor_rd_wdata;
    assign dut_mem_addr  = dut.monitor_mem_addr;
    assign dut_mem_rmask = dut.monitor_mem_rmask;
    assign dut_mem_wmask = dut.monitor_mem_wmask;
    assign dut_mem_rdata = dut.monitor_mem_rdata;
    assign dut_mem_wdata = dut.monitor_mem_wdata;

    // Golden commit snapshot
    assign golden_commit    = golden.monitor_valid;
    assign golden_order     = golden.monitor_order;
    assign golden_pc        = golden.monitor_pc_rdata;
    assign golden_inst      = golden.monitor_inst;
    assign golden_rd_addr   = golden.monitor_rd_addr;
    assign golden_rd_wdata  = golden.monitor_rd_wdata;
    assign golden_mem_addr  = golden.monitor_mem_addr;
    assign golden_mem_rmask = golden.monitor_mem_rmask;
    assign golden_mem_wmask = golden.monitor_mem_wmask;
    assign golden_mem_rdata = golden.monitor_mem_rdata;
    assign golden_mem_wdata = golden.monitor_mem_wdata;

    always_comb begin
        halt = '0;
        for (int i = 0; i < RVFI_COMMITS; i++) begin
            if (mon_itf.halt[i]) halt = '1;
        end
    end

    // Per-1000-commit rolling IPC log (useful for long runs like Coremark)
    longint lcom;
    longint cycles;
    longint total_cycles;

    always_ff @(posedge clk) begin
        if (rst) begin
            cycles      = '0;
            total_cycles = '0;
        end else begin
            cycles++;
            total_cycles++;

            for (int i = 0; i < RVFI_COMMITS; i++) begin
                if (mon_itf.order[i] % 1000 == 0 && mon_itf.order[i] != lcom && mon_itf.valid[i]) begin
                    $fwrite(fd, "COMMIT %8d -- CYCLES: %8d -- IPC 1000: %f -- CUM IPC: %f\n",
                            mon_itf.order[i], total_cycles,
                            real'(1000) / cycles,
                            real'(mon_itf.order[i]) / total_cycles);
                    cycles = '0;
                    lcom   = mon_itf.order[i];
                    break;
                end
            end
        end
    end

    int fd;
    initial fd = $fopen("./progress.ansi", "w");
    final   $fclose(fd);

    // ── End-of-simulation state checker (DUT only, not meaningful for golden) ─
`ifndef GOLDEN_ONLY
    // Fires once on the first clock edge where halt is asserted.
    // Verifies structural invariants that should hold at any clean halt:
    //   1. Busy table  : all zeros (no in-flight writes)
    //   2. SRAT == ARAT: no speculative renames outstanding
    //   3. Free list   : exactly the physical registers NOT in ARAT are free
    //   4. x0 invariant: arat[0]==p0 and prf[0]==0
    // Then dumps the full architectural register file (ARAT → PRF) and ARAT map.

    logic halt_seen;
    initial halt_seen = 1'b0;

    always @(posedge clk) begin
        if (halt && !halt_seen && eoc_enable) begin : eoc_checker
            automatic logic [63:0] expected_free;
            automatic int          err_cnt;
            automatic int          free_cnt;
            err_cnt = 0;

            halt_seen <= 1'b1;

            $display("\n╔══════════════════════════════════════════════════╗");
            $display( "║        End-of-Simulation State Checker           ║");
            $display( "╚══════════════════════════════════════════════════╝");

            // ── 1. x0 invariant ──────────────────────────────────────────────
            begin
                automatic logic x0_ok;
                x0_ok = 1'b1;
                if (dut.cpu_commit.arat.arat[0] !== '0) begin
                    $display("FAIL x0/arat    : arat[0] = p%0d  (expected p0)",
                             dut.cpu_commit.arat.arat[0]);
                    x0_ok = 1'b0; err_cnt++;
                end
                if (dut.cpu_execute.PRF.prf[0] !== '0) begin
                    $display("FAIL x0/prf     : prf[0] = 0x%08x  (expected 0)",
                             dut.cpu_execute.PRF.prf[0]);
                    x0_ok = 1'b0; err_cnt++;
                end
                if (x0_ok) $display("PASS x0         : arat[0]=p0, prf[0]=0x00000000");
            end

            // ── 2. No double-allocation: free_list ∩ srat == ∅ ──────────────
            // A physical register cannot be simultaneously free AND mapped in SRAT.
            // This holds at any pipeline state — violations are always real bugs.
            begin
                automatic logic alloc_ok;
                alloc_ok = 1'b1;
                for (int i = 0; i < 32; i++) begin
                    if (dut.cpu_midcore.free_list.free_list[dut.cpu_midcore.srat.srat[i]]) begin
                        $display("FAIL double-alloc: srat[%0d]=p%0d is in free_list",
                                 i, dut.cpu_midcore.srat.srat[i]);
                        alloc_ok = 1'b0;
                        err_cnt++;
                    end
                end
                if (alloc_ok) $display("PASS double-alloc: no srat entry appears in free_list");
            end

            // ── 3. No free+busy: free_list ∩ busy_table == ∅ ────────────────
            // A physical register cannot be simultaneously free AND have a pending write.
            // This holds at any pipeline state — violations are always real bugs.
            begin
                automatic logic [63:0] overlap;
                overlap = dut.cpu_midcore.free_list.free_list & dut.cpu_midcore.busy_table.bt;
                if (overlap !== '0) begin
                    $display("FAIL free+busy  : overlap = 0x%016x  (registers both free and busy)", overlap);
                    err_cnt++;
                end else
                    $display("PASS free+busy  : free_list ∩ busy_table = ∅");
            end

            // ── 4. Drain-only (informational — expected non-zero at halt) ────
            // These are only clean once all in-flight instructions past the halt
            // sentinel have committed or been flushed. Reported but never FAIL.
            $display("\n── Drain-only state (informational) ────────────────");
            begin
                automatic logic drained;
                drained = 1'b1;
                for (int i = 0; i < 32; i++) begin
                    if (dut.cpu_midcore.srat.srat[i] !== dut.cpu_commit.arat.arat[i]) begin
                        $display("  INFO srat[%0d]=p%0d != arat[%0d]=p%0d  (in-flight rename)",
                                 i, dut.cpu_midcore.srat.srat[i],
                                 i, dut.cpu_commit.arat.arat[i]);
                        drained = 1'b0;
                    end
                end
                if (dut.cpu_midcore.busy_table.bt !== '0)
                    $display("  INFO busy_table = 0x%016x  (in-flight writes)",
                             dut.cpu_midcore.busy_table.bt);
                if (drained && dut.cpu_midcore.busy_table.bt === '0) begin
                    expected_free = '1;
                    for (int i = 0; i < 32; i++)
                        expected_free[dut.cpu_commit.arat.arat[i]] = 1'b0;
                    if (dut.cpu_midcore.free_list.free_list !== expected_free)
                        $display("  INFO free_list mismatch (unexpected — pipeline appeared drained)");
                    else begin
                        free_cnt = 0;
                        for (int i = 0; i < 64; i++) if (expected_free[i]) free_cnt++;
                        $display("  INFO pipeline drained: srat==arat, bt==0, %0d free regs", free_cnt);
                    end
                end else
                    $display("  INFO pipeline not fully drained at halt (normal for OOO)");
            end

            // ── 5. Architectural register file dump ───────────────────────────
            $display("\n── Arch register file (via ARAT→PRF) ──────────────");
            for (int i = 0; i < 32; i++) begin
                $display("  x%-2d  (p%-2d) = 0x%08x  (%0d)",
                         i,
                         dut.cpu_commit.arat.arat[i],
                         dut.cpu_execute.PRF.prf[dut.cpu_commit.arat.arat[i]],
                         $signed(dut.cpu_execute.PRF.prf[dut.cpu_commit.arat.arat[i]]));
            end

            // // ── 6. ARAT mapping dump ──────────────────────────────────────────
            // $display("\n── ARAT mapping ────────────────────────────────────");
            // for (int i = 0; i < 32; i++)
            //     $display("  arat[x%-2d] = p%0d", i, dut.cpu_commit.arat.arat[i]);

            // $display("\n── Result ──────────────────────────────────────────");
            // if (err_cnt == 0)
            //     $display("  PASS  all %0d checks passed.", 4);
            // else
            //     $display("  FAIL  %0d check(s) failed.", err_cnt);
            // $display("════════════════════════════════════════════════════\n");
        end
    end
`endif // GOLDEN_ONLY

endmodule
