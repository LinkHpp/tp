#
# Generated By: dol2asm
#

M424_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_cowdoor.plf
M424_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_cowdoor.lcf
M424_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_cowdoor.map

M424_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/obj/d_a_obj_cowdoor/d_a_obj_cowdoor.cpp \

M424_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_cowdoor/d_a_obj_cowdoor.o \

M424_LIBS := \

M424_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M424_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M424_LDSCRIPT) \
	-unused -map $(M424_MAP) \
	-w off \

$(M424_TARGET): $(M424_O_FILES) $(M424_LIBS)
	@echo [424] creating $(M424_TARGET)
	@echo $(M424_LIBS) $(M424_O_FILES) > build/M424_ofiles
	@python3 tools/lcf.py rel 424 --output $(M424_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M424_LDFLAGS) -o $(M424_TARGET) @build/M424_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_cowdoor/%.o: rel/d/a/obj/d_a_obj_cowdoor/%.cpp $(BUILD_DIR)/rel/d/a/obj/d_a_obj_cowdoor/%.d
	@echo [424] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M424_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M424_D_FILES := $(M424_O_FILES:.o=.d)
$(M424_D_FILES):
include $(wildcard $(M424_D_FILES))
endif


