#include "lists.h"

/**
 * print_listint- prints all the elements of the list
 * @h: singly linked list head
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		printf("Linked list empty");
	else
	{
		const listint_t *i = h;
		while (i != NULL)
			{
				count ++;
				printf("%d", i->n);
				printf("\n");
				i = i->next;
			}
	}
	return (count);
}	
