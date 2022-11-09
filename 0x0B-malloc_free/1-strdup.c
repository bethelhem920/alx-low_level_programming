#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup - a function that returns a pointer to a new string
 * @str: string that holds it
 * Return: a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *cr;

	if (str == NULL)
		return (NULL);
	cr = (char *)malloc(sizeof(*str) * 4);

	strcpy(cr, str);
	return (cr);
}
