#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: number
 * @index: index which starts from 0
 * Return: value at index or -1 if error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > (sizeof(n) * 8))
		return (-1);
	b = n >> index;
	return (b & 1);
}
