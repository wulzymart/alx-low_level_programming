#include "main.h"

/**
 * _strncat - appends src to dest
 * @dest: destination string
 * @src: source string
 * @n: bytes to copy
 * @,
 * Return: pointer to destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}

	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
