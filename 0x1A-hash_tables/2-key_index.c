#include "hash_tables.h"

/**
 * key_index - Calculates the index where a key/value
 *             pair should be placed in a hash table array.
 * @key: The key to determine the index for.
 * @size: The size of the array in the hash table.
 *
 * Return: The index for the key.
 * Description: Utilizes the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
