#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to head node
 * @n: int to add
 * Return: head node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *h;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!(*head))
		*head = new;
	else
	{
		h = *head;
		while (h->next)
		{
			h = h->next;
		}
		h->next = new;
	}
	return (new);
}
