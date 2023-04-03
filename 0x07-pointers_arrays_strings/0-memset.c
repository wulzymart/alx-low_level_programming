#include "main.h"

/**
 *_memset - fills first n bytes of memory area pointed to by s
 * with constant byte b
 *
 * @s: pointer to string
 * @n: bytes to set
 * @b: constant to fill into memory
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
