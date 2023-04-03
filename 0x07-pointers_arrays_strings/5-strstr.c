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
	unsigned int i, j, n, found;

	i = n = 0;
	while (needle[n])
	{
		n++;
	}
	while (haystack[i])
	{
		j = 0;
		found = 0;
		while (needle[j] && haystack[i + j])
		{
			if (haystack[i + j] != needle[j])
			{
				found = 0;
				break;
			}
			found = j == n - 1 ? 1 : 0;
			j++;
		}
		if (found)
			return (haystack + i);
		i++;
	}
	return (0);
}
