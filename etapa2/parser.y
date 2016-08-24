%{
  #include <stdio.h>
  #include <string.h>
%}
%token TYPE
%%

declaration : TYPE; {printf("Achei um tipo valido!");}

%%

void yyerror (char const *s) {
  printf("Fodeu");
}

void main(){
  yyparse();
}
