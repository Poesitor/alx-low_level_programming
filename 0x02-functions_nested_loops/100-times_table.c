#include "main.h"

/**
 * print_times_table - prints the  times table of any number stating with 0.
 *
 * @n: the number
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, value;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			value = i * j;
			if (value < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(value + '0');
			}
			else if (value < 100)
			{
				if (j != 0)
					_putchar(' ');
				_putchar((value / 10) + '0');
				_putchar((value % 10) + '0');
			}
			else
			{
				_putchar((value / 100) + '0');
				_putchar(((value % 100) / 10) + '0');
				_putchar((value % 10) + '0');
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
