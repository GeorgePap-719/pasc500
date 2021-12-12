# pasc500

a simple compiler

## Execute

- To execute the compiler run:

~~~
flex compiler.l
gcc lex.yy.c -lm
./a.out test2.p
~~~

- bison

~~~
flex compiler.l
bison -v -d syntax.y 
gcc syntax.tab.c lex.yy.c -lm
./a.out test2.p
~~~