#include "lists.h"

/**
 * add_dnodeint -> adding a new node to a list
 * @n: input data
 * @head: the pointer to the pointer
 * of the head list
 * Return: new list's pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nwe;

	nwe = malloc(sizeof(dlistint_t));
	if (nwe == NULL)
		return (NULL);

	nwe->n = n;
	nwe->prev = NULL;
	nwe->next = NULL;
	/* creted new node */
	nwe->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = nwe;
	}
	*head = nwe;
	return (*head);
}
