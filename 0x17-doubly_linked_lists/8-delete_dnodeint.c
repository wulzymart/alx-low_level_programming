#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: pointer to head node
 * @index: index to delete
 * Return: 1 if success, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prior, *h, *next;
	unsigned int i;

	if (!head || !*head)
		return (-1);
	h = *head;
	if (index == 0)
	{
		next = h->next;
		free(h);
		if (next)
			next->prev = NULL;
		*head = next;
		return (1);
	}
	for (i = 0; i < index && h; i++)
	{
		prior = h;
		h = h->next;
	}
	if (i < index || !h)
		return (-1);
	prior->next = h->next;
	if (h->next)
		h->next->prev = prior;
	free(h);
	return (1);
}
