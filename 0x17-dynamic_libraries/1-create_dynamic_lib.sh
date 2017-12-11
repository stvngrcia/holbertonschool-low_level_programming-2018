#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -fPIC -c *.c
gcc -shared -o liball.so *.o
