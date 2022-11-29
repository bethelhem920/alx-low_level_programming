#include "lists.h"

/**
 * print_listint- prints all the elements of the list
 * @h: singly linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count  = 0;

	if (h == NULL)
	{
		printf("Linked list empty");
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count = count + 1;
	}
	return (count);
}
