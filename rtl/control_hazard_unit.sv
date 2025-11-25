module control_hazard_unit(
    input logic pc_src,
    input logic clk,
    output logic rst_valid
);

    always_ff @( posedge clk ) begin 
        
        if (pc_src) begin
            rst_valid <= 1'b1;
        end
        else begin
            rst_valid <= 1'b0;
        end
        
    end



endmodule

