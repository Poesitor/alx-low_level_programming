#include "main.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: input to be checked
 *
 * Return: 1 (c is a digit) or 0 (c is not a digit)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
