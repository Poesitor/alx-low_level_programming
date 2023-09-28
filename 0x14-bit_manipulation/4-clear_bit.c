#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: a pointer to the number that contains the bit
 * @index: The index of the bit in n to be cleared
 *
 * Return: 1 (on success), -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & (1 << index))
		*n = *n ^ (1 << index);

	return (1);
}
