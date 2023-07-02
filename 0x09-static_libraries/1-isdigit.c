#include "main.h"

/**
 * _isdigit - checks if a character is a digit (0 through 9)
 *
 * @c: the character to be checked
 *
 * Return: 1 if c is a digit.
 * otherwise, returns 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
