#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: array size
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (j > i)
	{
		a[i] = a[j];
		i++;
		j--;
	}
}
