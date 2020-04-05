TARGET  := foo
OBJS    := foo.o version.o
VERSION := $(shell cat VERSION 2> /dev/null)
COMMIT  := $(shell git describe --always --tags --dirty 2> /dev/null)
VFLAGS  := $(if $(VERSION),-DFOO_VERSION=\"$(VERSION)\") \
	$(if $(COMMIT),-DFOO_COMMIT=\"$(COMMIT)\")

.PHONY: all clean

all: $(TARGET)

clean: 
	$(RM) $(TARGET) $(OBJS)

$(TARGET): $(OBJS)

foo.o: foo.c version.h

version.o: CFLAGS += $(VFLAGS)
version.o: version.c version.h VERSION
