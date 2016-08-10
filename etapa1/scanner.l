%{
  #include "main.c"
  #include "token.h"
  #include "init.c"
%}

%%

int {return KW_INT;}
real {return KW_REAL;}
char {return KW_CHAR;}
if {return KW_IF;}
bool {return KW_BOOL;}
else {return KW_ELSE;}
while {return KW_WHILE;}
return {return KW_RETURN;}

<= {return OPERATOR_LE;}
>= {return OPERATOR_GE;}
== {return OPERATOR_EQ;}
!= {return OPERATOR_NE;}
|| {return OPERATOR_OR;}
&& {return OPERATOR_AND;}

[,;:()[]{}+-/<>=!&$] {return yytext[0];}

TRUE {return LIT_TRUE;}
FALSE {return LIT_FALSE;}
'[a-zA-z]' {return LIT_CHAR;}
(["])(?:(?=(\\?))\2.)*?\1 {return LIT_STRING;}

%%
