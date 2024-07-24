#include "hash_tables.h"

/**
 * hash_djb2 - Implements the djb2 algorithm for hashing.
 * @str: Represents the string to hash.
 *
 * Return: Returns the computed hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int danu;
	int mugo;

	danu = 5381;
	while ((mugo = *str++))
			danu = ((danu << 5) + danu) + mugo;

			return (danu);
}
