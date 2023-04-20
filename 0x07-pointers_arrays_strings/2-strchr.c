#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string
 *
 * @s: the string
 * @c: the character to be found in the string
 *
 * Return: a pointer to the first occurrence of character c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}
		s++;
	}

	if (*s == c)
	{
		return s;
	}

	return (NULL);
}
