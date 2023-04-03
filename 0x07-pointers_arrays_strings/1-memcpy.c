#include "main.h"

/**
 * _memcopy - copies n bytes from memory area src to memory area dest
 *
 * @dest: destination pointer
 * @src: src pointer
 * @n: bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
