#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: Null if malloc or min > max and ptr if success
 */

int *array_range(int min, int max)
{
	int size, i;
	int *a;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	a = malloc(sizeof(int) * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++, min++)
		a[i] = min;
	return (a);
}
