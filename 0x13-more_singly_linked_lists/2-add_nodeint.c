#include "lists.h"
/**
 * add_nodeint- adds anew node
 * @head:  linked list
 * @n: new data for new node
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}

	return (*head);
}
