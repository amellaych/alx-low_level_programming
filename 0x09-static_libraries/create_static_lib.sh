#!/bin/bash
gcc -wall -wextra -pendantic -c *.c
ar rc liball.a *.o
