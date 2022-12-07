#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int r;

	int file_from, file_to;

	int cf, ct;

	char buff[3000];

	int w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	r = read(file_from, buff, 1024);

	file_to = open(argv[2], O_RDWR | O_TRUNC | O_CREAT , 0664);

	if (r == -1 || file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	
	w = write(file_to, buff, r);

	if (w == -1 || file_to == -1 || buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	cf = close(file_from);
	ct = close(file_to);

	if (cf == -1 || ct == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd ");
		exit(100);
	}

	return (0);
}
