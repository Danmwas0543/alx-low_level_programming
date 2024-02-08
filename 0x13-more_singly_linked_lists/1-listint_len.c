#include "lists.h"
/**
 * listint_t - elements in a linked list
 *
 * @b: head of a pointer
 * return: the amount of elements
 */
size_t listint_len(const listint_t *b);
{
	size_t number = 0;

	while (b != NULL)
	{
		b = b->next;
		number++
	}
	return (number);
}
