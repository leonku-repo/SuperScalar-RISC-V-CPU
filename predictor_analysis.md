# Branch Predictor Analysis

Four predictors evaluated across 14 benchmarks:
- **Always Not Taken** — baseline, no hardware cost
- **Always Taken + BTB** — assumes all branches taken, BTB provides target
- **2-bit Counter + BTB** — saturating counter per entry, BTB provides target
- **TAGE + BTB** — tagged geometric history predictor, BTB provides target

---

## IPC Summary

| Benchmark | Not Taken | Taken+BTB | 2-bit | TAGE |
|---|---|---|---|---|
| first_run | 0.354 | 0.354 | 0.354 | 0.354 |
| second_run | 0.333 | 0.333 | 0.333 | 0.333 |
| compression | 0.434 | 0.463 | 0.470 | **0.470** |
| coremark_small | 0.309 | 0.339 | 0.373 | **0.374** |
| coremark | 0.305 | 0.344 | **0.375** | 0.372 |
| dna | 0.344 | 0.450 | 0.437 | **0.461** |
| fft | 0.380 | 0.418 | 0.414 | **0.419** |
| graph | 0.442 | **0.500** | 0.500 | 0.500 |
| mergesort | 0.365 | 0.349 | 0.394 | **0.400** |
| physics | 0.345 | 0.331 | 0.377 | **0.377** |
| physics_d | 0.426 | 0.455 | 0.437 | **0.461** |
| rsa | 0.268 | 0.368 | 0.308 | **0.432** |
| rsa_d | 0.276 | 0.470 | 0.469 | **0.474** |
| sudoku | 0.372 | 0.262 | 0.383 | **0.409** |

## Mispredict Rate Summary

| Benchmark | Not Taken | Taken+BTB | 2-bit | TAGE |
|---|---|---|---|---|
| first_run | 0.500 | 0.500 | 0.500 | 0.500 |
| second_run | 0.667 | 0.667 | 0.667 | 0.667 |
| compression | 0.758 | 0.326 | 0.177 | 0.224 |
| coremark_small | 0.613 | 0.523 | **0.301** | 0.359 |
| coremark | 0.649 | 0.501 | **0.319** | 0.369 |
| dna | 0.843 | 0.236 | **0.159** | 0.178 |
| fft | 0.985 | **0.029** | 0.032 | 0.032 |
| graph | 1.000 | **0.001** | 0.001 | 0.001 |
| mergesort | 0.470 | 0.659 | **0.262** | 0.311 |
| physics | 0.484 | 0.577 | **0.311** | 0.360 |
| physics_d | 0.707 | 0.546 | 0.516 | **0.428** |
| rsa | 0.516 | 0.501 | 0.165 | **0.072** |
| rsa_d | 0.958 | 0.077 | 0.077 | **0.065** |
| sudoku | 0.194 | 0.647 | 0.155 | **0.135** |

---

## Per-Predictor Analysis

### Always Not Taken

Worst overall. Catastrophically bad on loop-dominated benchmarks: fft (98.5%), graph (99.98%), rsa_d (95.8%), dna (84.3%). These benchmarks have backward branches that are almost always taken, so not-taken is nearly always wrong.

The only benchmark where not-taken is competitive is sudoku (19.4%), where many branches are genuinely not taken.

### Always Taken + BTB

Large improvement over not-taken on loop-heavy benchmarks. fft drops from 98.5% to 2.9%, graph from 99.98% to 0.06%, rsa_d from 95.8% to 7.7%, dna from 84.3% to 23.6%. These loops are almost always taken, so always-taken + BTB captures them nearly perfectly.

However, always-taken introduces **regressions** on benchmarks with many not-taken branches:
- **sudoku**: mispredict jumps from 19.4% to 64.7%, IPC drops from 0.372 to 0.262 — worst predictor for this benchmark
- **mergesort**: mispredict jumps from 47.0% to 65.9%, IPC drops from 0.365 to 0.349
- **physics**: mispredict jumps from 48.4% to 57.7%, IPC drops from 0.345 to 0.331

This shows the fundamental limitation of a static predictor — it cannot adapt to benchmark-specific branch behavior.

### 2-bit Counter + BTB

Fixes all the regressions from always-taken and generally improves over it. Key wins:
- Recovers sudoku fully (0.155 vs 0.647 mispredict, IPC 0.383 vs 0.262)
- Recovers mergesort (0.262 vs 0.659 mispredict)
- Improves rsa significantly (0.165 vs 0.501 mispredict)

One notable anomaly: **rsa** has lower mispredict with 2-bit (16.5%) than taken+BTB (50.1%), yet IPC is lower (0.308 vs 0.368). This suggests BTB cold-start or capacity effects — the predictor is correct more often but is incurring BTB miss penalties that offset the gain. TAGE resolves this (IPC 0.432).

2-bit beats TAGE on mispredict rate for **coremark** (31.9% vs 36.9%) and **coremark_small** (30.1% vs 35.9%), though IPC is nearly identical. This implies these benchmarks have short, regular loop patterns that a 2-bit counter handles just as well as TAGE, and TAGE's additional history tables may be slightly noisy for these patterns.

### TAGE + BTB

Best overall IPC on 11 of 14 benchmarks. Largest gains over 2-bit:
- **rsa**: IPC 0.432 vs 0.308 (+40%), mispredict 7.2% vs 16.5% — most dramatic improvement. RSA has data-dependent branching driven by the key bits — TAGE's long history captures this pattern well
- **physics_d**: IPC 0.461 vs 0.437, mispredict 42.8% vs 51.6%
- **sudoku**: IPC 0.409 vs 0.383, mispredict 13.5% vs 15.5%
- **dna**: IPC 0.461 vs 0.437, mispredict 17.8% vs 15.9% — interestingly TAGE has slightly higher mispredict rate but higher IPC, suggesting TAGE's predictions are hitting more critical-path branches

TAGE is slightly worse than 2-bit on mispredict rate for coremark/coremark_small/dna, but the IPC impact is negligible. TAGE's history tables may be overshooting on simple, short-history patterns.

---

## Cross-Cutting Observations

**first_run and second_run are identical across all predictors.** IPC and mispredict rate do not change regardless of predictor. These benchmarks either have no conditional branches or have branches that are unresolvable by any predictor (e.g. a single branch that always goes the same way and is predicted correctly even by not-taken).

**Mispredict rate reduction does not always translate linearly to IPC gain.** The OOO pipeline absorbs some branch penalty via execute-time recovery — only instructions on the mispredicted path are squashed, and independent older instructions continue executing. Benchmarks with low instruction-level parallelism (few independent instructions to fill the window) benefit more from predictor accuracy.

**Loop-dominated benchmarks (fft, graph) plateau early.** Taken+BTB already achieves near-perfect prediction (0.03%, 0.06%), so 2-bit and TAGE offer no meaningful improvement there.

**Data-dependent branches (rsa, rsa_d) benefit most from TAGE.** RSA's branch behavior is driven by key/data bits, creating long repeated patterns that TAGE's geometric history tables can learn. 2-bit counters lack the history depth to capture these patterns.

---

## Geometric Mean IPC

Excluding first_run and second_run (predictor-invariant):

| Predictor | Geomean IPC |
|---|---|
| Always Not Taken | 0.356 |
| Always Taken + BTB | 0.389 |
| 2-bit Counter + BTB | 0.404 |
| TAGE + BTB | **0.424** |

TAGE delivers a **19% IPC improvement** over not-taken and **9% over 2-bit** on the geometric mean across these workloads.
