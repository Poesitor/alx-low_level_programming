#include "main.h"

/**
 * puts2 - prints every other character of a string starting with the first.
 *
 * @s: the pointer to the string
 *
 * Return: void
 */
void puts2(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(s[i]);
	}
	_putchar('\n');
}
