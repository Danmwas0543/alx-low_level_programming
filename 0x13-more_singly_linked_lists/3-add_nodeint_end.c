#include "lists.h"
/**
 * add_nodeint_end -> extends a linked list by adding a node at the end
 * @head: a reference to the lists top element
 * @n: info to add to the new element
 * Return: the new node's reference(pointer) or null in the event it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newone;
	listint_t *tem = *head;

	newone = malloc(sizeof(listint_t));
	if (!newone)
		return (NULL);

	newone->n = n;
	newone->next = NULL;

	if (*head == NULL)
	{
		*head = newone;
		return (newone);
	}

	while (tem->next)
		tem = tem->next;

	tem->next = newone;

	return (newone);
}
