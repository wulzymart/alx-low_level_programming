#include "lists.h"
/**
 * add_nodefree - adds a new pointer as a node to ptr linked list
 * @head: ptr to head node;
 * @p: new ptr to add to ll
 * Return: pointer to new node
*/

node *add_nodefree(node **head, listint_t *p)
{
	node *h;
	node *new = malloc(sizeof(node));

	if (!new)
		exit(98);
	new->ptr = p;
	h = *head;
	new->next = h;
	*head = new;
	return (new);
}

/**
 * ispresentfree - checks if a ptr is already in a node ll
 * @ptr: ptr to check;
 * @head: node head
 * Return: 0 if not present, 1 if found
*/

int ispresentfree(listint_t *ptr, node *head)
{
	while (head)
	{
		if (head->ptr == ptr)
			return (1);
		head = head->next;
	}
	return (0);
}
/**
 * free_nodefree - frees a node list.
 * @head: head node of list
*/

void free_nodefree(node *head)
{
	node *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

/**
 * free_listint_safe - prints a linked list, safely
 * @h: pointer to list head
 * Return: number of nodes freed
 */


size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	node *n = NULL;
	listint_t *head = *h, *temp;

	while (head)
	{
		if (ispresentfree(head, n))
			break;
		add_nodefree(&n, head);
		temp = head->next;
		free(head);
		head = temp;
		i++;
	}
	free_nodefree(n);
	*h = NULL;
	return (i);
}
