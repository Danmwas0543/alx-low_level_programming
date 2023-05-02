#include "lists.h"
/**
 * free_listint_safe -> unlinks a linked list
 * @h: a reference to the connected list's root node
 * Return: the total amount of elements in the unlinked list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenth = 0;
	int dif;
	listint_t *tem;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			tem = (*h)->next;
			free(*h);
			*h = tem;
			lenth++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lenth++;
			break;
		}
	}

	*h = NULL;

	return (lenth);
}
