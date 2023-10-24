#include "lists.h"

/**
 * free_listint2 - free's the listint_t list and initiallize head to NULL
 * @head: The head of the listint_t list
 *
 * Return: returns void
 */

void free_listint2(listint_t **head)
{
	listint_t *check;


	if (*head == NULL)
		free(*head);

	while (*head)
	{
		check = (*head)->next;
		free(*head);
		*head = check;
	}
	*head = NULL;
}
