#include "main.h"

/**
 * helper - function to help _sqrt_recursion get the square root of n
 *
 * @n: the number whose square root is to be gotten
 * @test: a possible square root of n
 *
 * Return: thr square root of n
 */
int helper(int n, int test)
{
	if (test == n)
		return (-1);
	if (test * test == n)
		return (test);

	return (helper(n, test + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number whose square root is to be returned
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	int test = 1;

	if (n < 1)
		return (-1);
	if (n == 1)
		return (1);

	return (helper(n, test));
}
