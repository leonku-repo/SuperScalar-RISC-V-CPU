module arat
import rv32i_types::*;
(
    input   logic                       clk,
    input   logic                       rst,

    input   logic                       commit,
    input   logic                       rd_valid,
    input   logic       [4:0]           rd_arch,
    input   logic       [PRF_IDX-1:0]   rd_pr,

    output  logic       [PRF_IDX-1:0]   arat_o [32]
);
    logic [PRF_IDX-1:0] arat [32];

    always_ff @( posedge clk ) begin 
        if(rst) begin
            for(int i=0; i<32; i++) begin : rst_init
                arat[i] <= i[PRF_IDX-1:0];
            end
        end
        else if(commit && rd_valid) begin
            arat[rd_arch] <= rd_pr;
        end
        else begin
            arat <= arat;
        end
    end

    // add arat_o
    // assign arat_o = arat;
    always_comb begin
        arat_o = arat;
        if(commit && rd_valid) arat_o[rd_arch] = rd_pr;
    end
endmodule