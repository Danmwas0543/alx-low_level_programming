#include "lists.h"
/**
 * add_nodeint -> adds a new node to the linked list's starting point
 * @head: reference to the list's root node
 * @n: info to add to the new node
 * Return: the new node's reference or null in the event it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newone;

	newone = malloc(sizeof(listint_t));
	if (!newone)
		return (NULL);

	newone->n = n;
	newone->next = *head;
	*head = newone;

	return (newone);
}
