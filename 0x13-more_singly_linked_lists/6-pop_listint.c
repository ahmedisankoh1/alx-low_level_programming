#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t list
 * @head: head of the listint_t list
 *
 * Return: returns the data of the head node of the listint_t list
 */

int pop_listint(listint_t **head)
{
	listint_t *check;
	int num;

	if (*head == NULL)
		return (0);

	num = (*head)->n;
	check = (*head)->next;
	free(*head);
	*head = check;
	return (num);
}
