#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - it appends a text at the end of the file
 *
 * @filename: name of the file
 * @text_content: a sting to add at the end of the file
 *
 *
 * Return: 1 on SUCCESS, -1 on FAILURE
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	int app;

	int i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[i] != '\0')
	{
		i++;
	}
	app = write(fd, text_content, i);
	if (app == -1)
		return (-1);

	close(fd);

	return (1);
}
