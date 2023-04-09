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
	char *p = str;
	while (*p)
	{
		if ((*p == 32 || *p == 10 || *p == 9 || *p == 44 || *p == 59 || *p == 46 || *p == 33 || *p == 63 || *p == 34 || *p == 40 || *p == 41 || *p == 123 || *p == 125) && (*(p + 1) >= 97 && *(p + 1) <= 122))
		{
			*(p + 1) -= 32;
		}
		p++;
	}
	return (str);
}
