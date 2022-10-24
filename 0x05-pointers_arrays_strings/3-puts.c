#include "main.h"

/**
 *  * _strlen - returns length of string
 *   * @s: string
 *    * Return: length of string
 */

void _puts(char *str)
{
	int i=0;

	while(str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
