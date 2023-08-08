#include "main.h"

/**
 * _isalpha - checks for lowercase character
 *
 * @c: the character to be checked
 *
 * Return: 1, if c is lowercase or uppercase.
 * otherwise, return 0.
 */
int _isalpha(int c)
{
	if (65 <= c && 122 >= c)
	{
		if (!(91 <= c && 96 >= c))
		{
			return (1);
		}
	}
		return (0);
}
