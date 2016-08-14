
void main(){
  int token;
  yyin = fopen("teste.txt", "r");
  while(1){
    token = yylex();
    printf("%d\n", token);
    if(!isRunning()){
      break;
    }
  }
}
