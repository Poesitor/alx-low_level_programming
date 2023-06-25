#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of a string followed by a new line
 *
 * @s: the pointer to the string
 *
 * Return: void
 */
void puts_half(char *s)
{
	int i, len;

	len = _strlen(s);

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((len % 2 == 0) && (i >= len / 2))
			_putchar(s[i]);
		else if (i > len / 2)
			_putchar(s[i]);
	}
	_putchar('\n');
}
