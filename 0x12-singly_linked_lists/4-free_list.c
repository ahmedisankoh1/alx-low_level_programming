#include "lists.h"

/**
 * free_list - Free the list_t list
 * @head: list_t list that is to be freed
 *
 * Return: returns nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
