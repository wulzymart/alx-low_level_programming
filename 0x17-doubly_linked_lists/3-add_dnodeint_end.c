#include "lists.h"
/**
 * add_dnodeint_end - adds a node to the end of a double linked list
 * @head: pointer to head node
 * @n: integer to add
 * Return: address of new element or NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	if (!head)
		return (NULL);
	h = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = new->prev = NULL;
	if (!h)
	{
		*head = new;
		return (new);
	}
	while (h->next)
		h = h->next;
	h->next = new;
	new->prev = h;
	return (new);
}
