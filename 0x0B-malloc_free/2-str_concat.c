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
	int l1, l2, i;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	i = 0

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
