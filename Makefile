# Define the compiler and compiler flags
CC = clang
CFLAGS = -Wall -Werror

# Find all subdirectories and exclude the experiments directory
SUBDIRS := $(filter-out experiments/, $(wildcard */))

# Define the target executables, one for each subdirectory
TARGETS := $(SUBDIRS:%=%main)

# Default target: build all executables
all: $(TARGETS)

# Rule to build each executable
%main: %main.c
	$(CC) $(CFLAGS) -o $@ $<

# Clean up all generated executables
clean:
	rm -f $(TARGETS)


