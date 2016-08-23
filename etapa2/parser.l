%token TYPE NUMBER STRING
%%

test : TYPE {printf("Achei um tipo valido!");}
  ;

%%

void yyerror (char const *s) {
  printf("Fodeu");
}
