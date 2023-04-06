#!/bin/bash

#compile all .c files to object files
gcc -c ./*.c

#archive the filves to create the librarry
ar rcs liball.a ./*.o
