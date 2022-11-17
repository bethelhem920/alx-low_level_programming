#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum up all the parameters
 * @n: the first parameter
 *
 * Return: returns sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list li;

	int sum = 0;

	unsigned int i;

	if (n == 0)
		return (0);

	va_start(li, n);

	for (i = 0; i < n; i++)
		sum += va_arg(li, int);

	va_end(li);

	return (sum);
}
