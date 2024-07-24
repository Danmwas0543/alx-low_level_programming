#include "hash_tables.h"

/**
 * hash_table_set - Inserts or updates an element in the hash table.
 * @ht: Pointer to the hash table.
 * @key: The key to be added - cannot be an empty string.
 * @value: The value associated with the key.
 *
 * Return: On failure - 0.
 *         On success - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *mugo;
	char *faith;
	unsigned long int index, danu;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	faith = strdup(value);
	if (faith == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (danu = index; ht->array[danu]; danu++)
	{
		if (strcmp(ht->array[danu]->key, key) == 0)
		{
			free(ht->array[danu]->value);
			ht->array[danu]->value = faith;
			return (1);
		}
	}

	mugo = malloc(sizeof(hash_node_t));
	if (mugo == NULL)
	{
		free(faith);
		return (0);
	}
	mugo->key = strdup(key);
	if (mugo->key == NULL)
	{
		free(mugo);
		return (0);
	}
	mugo->value = faith;
	mugo->next = ht->array[index];
	ht->array[index] = mugo;

	return (1);
}
