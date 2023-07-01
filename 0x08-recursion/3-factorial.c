#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: the number whose factorial is to be gotten
 *
 * Return: the factorial of n
 */
int factorial(int n)
{
	int result = 1;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (result = n * factorial(n - 1));
}
