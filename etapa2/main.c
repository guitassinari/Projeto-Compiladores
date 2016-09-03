#include <stdio.h>
#include <stdlib.h>

void main(){
  extern FILE *yyin;
  yyin = fopen("teste.txt","r");
  yyparse();
}
