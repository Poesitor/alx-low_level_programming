#include "main.h"

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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	if (s[i])
	{
		return (s + i);
	}

	return ('\0');
}
