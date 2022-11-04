#include <stdio.h>
/**
 * main - a program that adds positive numbers
 * @argc: argument passed from command line
 * @argv: array that contains the program command line arguments.
 * Return: returns 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
