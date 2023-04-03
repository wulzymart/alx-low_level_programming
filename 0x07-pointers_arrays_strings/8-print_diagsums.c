#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonal numbers in square matrix
 * @a: square matrix
 * @size: size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	long sum1, sum2;

	i = 0;
	j = size - 1;
	sum1 = sum2 = 0;
	while (i < size)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + j - i);
		i++;
	}
	printf("%lu, %lu\n", sum1, sum2);
}
