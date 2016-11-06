etapa5: y.tab.o lex.yy.o main.o hash.o semantic.o astree.o tacs.o code.o
	gcc -o etapa5 y.tab.o lex.yy.o hash.o semantic.o main.o astree.o tacs.o code.o -ll

y.tab.o: y.tab.c
	gcc -c y.tab.c

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

hash.o: hash.c
	gcc -c hash.c

astree.o: astree.c
	gcc -c astree.c

semantic.o: semantic.c
	gcc -c semantic.c

tacs.o: tacs.c
	gcc -c tacs.c

code.o: code.c
	gcc -c code.c

main.o: main.c
	gcc -c main.c

y.tab.c: parser.y
	yacc -d -v parser.y

lex.yy.c: scanner.l
	lex scanner.l

clean:
	rm lex.yy.c y.tab.c
