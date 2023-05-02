#include "lists.h"
/**
 * print_listint -> a linked lists elements are printed
 * @h: listint_t linked list to be printed
 * Return: amount of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t no = 0;

	while (h)
	{
		printf("%d\n", h->n);
		no++;
		h = h->next;
	}

	return (no);
}

