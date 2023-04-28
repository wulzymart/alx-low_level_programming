#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointerto head pointer
 * Return: the head node’s data (n)
*/

int pop_listint(listint_t **head)
{
	listint_t *temp, *h;
	int n;

	if (!head)
		return (0);
	h = *head;
	if (!h)
		return (0);
	temp = h->next;
	n = h->n;
	free(h);
	*head = temp;
	return (n);
}
