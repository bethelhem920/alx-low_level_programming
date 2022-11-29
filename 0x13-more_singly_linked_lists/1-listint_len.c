#include "lists.h"
#include <stdlib.h>
/**
 * listint_len- it counts the elememts in the list
 * @h: linked list
 *
 * Return: returns no of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
