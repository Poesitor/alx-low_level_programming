#include "main.h"
#include <string.h>

/**
 * _strpbrk - a function that searches a string for any set of bytes
 *
 * @s: the string to be searched
 * @accept: the string which contains characters to be found
 *
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int s_len = strlen(s);
	int accept_len = strlen(accept);

	for (i = 0; i < s_len; i++)
	{
		for (j = 0; j < accept_len; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}

	return (NULL);
}
