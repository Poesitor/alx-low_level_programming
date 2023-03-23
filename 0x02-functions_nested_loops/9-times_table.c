#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, index;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			index = i * j;

			if (j == 0)
			{
				_putchar(index + '0');
			}
			else if (index > 9)
			{
				_putchar(' ');
				_putchar((index / 10) + '0');
				_putchar((index % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(index + '0');

			}

			if (j != 9)
			{
				_putchar(',');
			}

		}

		_putchar('\n');
	}
}
