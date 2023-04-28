#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at an index position
 * @head: pointer to header pointer
 * @idx: index
 * @n: member data to insert
 * Return: pointer to new node or NULL if fails
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prior, *h;
	unsigned int i;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	h = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx && h; i++)
	{
		prior = h;
		h = h->next;
	}
	if (i < idx)
		return (NULL);
	prior->next = new;
	new->next = h;
	return (new);
}
