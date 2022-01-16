# pasc500

a simple compiler

## Execute

- To execute the compiler run:

~~~
flex compiler.l
bison -v -d syntax.y 
gcc -o hashtbl.o -c hashtbl.c
gcc syntax.tab.c lex.yy.c hashtbl.o -lm
./a.out pasc500test1.p
~~~