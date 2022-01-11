// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Decode.h for the primary calling header

#ifndef _DECODE___024UNIT_H_
#define _DECODE___024UNIT_H_  // guard

#include "verilated.h"

//==========

class Decode__Syms;
class Decode_VerilatedVcd;


//----------

VL_MODULE(Decode___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Decode__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Decode___024unit);  ///< Copying not allowed
  public:
    Decode___024unit(const char* name = "TOP");
    ~Decode___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(Decode__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
