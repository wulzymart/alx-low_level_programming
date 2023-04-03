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
	sum1 = sum2 = 0;
	while (i < size)
	{
		sum1 += *(a + i * size + i);
		i++;
	}
	j = size - 1;
	i = 0;
	while (j >= 0 && i < size)
	{
		sum2 += *(a + i * size + j);
		j--;
		i++;
	}

	printf("%lu, %lu\n", sum1, sum2);
}
