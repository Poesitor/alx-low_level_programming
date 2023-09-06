#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: a pointer to the integer
 * @index: the position of the bit in the integer to be set to 0
 *
 * Return: 1 On success, -1 On error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if (*n & 1 << index)
	{
		*n = *n ^ 1 << index;
	}

	return (1);
}
