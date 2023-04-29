#include "main.h"

/**
 * is_prime - checks if a number is prime
 *
 * @n: number to check
 * @div: divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div > n / 2)
		return (1);
	return (is_prime(n, div + 1));
}

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime(n, 2));
}
