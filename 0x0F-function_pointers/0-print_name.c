#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * Return: Always 0
 * @name: name to print
 * @f: a pointer to afunction
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
		return;
	f(name);
}
