#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers- a function that prints a number
 * @separator: a string that is printed between numbers
 * @n: a number of intergers passed to the function
 *
 * Return: returns 0;
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list li;

	unsigned int i;

	if (separator == NULL)
		return;
	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		int next = va_arg(li, int);
		printf("%d", next);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(li);
	putchar('\n');
}
