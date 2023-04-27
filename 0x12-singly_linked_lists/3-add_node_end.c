#include "lists.h"
/**
 * _strlen - gets length of string
 * @str: string
 * Return: length of string
*/
unsigned int _strlen(const char *str)
{
	unsigned int n = 0;

	while (*str)
	{
		n++;
		str++;
	}
	return (n);
}
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: address of head of node
 * @str: string part of element
 * Return: pointer to new head
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *end, *h;

	if (!head)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->len = _strlen(str);
	new->str = strdup(str);
	new->next = NULL;
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	h = *head;
	while (h)
	{
		if (h->next == NULL)
			end = h;
		h = h->next;
	}
	end->next = new;
	return (new);
}
