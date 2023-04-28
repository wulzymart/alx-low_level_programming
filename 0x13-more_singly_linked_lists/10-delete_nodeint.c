#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at
 * index index of a listint_t linked list.
 * @head: pointer to head pointer
 * @index: index of node to delete
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prior, *h, *next;
	unsigned int i;

	if (!head)
		return (-1);
	h = *head;
	if (!h)
		return (-1);
	if (index == 0)
	{
		next = h->next;
		free(h);
		*head = next;
		return (1);
	}
	for (i = 0; i < index && h; i++)
	{
		prior = h;
		h = h->next;
	}
	if (i < index)
		return (-1);
	if (!h)
		return (-1);
	prior->next = h->next;
	free(h);
	return (1);
}
