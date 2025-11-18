// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBranch_PC_Adder__Syms.h"


void VBranch_PC_Adder___024root__trace_chg_sub_0(VBranch_PC_Adder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VBranch_PC_Adder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_PC_Adder___024root__trace_chg_top_0\n"); );
    // Init
    VBranch_PC_Adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBranch_PC_Adder___024root*>(voidSelf);
    VBranch_PC_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VBranch_PC_Adder___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VBranch_PC_Adder___024root__trace_chg_sub_0(VBranch_PC_Adder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VBranch_PC_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_PC_Adder___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgIData(oldp+0,(vlSelf->PC),32);
    bufp->chgIData(oldp+1,(vlSelf->ImmOp),32);
    bufp->chgIData(oldp+2,(vlSelf->branch_PC),32);
}

void VBranch_PC_Adder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_PC_Adder___024root__trace_cleanup\n"); );
    // Init
    VBranch_PC_Adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBranch_PC_Adder___024root*>(voidSelf);
    VBranch_PC_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
