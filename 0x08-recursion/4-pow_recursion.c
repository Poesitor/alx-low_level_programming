#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: the base number
 * @y: the exponent
 *
 * Return: the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int value = x;

	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);

	value = value * _pow_recursion(x, (y - 1));

	return (value);
}
