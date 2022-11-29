#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first;
	listint_t *last;

	first = NULL;
	last = NULL;

	while (*head != NULL)
	{
		last = (*head)->next;
		(*head)->next = first;
		first = *head;
		*head = last;
	}

	*head = first;
	return (*head);
}
