#include "main.h"
/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: index to set
 * Return: 1 if success, -1 if failed
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long j;

	if (index > (sizeof(n) * 8))
		return (-1);
	j = 1 << index;
	*n |= j;
	return (1);
}
