#include <stdio.h>
#include "lists.h"
/**
 *  print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */
size_t print_list(const list_t *h)
{
const list_t *type = h;
size_t index = 0;

while (type != NULL)
{
if (type->str != NULL)
printf("[%d] %s\n", type->len, type->str);
else
printf("[0] (nil)\n");
index += 1;
type = type->next;
}

return (index);
}
