TARGET := foo
SRCS   := $(wildcard src/*.c)
OBJS   := $(SRCS:.c=.o)
DEPS   := $(OBJS:.o=.d)
CFLAGS := -MMD -MP

.PHONY: all clean

all: $(TARGET)

clean:
	$(RM) $(TARGET) $(OBJS) $(DEPS)

$(TARGET): $(OBJS)
	$(LINK.c) $(OUTPUT_OPTION) $^ $(LDLIBS)

-include $(DEPS)
