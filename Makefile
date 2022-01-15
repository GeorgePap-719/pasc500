all: pasc500

lex.yy.c: compiler.l syntax.tab.h
	flex compiler.l

syntax.tab.c syntax.tab.h: syntax.y
	bison -v -d syntax.y

pasc500: lex.yy.c syntax.tab.c syntax.tab.h hashtbl.o
	gcc -o bison syntax.tab.c lex.yy.c hashtbl.o -lm

hashtbl.o: hashtbl.c hashtbl.h
	gcc -o hashtbl.o -c hashtbl.c

clean:
	rm bison syntax.tab.c lex.yy.c syntax.tab.h hashtbl.o
	rm syntax.output