//test.cpp
//#include "nvboard.h"     //Defines common routines
#include "verilated_vcd_c.h"
#include <stdio.h>
#include <stdlib.h>
#include "Vysyx_2204175_top.h"
#include "assert.h"

Vtop *top;

 
int main(int argc, char **argv, char **env) {
  int i;
  int clk;
  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vtop* top = new Vysyx_22040175_top;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("wave2.vcd");
  // initialize simulation inputs
  top->clk = 1;
  top->rst = 1;
  // run simulation for 100 clock periods
  for (i=0; i<20; i++) {
    top->rst = (i < 2);
    // dump variables into VCD file and toggle clock
    for (clk=0; clk<2; clk++) {
      tfp->dump (2*i+clk);
      top->clk = !top->clk;
      top->eval ();
    }
    
    if (Verilated::gotFinish())  exit(0);
  }
  tfp->close();
  exit(0);
}