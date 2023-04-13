#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of array members
 * @size: size of member elements
 * Return: NULL if it fails and pointer to the allocated memory if it success.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, s;

	if (size == 0 || nmemb == 0)
		return (NULL);
	s = nmemb * size;
	ptr = malloc(s);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		ptr[i] = 0;
	return (ptr);
}
