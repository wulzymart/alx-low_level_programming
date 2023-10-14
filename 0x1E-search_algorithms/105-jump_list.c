#include "search_algos.h"
#include <math.h>
/**
 * jump_list - searches for a value in an array of integers
 * @list: linked list of integers
 * @size: list size
 * @value: value to get
 * Return: node found or NULL if not found
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, i, min;
	listint_t *start, *present;

	if (!list || !size)
		return (NULL);
	i = 0;
	jump = sqrt(size);
	start = present = list;
	while (present->index + 1 < size  && present->n < value)
	{
		start = present;
		i += jump;
		while (present->index < i && present->index < size - 1)
			present = present->next;
		printf("Value checked at index [%ld] = [%d]\n", present->index, present->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			start->index, present->index);
	min = present->index < size - 1 ? present->index : size - 1;
	for (; start->index < min - 1; start = start->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", start->index, start->n);
		if (start->n == value)
			return (start);
	}

	return (NULL);
}
