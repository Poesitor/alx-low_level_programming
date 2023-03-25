#include "main.h"

/**
 * print_times_table - prints the n times table starting from 0
 *
 * @n: function prints the n times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, index;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			index = i * j;
			if (j == 0)
				_putchar(index + '0');
			else if (index > 99)
			{
				_putchar(' ');
				_putchar((index / 100) + '0');
				_putchar(((index / 10) % 10) + '0');
				_putchar((index % 10) + '0');
			}
			else if (index > 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((index / 10) + '0');
				_putchar((index % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(index + '0');

			}
			if (j != n)
				_putchar(',');

		}
		_putchar('\n');
	}
}
