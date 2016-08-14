
void main(){
  int token;
  initMe();
  yyin = fopen("teste.txt", "r");
  while(1){
    token = yylex();
    printf("%d\n", token);
    if(!isRunning()){
      break;
    }
  }
}
