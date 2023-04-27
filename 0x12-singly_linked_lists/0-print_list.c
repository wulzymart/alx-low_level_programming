#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: head node of list
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (-1);
	while (h)
	{
		char *s;
		unsigned int l;

		s = h->str;
		l = h->len;
		if (!h->str)
		{
			s = "(nil)";
			l = 0;
		}

		printf("[%u] %s\n", l, s);
		n++;
		h = h->next;
	}
	return (n);
}
