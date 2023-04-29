#include "lists.h"
/**
 * add_node - adds a new pointer as a node to ptr linked list
 * @head: ptr to head node;
 * @p: new ptr to add to ll
 * Return: pointer to new node
*/

node *add_node(node **head, listint_t *p)
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
 * ispresent - checks if a ptr is already in a node ll
 * @ptr: ptr to check;
 * @head: node head
 * Return: 0 if not present, 1 if found
*/

int ispresent(const listint_t *ptr, node *head)
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
 * free_node - frees a node list.
 * @head: head node of list
*/

void free_node(node *head)
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
 * print_listint_safe - prints a linked list, safely
 * @head: head pointer
 * Return: number of nodes in the list
 */


size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	node *h = NULL;

	while (head)
	{
		n++;
		if (ispresent(head, h))
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		add_node(&h, (listint_t *)head);
		head = head->next;
	}
	free_node(h);
	return (n);
}
