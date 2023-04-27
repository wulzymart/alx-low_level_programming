#include "lists.h"
/**
 * list_len - eturns the number of elements in a linked list_t list.
 * @h: list head node
 * Return: length of node
*/

size_t list_len(const list_t *h)
{
	size_t n = 0;

	if (!h)
		exit(98);
	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
