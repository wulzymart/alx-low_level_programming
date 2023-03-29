#include "main.h"

/**
 * _strncpy - copies n bytes of a string
 * @dest: destination string
 * @src: source string
 * @n: bytes to copy
 * Return: Destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
