#include <stdio.h>
#include <stdlib.h>

FILE *yyin;
FILE *yyout;

void main(int argc, char *argv[]){
	initMe();
	if(argc < 2){
		printf("Insira um arquivo para ser analisado!\n");
		exit(3);
	}

	yyin = fopen(argv[1],"r");
	yyout = fopen(argv[2], "w");

	yyparse();

	fclose(yyin);
	fclose(yyout);

}
