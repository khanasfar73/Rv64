// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Decode__Syms.h"


//======================

void Decode::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Decode* t = (Decode*)userthis;
    Decode__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Decode::traceChgThis(Decode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Decode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Decode::traceChgThis__2(Decode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Decode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->command),32);
        vcdp->chgBus(c+9,(vlTOPp->inst),32);
        vcdp->chgBit(c+17,(vlTOPp->clk));
    }
}
