`include "echo.v"

module Testbench;

reg[511:0] data = 0;
wire [31:0] hash;
reg clk = 0;
always # 1 clk = !clk;

echo512 e(clk, data, hash);

initial begin
    $dumpfile("out/test_out.vcd");
    $dumpvars(0, Testbench);
    #1000 $finish;

end

endmodule // Testbench

