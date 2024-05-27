#include <stdio.h>

/**
 * add - Adds two integers
 * @a: First integer
 * @b: second integer
 *
 * Return: The sum of a and b
 */
int add(int a, int b)
{
	return a + b;
}


/**
 * sub - Subtracts the second integer from the first
 * @a: First integer
 * @b: second integer
 *
 * Return: The difference of a and b
 */
int sub(int a, int b)
{
	return a - b;
}

/**
 * mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The product of a and b
 */
int mul(int a, int b)
{
	return a * b;
}

/**
 * div - Divides the first integer by the second integer
 * @a: First integer
 * @b: Second integer
 *
 * Return: The quotient of a and b, or 0 if b is 0
 */
int div(int a, int b)
{
	if (b == 0)
	{
		return 0;
	}
	return a / b;
}

/**
 * mod - Computes the modlus of the first integer divided by the second
 * @a: First integer
 * @b: Second integer
 *
 * Return: The modulus of a and b, or 0 if b is 0
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		return 0;
	}
	return a % b;
}
