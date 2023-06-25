#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string
 *
 * @s: the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;
	char tmp;

	len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
}
