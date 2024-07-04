#include "lists.h"
/**
 * free_dlistint - used to free lists which are linked
 *
 * @head: head pointer of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmpe;

	while (head)
	{
		tmpe = head;
		head = head->next;
		free(tmpe);
	}
}
