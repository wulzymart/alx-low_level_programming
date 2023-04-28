#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head pointer
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
