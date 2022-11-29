#include "lists.h"

/**
 * print_listint- prints all the elements of the list
 * @h: singly linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count  = 0;

	if (h == NULL)
		printf("Linked list empty");

	const listint_t *i = h;

	while (i != NULL)
	{
		count = count + 1;
		printf("%d", i->n);
		i = i->next;
	}

}
