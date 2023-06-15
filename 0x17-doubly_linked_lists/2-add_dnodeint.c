#include "lists.h"
/**
 * add_dnodeint - add a node to the beginning of a double linked list
 * @head: pointer to head node
 * @n: integer to add
 * Return: address of new node or NULL if failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h, *new;

	if (!head)
		return (NULL);
	h = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (h)
		h->prev = new;
	new->next = h;
	*head = new;
	return (new);
}
