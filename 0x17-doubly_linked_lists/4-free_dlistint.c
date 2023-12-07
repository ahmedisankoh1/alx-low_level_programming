#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: head of linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *check;

	while (head != NULL)
	{
		check = head->next;
		free(head);
		head = check;
	}
}
