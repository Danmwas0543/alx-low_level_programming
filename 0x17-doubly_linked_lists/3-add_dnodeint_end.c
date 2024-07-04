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
	dlisint_t *nwe, tmpe;

	nwe = malloc(sizeof(dlistint_t));
	if (nwe == NULL)
		return (NULL);

	nwe->n = n;
	nwe->next = NULL;

	tmpe = (*head);

	if (tmpe != NULL)
	{
		while (tmpe->next != NULL)
		{
			tmpe = tmpe->next;
		}
		tmpe->next = nwe;
	}
	else
		*head = nwe;
	nwe->prev = tmpe;

	return (nwe);
}
