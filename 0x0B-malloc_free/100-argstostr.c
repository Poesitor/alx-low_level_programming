#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program
 *
 * @ac: argument count
 * @av: argunent vector
 *
 * Return: a pointer to the newly created string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	int charcount = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			charcount++;

		charcount++;
	}
	str = malloc(sizeof(char) * charcount);
	if (str == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			str[k] = av[i][j];

		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
