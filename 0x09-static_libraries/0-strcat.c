#include "main.h"

/**
 * _strcat - appends src to dest
 * @dest: destination string
 * @src: source string
 * Return: pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}

	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
