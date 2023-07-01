#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: a pointer to the string
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s == '\0')
	{
		return (0);
	}
	else
		len += _strlen_recursion(s + 1);

	return (len);
}
