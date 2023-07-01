#include "main.h"

/**
 * helper - helper function to calculate the square root recursively
 *
 * @x: the number whose square root is to be found
 * @n: the current guess
 *
 * Return: The natural square root if it exists,
 * or -1, if no natural square root exists
 */
int helper(int x, int n)
{
	if (n * n < x)
		return (helper(x, n + 1));
	else if (n * n == x)
		return (n);
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @x: the number whose square root is to be gotten
 *
 * Return: the natural square root of n
 */
int _sqrt_recursion(int x)
{
	if (x < 0)
		return (-1);
	else
		return (helper(x, 0));
}
