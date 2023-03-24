#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: number of tines the character '_' will be printed
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	if (!(n <= 0))
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
