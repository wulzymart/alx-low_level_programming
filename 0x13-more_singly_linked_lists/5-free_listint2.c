#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * head set to null
 * @head: pointer to head poiter
*/
void free_listint2(listint_t **head)
{
	listint_t *temp, *h;

	if (head)
	{
		h = *head;
		while (h)
		{
			temp = h->next;
			free(h);
			h = temp;
		}
	*head = NULL;
	}
}
