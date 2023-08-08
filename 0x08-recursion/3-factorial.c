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
	int fact;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	else
		fact = n * factorial(n - 1);

	return (fact);
}
