#include "lists.h"
/**
 * sum_listint -> sums up all the info in a list of listint_t type
 * @head: initial node of a linked list
 * Return: the final total
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *tem = head;

	while (tem)
	{
		total += tem->n;
		tem = tem->next;
	}

	return (total);
}
