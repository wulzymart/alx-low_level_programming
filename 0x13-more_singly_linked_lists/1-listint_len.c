#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: list head
 * Return: size of list
*/
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
