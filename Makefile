.PHONY: emu clean-all run-emu show

MAKEFILE_PATH := $(abspath $(lastword $(MAKEFILE_LIST)))
CURR_DIR := $(dir $(MAKEFILE_PATH))

OBJ_DIR := $(CURR_DIR)/output
V_DIR := $(CURR_DIR)/src
LOG_DIR := $(CURR_DIR)/logs
V_FILES := $(shell find $(V_DIR) -name "*.v")
WAVE_VIEWER := gtkwave
LOG_FILE := $(LOG_DIR)/vlt_dump.vcd

EMU_SRC_DIR := emu
EMU_INCLUDEPATH := $(EMU_SRC_DIR)/include
EMU_TOP_MODULE := cpu_tst
EMU_MK := $(OBJ_DIR)/emu.mk
EMU_BIN := $(OBJ_DIR)/emulator
EMU_CXXFILES := $(shell find $(EMU_SRC_DIR) -name "*.cpp")
EMU_HFILES := $(shell find $(EMU_SRC_DIR) -name "*.h")
EMU_ARGC = 
TEST := add

VERILATOR_TRACE ?= true
VERILATOR_GDB ?= true
VERILATOR = verilator
# Create C++ output,Link to create executable, set top module, 
VERILATOR_FLAGS = --cc --exe --top-module $(EMU_TOP_MODULE) -O2 
# set target dir, set output execute filename, set top level class name ,set CFLAGS
VERILATOR_FLAGS += --Mdir $(OBJ_DIR) -o $(notdir $(EMU_BIN)) --prefix $(basename $(notdir $(EMU_MK)))  -CFLAGS "-I $(EMU_INCLUDEPATH) "
# trace
ifeq ($(VERILATOR_TRACE), true)
	VERILATOR_FLAGS += --trace -CFLAGS "-D __TRACE__" 
	EMU_ARGC += +trace
endif
# gdb
ifeq ($(VERILATOR_GDB), true)
	VERILATOR_FLAGS += -CFLAGS -g
endif

emu: $(EMU_BIN)
run-emu: emu
	cd testcase && $(EMU_BIN) ${EMU_ARGC} ${TEST} 

$(EMU_MK): $(V_FILES) $(EMU_CXXFILES) $(EMU_HFILES)
	@$(VERILATOR) $(VERILATOR_FLAGS) $(V_FILES) $(EMU_CXXFILES) 

$(EMU_BIN): $(EMU_MK) $(EMU_CXXFILES) $(EMU_HFILES)
	@cd $(@D) && make -s -f $(notdir $<)

clean-all:
	rm -rf $(OBJ_DIR) $(LOG_DIR)

show: run-emu
	@$(WAVE_VIEWER) $(LOG_FILE)