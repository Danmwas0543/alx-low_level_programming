#include "lists.h"
/**
 * delete_nodeint_at_index - removes a node at a specific position in a list
 * @head: reference to the list's top level element
 * @index:index of the deleted node
 * Return: either 1 on success or -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tem = *head;
	listint_t *now = NULL;
	unsigned int b = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tem);
		return (1);
	}

	while (b < index - 1)
	{
		if (!tem || !(tem->next))
			return (-1);
		tem = tem->next;
		b++;
	}


	now = tem->next;
	tem->next = now->next;
	free(now);

	return (1);
}
