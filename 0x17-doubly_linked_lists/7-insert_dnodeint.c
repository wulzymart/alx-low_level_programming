#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: pointer to head
 * @idx: index
 * @n: new int to add
 * Return: new node or NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *prior, *tmp;
	unsigned int i;

	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = new->next = NULL;
	tmp = *h;
	if (idx == 0)
	{
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	for (i = 0; i < idx && tmp; i++)
	{
		prior = tmp;
		tmp = tmp->next;
	}
	if (i < idx)
		return (NULL);
	prior->next = new;
	new->prev = prior;
	new->next = tmp;
	if (tmp)
		tmp->prev = new;
	return (new);
}
