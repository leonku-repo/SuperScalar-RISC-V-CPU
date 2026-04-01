// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtop_tb::Vtop_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop_tb__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , dut_rst{vlSymsp->TOP.dut_rst}
    , imem_resp{vlSymsp->TOP.imem_resp}
    , imem_read{vlSymsp->TOP.imem_read}
    , dmem_resp{vlSymsp->TOP.dmem_resp}
    , dmem_read{vlSymsp->TOP.dmem_read}
    , dmem_write{vlSymsp->TOP.dmem_write}
    , dmem_wmask{vlSymsp->TOP.dmem_wmask}
    , golden_imem_resp{vlSymsp->TOP.golden_imem_resp}
    , golden_imem_read{vlSymsp->TOP.golden_imem_read}
    , golden_dmem_resp{vlSymsp->TOP.golden_dmem_resp}
    , golden_dmem_read{vlSymsp->TOP.golden_dmem_read}
    , golden_dmem_write{vlSymsp->TOP.golden_dmem_write}
    , golden_dmem_wmask{vlSymsp->TOP.golden_dmem_wmask}
    , halt{vlSymsp->TOP.halt}
    , error{vlSymsp->TOP.error}
    , any_commit{vlSymsp->TOP.any_commit}
    , mispredict_o{vlSymsp->TOP.mispredict_o}
    , eoc_enable{vlSymsp->TOP.eoc_enable}
    , dut_rd_addr{vlSymsp->TOP.dut_rd_addr}
    , dut_mem_rmask{vlSymsp->TOP.dut_mem_rmask}
    , dut_mem_wmask{vlSymsp->TOP.dut_mem_wmask}
    , golden_commit{vlSymsp->TOP.golden_commit}
    , golden_rd_addr{vlSymsp->TOP.golden_rd_addr}
    , golden_mem_rmask{vlSymsp->TOP.golden_mem_rmask}
    , golden_mem_wmask{vlSymsp->TOP.golden_mem_wmask}
    , imem_rdata{vlSymsp->TOP.imem_rdata}
    , imem_addr{vlSymsp->TOP.imem_addr}
    , dmem_rdata{vlSymsp->TOP.dmem_rdata}
    , dmem_addr{vlSymsp->TOP.dmem_addr}
    , dmem_wdata{vlSymsp->TOP.dmem_wdata}
    , golden_imem_rdata{vlSymsp->TOP.golden_imem_rdata}
    , golden_imem_addr{vlSymsp->TOP.golden_imem_addr}
    , golden_dmem_rdata{vlSymsp->TOP.golden_dmem_rdata}
    , golden_dmem_addr{vlSymsp->TOP.golden_dmem_addr}
    , golden_dmem_wdata{vlSymsp->TOP.golden_dmem_wdata}
    , dut_pc{vlSymsp->TOP.dut_pc}
    , dut_inst{vlSymsp->TOP.dut_inst}
    , dut_rd_wdata{vlSymsp->TOP.dut_rd_wdata}
    , dut_mem_addr{vlSymsp->TOP.dut_mem_addr}
    , dut_mem_rdata{vlSymsp->TOP.dut_mem_rdata}
    , dut_mem_wdata{vlSymsp->TOP.dut_mem_wdata}
    , golden_pc{vlSymsp->TOP.golden_pc}
    , golden_inst{vlSymsp->TOP.golden_inst}
    , golden_rd_wdata{vlSymsp->TOP.golden_rd_wdata}
    , golden_mem_addr{vlSymsp->TOP.golden_mem_addr}
    , golden_mem_rdata{vlSymsp->TOP.golden_mem_rdata}
    , golden_mem_wdata{vlSymsp->TOP.golden_mem_wdata}
    , dut_order{vlSymsp->TOP.dut_order}
    , golden_order{vlSymsp->TOP.golden_order}
    , top_tb{vlSymsp->TOP.top_tb}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop_tb::Vtop_tb(const char* _vcname__)
    : Vtop_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop_tb::~Vtop_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop_tb___024root___eval_debug_assertions(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_tb___024root___eval_static(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___eval_initial(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___eval_settle(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___eval(Vtop_tb___024root* vlSelf);

void Vtop_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop_tb___024root___eval_static(&(vlSymsp->TOP));
        Vtop_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vtop_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop_tb::eventsPending() { return false; }

uint64_t Vtop_tb::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop_tb___024root___eval_final(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb::final() {
    Vtop_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop_tb::hierName() const { return vlSymsp->name(); }
const char* Vtop_tb::modelName() const { return "Vtop_tb"; }
unsigned Vtop_tb::threads() const { return 1; }
void Vtop_tb::prepareClone() const { contextp()->prepareClone(); }
void Vtop_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtop_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtop_tb___024root__trace_init_top(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_tb___024root__trace_decl_types(tracep);
    Vtop_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_register(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtop_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
