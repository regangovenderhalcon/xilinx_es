#******************************************************************************
#* Copyright (c) 2020 - 2021 Xilinx, Inc.  All rights reserved.
#* SPDX-License-Identifier: MIT
#******************************************************************************

DRIVER_LIB_VERSION = 1.0

PROCESSOR = imgsel_bsp/psu_cortexa53_0
LTO_FLAGS := -Wall -Wextra -fno-tree-loop-distribute-patterns
OTHER_FLAGS = -mfpu=vfpv3 -mfloat-abi=hard
LTO_ARMCLANG_FLAGS = -mfpu=fp-armv8 -Wall -Wextra -march=armv8-a --target=aarch64-arm-none-eabi -Oz
LIBRARIES = ${PROCESSOR}/lib/libxil.a
BSP_MAKEFILES := $(wildcard $(PROCESSOR)/libsrc/*/src/Makefile)
SUBDIRS := $(patsubst %/Makefile, %, $(BSP_MAKEFILES))
BSP_PARALLEL_MAKEFILES := $(filter-out $(BSP_SEQUENTIAL_MAKEFILES),$(BSP_MAKEFILES))
SEQ_SUBDIRS := $(patsubst %/Makefile, %, $(BSP_SEQUENTIAL_MAKEFILES))
PAR_SUBDIRS := $(patsubst %/Makefile, %, $(BSP_PARALLEL_MAKEFILES))

ifneq (,$(findstring win,$(RDI_PLATFORM)))
 SHELL = CMD
endif

all:
	$(MAKE) --no-print-directory seq_libs
	$(MAKE) -j --no-print-directory par_libs
	$(MAKE) --no-print-directory archive
	@echo 'Finished building libraries'

include: $(addsuffix /make.include,$(SUBDIRS))

seq_libs: $(addsuffix /make.libs,$(SEQ_SUBDIRS))
	@echo 'Finished building libraries sequentially.'

par_libs: $(addsuffix /make.libs,$(PAR_SUBDIRS))
	@echo 'Finished building libraries parallelly.'
archive:
	$(CROSS_COMP)-ar -r  $(LIBRARIES) $(wildcard $(PROCESSOR)/lib/*.o)
$(PROCESSOR)/lib/libxil.a: $(PROCESSOR)/lib/libxil_init.a
	cp -f $< $@

%/make.include: $(if $(wildcard $(PROCESSOR)/lib/libxil_init.a),$(PROCESSOR)/lib/libxil.a,)
	@echo "Running Make include in $(subst /make.include,,$@)"
	$(MAKE) -C $(subst /make.include,,$@) -s include  "SHELL=$(SHELL)" "COMPILER=aarch64-none-elf-gcc" \
		"ARCHIVER=aarch64-none-elf-ar" "ASSEMBLER=aarch64-none-elf-as" "COMPILER_FLAGS=  -O2 -c" "EXTRA_COMPILER_FLAGS=-g $(LTO_FLAGS)"

%/make.libs: include
	@echo "Running Make libs in $(subst /make.libs,,$@)"
	$(MAKE) -C $(subst /make.libs,,$@) -s libs  "SHELL=$(SHELL)" "COMPILER=aarch64-none-elf-gcc" \
		"ARCHIVER=aarch64-none-elf-ar" "COMPILER_FLAGS=  -O2 -c" "EXTRA_COMPILER_FLAGS=-g $(LTO_FLAGS)"

clean:
	rm -f ${PROCESSOR}/lib/libxil.a
