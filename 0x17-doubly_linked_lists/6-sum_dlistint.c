#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all data in a list
 *
 * @head: list's head pointer
 *
 * Return: the data calculation after its summation
 */
int sum_dlistint(dlistint_t *head)
{
	size_t total = 0;

	while (head)
	{
		total += heaad->;
		head = head->next;
	}
	return (total);
}
