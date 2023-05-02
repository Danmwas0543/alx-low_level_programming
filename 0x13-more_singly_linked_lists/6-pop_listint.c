#include "lists.h"
/**
 * pop_listint -> eliminates a linked list's front node
 * @head: identifier for the linked list's first entry
 * Return: info included in the deleted entries or 0 if the list isn't at all
 */
int pop_listint(listint_t **head)
{
	listint_t *tem;
	int no;

	if (!head || !*head)
		return (0);

	no = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;

	return (no);
}
