#define _XOPEN_SOURCE 500 /* Enable certain library functions (strdup) on linux.  See feature_test_macros(7) */

#include "hash.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

hashtable_t *hashtable;

/* Create a new hashtable. */
hashtable_t *ht_create( int size ) {

  // hashtable_t *hashtable = NULL;
  int i;

  if( size < 1 ) return NULL;

  /* Allocate the table itself. */
  if( ( hashtable = malloc( sizeof( hashtable_t ) ) ) == NULL ) {
    return NULL;
  }

  /* Allocate pointers to the head nodes. */
  if( ( hashtable->table = malloc( sizeof( entry_t * ) * size ) ) == NULL ) {
    return NULL;
  }
  for( i = 0; i < size; i++ ) {
    hashtable->table[i] = NULL;
  }

  hashtable->size = size;

  return hashtable;
}

/* Hash a string for a particular hash table. */
int ht_hash(char *key ) {
  int i = 0;
  int address=1;
  int textlen = strlen(key);
  for(i = 0; i < textlen; ++i)
  {
    address = (address * key[i]) % hashtable->size + 1;
  }
  return address - 1;
}

/* Create a key-value pair. */
entry_t *ht_newpair( char *key, char *value, int type ) {
  entry_t *newpair;

  if( ( newpair = malloc( sizeof( entry_t ) ) ) == NULL ) {
    return NULL;
  }

  if( ( newpair->key = strdup( key ) ) == NULL ) {
    return NULL;
  }

  if( ( newpair->value = strdup( value ) ) == NULL ) {
    return NULL;
  }

  newpair->type = type;

  newpair->next = NULL;

  return newpair;
}

/* Insert a key-value pair into a hash table. */
entry_t * ht_set( char *key, char *value, int type ) {
  int bin = 0;
  entry_t *pair = NULL;
  entry_t *newpair = NULL;
  entry_t *next = NULL;
  entry_t *last = NULL;

  bin = ht_hash( key );

  next = hashtable->table[ bin ];

  while( next != NULL && next->key != NULL && strcmp( key, next->key ) > 0 ) {
    last = next;
    next = next->next;
  }

  /* There's already a pair.  Let's replace that string. */
  if( next != NULL && next->key != NULL && strcmp( key, next->key ) == 0 ) {
    pair = next;

    /* Nope, could't find it.  Time to grow a pair. */
  } else {
    newpair = ht_newpair( key, value, type);
    pair = newpair;

    /* We're at the start of the linked list in this bin. */
    if( next == hashtable->table[ bin ] ) {
      newpair->next = next;
      hashtable->table[ bin ] = newpair;

      /* We're at the end of the linked list in this bin. */
    } else if ( next == NULL ) {
      last->next = newpair;

      /* We're in the middle of the list. */
    } else  {
      newpair->next = next;
      last->next = newpair;
    }
  }

  return pair;
}

/* Retrieve a key-value pair from a hash table. */
char *ht_get( char *key ) {
  int bin = 0;
  entry_t *pair;

  bin = ht_hash( key );

  /* Step through the bin, looking for our value. */
  pair = hashtable->table[ bin ];
  while( pair != NULL && pair->key != NULL && strcmp( key, pair->key ) > 0 ) {
    pair = pair->next;
  }

  /* Did we actually find anything? */
  if( pair == NULL || pair->key == NULL || strcmp( key, pair->key ) != 0 ) {
    return NULL;

  } else {
    return pair->value;
  }

}

void display(){
  int i;
  for(i = 0; i < hashtable->size; i++){
    entry_t *pair;
    pair = hashtable->table[i];
    while(pair != NULL){
      // printf("%d - %s\n", i,pair->value);
      pair = pair->next;
    }
  }
}

entry_t *makeTemp() {
  entry_t *temp = 0;
  static int serialNumber = 1;
  static char buffer[32];

  sprintf(buffer, "Temp%d\0", serialNumber++);

  temp = ht_set( buffer, buffer, SYMBOL_VARIABLE);

  return temp;
}

entry_t *makeLabel() {
  entry_t *temp = 0;
  static int labelSerialNumber = 1;
  static char buffer[32];

  sprintf(buffer, "Label%d\0", labelSerialNumber++);
  temp = ht_set(buffer, buffer, SYMBOL_LABEL);

  return temp;
}
