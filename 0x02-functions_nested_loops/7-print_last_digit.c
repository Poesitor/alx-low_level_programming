#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - prints tha last digit of a number
 *
 * @n: function prints the last digit of n
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	int last = _abs(n % 10);

	_putchar(last + '0');
	return (last);
}
