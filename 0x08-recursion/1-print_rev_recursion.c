#include "main.h"

/**
 * _print_rev_recursion - Prints a strint in reverse
 *
 * @s: String to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
