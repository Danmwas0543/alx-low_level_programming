#include "lists.h"
/**
 * reverse_listint -> turns a linked list around
 * @head: reference to the list's root node
 * Return: a reference to the top level node of the newly made list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *nxt = NULL;

	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = nxt;
	}

	*head = prv;

	return (*head);
}
