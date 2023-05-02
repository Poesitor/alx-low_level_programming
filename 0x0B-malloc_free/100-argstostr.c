#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of a program
 *
 * @ac: the number of arguments
 * @av: the array of arguments
 *
 * Return: a pointer to the concatenated string, of NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int i, position, total_len = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
	}

	result = malloc(sizeof(char) * total_len);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strcpy(&result[position], av[i]);
		position += strlen(av[i]);
		result[position] = '\n';
		position++;
	}

	result[position] = '\0';
	return (result);
}
