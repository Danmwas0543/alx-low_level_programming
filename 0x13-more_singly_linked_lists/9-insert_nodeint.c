#include "lists.h"
/**
 * insert_nodeint_at_index -> places a new node at a specified point in a list
 * @head: reference to the list's root node
 * @idx: the index of the newly inserted node
 * @n: info to be added to the new node
 * Return: a reference to the new node or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int b;
	listint_t *newone;
	listint_t *tem = *head;

	newone = malloc(sizeof(listint_t));
	if (!newone || !head)
		return (NULL);

	newone->n = n;
	newone->next = NULL;

	if (idx == 0)
	{
		newone->next = *head;
		*head = newone;
		return (newone);
	}

	for (b = 0; tem && b < idx; b++)
	{
		if (b == idx - 1)
		{
			newone->next = tem->next;
			tem->next = newone;
			return (newone);
		}
		else
			tem = tem->next;
	}

	return (NULL);
}
