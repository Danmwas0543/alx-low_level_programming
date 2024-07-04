#include "lists.h"

/**
 * add_dnodeint_end - adding a node to a list
 *
 * @head: pointer to a pointer
 * @n: input data
 * Return: the newly created pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nwe, *p;

	nwe = malloc(sizeof(dlistint_t));
	if (nwe == NULL)
		return (NULL);

	nwe->n = n;
	nwe->next = NULL;

	p = (*head);

	if (p != NULL)
	{
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = nwe;
	}
	else
		*head = nwe;
	nwe->prev = p;

	return (nwe);
}
