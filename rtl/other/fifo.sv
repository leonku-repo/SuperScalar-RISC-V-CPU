module fifo #(
    parameter data_width = 4,
    parameter fifo_size = 4,
    parameter ptr_width  = $clog2(fifo_size)
)(
    input   logic                       clk,
    input   logic                       rst,
    input   logic                       wr_en,
    input   logic                       rd_en,
    input   logic                       flush,
    input   logic   [data_width-1:0]    data_i,

    output  logic   [data_width-1:0]    data_o,
    output  logic                       empty_o,
    output  logic                       full_o
);
    //define FIFO
    logic   [data_width-1:0] mem [0:fifo_size-1];

    //ptr has additional one bit
    logic[ptr_width:0] wrPtr, wrPtrNext;
    logic[ptr_width:0] rdPtr, rdPtrNext;
  
  	// set ptr_next
    always_comb begin
        wrPtrNext = wrPtr;
        rdPtrNext = rdPtr;
        if (wr_en && !full_o) begin
            wrPtrNext = wrPtr + 1;
        end
        if (rd_en && !empty_o) begin
            rdPtrNext = rdPtr + 1;
        end
    end

    //set ptr 
    always_ff @( posedge clk ) begin 
        if(rst || flush) begin
            wrPtr <= '0;
            rdPtr <= '0;
        end
        else begin
            wrPtr <= wrPtrNext;
            rdPtr <= rdPtrNext;
        end
    end


    // enque data into fifo
    always_ff @( posedge clk ) begin
        if(rst || flush) begin
            for(int i=0; i<fifo_size; i++) begin : rst_init
                mem[i] <= '0;
            end
        end
        else if (!full_o && wr_en) begin
            mem[wrPtr[ptr_width-1:0]] <= data_i;
        end
        else begin
            mem[wrPtr[ptr_width-1:0]] <= mem[wrPtr[ptr_width-1:0]];
        end
    end

    //assign data output
    assign data_o = mem[rdPtr[ptr_width-1:0]];

    // empty
    assign empty_o = (wrPtr == rdPtr);

    //full
    assign full_o = (wrPtr[ptr_width] != rdPtr[ptr_width]) && (wrPtr[ptr_width-1:0] == rdPtr[ptr_width-1:0]);

endmodule