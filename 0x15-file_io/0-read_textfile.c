#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- reads a text file and prints it
 *
 * @filename: the filename that is going to read
 * @letters: a no of letters it should read and print
 *
 * Return: actal no of letters it can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	char *buf[4150];

	ssize_t count, rd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	rd = read(fd, buf, letters);

	count = write(STDOUT_FILENO, buf, rd);

	close(fd);

	return (count);
}
