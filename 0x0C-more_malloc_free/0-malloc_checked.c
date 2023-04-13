#include <stdlib.h>

/**
 * malloc_checked - allocate and check memory with alloc
 * @b: bytes to be freed
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
		exit(98);
	return (m);
}
