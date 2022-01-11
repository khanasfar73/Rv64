/* verilator lint_off IMPORTSTAR */
import Spec::*;

module Decode (
    output Instruction command,
    input Instruction inst,
    input clk /* verilator clocker */
);
    always_ff @( posedge clk ) begin : CLK_TICK
        
    end

    assign command = inst;
endmodule