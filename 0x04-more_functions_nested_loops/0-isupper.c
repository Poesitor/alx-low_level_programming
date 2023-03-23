#include "main.h"

/**
 * _isupper - checks for uppercase characters
 *
 * @c: character to check
 *
 * Return: 1 (c is uppercase) or 0 (c is not an uppercase character)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
