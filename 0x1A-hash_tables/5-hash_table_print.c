#include "hash_tables.h"

/**
 * hash_table_print - Outputs the content of a hash table.
 * @ht: Pointer to the hash table to be printed.
 *
 * Description: Key/value pairs are displayed in the sequence
 *              they appear in the hash table's array.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *faith;
	unsigned long int danu;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (danu = 0; danu < ht->size; danu++)
	{
		if (ht->array[danu] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			faith = ht->array[danu];
			while (faith != NULL)
			{
				printf("'%s': '%s'", faith->key, faith->value);
				faith = faith->next;
				if (faith != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
