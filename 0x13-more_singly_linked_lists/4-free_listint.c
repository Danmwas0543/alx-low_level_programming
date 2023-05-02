#include "lists.h"
/**
 * free_listint -> unlinks a linked list
 * @head: list being unlinked of listint_t type
 */
void free_listint(listint_t *head)
{
	listint_t *tem;

	while (head)
	{
		tem = head->next;
		free(head);
		head = tem;
	}
}
