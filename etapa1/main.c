
void main(){
  int token;
  FILE * file = fopen("teste.txt", "r");

  while(!feof(file)){
    token = yylex();
    printf("%d\n", token);
  }
  printf("FOI");
}
