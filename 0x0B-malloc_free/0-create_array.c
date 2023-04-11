#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char.
 * @size: size of array to create
 * @c: character to initialize with
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		*(p + i) = c;
	return (p);
}