#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: the full string that contains the substring
 * @accept: the bytes to search for in s
 *
 * Return: the number of bytes in the initial segment of s
 * which consists only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int s_len = strlen(s);
	int accept_len = strlen(accept);

	for (i = 0; i < s_len; i++)
	{
		for (j = 0; j < accept_len; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (j == accept_len)
		{
			return (count);
		}
	}

	return (count);
}
