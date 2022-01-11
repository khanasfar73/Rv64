// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Decode__Syms.h"


//======================

void Decode::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Decode::traceInit, &Decode::traceFull, &Decode::traceChg, this);
}
void Decode::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Decode* t = (Decode*)userthis;
    Decode__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Decode::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Decode* t = (Decode*)userthis;
    Decode__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Decode::traceInitThis(Decode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Decode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Decode::traceFullThis(Decode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Decode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Decode::traceInitThis__1(Decode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Decode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+1,"command", false,-1, 31,0);
        vcdp->declBus(c+9,"inst", false,-1, 31,0);
        vcdp->declBit(c+17,"clk", false,-1);
        vcdp->declBus(c+1,"Decode command", false,-1, 31,0);
        vcdp->declBus(c+9,"Decode inst", false,-1, 31,0);
        vcdp->declBit(c+17,"Decode clk", false,-1);
        vcdp->declBus(c+25,"Spec INST_LENGTH", false,-1, 31,0);
    }
}

void Decode::traceFullThis__1(Decode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Decode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->command),32);
        vcdp->fullBus(c+9,(vlTOPp->inst),32);
        vcdp->fullBit(c+17,(vlTOPp->clk));
        vcdp->fullBus(c+25,(0x1fU),32);
    }
}
