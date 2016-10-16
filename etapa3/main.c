#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]){
	initMe();

	if(argc < 2){
		printf("Insira um arquivo para ser analisado!\n");
		exit(3);
	}

	extern FILE *yyin;
	yyin = fopen(argv[1],"r");
	yyparse();
}
