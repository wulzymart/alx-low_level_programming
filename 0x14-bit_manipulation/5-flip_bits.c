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
/**
 * flip_bits -  returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: number 1
 * @m: number 2
 * Return: number of bits needed
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int j = 0, imax = sizeof(n) * 8, k = 0;

	for (; j < imax; j++)
	{
		if (get_bit(n, j) != get_bit(m, j))
			k++;
	}
	return (k);
}
