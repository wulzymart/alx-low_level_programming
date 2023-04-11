#include "main.h"
#include <stdlib.h>

/**
 * _strlen - gets length of a string
 * @str: string
 * Return: length of string
 */

int _strlen(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	while (str[i])
		i++;
	return (i);
}

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: newly allocated space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int l1 = _strlen(s1);
	int l2 = _strlen(s2);
	int i = 0;
	char *s;

	if (l1 == 0 && l2 == 0)
		return (NULL);

	s = malloc(sizeof(char) * (l1 + l2 + 1));

	if (s == NULL)
		return (NULL);

	if (l1)
		while (i < l1)
		{
			*(s + i) = *(s1 + i);
			i++;
		}
	if (l2)
		while (i < (l1 + l2))
		{
			*(s + i) = *(s2 + i - l1);
			i++;
		}
	*(s + i) = '\0';

	return (s);
}
