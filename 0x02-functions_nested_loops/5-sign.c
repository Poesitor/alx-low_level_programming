#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: number to be checked
 *
 * Return: 1 (number is positive)
 * 0 (number is zero),
 * -1 (number is negative)
 */
int print_sign(int n)
{
	if (n - 0)
	{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
