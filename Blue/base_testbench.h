#pragma once

#include <memory>
#include <string>
#include <cstdlib>

#include "verilated.h"
#include "verilated_vcd_c.h"
#include "gtest/gtest.h"
#include "VBranch_PC_Adder.h"

extern unsigned int ticks;

class BaseTestbench : public ::testing::Test
{
public:
    void SetUp() override
    {
        top = std::make_unique<VBranch_PC_Adder>();

#ifndef __APPLE__
        tfp = std::make_unique<VerilatedVcdC>();
        Verilated::traceEverOn(true);
        top->trace(tfp.get(), 99);
        tfp->open("waveform.vcd");
#endif

        initializeInputs();
    }

    void TearDown() override
    {
        top->final();
#ifndef __APPLE__
        tfp->close();
#endif
    }

    virtual void initializeInputs() = 0;

protected:
    std::unique_ptr<VBranch_PC_Adder> top;

#ifndef __APPLE__
    std::unique_ptr<VerilatedVcdC> tfp;
#endif
};
