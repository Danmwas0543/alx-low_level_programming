#include "hash_tables.h"

/**
 * shash_table_create - Initializes a new sorted hash table.
 * @size: Specifies the size of the hash table to be created.
 *
 * Return: If creation fails - NULL.
 *         Otherwise - a pointer to the newly created sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *danu;
	unsigned long int faith;

	danu = malloc(sizeof(shash_table_t));
	if (danu == NULL)
		return (NULL);

	danu->size = size;
	danu->array = malloc(sizeof(shash_node_t *) * size);
	if (danu->array == NULL)
	{
		free(danu);
		return (NULL);
	}
	for (faith = 0; faith < size; faith++)
		danu->array[faith] = NULL;
	danu->shead = NULL;
	danu->stail = NULL;

	return (danu);
}

/**
 * shash_table_set - Inserts an element into a sorted hash table.
 * @ht: Points to the sorted hash table.
 * @key: The key for the element - must not be an empty string.
 * @value: The value associated with the key.
 *
 * Return: On failure - 0.
 *         On success - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *mugo, *faith;
	char *value_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	faith = ht->shead;
	while (faith)
	{
		if (strcmp(faith->key, key) == 0)
		{
			free(faith->value);
			faith->value = value_copy;
			return (1);
		}
		faith = faith->snext;
	}

	mugo = malloc(sizeof(shash_node_t));
	if (mugo == NULL)
	{
		free(value_copy);
		return (0);
	}
	mugo->key = strdup(key);
	if (mugo->key == NULL)
	{
		free(value_copy);
		free(mugo);
		return (0);
	}
	mugo->value = value_copy;
	mugo->next = ht->array[index];
	ht->array[index] = mugo;

    if (ht->shead == NULL)
    {
        mugo->sprev = NULL;
        mugo->snext = NULL;
        ht->shead = mugo;
        ht->stail = mugo;
    }
    else if (strcmp(ht->shead->key, key) > 0)
    {
        mugo->sprev = NULL;
        mugo->snext = ht->shead;
        ht->shead->sprev = mugo;
        ht->shead = mugo;
    }
    else
    {
        faith = ht->shead;
        while (faith->snext != NULL && strcmp(faith->snext->key, key) < 0)
            faith = faith->snext;
        mugo->sprev = faith;
        mugo->snext = faith->snext;
        if (faith->snext == NULL)
            ht->stail = mugo;
        else
            faith->snext->sprev = mugo;
        faith->snext = mugo;
    }

    return (1);
}

/**
 * shash_table_get - Retrieves the value associated with
 *                   a key from a sorted hash table.
 * @ht: Points to the sorted hash table.
 * @key: The key whose value is to be retrieved.
 *
 * Return: If the key is not found - NULL.
 *         Otherwise - the value associated with the key.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    shash_node_t *faith;
    unsigned long int index;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    if (index >= ht->size)
        return (NULL);

    faith = ht->shead;
    while (faith != NULL && strcmp(faith->key, key) != 0)
        faith = faith->snext;

    return ((faith == NULL) ? NULL : faith->value);
}

/**
 * shash_table_print - Displays a sorted hash table in order.
 * @ht: Points to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *faith;

    if (ht == NULL)
        return;

    faith = ht->shead;
    printf("{");
    while (faith != NULL)
    {
        printf("'%s': '%s'", faith->key, faith->value);
        faith = faith->snext;
        if (faith != NULL)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Displays a sorted hash table in reverse order.
 * @ht: Points to the sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *mugo;

    if (ht == NULL)
        return;

    mugo = ht->stail;
    printf("{");
    while (mugo != NULL)
    {
        printf("'%s': '%s'", mugo->key, mugo->value);
        mugo = mugo->sprev;
        if (mugo != NULL)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_delete - Removes a sorted hash table from memory.
 * @ht: Points to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_table_t *head = ht;
    shash_node_t *faith, *tmp;

    if (ht == NULL)
        return;

    faith = ht->shead;
    while (faith)
    {
        tmp = faith->snext;
        free(faith->key);
        free(faith->value);
        free(faith);
        faith = tmp;
    }

    free(head->array);
    free(head);
}
