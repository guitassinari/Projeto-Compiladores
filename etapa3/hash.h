#ifndef HASH_H
#define HASH_H

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
int ht_hash( hashtable_t *hashtable, char *key );
entry_t *ht_newpair( char *key, char *value, int type );
void ht_set( hashtable_t *hashtable, char *key, char *value, int type );
char *ht_get( hashtable_t *hashtable, char *key );
void display(hashtable_t *hashtable);
#endif
