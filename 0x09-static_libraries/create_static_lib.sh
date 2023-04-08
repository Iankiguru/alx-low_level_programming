#!/bin/bash

# Compile all .c files in the current directory into .o files
gcc -c *.c

# Create the static library from the .o files
ar -rc liball.a *.o

# Index the static library
ranlib liball.a


