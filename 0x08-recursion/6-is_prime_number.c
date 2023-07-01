#include "main.h"

/**
 * helper - helper function to check if the prime number recursively
 *
 * @x: the number to be check
 * @n: divide the number by each instance of n to check if it is prime
 *
 * Return: 1, if input integer is a prime number,,
 * otherwise return 0.
 */
int helper(int x, int n)
{
	if (x == n)
		return (1);
	else if (x % n == 0)
		return (0);
	else
		return (helper(x, n + 1));
}

/**
 * is_prime_number - a function to check if an integer is a prime number
 *
 * @x: the number to be checked
 *
 * Return: 1 if the input integer is a prime,
 * otherwise return 0.
 */
int is_prime_number(int x)
{
	if (x <= 1)
		return (0);
	else
		return (helper(x, 2));
}
