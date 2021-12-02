# RISCV-TESTFRAMEWORK

## 安装方法

```
git clone https://github.com/addrices/RISCV-TESTFRAMEWORK

sudo apt-get install verilator
```

安装riscv编译链(riscv32-unknown-elf-xxx)
```
git clone --recursive https://github.com/riscv/riscv-gnu-toolchain

cd riscv-gnu-toolchain

../configure --prefix=/opt/riscv32 --with-arch=rv32imc --with-abi=ilp32

sudo make linux
```

编译riscv-test()
```
```


注意使用的 verilator 版本为 3.916，ubuntu18.04 的源可以用的。

## 你的工作

在 mycpu.v 这个文件中添加你的 cpu 逻辑。在当前目录下运行`make run-emu`进行测试。

## 框架原理

我提供了一个正确的单周期 CPU 实现的 Verilator 编译版本，将 mycpu 实现之后，在每个周期结束时将会把双方执行的指令以及寄存器堆的值逐一比对，及时检查出错误。

## 接口说明

查阅注释。

makefile 文件可以通过`make xxx -nb`查阅其需要的指令。执行流程是先将我们实现的 CPU 使用 Verilator 编译成 c++代码,然后 main.cpp 中会调用 SingleRiscv 和 mycpu 对测试进行比对。在 Makefile 中的第 12 行 TEST 修改为待测用例。

所有 mem 的读行为延后一个周期，配合板上使用 bram 实现。

cpu_shell 中提供了 instr_mem 和 data_mem 的初始化，最好阅读一下理解原理。

## 注意事项
1. 额外支持一条空指令0xdead10cc，当读取到此指令时，CPU停滞在该指令，不做任何操作。

2. cpu每完成一条指令的写回，拉高wb信号，并在dbg_pc上输出该指令的PC。

3. cpu的pc的起始地址为0x80000000

## Debug

在实现的模块中添加`$display()`语句打印出相关信息。
