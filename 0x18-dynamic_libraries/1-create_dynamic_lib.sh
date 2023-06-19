#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c -fpic *.c
gcc -shared *.o -o liball.so
