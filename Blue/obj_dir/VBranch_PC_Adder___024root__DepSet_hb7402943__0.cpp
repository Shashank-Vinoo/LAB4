// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBranch_PC_Adder.h for the primary calling header

#include "verilated.h"

#include "VBranch_PC_Adder___024root.h"

VL_INLINE_OPT void VBranch_PC_Adder___024root___combo__TOP__0(VBranch_PC_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBranch_PC_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_PC_Adder___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->branch_PC = (vlSelf->PC + vlSelf->ImmOp);
}

void VBranch_PC_Adder___024root___eval(VBranch_PC_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBranch_PC_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_PC_Adder___024root___eval\n"); );
    // Body
    VBranch_PC_Adder___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void VBranch_PC_Adder___024root___eval_debug_assertions(VBranch_PC_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBranch_PC_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_PC_Adder___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
