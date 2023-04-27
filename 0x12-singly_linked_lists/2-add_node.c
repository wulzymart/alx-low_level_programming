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
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: address of head of node
 * @str: string part of element
 * Return: pointer to new head
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!str)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->len = _strlen(str);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = *head;
	*head = new;
	return (*head);
}
