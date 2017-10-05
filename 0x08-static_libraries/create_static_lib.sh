#!/bin/bash
gcc -c -Wall -Wextra -Werror -pedantic *.c
ar rcs liball.a *.o
ranlib liball.a
