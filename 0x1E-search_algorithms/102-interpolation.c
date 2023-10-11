#include "search_algos.h"
/**
 * interpolation_search - searches for a value in an array of integers
 *
 * @array: array of integers
 * @size: array size
 * @value: value to get
 * Return: value found or -1 if not found
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t a, z, m;


	if (!array || !size)
		return (-1);

	a = 0;
	z = size - 1;

	while ((array[z] != array[a]) && (value >= array[a]) && (value <= array[z]))
	{

		m = a + (((double)(z - a) / (array[z] - array[a])) * (value - array[a]));
		printf("Value checked array[%li] = [%d]\n", m, array[m]);

		if (array[m] < value)
			a = m + 1;
		else if (array[m] > value)
			z = m - 1;
		else
			return (m);
	}
	if (value == array[a])
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		return (a);
	}
	m = a + (((double)(z - a) / (array[z] - array[a])) * (value - array[a]));
	printf("Value checked array[%li] is out of range\n", m);
	return (-1);
}
