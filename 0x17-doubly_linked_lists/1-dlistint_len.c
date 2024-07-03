#include "lists.h"

/**
 * dlistint_len -> prints elements of a list
 *
 * @h: the list's head pointer
 * Return: amount of nodes available in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t ndo = 0;

	while (h)
	{
		ndo += 1;
		h = h->next;

	}

	return (ndo);

}
