PROJECT_NAME = "lab_5"

CC = gcc

CFLAGS = -Wall -Isrc -I/usr/include -c

LDFLAGS = -lgsl -lgslcblas

SRCS = src/main.c \
	src/matrix.h

OBJS = build/main.o \
	build/matrix.o

PROGRAM_NAME = $(PROJECT_NAME)
TARGET = build/$(PROGRAM_NAME)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o $@

build/%.o: src/%.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f &(OBJS) $(TARGET)