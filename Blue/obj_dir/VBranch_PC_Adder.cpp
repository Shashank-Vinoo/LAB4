// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBranch_PC_Adder.h"
#include "VBranch_PC_Adder__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VBranch_PC_Adder::VBranch_PC_Adder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VBranch_PC_Adder__Syms(contextp(), _vcname__, this)}
    , PC{vlSymsp->TOP.PC}
    , ImmOp{vlSymsp->TOP.ImmOp}
    , branch_PC{vlSymsp->TOP.branch_PC}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VBranch_PC_Adder::VBranch_PC_Adder(const char* _vcname__)
    : VBranch_PC_Adder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VBranch_PC_Adder::~VBranch_PC_Adder() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VBranch_PC_Adder___024root___eval_initial(VBranch_PC_Adder___024root* vlSelf);
void VBranch_PC_Adder___024root___eval_settle(VBranch_PC_Adder___024root* vlSelf);
void VBranch_PC_Adder___024root___eval(VBranch_PC_Adder___024root* vlSelf);
#ifdef VL_DEBUG
void VBranch_PC_Adder___024root___eval_debug_assertions(VBranch_PC_Adder___024root* vlSelf);
#endif  // VL_DEBUG
void VBranch_PC_Adder___024root___final(VBranch_PC_Adder___024root* vlSelf);

static void _eval_initial_loop(VBranch_PC_Adder__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VBranch_PC_Adder___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VBranch_PC_Adder___024root___eval_settle(&(vlSymsp->TOP));
        VBranch_PC_Adder___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VBranch_PC_Adder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBranch_PC_Adder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBranch_PC_Adder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VBranch_PC_Adder___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VBranch_PC_Adder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VBranch_PC_Adder::final() {
    VBranch_PC_Adder___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VBranch_PC_Adder::hierName() const { return vlSymsp->name(); }
const char* VBranch_PC_Adder::modelName() const { return "VBranch_PC_Adder"; }
unsigned VBranch_PC_Adder::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VBranch_PC_Adder::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VBranch_PC_Adder___024root__trace_init_top(VBranch_PC_Adder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBranch_PC_Adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBranch_PC_Adder___024root*>(voidSelf);
    VBranch_PC_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VBranch_PC_Adder___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VBranch_PC_Adder___024root__trace_register(VBranch_PC_Adder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBranch_PC_Adder::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBranch_PC_Adder___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
