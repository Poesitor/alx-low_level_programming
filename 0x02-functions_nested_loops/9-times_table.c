#include "main.h"

/**
 * times_table - prints the 9 times table stating with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, value;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			value = i * j;
			if (value < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(value + '0');
			}
			else
			{
				_putchar((value / 10) + '0');
				_putchar((value % 10) + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
