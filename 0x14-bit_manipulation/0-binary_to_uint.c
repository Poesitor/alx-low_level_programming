#include "main.h"
#include <stddef.h>

/**
 * binary_to_unit - converts a binary number to an unsigned int
 *
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number,
 * or 0 if there is one of more chars in the string that is not 0 or 1.
 * Also returns 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = (result * 2) + (*b - '0');
		b++;
	}

	return (result);
}
