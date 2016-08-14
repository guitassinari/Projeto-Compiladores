%{
  #include "main.c"
  #include "token.h"
  #include "init.c"

  static int line_number = 1;

  int getLineNumber(){
    return line_number;
  }

%}

%x COMMENT
%x STRING

%%

int {return KW_INT;}
float {return KW_FLOAT;}
bool {return KW_BOOL;}
char {return KW_CHAR;}
if {return KW_IF;}
then {return KW_THEN;}
else {return KW_ELSE;}
for {return KW_FOR;}
read {return KW_READ;}
return {return KW_RETURN;}
print {return KW_PRINT;}

[<][=] {return OPERATOR_LE;}
[>][=] {return OPERATOR_GE;}
[=][=] {return OPERATOR_EQ;}
[!][=] {return OPERATOR_NE;}
[|][|] {return OPERATOR_OR;}
[&][&] {return OPERATOR_AND;}

[,;:()[\]{}+-/<>=!&$] {return yytext[0];}

FALSE {return LIT_FALSE;}
TRUE {return LIT_TRUE;}
'[a-zA-z]' {return LIT_CHAR;}
["] {BEGIN(STRING);}
\n {line_number++;}

\* {BEGIN(COMMENT);}

<COMMENT>. {}
<COMMENT>\n {line_number++;}
<COMMENT>[*][\\] {BEGIN(INITIAL);}

<STRING>[\\][\"] {}
<STRING>[\"] {BEGIN(INITIAL); return LIT_STRING;}
<STRING>\n {line_number++;}
<STRING>. {}

%%

int yywrap(){
  printf("%d", getLineNumber());
  return 0;
}
