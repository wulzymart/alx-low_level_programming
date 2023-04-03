#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 *
 * @haystack: string to be checked
 * @needle: substring being checked for
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j] &&
		       needle[j] != 0 && haystack[i + j] != 0)
		{

			j++;
		}

		if (needle[j] == 0)
			return (haystack + i);
		i++;
	}
	return (0);
}
