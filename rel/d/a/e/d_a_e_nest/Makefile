#
# Generated By: dol2asm
#

M69_TARGET := $(BUILD_DIR)/rel/d/a/e/d_a_e_nest.plf
M69_LDSCRIPT := $(BUILD_DIR)/rel/d/a/e/d_a_e_nest.lcf
M69_MAP := $(BUILD_DIR)/rel/d/a/e/d_a_e_nest.map

M69_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/e/d_a_e_nest/d_a_e_nest.cpp \

M69_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/e/d_a_e_nest/d_a_e_nest.o \

M69_LIBS := \

M69_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M69_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M69_LDSCRIPT) \
	-unused -map $(M69_MAP) \
	-w off \

$(M69_TARGET): $(M69_O_FILES) $(M69_LIBS)
	@echo [ 69] creating $(M69_TARGET)
	@echo $(M69_LIBS) $(M69_O_FILES) > build/M69_ofiles
	@python3 tools/lcf.py rel 69 --output $(M69_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M69_LDFLAGS) -o $(M69_TARGET) @build/M69_ofiles

$(BUILD_DIR)/rel/d/a/e/d_a_e_nest/%.o: rel/d/a/e/d_a_e_nest/%.cpp $(BUILD_DIR)/rel/d/a/e/d_a_e_nest/%.d
	@echo [ 69] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M69_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M69_D_FILES := $(M69_O_FILES:.o=.d)
$(M69_D_FILES):
include $(wildcard $(M69_D_FILES))
endif


