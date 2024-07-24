#include "hash_tables.h"

/**
 * hash_table_create - Sets up a new hash table.
 * @size: Represents the size of the array.
 *
 * Return: Returns NULL if there's an error,
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *danu;
    unsigned long int mugo;

    danu = malloc(sizeof(hash_table_t));
    if (danu == NULL)
        return (NULL);

    danu->size = size;
    danu->array = malloc(sizeof(hash_node_t *) * size);
    if (danu->array == NULL)
        return (NULL);
    for (mugo = 0; mugo < size; mugo++)
        danu->array[mugo] = NULL;

    return (danu);
}
