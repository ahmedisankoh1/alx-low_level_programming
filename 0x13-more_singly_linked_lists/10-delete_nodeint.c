#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of the list
 * @head: The head of the listint_t list
 * @index: The index of the node to be deleted
 *
 * Return: return 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *check;
	listint_t *tmp;
	int i;
	int a;

	a = index - 1;

	check = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(check);
		return (1);
	}
	for (i = 0; i < a; i++)
		check = check->next;

	tmp = check->next;
	check->next = tmp->next;
	free(tmp);
	return (1);
}
