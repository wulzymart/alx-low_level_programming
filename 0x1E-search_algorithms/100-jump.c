#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in an array of integers
 *
 * @array: array of integers
 * @size: array size
 * @value: value to get
 * Return: value found or -1 if not found
*/
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, root, min;

	if (!array || size == 0)
		return (-1);

	root = sqrt(size);
	for (end = 0; end < size && array[end] < value;
		 start = end, end += root)
	{
		printf("Value checked array[%lu] = [%d]\n",
			   end, array[end]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	min = end < size - 1 ? end : size - 1;
	for (; start <= min; start++)
	{
		if (array[start] == value)
			return (start);
	}
	return (-1);
}
