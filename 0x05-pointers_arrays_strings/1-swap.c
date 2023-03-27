#include "main.h"

/**
 * swap_int - swaps the value of 2 integers values in memory
 * @a: 1st integer pointer
 * @b: 2nd integer pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
