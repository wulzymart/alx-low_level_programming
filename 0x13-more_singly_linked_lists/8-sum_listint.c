#include "lists.h"
/**
 * sum_listint - sums all the data in a listint_t
 * @head: head pointer
 * Return: sum or 0 id list is empty
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
