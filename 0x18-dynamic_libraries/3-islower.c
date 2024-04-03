#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: the character to be checked
 *
 * Return: 1, if c is lowercase
 * otherwise, return 0.
 */
int _islower(int c)
{
	if (97 <= c && 122 >= c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
