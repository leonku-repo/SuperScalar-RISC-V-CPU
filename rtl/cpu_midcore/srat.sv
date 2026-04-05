module srat
import rv32i_types::*;
(
    input   logic                   clk,
    input   logic                   rst,
    // rs1 -> pr1  
    // rs2 -> pr2
    input   logic   [4:0]           rs1_i,
    input   logic   [4:0]           rs2_i,
    input   logic   [4:0]           rd_i,
    output  logic   [PRF_IDX-1:0]   pr1_o,
    output  logic   [PRF_IDX-1:0]   pr2_o,
    output  logic   [PRF_IDX-1:0]   old_pr_o,
    // update when rename done: set srat[rd] = new assigned physical register
    input   logic                   rename_update,
    input   logic   [4:0]           rename_update_ar,
    input   logic   [PRF_IDX-1:0]   rename_update_pr,
    // update when execute-time mispredict: restore from checkpoint snapshot
    input   logic                   exec_mispredict,
    input   logic   [PRF_IDX-1:0]   recover_srat    [32],
    // full registered SRAT array — forwarded to checkpoint.sv as dispatch_srat
    output  logic   [PRF_IDX-1:0]   srat_o          [32]
);
    logic [PRF_IDX-1:0] srat [32];
    logic [PRF_IDX-1:0] srat_next [32];

    always_ff @( posedge clk ) begin 
        if(rst) begin
            for(int i=0; i<32; i++) begin : rst_init
                srat[i] <= i[PRF_IDX-1:0];
            end
        end
        else if(exec_mispredict) begin
            srat <= recover_srat;
        end
        else if(rename_update) begin
            srat <= srat_next;
        end
        else begin
            srat <= srat;
        end
    end

    always_comb begin 
        srat_next = srat;
        if(rename_update)   srat_next[rename_update_ar] = rename_update_pr;
    end

    // full array output for checkpoint snapshot
    assign srat_o = srat;

    // add SRAT bypass
    assign pr1_o = (rename_update && (rs1_i == rename_update_ar)) ? rename_update_pr : srat[rs1_i];
    assign pr2_o = (rename_update && (rs2_i == rename_update_ar)) ? rename_update_pr : srat[rs2_i];
    assign old_pr_o = (rename_update && (rd_i == rename_update_ar)) ? rename_update_pr : srat[rd_i];
endmodule