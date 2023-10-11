#include "search_algos.h"
/**
 * binary_search_rec - helper function
 * @array: pointer to first element of array to seach
 * @value: value to search for
 * @start: starting index
 * @end: ending
 *
 * Return: index of value or -1
 */
int binary_search_rec(int *array, size_t start, size_t end, int value)
{
	size_t mid, i;

	if (!array)
		return (-1);

	mid = (start + end) / 2;
	printf("Searching in array: ");
	for (i = start; i <= end; i++)
		printf("%i%s", array[i], i == end ? "\n" : ", ");

	if (array[start] == value)
		return (start);

	if (array[start] != array[end])
	{
		if (array[mid] < value)
			return (binary_search_rec(array, mid + 1, end, value));
		if (array[mid] >= value)
			return (binary_search_rec(array, start, mid, value));
	}

	return (-1);
}

/**
 * advanced_binary - searches for a value in an array of integers
 *
 * @array: array of integers
 * @size: array size
 * @value: value to get
 * Return: value found or -1 if not found
*/
int advanced_binary(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1;

	if (!array)
		return (-1);

	return (binary_search_rec(array, start, end, value));
}
