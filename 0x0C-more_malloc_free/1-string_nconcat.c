#include <stdlib.h>

/**
 * _strlen - gets length of a string
 * @str: string
 * Return: length of string
 */

unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	if (str == NULL)
		return (0);

	while (str[i])
		i++;
	return (i);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2 to copy
 * Return: NULL if it fails, pointer to new string if it succeeds
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, l, l2n, l1 = _strlen(s1), l2 = _strlen(s2);

	l2n = n > l2 ? l2 : n;
	l = l1 + l2n + 1;
	s = malloc(sizeof(char) * l);
	if (s == NULL)
		return (NULL);
	i = 0;
	if (l1)
		for (; i < l1; i++)
			s[i] = s1[i];
	if (l2)
		for (j = 0; j < l2n; j++, i++)
			s[i] = s2[j];
	s[i] = '\0';

	return (s);
}
