#include <stdlib.h>
#include "main.h"

/**
 * _strlen - gets length of a string
 * @str: string
 * Return: length of string
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: arguement array
 * Return: NULL if ac == 0 or av == NULL
 * pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int total_len = 0, i, j, k, l;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_len += _strlen(av[i]);
	total_len += ac;
	total_len++;

	s = malloc(total_len * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
	{
		l = _strlen(av[i]);
		for (j = 0; j <= l; j++, k++)
		{
			if (j == l)
				s[k] = '\n';
			else
				s[k] = av[i][j];
		}
	}
	s[k] = '\0';
	
	return (s);
}
