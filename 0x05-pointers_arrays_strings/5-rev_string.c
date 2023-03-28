#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, len;
	char tmp;

	j = len = 0;
	while (s[j])
	{
		len++;
		j++;
	}
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
}
