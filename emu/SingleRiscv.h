// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_SINGLERISCV_H_
#define VERILATED_SINGLERISCV_H_  // guard

#include "verilated.h"

class SingleRiscv__Syms;
class SingleRiscv___024root;

// This class is the main interface to the Verilated model
class SingleRiscv VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    SingleRiscv__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&done,0,0);
    VL_OUT8(&wb,0,0);
    VL_OUT(&dbg_pc,31,0);
    VL_OUT(&dbgregs_0,31,0);
    VL_OUT(&dbgregs_1,31,0);
    VL_OUT(&dbgregs_2,31,0);
    VL_OUT(&dbgregs_3,31,0);
    VL_OUT(&dbgregs_4,31,0);
    VL_OUT(&dbgregs_5,31,0);
    VL_OUT(&dbgregs_6,31,0);
    VL_OUT(&dbgregs_7,31,0);
    VL_OUT(&dbgregs_8,31,0);
    VL_OUT(&dbgregs_9,31,0);
    VL_OUT(&dbgregs_10,31,0);
    VL_OUT(&dbgregs_11,31,0);
    VL_OUT(&dbgregs_12,31,0);
    VL_OUT(&dbgregs_13,31,0);
    VL_OUT(&dbgregs_14,31,0);
    VL_OUT(&dbgregs_15,31,0);
    VL_OUT(&dbgregs_16,31,0);
    VL_OUT(&dbgregs_17,31,0);
    VL_OUT(&dbgregs_18,31,0);
    VL_OUT(&dbgregs_19,31,0);
    VL_OUT(&dbgregs_20,31,0);
    VL_OUT(&dbgregs_21,31,0);
    VL_OUT(&dbgregs_22,31,0);
    VL_OUT(&dbgregs_23,31,0);
    VL_OUT(&dbgregs_24,31,0);
    VL_OUT(&dbgregs_25,31,0);
    VL_OUT(&dbgregs_26,31,0);
    VL_OUT(&dbgregs_27,31,0);
    VL_OUT(&dbgregs_28,31,0);
    VL_OUT(&dbgregs_29,31,0);
    VL_OUT(&dbgregs_30,31,0);
    VL_OUT(&dbgregs_31,31,0);
    VL_IN64(&testcase,64,1);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    SingleRiscv___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit SingleRiscv(VerilatedContext* contextp, const char* name = "TOP");
    explicit SingleRiscv(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~SingleRiscv();
  private:
    VL_UNCOPYABLE(SingleRiscv);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
