module proc_rv64 (input clk,
                  output [31:0] mem_addr,  // address bus
                  output [31:0] mem_wdata, // data to be written
                  output [3:0] mem_wmask,  // write mask for the 4 bytes of each word
                  input [31:0] mem_rdata,  // input lines for both data and instr
                  );
    
endmodule
