#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary string
 * Return: value in int and 0 if error
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0 ; b[i] ; i++)
	{
		if (b[i] > '1' || b[i] < '0')
			return (0);
		n = (2 * n) + b[i] - '0';
	}
	return (n);
}
