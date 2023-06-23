#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the number
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int last;

	if (n >= 0)
	{
		last = n % 10;
		_putchar(last + '0');

		return (last);
	}

	last = (n % 10) * -1;
	_putchar(last + '0');

	return (last);
}
