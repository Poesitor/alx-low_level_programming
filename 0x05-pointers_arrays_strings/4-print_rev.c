#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - prints a string in reverse
 *
 * @s: the string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len, i;

	len = _strlen(s);

	for (i = len; i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
