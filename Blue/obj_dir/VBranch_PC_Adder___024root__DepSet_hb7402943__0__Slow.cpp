// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBranch_PC_Adder.h for the primary calling header

#include "verilated.h"

#include "VBranch_PC_Adder___024root.h"

VL_ATTR_COLD void VBranch_PC_Adder___024root___eval_initial(VBranch_PC_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBranch_PC_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_PC_Adder___024root___eval_initial\n"); );
}

void VBranch_PC_Adder___024root___combo__TOP__0(VBranch_PC_Adder___024root* vlSelf);

VL_ATTR_COLD void VBranch_PC_Adder___024root___eval_settle(VBranch_PC_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBranch_PC_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_PC_Adder___024root___eval_settle\n"); );
    // Body
    VBranch_PC_Adder___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void VBranch_PC_Adder___024root___final(VBranch_PC_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBranch_PC_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_PC_Adder___024root___final\n"); );
}

VL_ATTR_COLD void VBranch_PC_Adder___024root___ctor_var_reset(VBranch_PC_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBranch_PC_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_PC_Adder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->PC = VL_RAND_RESET_I(32);
    vlSelf->ImmOp = VL_RAND_RESET_I(32);
    vlSelf->branch_PC = VL_RAND_RESET_I(32);
}
