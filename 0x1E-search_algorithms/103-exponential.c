#include "search_algos.h"
#include "search_algos.h"
/**
 * binary_s -  searches for a value in an array of integers
 *
 * @array: array of integers
 * @start: lower bound
 * @end: upper bound
 * @value: value to get
 * Return: value found or -1 if not found
 */
int binary_s(int *array, size_t start, size_t end, int value)
{
	size_t a, z, m, i;
	char *l_end;

	if (array == NULL)
	{
		return (-1);
	}
	a = start;
	z = end;

	while (a <= z)
	{

		m = (a + z) / 2;
		printf("Searching in array: ");
		for (i = a; i <= z; i++)
		{
			l_end = i == z ? "\n" : ", ";
			printf("%i%s", array[i], l_end);
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

/**
 * exponential_search - searches for a value in an array of integers
 *
 * @array: array of integers
 * @size: array size
 * @value: value to get
 * Return: value found or -1 if not found
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t end = size - 1, b;

	if (!array || !size)
		return (-1);
	for  (b = 1; b < size && array[b] < value; b *= 2)
		printf("Value checked array[%li] = [%i]\n", b, array[b]);

	end = end < b ? end : b;
	printf("Value found between indexes [%li] and [%li]\n", b / 2, end);
	return (binary_s(array, b / 2, end, value));
}
