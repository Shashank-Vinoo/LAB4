module InstrMem#(
    parameter DEPTH = 1024
)(
    input logic [31:0] Imem_Addr, 

    output logic [31:0] Read_Data
);

logic [31:0] instruction_memory_rom [0:DEPTH-1];
assign Read_Data = instruction_memory_rom[Imem_Addr[31:2]];

initial begin
    $display("Loading instruction memory from ");
    $readmemh("program.hex", instruction_memory_rom);
end 

endmodule

