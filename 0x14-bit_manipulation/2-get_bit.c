#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: the number to be checked
 * @index: the index to be checked
 *
 * Return: the value of a bit in n at index (0 of 1)
 * returns -1 if index is out of valid range
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);

	if (n & (1 << index))
		return (1);
	else
		return (0);
}
