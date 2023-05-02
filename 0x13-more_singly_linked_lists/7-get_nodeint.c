#include "lists.h"
/**
 * get_nodeint_at_index - retrieves the node in a list at a specific address
 * @head: initial node of a linked list
 * @index: the node's return index
 * Return: a reference to the desired node otherwise null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b = 0;
	listint_t *tem = head;

	while (tem && b < index)
	{
		tem = tem->next;
		b++;
	}

	return (tem ? tem : NULL);
}
