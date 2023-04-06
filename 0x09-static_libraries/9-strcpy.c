#include "main.h"
/**
 * _strlen - count length of string
 * @s: string to be counted address of string
 * Return: returns the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copies a string to the other
 * @dest: destination
 * @src: source
 * Return: address to 1st element of dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = _strlen(src);
	int i = 0;

	while (i <= l)
	{
		*(dest + i) = i < l ? *(src + i) : '\0';
		i++;
	}

	return (dest);
}
