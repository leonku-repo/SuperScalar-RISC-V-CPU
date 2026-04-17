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
    // update when execute-time mispredict: free wrong-path allocated PRs
    input   logic                   exec_mispredict,
    input   logic   [ROB_IDX-1:0]   exec_mispredict_rob_idx,
    input   logic   [PRF_SIZE-1:0]  recover_alloc_list,
    // update when spec-load mispredict: free wrong-path allocated PRs
    input   logic                   spec_load_mispredict,
    input   logic   [ROB_IDX-1:0]   spec_load_rob_idx,
    input   logic   [PRF_SIZE-1:0]  spec_load_recover_alloc_list,
    input   logic   [ROB_IDX-1:0]   rdPtr
);
    // free bit vector
    logic   [PRF_SIZE-1:0]  free_list, free_list_next;

    always_ff @( posedge clk ) begin
        if(rst)
            free_list <= {{(PRF_SIZE-32){1'b1}}, 32'b0};
        else if(exec_mispredict && spec_load_mispredict)
            // Both fire: pick the older recovery point's alloc_list (superset of the younger's).
            free_list <= free_list
                       | ((ROB_IDX'(exec_mispredict_rob_idx - rdPtr) <= ROB_IDX'(spec_load_rob_idx - rdPtr))
                          ? recover_alloc_list : spec_load_recover_alloc_list)
                       | (commit_update ? (PRF_SIZE'(1) << commit_update_pr) : '0);
        else if(exec_mispredict)
            // OR in alloc_list to free every PR stolen by the wrong-path renames.
            // Current free_list already reflects valid commits, so no snapshot needed.
            free_list <= free_list | recover_alloc_list | (commit_update ? (PRF_SIZE'(1) << commit_update_pr) : '0);
        else if(spec_load_mispredict)
            free_list <= free_list | spec_load_recover_alloc_list | (commit_update ? (PRF_SIZE'(1) << commit_update_pr) : '0);
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