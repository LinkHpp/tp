#
# Generated By: dol2asm
#

M756_TARGET := $(BUILD_DIR)/rel/d/a/d_a_title.plf
M756_LDSCRIPT := $(BUILD_DIR)/rel/d/a/d_a_title.lcf
M756_MAP := $(BUILD_DIR)/rel/d/a/d_a_title.map

M756_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/d_a_title/d_a_title.cpp \

M756_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/d_a_title/d_a_title.o \

M756_LIBS := \

M756_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M756_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M756_LDSCRIPT) \
	-unused -map $(M756_MAP) \
	-w off \

$(M756_TARGET): $(M756_O_FILES) $(M756_LIBS)
	@echo [756] creating $(M756_TARGET)
	@echo $(M756_LIBS) $(M756_O_FILES) > build/M756_ofiles
	@python3 tools/lcf.py rel 756 --output $(M756_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M756_LDFLAGS) -o $(M756_TARGET) @build/M756_ofiles

$(BUILD_DIR)/rel/d/a/d_a_title/%.o: rel/d/a/d_a_title/%.cpp $(BUILD_DIR)/rel/d/a/d_a_title/%.d
	@echo [756] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M756_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M756_D_FILES := $(M756_O_FILES:.o=.d)
$(M756_D_FILES):
include $(wildcard $(M756_D_FILES))
endif


