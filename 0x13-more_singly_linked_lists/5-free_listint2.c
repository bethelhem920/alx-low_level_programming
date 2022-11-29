#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *tem;
	listint_t *hold;

	if (head != NULL)
	{
		hold = *head;
		while ((tem = hold) != NULL)
		{
			hold = hold->next;
			free(tem);
		}
		*head = NULL;
	}
}
