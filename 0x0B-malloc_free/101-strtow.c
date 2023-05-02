#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ' ' && str[i] != '\0')
		{
			i++;
		}

		if (str[i] != '\0')
		{
			count++;

			while (str[i] != ' ' && str[i] != '\0')
			{
				i++;
			}
		}
	}

	return (count);
}

char **strtow(char *str)
{
	int num_words, i, j, k, word_len;
	char **words;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}

	num_words = count_words(str);
	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}


	for (i = 0, j = 0; str[i] != '\0' && j < num_words; i++)
	{
		while (str[i] == ' ')
		{
			i++;
		}

		word_len = 0;

		while (str[i + word_len] != ' ' && str[i + word_len] != '\0')
		{
			word_len++;
		}

		words[j] = malloc((word_len + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			for (k = 0; k < j; k++)
			{
				free(words[k]);
			}
			free(words);
			return (NULL);
		}
		
		for (k = 0; k < word_len; k++)
		{
			words[j][k] = str[i + k];
		}

		words[j][k] = '\0';
		j++;
		i += word_len;
	}

	words[j] = NULL;

	return (words);
}
