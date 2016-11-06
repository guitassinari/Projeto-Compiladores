#include <stdio.h>
#include <stdlib.h>

FILE *yyin;
FILE *outFile;

void main(int argc, char *argv[]){
	initMe();
	if(argc < 3){
		printf("Insira um arquivo para ser analisado e outro para escrita!\n");
		exit(3);
	}

	yyin = fopen(argv[1],"r");
	outFile = fopen(argv[2], "w");

	yyparse();

	fclose(yyin);
	fclose(outFile);
}
