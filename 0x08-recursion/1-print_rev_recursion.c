#include "main.h"
/**
 * _print_rev_recursion- prints string reverse
 * @s: holds string value
 *
 * Returns: Always 0
 */
void _print_rev_recursion(char *s)
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
