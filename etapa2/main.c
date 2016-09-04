#include <stdio.h>
#include <stdlib.h>

void main(){
  initMe();
  extern FILE *yyin;
  yyin = fopen("teste.txt","r");
  yyparse();
}
