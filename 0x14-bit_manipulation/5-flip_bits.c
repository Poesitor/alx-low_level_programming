#include "main.h"

/**
 * flip_bits - returns the number of bits you'd need to flip to get from
 * one number to another
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: as described above
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int compare = n ^ m;

	while (compare)
	{
		if (compare & 1)
			count++;
		compare >>= 1;
	}

	return (count);
}
