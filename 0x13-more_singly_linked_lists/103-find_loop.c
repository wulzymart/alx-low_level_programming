#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: loop head
 * Return: pointer to loop begining or NULL
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head, *slow = head;

	if (!head || !head->next)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}

	}
	return (NULL);
}
