#include "main.h"

/**
 * _isupper - checks for uppercase characters
 *
 * @c: the character to be checked
 *
 * Return: 1 if c is uppercase.
 * otherwise, returns 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
