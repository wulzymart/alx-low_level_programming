#include "main.h"

/**
 *_strspn - gets number of bytes in first segment of a string which contains
 * bytes from another string
 *
 * @s: string to check
 * @accept: bytes being checked
 *
 * Return: number of bytes found
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	i = count = 0;
	while (s[i] != ' ' && s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				count++;
			j++;
		}
		i++;
	}
	return (count);
}
