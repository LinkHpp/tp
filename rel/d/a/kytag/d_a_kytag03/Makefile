#
# Generated By: dol2asm
#

M268_TARGET := $(BUILD_DIR)/rel/d/a/kytag/d_a_kytag03.plf
M268_LDSCRIPT := $(BUILD_DIR)/rel/d/a/kytag/d_a_kytag03.lcf
M268_MAP := $(BUILD_DIR)/rel/d/a/kytag/d_a_kytag03.map

M268_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/kytag/d_a_kytag03/d_a_kytag03.cpp \

M268_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/kytag/d_a_kytag03/d_a_kytag03.o \

M268_LIBS := \

M268_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M268_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M268_LDSCRIPT) \
	-unused -map $(M268_MAP) \
	-w off \

$(M268_TARGET): $(M268_O_FILES) $(M268_LIBS)
	@echo [268] creating $(M268_TARGET)
	@echo $(M268_LIBS) $(M268_O_FILES) > build/M268_ofiles
	@python3 tools/lcf.py rel 268 --output $(M268_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M268_LDFLAGS) -o $(M268_TARGET) @build/M268_ofiles

$(BUILD_DIR)/rel/d/a/kytag/d_a_kytag03/%.o: rel/d/a/kytag/d_a_kytag03/%.cpp $(BUILD_DIR)/rel/d/a/kytag/d_a_kytag03/%.d
	@echo [268] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M268_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M268_D_FILES := $(M268_O_FILES:.o=.d)
$(M268_D_FILES):
include $(wildcard $(M268_D_FILES))
endif


