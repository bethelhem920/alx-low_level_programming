#include "main.h"
/**
 * binary_to_uint- a function that converts binary to integer
 * @b: char that points to 0 or 1
 * conversion - a function to call to convert
 *
 * Return: converted number or 0 or NULL
 *
 */


unsigned int binary_to_uint(const char *b)
{
	int i;

	unsigned int deci = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		deci = 2 * deci + (b[i] - '0');

	}
	return (deci);
}
