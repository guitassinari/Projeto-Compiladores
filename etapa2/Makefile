etapa2: y.tab.c lex.yy.c main.c
	gcc -o etapa2 lex.yy.c y.tab.c main.c -ll

y.tab.c: parser.y
	yacc -d -v parser.y

lex.yy.c: scanner.l
	lex scanner.l

clean:
	rm lex.yy.c y.tab.c y.tab.h
