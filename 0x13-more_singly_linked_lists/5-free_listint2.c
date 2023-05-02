#include "lists.h"
/**
 * free_listint2 -> unlinks a linked list
 * @head: reference to the listint_t list which is being unlinked
 */
void free_listint2(listint_t **head)
{
	listint_t *tem;

	if (head == NULL)
		return;

	while (*head)
	{
		tem = (*head)->next;
		free(*head);
		*head = tem;
	}

	*head = NULL;
}
