#!/bin/bash
flex compiler.l
bison -v -d syntax.y
gcc -o hashtbl.o -c hashtbl.c
gcc syntax.tab.c lex.yy.c hashtbl.o -lm