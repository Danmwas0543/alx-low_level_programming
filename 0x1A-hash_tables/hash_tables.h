#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct hash_node_s - Represents a node in a hash table.
 * @key: Represents the key, a string.
 * The key must be unique within the hash table.
 * @value: Represents the value associated with the key.
 * @next: Points to the next node in the list.
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;
/**
 * struct hash_table_s - Represents the hash table data structure.
 * @size: Represents the size of the array.
 * @array: An array of size @size.
 * Each element of this array is a pointer to the first node of a linked list,
 * implementing Chaining collision handling in the hash table.
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
void hash_table_delete(hash_table_t *ht);
/**
 * struct shash_node_s - Represents a node in a sorted hash table.
 * @key: Represents the key, a string.
 * The key must be unique within the hash table.
 * @value: Represents the value associated with the key.
 * @next: Points to the next node in the list.
 * @sprev: Points to the previous element in the sorted linked list.
 * @snext: Points to the next element in the sorted linked list.
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Represents a sorted hash table data structure.
 * @size: Represents the size of the array.
 * @array: An array of size @size.
 * Each element of this array is a pointer to the first node of a linked list,
 * implementing Chaining collision handling in the hash table.
 * @shead: Pointer to the first element in the sorted linked list.
 * @stail: Pointer to the last element in the sorted linked list.
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_delete(shash_table_t *ht);

#endif
