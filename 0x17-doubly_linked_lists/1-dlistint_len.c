#include "lists.h"
/**
 * dlistint_len - get length of a double linked list
 * @h: head node
 * Return: length of node
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
