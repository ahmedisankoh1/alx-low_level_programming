#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *check0 = head;
	listint_t *check1 = head;

	if (head == NULL)
		return (NULL);

	while (check0 != NULL && check1 != NULL && check1->next != NULL)
	{
		check0 = check1->next->next;
		check0 = check0->next;
		if (check0 == check1)
		{
			check0 = head;
			while (check0 != check1)
			{
				check0 = check0->next;
				check1 = check1->next;
			}
			return (check1);
		}
	}

	return (NULL);
}
