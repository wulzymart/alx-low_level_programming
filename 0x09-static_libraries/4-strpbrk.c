#include "main.h"

/**
 * _strpbrk - locates first occurrence of a set of bytes in a string
 *
 * @s: string to be searched
 * @accept: string containing bytes being searched
 *
 * Return: pointer to the first match if found or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(accept + j) == *(s + i))
				return (s + i);
			j++;
		}
		i++;
	}
	return (0);
}
