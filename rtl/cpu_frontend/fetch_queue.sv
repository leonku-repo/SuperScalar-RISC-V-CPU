// instruction queue will have 3 data
//      - branch taken  1bit
//      - pc            32bit
//      - instruction   32bit
// full_o stops fetch from feeding new instructions
// empty_o shows decode if the entry is valid, therefore we dont need a valid bit
// when flush, just reset wr_ptr and rd_ptr

module fetch_queue
import rv32i_types::*;
(
    input   logic           clk,
    input   logic           rst,

    input   logic           wr_en,
    input   logic           rd_en,
    input   logic           flush,

    input   logic           branch_taken_i,
    input   logic   [31:0]  pc_i,
    input   logic   [31:0]  pc_next_i,
    input   logic   [31:0]  inst_i,

    output  logic           empty_o,
    output  logic           full_o,
    
    output  logic           branch_taken_o,
    output  logic   [31:0]  pc_o,
    output  logic   [31:0]  pc_next_o,
    output  logic   [31:0]  inst_o
);
    logic   branch_taken_empty, pc_empty, pc_next_empty, inst_empty;
    logic   branch_taken_full, pc_full, pc_next_full, inst_full;    

    assign empty_o = branch_taken_empty | pc_empty | inst_empty | pc_next_empty;
    assign full_o = branch_taken_full | pc_full | inst_full | pc_next_full;

    // branch_taken
    fifo #(
        .data_width(1),
        .fifo_size (FETCH_QUEUE_SIZE)
    ) branch_taken_fifo (
        .clk    (clk),
        .rst    (rst),
        .wr_en  (wr_en),
        .rd_en  (rd_en),
        .flush  (flush),
        .data_i (branch_taken_i),
        .data_o (branch_taken_o),
        .empty_o(branch_taken_empty),
        .full_o (branch_taken_full)
    );

    // pc
    fifo #(
        .data_width(32),
        .fifo_size (FETCH_QUEUE_SIZE)
    ) pc_fifo (
        .clk    (clk),
        .rst    (rst),
        .wr_en  (wr_en),
        .rd_en  (rd_en),
        .flush  (flush),
        .data_i (pc_i),
        .data_o (pc_o),
        .empty_o(pc_empty),
        .full_o (pc_full)
    );  

    // pc_next
    fifo #(
        .data_width(32),
        .fifo_size (FETCH_QUEUE_SIZE)
    ) pc_next_fifo (
        .clk    (clk),
        .rst    (rst),
        .wr_en  (wr_en),
        .rd_en  (rd_en),
        .flush  (flush),
        .data_i (pc_next_i),
        .data_o (pc_next_o),
        .empty_o(pc_next_empty),
        .full_o (pc_next_full)
    );  

    // instruction
    fifo #(
        .data_width(32),
        .fifo_size (FETCH_QUEUE_SIZE)
    ) inst_fifo (
        .clk    (clk),
        .rst    (rst),
        .wr_en  (wr_en),
        .rd_en  (rd_en),
        .flush  (flush),
        .data_i (inst_i),
        .data_o (inst_o),
        .empty_o(inst_empty),
        .full_o (inst_full)
    );     

endmodule