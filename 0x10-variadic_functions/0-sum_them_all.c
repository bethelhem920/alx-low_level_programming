#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum up all the parameters
 * @n: the first parameter
 * @sum: sum of the parameters
 * Return: returns sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list li;

	int sum = 0;

	va_start (li, n);

	if (n == 0)
		return (0);
	for (int i = 0; i < n; i++)
		sum += va_arg (li, unsigned int);
	va_end (li);
	
	return sum;
}
