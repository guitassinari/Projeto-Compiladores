etapa4: y.tab.o lex.yy.o main.o hash.o semantic.o astree.o
	gcc -o etapa4 y.tab.o lex.yy.o hash.o semantic.o main.o astree.o -ll

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

main.o: main.c
	gcc -c main.c

y.tab.c: parser.y
	yacc -d -v parser.y

lex.yy.c: scanner.l
	lex scanner.l

clean:
	rm lex.yy.c y.tab.c
