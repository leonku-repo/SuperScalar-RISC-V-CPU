module free_list
import rv32i_types::*;
(
    input   logic                   clk,
    input   logic                   rst,
    // give free physical register with priority encoder
    output  logic   [PRF_IDX-1:0]   free_pr,
    output  logic                   free_pr_valid,
    // update when rename done: set to 0 because register is used for renaming
    input   logic                   rename_update,
    input   logic   [PRF_IDX-1:0]   rename_update_pr,
    // update when commit done: set to 1 because old_p register is done renaming
    input   logic                   commit_update,
    input   logic   [PRF_IDX-1:0]   commit_update_pr,
    // update when mispredict: restore from arat
    input   logic                   mispredict_update,
    input   logic   [PRF_IDX-1:0]   mispredict_update_arat [32]
);
    // free bit vector
    logic   [PRF_SIZE-1:0]  free_list, free_list_next;
    logic   [PRF_SIZE-1:0]  free_list_recovery;

    // rebuild free list from arat: all free except registers currently mapped in arat
    always_comb begin
        free_list_recovery = '1;
        for (int i = 0; i < 32; i++) begin : recovery_loop
            free_list_recovery[mispredict_update_arat[i]] = 1'b0;
        end
    end

    always_ff @( posedge clk ) begin
        if(rst)
            free_list <= {{(PRF_SIZE-32){1'b1}}, 32'b0};
        else if(mispredict_update)
            free_list <= free_list_recovery;
        else if(rename_update || commit_update)
            free_list <= free_list_next;
        else    
            free_list <= free_list;
    end

    always_comb begin
        free_list_next = free_list;
        if (rename_update) free_list_next[rename_update_pr] = 1'b0;
        if (commit_update) free_list_next[commit_update_pr] = 1'b1;
    end

    always_comb begin 
        free_pr = '0;
        free_pr_valid = 1'b0;
        for(int i=0; i<PRF_SIZE; i++) begin : priority_enc
            if(free_list[i]) begin : found
                free_pr = i[PRF_IDX-1:0];
                free_pr_valid = 1'b1;
            end : found
        end : priority_enc
    end
endmodule