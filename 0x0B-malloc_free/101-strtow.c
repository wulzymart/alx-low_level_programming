#include <stdlib.h>
#include "main.h"

/**
 * count_words - counts the words in a string seperated by space
 * @str: the string
 * Return: 0 if string is NULL or empty else number of words
 */

int count_words(char *str)
{
	int c = 0, i = 0;

	if (str == NULL)
		return (0);

	while (str[i])
	{
		if (i == 0 && str[i] != ' ')
			c++;
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != 0)
			c++;
		i++;
	}
	return (c);
}

/**
 * strtow - splits a string into words.
 * @str: string to split
 * Return: pointer to an array of strings (words),
 * NULL if str == NULL or str == "" of if function fails;
 */
char **strtow(char *str)
{
	char **split;
	int w = count_words(str), i, j, k, l, m;

	if (!w)
		return (NULL);
	split = malloc(sizeof(split) * (w + 1));
	if (split == NULL)
		return (NULL);
	for (i = 0, j = 0; i < w; i++)
	{
		while (str[j] == ' ')
			j++;
		l = j;
		k = 0;
		while (str[j] && str[j] != ' ')
		{
			k++;
			j++;
		}

		split[i] = malloc(sizeof(char) * (k + 1));
		if (split[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(split[i]);
			free(split);
			return (NULL);
		}
		for (m = 0; str[l] && str[l] != ' '; l++, m++)
			split[i][m] = str[l];
		split[i][m] = '\0';
	}
	split[i] = NULL;
	return (split);
}
