#define KW_INT 257
#define KW_CHAR 258
#define KW_BOOL 259
#define KW_REAL 260
#define READ 261
#define PRINT 262
#define RETURN 263
#define TO 264
#define FOR 265
#define IF 266
#define THEN 267
#define ELSE 268
#define END 269
#define EQUAL 270
#define DIFFERENT 271
#define LESS_THEN 272
#define GREATHER_THEN 273
#define OR 274
#define AND 275
#define CHAR_LIT 276
#define INT_LIT 277
#define BOOL_LIT 278
#define IDENTIFIER 279
#define STRING 280
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	ASTREE *astree;
	entry_t *symbol;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
