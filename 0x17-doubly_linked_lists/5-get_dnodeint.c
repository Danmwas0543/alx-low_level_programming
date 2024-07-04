#include "lists.h"

/**
 * get_dnodeint_at_index - obtains a node at a specific list index
 *
 * @head: head pointer of the node in a linked list
 * @index: nodes memory address/location
 * Return: freshly created pointer to the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t r = 0;

	for (r = 0; r < index; r++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
