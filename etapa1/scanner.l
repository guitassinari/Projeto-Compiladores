%{
  #include "main.c"
  #include "token.h"
%}

%%

teste {printf("Foi um teste! ");}
haha {printf("Risadinha! ");}
[0-9] {printf("nemero! ");}
\n {}

%%
