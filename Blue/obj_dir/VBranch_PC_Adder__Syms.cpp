// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VBranch_PC_Adder__Syms.h"
#include "VBranch_PC_Adder.h"
#include "VBranch_PC_Adder___024root.h"

// FUNCTIONS
VBranch_PC_Adder__Syms::~VBranch_PC_Adder__Syms()
{
}

VBranch_PC_Adder__Syms::VBranch_PC_Adder__Syms(VerilatedContext* contextp, const char* namep, VBranch_PC_Adder* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
