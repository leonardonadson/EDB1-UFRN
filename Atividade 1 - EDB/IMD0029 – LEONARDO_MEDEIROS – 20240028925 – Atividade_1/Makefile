CC       := gcc
CXX      := g++
CFLAGS   := -Iinclude_c -std=c11 -Wall
CXXFLAGS := -Iinclude_cpp -std=c++17 -Wall

SRCS_C   := $(wildcard src_c/*.c)

.PHONY: all clean test_c

all: test_c

test_c: $(SRCS_C) test_c/test_algorithms.c
	$(CC) $(CFLAGS) $^ -o test_c/test_c
	./test_c/test_c

clean:
	rm -f test_c/test_c
