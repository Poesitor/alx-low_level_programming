#include "main.h"

/**
 * _find_sqrt - helper function to find the square root
 *
 * @n: the numbe to find the square root of
 * @guess: the current guess of the square root
 *
 * Return: the square root of n, of -1 if n has no natural square root
 */
int _find_sqrt(int n, int guess)
{
	if (guess * guess > n)
		return (-1);
	if (guess * guess == n)
		return (guess);
	return (_find_sqrt(n, guess + 1));
}


/**
 * _sqrt_recursion - a function that returns a natural square root of a number
 *
 * @n: the number whose square root is to be found
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (_find_sqrt(n, 1));
}
