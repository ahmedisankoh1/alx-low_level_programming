#include "lists.h"
/**
 * free_listint - free's the listint_t list
 * @head: head of the listint_t list
 *
 * Return: returns void
 */
void free_listint(listint_t *head)
{
	listint_t *check;


	if (head == NULL)
		free(head);

	while (head != NULL)
	{
		check = head->next;
		free(head);
		head = check;
	}

}
