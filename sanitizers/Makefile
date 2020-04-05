TARGET       := foo
DEBUG_TARGET := debug
OBJS         := foo.o
SANITIZERS   := address,leak,undefined

.PHONY: all clean

all: $(TARGET)

clean:
	$(RM) $(TARGET) $(DEBUG_TARGET) $(OBJS)

$(TARGET): CFLAGS += -O3
$(TARGET): $(OBJS)
	$(LINK.c) $(OUTPUT_OPTION) $^ $(LDLIBS)

$(DEBUG_TARGET): \
	CFLAGS += -O1 -g -fno-omit-frame-pointer -fsanitize=$(SANITIZERS) 
$(DEBUG_TARGET): $(OBJS)
	$(LINK.c) $(OUTPUT_OPTION) $^ $(LDLIBS)
