#include "lists.h"
/**
 * add_nodeint_end- adds anew node at  end
 * @head: head of the list
 * @n: elements
 *
 * Return: address of the element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listsint_t *new;
	listint_t *temp;


	new = malloc(sizeof (listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (*head);
}
