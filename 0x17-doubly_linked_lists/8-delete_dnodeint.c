#include "lists.h"

/**
 * delete_dnodeint_at_index - removes a node at a certain address
 *
 * @head: pointer to a pointer of the node
 * @index: memeory address of the new node
 *
 * Return: 1 on success otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (p->next == NULL)
			return (-1);
		p = p->next;
	}

	if (p == *head)
	{
		*head = p->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		p->prev->next = p->next;
		if (p->next != NULL)
			p->next->prev = p->prev;
	}

	free(p);
	return (1);
}
