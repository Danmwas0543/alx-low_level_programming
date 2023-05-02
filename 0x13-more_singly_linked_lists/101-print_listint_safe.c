#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * ooped_listint_len -> determines how many distinct nodes there are in a looped listint_t linked list
 * @head: a pointer to the listint's head for inspection
 * Return:the amount of distinct nodes in the list otherwise 0 if its not looped
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *cow, *goat;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	cow = head->next;
	goat = (head->next)->next;

	while (goat)
	{
		if (cow == goat)
		{
			cow = head;
			while (cow != goat)
			{
				node++;
				cow = cow->next;
				goat = goat->next;
			}

			cow = cow->next;
			while (cow != goat)
			{
				node++;
				cow = cow->next;
			}

			return (node);
		}

		cow = cow->next;
		goat = (goat->next)->next;
	}

	return (0);
}
/**
 * print_listint_safe -> secure printing of a listint_t list
 * @head: a reference to the listint_t list's beginning
 * Return: the total amount of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, indx = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (indx = 0; indx < node; indx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}
