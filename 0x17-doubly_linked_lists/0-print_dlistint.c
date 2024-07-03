#include "lists.h"

/**
 * print_dlistint -> prints elements of a list
 *
 * @h: the list's head pointer
 * Return: amount of nodes available in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t ndo = 0;

	while (h)
	{
		ndo += 1;
		printf("%d\n", h->n);
		h = h->next;

	}

	return (ndo);

}
