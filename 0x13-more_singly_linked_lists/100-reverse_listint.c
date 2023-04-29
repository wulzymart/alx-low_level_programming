#include "lists.h"
/**
 * reverse_listint -  reverses a listint_t linked list.
 * @head: pointer to head pointer
 * Return: pointer to head
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next =  prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return  (*head);
}
