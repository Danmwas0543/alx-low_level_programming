#include "lists.h"
/**
 * listint_len -> brings back the size of a linked lists items
 * @h: the linked list being examined of listint_t type
 * Return: quantity of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t no = 0;

	while (h)
	{
		no++;
		h = h->next;
	}

	return (no);
}
