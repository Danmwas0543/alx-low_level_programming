#include "hash_tables.h"

/**
 * hash_table_delete - Removes a hash table from memory.
 * @ht: Pointer to the hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *faith, *danu;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			faith = ht->array[i];
			while (faith != NULL)
			{
				danu = faith->next;
				free(faith->key);
				free(faith->value);
				free(faith);
				faith = danu;
			}
		}
	}
	free(head->array);
	free(head);
}
