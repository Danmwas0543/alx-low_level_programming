#include "hash_tables.h"

/**
 * hash_table_get - Fetches the value linked to
 *                  a key in a hash table.
 * @ht: Pointer to the hash table.
 * @key: The key whose value is to be retrieved.
 *
 * Return: If the key is not found - NULL.
 *         Otherwise - the value linked to the key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *faith;
	unsigned long int danu;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	danu = key_index((const unsigned char *)key, ht->size);
	if (danu >= ht->size)
		return (NULL);

	faith = ht->array[danu];
	while (faith && strcmp(faith->key, key) != 0)
		faith = faith->next;

	return ((faith == NULL) ? NULL : faith->value);
}
