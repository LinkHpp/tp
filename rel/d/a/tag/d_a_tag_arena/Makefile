#
# Generated By: dol2asm
#

M714_TARGET := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_arena.plf
M714_LDSCRIPT := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_arena.lcf
M714_MAP := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_arena.map

M714_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/tag/d_a_tag_arena/d_a_tag_arena.cpp \

M714_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/tag/d_a_tag_arena/d_a_tag_arena.o \

M714_LIBS := \

M714_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M714_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M714_LDSCRIPT) \
	-unused -map $(M714_MAP) \
	-w off \

$(M714_TARGET): $(M714_O_FILES) $(M714_LIBS)
	@echo [714] creating $(M714_TARGET)
	@echo $(M714_LIBS) $(M714_O_FILES) > build/M714_ofiles
	@python3 tools/lcf.py rel 714 --output $(M714_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M714_LDFLAGS) -o $(M714_TARGET) @build/M714_ofiles

$(BUILD_DIR)/rel/d/a/tag/d_a_tag_arena/%.o: rel/d/a/tag/d_a_tag_arena/%.cpp $(BUILD_DIR)/rel/d/a/tag/d_a_tag_arena/%.d
	@echo [714] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M714_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M714_D_FILES := $(M714_O_FILES:.o=.d)
$(M714_D_FILES):
include $(wildcard $(M714_D_FILES))
endif


