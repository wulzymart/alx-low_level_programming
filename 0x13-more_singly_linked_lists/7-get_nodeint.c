#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head pointer
 * @index: index of node to return
 * Return: node at index or NULL if not exists
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	for (; i < index && head ; i++)
		head = head->next;
	return (i == index ? head : NULL);
}
