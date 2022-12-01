#include "main.h"
/**
 * get_bit- it returns the bit at agiven index
 * @index: index it is at
 * @n: the number
 *
 * Return: -1 or index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
