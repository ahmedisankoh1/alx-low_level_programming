#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginning of the listint_t list
 * @head: head of the listint_t list
 * @n: is int n of the listint_t list
 *
 * Return: address of the new node;
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
		new_node->next = *head;

	*head = new_node;

	return (*head);
}
