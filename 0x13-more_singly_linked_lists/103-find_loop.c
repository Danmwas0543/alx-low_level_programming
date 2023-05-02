#include "lists.h"
/**
 * find_listint_loop -> locates the loop in a linked list
 * @head: linked list to look up
 * Return: NULL or the location of the node in which the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *b = head;
	listint_t *c = head;

	if (!head)
		return (NULL);

	while (b && c && c->next)
	{
		c = c->next->next;
		b = b->next;
		if (c == b)
		{
			b = head;
			while (b != c)
			{
				b = b->next;
				c = c->next;
			}
			return (c);
		}
	}

	return (NULL);
}
