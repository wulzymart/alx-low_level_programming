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
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * Return: pointer to a newly allocated space in memory, which contains a copy
 * of the string given as a parameter.
 */

char *_strdup(char *str)
{
	char *dup;
	int len, i;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		*(dup + i) = *(str + i);
	*(dup + i) =  '\0';

	return (dup);
}
