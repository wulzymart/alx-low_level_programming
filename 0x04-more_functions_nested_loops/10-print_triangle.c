#include "main.h"

/**
 * print_triangle - prints triangle of given size
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, k;

		i = 0;
		while (i < size)
		{
			j = size - i;
			k = 0;
			while (j > 1)
			{
				putchar(' ');
				j--;
			}
			while (k <= i)
			{
				putchar('#');
				k++;
			}
			putchar('\n');
			i++;
		}
	}
	else
		putchar('\n');
}
