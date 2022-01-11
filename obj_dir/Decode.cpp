// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Decode.h for the primary calling header

#include "Decode.h"
#include "Decode__Syms.h"

//==========

VL_CTOR_IMP(Decode) {
    Decode__Syms* __restrict vlSymsp = __VlSymsp = new Decode__Syms(this, name());
    Decode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Decode::__Vconfigure(Decode__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Decode::~Decode() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void Decode::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Decode::eval\n"); );
    Decode__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Decode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Decode.sv", 4, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Decode::_eval_initial_loop(Decode__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Decode.sv", 4, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Decode::_combo__TOP__1(Decode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Decode::_combo__TOP__1\n"); );
    Decode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->command = vlTOPp->inst;
}

void Decode::_eval(Decode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Decode::_eval\n"); );
    Decode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Decode::_eval_initial(Decode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Decode::_eval_initial\n"); );
    Decode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Decode::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Decode::final\n"); );
    // Variables
    Decode__Syms* __restrict vlSymsp = this->__VlSymsp;
    Decode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Decode::_eval_settle(Decode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Decode::_eval_settle\n"); );
    Decode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Decode::_change_request(Decode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Decode::_change_request\n"); );
    Decode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Decode::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Decode::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG

void Decode::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Decode::_ctor_var_reset\n"); );
    // Body
    command = 0;
    inst = 0;
    clk = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
