// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBranch_PC_Adder.h for the primary calling header

#ifndef VERILATED_VBRANCH_PC_ADDER___024ROOT_H_
#define VERILATED_VBRANCH_PC_ADDER___024ROOT_H_  // guard

#include "verilated.h"

class VBranch_PC_Adder__Syms;

class VBranch_PC_Adder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN(PC,31,0);
    VL_IN(ImmOp,31,0);
    VL_OUT(branch_PC,31,0);

    // INTERNAL VARIABLES
    VBranch_PC_Adder__Syms* const vlSymsp;

    // CONSTRUCTORS
    VBranch_PC_Adder___024root(VBranch_PC_Adder__Syms* symsp, const char* name);
    ~VBranch_PC_Adder___024root();
    VL_UNCOPYABLE(VBranch_PC_Adder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
