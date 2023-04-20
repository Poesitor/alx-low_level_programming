#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @str: the string to be modified
 *
 * Return: the modified string
 */
char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}

	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			switch (str[i - 1])
			{
				case ' ':
				case '\t':
				case '\n':
				case ',':
				case ';':
				case '.':
				case '!':
				case '?':
				case '"':
				case '{':
				case '}':
				case '(':
				case ')':
					str[i] -= 32;
					break;
				default:
					break;
			}
		}
	}

	return (str);
}
