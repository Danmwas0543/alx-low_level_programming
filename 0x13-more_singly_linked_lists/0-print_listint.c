#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @b - head node of a linked list
 * Return - node's numbers
 */
size_t print_listint(const listint_t *b)
{
size_t number = 0;
while (b != NULL)
{
printf("%d\n", b->n);
b = b->next;
number++;
}
return (number);
}

