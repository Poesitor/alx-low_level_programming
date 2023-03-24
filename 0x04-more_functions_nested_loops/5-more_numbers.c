#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int index;

	for (index = 0; index < 10; index++)
	{
		int i, j;
		int tens = 0;

		i = j = 48;
		while (i <= 57)
		{
			_putchar(i);

			if (i == 57)
			{
				i = 49;
				tens = 1;
				continue;
			}

			if (tens)
				_putchar(j++);
			else
				i++;

			if (j > 52)
				break;
		}
		_putchar('\n');
	}
}
