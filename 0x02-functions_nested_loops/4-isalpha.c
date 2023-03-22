#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: character to be checked
 *
 * Return: 1 (character is an alphabet), 0 (character is not an alphabet)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 61 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
