#ifndef HASH_H
#define HASH_H

#define TABLE_SIZE 997
#define SYMBOL_CHAR_LIT 1
#define SYMBOL_INT_LIT 2
#define SYMBOL_IDENTIFIER 3
#define SYMBOL_STRING 4
#define SYMBOL_BOOL_LIT 5

#define SYMBOL_VARIABLE_ID 6
#define SYMBOL_VECTOR_ID 7
#define SYMBOL_FUNCTION_ID 8

#define SYMBOL_LABEL 9
#define SYMBOL_VARIABLE 10

struct entry_s {
	char *key;
	char *value;
	int type;
	struct entry_s *next;
};

typedef struct entry_s entry_t;

struct hashtable_s {
	int size;
	struct entry_s **table;
};

typedef struct hashtable_s hashtable_t;

hashtable_t *ht_create( int size );
int ht_hash(  char *key );
entry_t *ht_newpair( char *key, char *value, int type );
entry_t * ht_set(  char *key, char *value, int type );
char *ht_get( char *key );
void display();
#endif
