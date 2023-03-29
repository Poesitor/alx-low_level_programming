#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: the string whose half is to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, len;

	i = len = 0;
	while (str[i])
	{
		len++;
		i++;
	}

	if (len % 2)
	{
		for (i = (len - 1) / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = len/2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
