#!/bin/bash

# Compile each .c file into object files
for file in *.c; do
    gcc -c -Wall -fpic "$file" -o "${file%.c}.o"
done

# Link the object files into a dynamic library
gcc -shared -o liball.so *.o

# Clean up object files
rm *.o

