#include "search_algos.h"
/**
 * binary_search -  searches for a value in an array of integers
 *
 * @array: array of integers
 * @size: array size
 * @value: value to get
 * Return: value found or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t a, z, m, i;
	char *end;

	if (array == NULL)
	{
		return (-1);
	}
	a = 0;
	z = size - 1;

	while (a <= z)
	{

		m = (a + z) / 2;
		printf("Searching in array: ");
		for (i = a; i <= z; i++)
		{
			end = i == z ? "\n" : ", ";
			printf("%i%s", array[i], end);
		}
		if (array[m] < value)
			a = m + 1;
		else if (array[m] > value)
			z = m - 1;
		else
			return (m);
	}
	return (-1);
}
