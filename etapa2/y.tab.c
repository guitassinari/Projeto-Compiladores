/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "parser.y"
  #include <stdio.h>
  #include <stdlib.h>
#line 24 "y.tab.c"

#if ! defined(YYSTYPE) && ! defined(YYSTYPE_IS_DECLARED)
/* Default: YYSTYPE is the semantic value type. */
typedef int YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define INT 257
#define REAL 258
#define BOOL 259
#define CHAR 260
#define INTEGER 261
#define FALSE 262
#define TRUE 263
#define IDENTIFIER 264
#define READ 265
#define PRINT 266
#define RETURN 267
#define STRING 268
#define TO 269
#define FOR 270
#define IF 271
#define THEN 272
#define ELSE 273
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    0,    0,    1,    3,    4,    4,    4,    4,
    4,    4,   13,   14,   14,   15,   15,    6,    6,   16,
   16,    7,   17,   12,   12,   19,   19,   20,   20,   21,
   11,   22,   22,   10,    9,    8,   23,   23,   23,   24,
   24,   24,   24,   25,   25,   25,   25,   29,   29,   31,
   31,   18,   18,   18,   18,   18,   30,   30,   33,   32,
   32,   32,   27,   27,   26,   26,   26,   26,   28,   28,
   28,   28,    2,   34,   34,   36,   36,   37,   37,   35,
   35,   35,   35,    5,    5,    5,    5,
};
static const YYINT yylen[] = {                            2,
    1,    1,    1,    1,    2,    5,    1,    1,    1,    1,
    1,    1,    4,    2,    0,    3,    0,    3,    0,    4,
    0,    3,    3,    7,    3,    2,    0,    2,    6,    2,
    2,    2,    5,    2,    2,    2,    2,    2,    0,    3,
    3,    1,    1,    3,    1,    2,    1,    3,    1,    3,
    1,    3,    1,    1,    1,    1,    3,    0,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    4,    2,    4,    2,    0,    2,    0,    1,
    1,    1,    1,    1,    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
   84,   85,   86,   87,    0,    0,    0,    0,    0,    0,
    0,    1,    2,    3,    4,    0,    0,   12,    7,    8,
    9,   10,   11,    0,    0,   31,   34,   47,   51,   49,
   43,   42,    0,    0,    0,   56,    0,   36,    0,    0,
    0,    0,   35,    0,    0,    0,    0,    5,    0,   32,
    0,    0,    0,   46,   37,    0,   38,   63,   64,    0,
   65,   66,   67,   68,   69,   70,   71,   72,    0,    0,
    0,   61,   60,   62,    0,    0,    0,   25,    0,    0,
   22,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   52,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   28,    0,   23,    0,    0,    0,   83,   80,   81,   82,
   74,   73,    0,    0,   14,   13,   57,    0,   30,    0,
    0,    6,    0,   33,    0,    0,    0,    0,   18,    0,
   75,   16,    0,    0,   24,    0,    0,   76,   29,   26,
    0,   78,   20,
};
static const YYINT yydgoto[] = {                         12,
   13,   14,   15,   16,   17,  105,   18,   19,   20,   21,
   22,   23,   36,   88,  115,  129,   47,   37,  135,   78,
  101,   26,   38,   39,   40,   69,   60,   70,   41,   54,
   42,   75,   90,   85,  137,  131,  138,
};
static const YYINT yysindex[] = {                      -114,
    0,    0,    0,    0,  -37, -248,  138,  153,  -13,    2,
 -103,    0,    0,    0,    0, -103, -221,    0,    0,    0,
    0,    0,    0,  153,  153,    0,    0,    0,    0,    0,
    0,    0,  -23,  138,  153,    0,  138,    0, -239,   73,
   35,   66,    0,  160,  153,  -12,  -75,    0,  -32,    0,
  -29, -213, -196,    0,    0,   38,    0,    0,    0, -230,
    0,    0,    0,    0,    0,    0,    0,    0, -209, -209,
 -196,    0,    0,    0, -176,  -15,   45,    0,   46, -103,
    0, -186, -173, -138,   33,   42,   50,   55,   35,   17,
    0,   15, -239,   73,   35,   35,   35,   66,  153, -103,
    0, -158,    0, -147,    5,   36,    0,    0,    0,    0,
    0,    0,  153, -134,    0,    0,    0, -137,    0, -103,
   87,    0,   75,    0,   50,  153, -139, -186,    0, -138,
    0,    0,   45, -103,    0, -126, -138,    0,    0,    0,
   87,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,  272,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   48,  272,    0,    0,  272,    0,  118,  333,
  -18,  353,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   99,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   57,    0,    0,    0,    0,
    0,   19,    0,    0,    0,    0,  106,    0,   61,    0,
    0,  -40,  369,    0,   96,    4,   26,  389,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   25,    0,  101,    0,  106,    0,  296,    0,    0,  107,
    0,    0,    0,    0,    0,    0,  107,    0,    0,    0,
   25,    0,    0,
};
static const YYINT yygindex[] = {                         0,
  149,    0,    0,    1,  -72,    0,   64,    0,    0,    0,
    0,    0,    0,    0,   47,   29,   93,   13,    0,    0,
   41,    0,  -19,  115,  -30,  -38,  -36,  -28,  -42,    0,
  104,    0,    0,    0,   92,    0,   43,
};
#define YYTABLESIZE 662
static const YYINT yytable[] = {                         58,
   58,   58,   58,   72,   58,   73,   58,   82,   11,  104,
   89,   46,   71,   74,   55,   27,   52,   57,   58,   11,
   43,   45,   45,   24,   52,   84,   44,   28,   97,   94,
   30,   31,   32,   92,   58,   59,   50,   51,   95,   96,
   45,   45,   49,   44,   44,   99,   80,   56,   28,   81,
   87,   30,   58,   25,   92,  136,   77,   79,   83,   72,
   71,   73,   44,   86,   30,   48,   48,   53,   71,   74,
    1,    2,    3,    4,   45,   53,   67,   65,   91,   66,
   46,   68,   58,   29,   48,  100,  102,  106,   58,   58,
   58,  112,   58,  114,   58,  116,   44,   58,   58,   58,
  119,   58,  113,   58,   45,   53,   58,   67,   65,  117,
   66,  118,   68,  120,   67,   65,  121,   66,   48,   68,
  127,  107,  108,  109,  110,  124,   44,   11,  123,  125,
  128,  126,  130,  134,  140,   40,   40,  141,  133,   15,
   58,   19,    1,    2,    3,    4,   17,   21,   48,    5,
    6,    7,    8,   59,   40,    9,   10,   53,   53,   77,
    5,    6,    7,    8,   48,   79,    9,   10,  122,  143,
   58,  132,  103,  139,   93,  111,   53,   35,   98,  142,
    0,    0,    0,    0,    0,    0,    0,    0,   40,    0,
    0,    0,   35,    0,    0,    0,    0,    0,    0,   35,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   53,    0,    0,    0,    0,    0,    0,   58,   40,   58,
   58,   58,   58,   58,   58,   58,   58,   58,   58,   58,
   58,    0,   58,   58,   58,   58,   58,   58,   58,   45,
   53,   45,   45,   45,   45,   45,   45,   45,   45,   45,
   45,   45,   45,    0,   45,   45,   45,   45,   45,   45,
   45,   44,    0,   44,   44,   44,   44,   44,   44,   44,
   44,   44,   44,   44,   44,    0,   44,   44,   44,   44,
   44,   44,   44,   48,    0,   48,   48,   48,   48,   48,
   48,   48,   48,   48,   48,   48,   48,    0,   48,   48,
   48,   48,   48,   48,   48,   58,    0,   58,   58,   58,
   58,   58,   58,   58,   58,   58,   58,   58,   58,    0,
   58,    0,    0,   58,   58,   58,   58,    0,    0,    0,
   39,    0,   58,   58,   58,   58,    0,    0,    0,   58,
   59,   61,   62,   63,   64,    0,    0,    0,   61,   62,
   63,   64,    0,   40,   27,   40,   40,   40,   40,   40,
   40,   40,   40,   40,   40,   40,   40,    0,   40,   40,
   40,    0,   54,   54,    0,   53,    0,   53,   53,   53,
   53,   53,   53,   53,   53,   53,   53,   53,   53,    0,
   53,   54,   55,   55,   39,   28,    0,   29,   30,   31,
   32,   33,    0,    0,    0,   34,    0,    0,   41,   41,
   28,   55,   29,   30,   31,   32,   33,   28,   27,   29,
   30,   31,   32,   76,    0,   54,    0,   41,   50,   50,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   55,    0,   50,    0,    0,
    0,    0,    0,    0,    0,   54,    0,    0,    0,    0,
    0,   41,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   55,    0,    0,    0,    0,
    0,   50,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   41,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   50,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   39,   39,   39,    0,
    0,   39,   39,    0,   39,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   27,
   27,   27,   27,    0,    0,   27,   27,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   54,    0,   54,   54,   54,   54,   54,   54,   54,   54,
   54,   54,   54,   54,    0,   54,    0,    0,    0,    0,
   55,    0,   55,   55,   55,   55,   55,   55,   55,   55,
   55,   55,   55,   55,    0,   55,   41,    0,   41,   41,
   41,   41,   41,   41,   41,   41,   41,   41,   41,   41,
    0,   41,    0,    0,    0,    0,   50,    0,   50,   50,
   50,   50,   50,   50,   50,   50,   50,   50,   50,   50,
    0,   50,
};
static const YYINT yycheck[] = {                         40,
   41,   42,   43,   42,   45,   42,   47,   40,  123,   82,
   53,   11,   41,   42,   34,  264,   40,   37,   59,  123,
    8,   40,   41,   61,   40,   58,   40,  258,   71,   60,
  261,  262,  263,  264,  274,  275,   24,   25,   69,   70,
   59,   40,  264,   40,   41,   61,   59,   35,  258,  125,
  264,  261,   93,   91,  264,  128,   44,   45,   91,   98,
   89,   98,   59,   93,  261,   40,   41,   91,   97,   98,
  257,  258,  259,  260,   93,   91,   42,   43,   41,   45,
   80,   47,  123,  260,   59,   41,   41,  261,   41,   42,
   43,   59,   45,   44,   47,   41,   93,   41,   42,   43,
  100,   45,   61,   47,  123,   91,   59,   42,   43,   93,
   45,   99,   47,  272,   42,   43,  264,   45,   93,   47,
  120,  260,  261,  262,  263,  113,  123,  123,   93,  264,
   44,  269,   58,  273,  134,   40,   41,  264,  126,   41,
   93,  123,  257,  258,  259,  260,   41,  123,  123,  264,
  265,  266,  267,   93,   59,  270,  271,   40,   41,   59,
  264,  265,  266,  267,   16,   59,  270,  271,  105,  141,
  123,  125,   80,  133,   60,   84,   59,   40,   75,  137,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   93,   -1,
   -1,   -1,   40,   -1,   -1,   -1,   -1,   -1,   -1,   40,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   93,   -1,   -1,   -1,   -1,   -1,   -1,  258,  123,  260,
  261,  262,  263,  264,  265,  266,  267,  268,  269,  270,
  271,   -1,  273,  274,  275,  276,  277,  278,  279,  258,
  123,  260,  261,  262,  263,  264,  265,  266,  267,  268,
  269,  270,  271,   -1,  273,  274,  275,  276,  277,  278,
  279,  258,   -1,  260,  261,  262,  263,  264,  265,  266,
  267,  268,  269,  270,  271,   -1,  273,  274,  275,  276,
  277,  278,  279,  258,   -1,  260,  261,  262,  263,  264,
  265,  266,  267,  268,  269,  270,  271,   -1,  273,  274,
  275,  276,  277,  278,  279,  258,   -1,  260,  261,  262,
  263,  264,  265,  266,  267,  268,  269,  270,  271,   -1,
  273,   -1,   -1,  276,  277,  278,  279,   -1,   -1,   -1,
   59,   -1,  276,  277,  278,  279,   -1,   -1,   -1,  274,
  275,  276,  277,  278,  279,   -1,   -1,   -1,  276,  277,
  278,  279,   -1,  258,   59,  260,  261,  262,  263,  264,
  265,  266,  267,  268,  269,  270,  271,   -1,  273,  274,
  275,   -1,   40,   41,   -1,  258,   -1,  260,  261,  262,
  263,  264,  265,  266,  267,  268,  269,  270,  271,   -1,
  273,   59,   40,   41,  123,  258,   -1,  260,  261,  262,
  263,  264,   -1,   -1,   -1,  268,   -1,   -1,   40,   41,
  258,   59,  260,  261,  262,  263,  264,  258,  123,  260,
  261,  262,  263,  264,   -1,   93,   -1,   59,   40,   41,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   93,   -1,   59,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  123,   -1,   -1,   -1,   -1,
   -1,   93,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  123,   -1,   -1,   -1,   -1,
   -1,   93,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  123,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  123,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  265,  266,  267,   -1,
   -1,  270,  271,   -1,  273,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  264,
  265,  266,  267,   -1,   -1,  270,  271,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  258,   -1,  260,  261,  262,  263,  264,  265,  266,  267,
  268,  269,  270,  271,   -1,  273,   -1,   -1,   -1,   -1,
  258,   -1,  260,  261,  262,  263,  264,  265,  266,  267,
  268,  269,  270,  271,   -1,  273,  258,   -1,  260,  261,
  262,  263,  264,  265,  266,  267,  268,  269,  270,  271,
   -1,  273,   -1,   -1,   -1,   -1,  258,   -1,  260,  261,
  262,  263,  264,  265,  266,  267,  268,  269,  270,  271,
   -1,  273,
};
#define YYFINAL 12
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 279
#define YYUNDFTOKEN 319
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,
"':'","';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,
"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"INT","REAL","BOOL","CHAR","INTEGER","FALSE","TRUE",
"IDENTIFIER","READ","PRINT","RETURN","STRING","TO","FOR","IF","THEN","ELSE",
"\"||\"","\"&&\"","\"==\"","\"!=\"","\"<=\"","\">=\"",0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : program",
"program : commandList",
"program : variableDeclaration",
"program : functDeclaration",
"commandList : command commandList",
"functDeclaration : type IDENTIFIER '(' functParamsDef commandBlock",
"command : print",
"command : return",
"command : read",
"command : attribuition",
"command : flowControl",
"command : commandBlock",
"functCall : IDENTIFIER '(' functParams ')'",
"functParams : IDENTIFIER functParamsCont",
"functParams :",
"functParamsCont : ',' IDENTIFIER functParamsCont",
"functParamsCont :",
"functParamsDef : type IDENTIFIER functParamsDefCont",
"functParamsDef :",
"functParamsDefCont : ',' type IDENTIFIER functParamsDefCont",
"functParamsDefCont :",
"commandBlock : '{' commandBlockList '}'",
"commandBlockList : command ';' commandBlockList",
"flowControl : IF '(' expression ')' THEN command ifThenCont",
"flowControl : FOR '(' forCont",
"ifThenCont : ELSE command",
"ifThenCont :",
"forCont : expression forEnd",
"forCont : IDENTIFIER '=' expression TO expression forEnd",
"forEnd : ')' command",
"attribuition : IDENTIFIER attribuitionCont",
"attribuitionCont : '=' expression",
"attribuitionCont : '[' expression ']' '=' expression",
"read : READ IDENTIFIER",
"return : RETURN expression",
"print : PRINT printList",
"printList : STRING printList",
"printList : expression printList",
"printList :",
"logicalExpression : arithmeticExpression relationalOperators arithmeticExpression",
"logicalExpression : logicalExpression logicalOperators logicalExpression",
"logicalExpression : TRUE",
"logicalExpression : FALSE",
"arithmeticExpression : arithmeticExpression arithmeticOperators arithmeticExpression",
"arithmeticExpression : integerExpression",
"arithmeticExpression : IDENTIFIER expressionVarCont",
"arithmeticExpression : REAL",
"integerExpression : integerExpression arithmeticOperators integerExpression",
"integerExpression : INTEGER",
"charExpression : charExpression operator charExpression",
"charExpression : CHAR",
"expression : '(' expression ')'",
"expression : logicalExpression",
"expression : arithmeticExpression",
"expression : charExpression",
"expression : functCall",
"expressionVarCont : '[' arrayPosition ']'",
"expressionVarCont :",
"arrayPosition : integerExpression",
"operator : logicalOperators",
"operator : relationalOperators",
"operator : arithmeticOperators",
"logicalOperators : \"||\"",
"logicalOperators : \"&&\"",
"relationalOperators : \"==\"",
"relationalOperators : \"!=\"",
"relationalOperators : \"<=\"",
"relationalOperators : \">=\"",
"arithmeticOperators : '+'",
"arithmeticOperators : '-'",
"arithmeticOperators : '*'",
"arithmeticOperators : '/'",
"variableDeclaration : type IDENTIFIER arrayOrNormal ';'",
"arrayOrNormal : ':' literal",
"arrayOrNormal : '[' INTEGER ']' arrayInit",
"arrayInit : ':' arrayInitLiterals",
"arrayInit :",
"arrayInitLiterals : literal arrayInitLiterals",
"arrayInitLiterals :",
"literal : INTEGER",
"literal : FALSE",
"literal : TRUE",
"literal : CHAR",
"type : INT",
"type : REAL",
"type : BOOL",
"type : CHAR",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 190 "parser.y"

void yyerror (char const *s) {
  printf(" Fodeu %s", s);
  exit(3);
}
#line 460 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
