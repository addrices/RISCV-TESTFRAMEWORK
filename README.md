# RISCV-TESTFRAMEWORK

## 安装方法
```
git clone 

sudo apt-get install verilator
```

## 你的工作
在mycpu.v这个文件中添加你的cpu逻辑。在当前目录下运行```make run-emu```进行测试。

## 框架原理
我提供了一个正确的单周期CPU实现的Verilator编译版本，将mycpu实现之后，在每个周期结束时将会把双方执行的指令以及寄存器堆的值逐一比对，及时检查出错误。

## 接口说明
查阅注释。

makefile文件可以通过```make xxx -nb```查阅其需要的指令。执行流程是先将我们实现的CPU使用Verilator编译成c++代码,然后main.cpp中会调用SingleRiscv和mycpu对测试进行比对。在Makefile中的第12行TEST修改为待测用例。

所有mem的读行为延后一个周期，配合板上使用bram实现。

cpu_shell中提供了instr_mem和data_mem的初始化，最好阅读一下理解原理。

## Debug
在实现的模块中添加```$display()```语句打印出相关信息。