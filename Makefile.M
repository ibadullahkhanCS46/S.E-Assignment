build.Makefile
# Makefile for Calculator

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c99

# Source files
SRCS = calculator.c main.c

# Object files
OBJS = $(SRCS:.c=.o)

# Executable file
TARGET = calculator

# Default target
all: $(TARGET)

# Linking object files
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compiling source files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean the generated files
clean:
	rm -f $(OBJS) $(TARGET)
