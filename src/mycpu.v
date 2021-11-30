// 这个可以根据自己的需求修改
module rv32is(
	input 	clock,
	input 	reset,
	output [31:0] imemaddr,			//imem的地址
	input  [31:0] imemdataout,	//imem读取到的数据
	output 	imemclk,						//imem的时钟
	output [31:0] dmemaddr,			//dmem的地址
	input  [31:0] dmemdataout,	//dmem读取到的数据
	output [31:0] dmemdatain,		//需要写入dmem的数据
	output 	dmemrdclk,					//dmem读口时钟
	output	dmemwrclk,					//dmem写口时钟
	output [2:0] dmemop,				//3'b000:sb 3'b001:sh 3'b010://sw
	output	dmemwe,							//dmem写有效
	output [31:0] dbg_pc,				//当前完成的指令的PC
	output done,								//读取到Instr为0时认为程序结束
	output wb										//当前周期是否有指令完成
);//add your code here

endmodule