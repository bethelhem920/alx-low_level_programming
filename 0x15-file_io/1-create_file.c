#include "main.h"
#include <stdlib.h>
/**
 * create_file - a function that creats a file
 *
 * @filename: the name of the file
 * @text_content: contents of the file
 *
 * Return: returns 1 on SUCCESS and -1 on FAILURE
 */

int create_file(const char *filename, char *text_content)
{
	int fp;

	int i;

	int wr;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fp == -1)
		return (-1);

	if (text_content != NULL)
		text_content = "";
	
	for (i = 0; text_content[i];)
		i++;
	
	wr = write(fp, text_content, i);

	if (wr == -1)
		return (-1);

	close(fp);

	return (1);
}
