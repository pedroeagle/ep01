# Exe files
BIN := bin/
# .h files
INC := inc/
# .c files
SRC := src/
# .o files
OBJ := obj/

CC := g++

CFLAGS := -W -Wall -ansi -pedantic

# Source files.
# Add all files to be used in onde project here. 

# Concatenates all files to the project.
PROG := $(wildcard src/*.c)

# Compile project. 
all: create_folders $(PROG:src/%.c=obj/%.o)
	$(CC) $(CFLAGS) obj/*.o -o bin/prog

create_folders:
	@mkdir -p $(OBJ) $(BIN)

# Generate .o files.
obj/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I./inc
	$(CC) $(CFLAGS) -c ../utils/utils.c -o obj/utils.o -I../utils

# Run the executable files.
run: bin/prog
	bin/prog

.PHONY: clean
clean:
	rm -rf obj/*
	rm -rf bin/*
