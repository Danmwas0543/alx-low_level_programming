#include "lists.h"

/**
 * insert_dnodeint_at_index - placing a node at a certain
 * memory address
 * @h: pointer to a pointer of the head
 * @idx: the memory adrress used to locate the the insertion point
 * @n: input data
 * Return: freshly created node's pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p = *h, *w;
	size_t nt = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (nt = 0; nt < idx; nt++)
	{
		if (p == NULL)
			return (NULL);
		p = p->next;
	}

	if (p->next == NULL)
		return (add_dnodeint_end(h, n));

	w = malloc(sizeof(dlistint_t));
	if (w == NULL)
		return (NULL);
	w->n = n;
	w->prev = p;
	w->next = p->next;
	p->next->prev = w;
	p->next = w;

	return (w);
}
