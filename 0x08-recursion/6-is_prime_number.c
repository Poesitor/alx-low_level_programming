#include "main.h"

/**
 * helper - function to help is_prime_number check if n is a prime number
 *
 * @n: the number to be checked
 * @test: an iterator to check if n is divisible by any number other than
 * itself and 1.
 *
 * Return: 1, if n is a prime.
 * 0, otherwise.
 */
int helper(int n, int test)
{
	if (test == n)
		return (1);

	if (n % test == 0)
		return (0);

	return (helper(n, test + 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 *
 * @n: the number to be checked
 *
 * Return: 1, if n is a prime number.
 * 0, otherwise.
 */
int is_prime_number(int n)
{
	int test = 2;

	if (n <= 1)
		return (0);

	return (helper(n, test));
}
