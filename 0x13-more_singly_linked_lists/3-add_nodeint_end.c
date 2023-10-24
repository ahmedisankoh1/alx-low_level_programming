#include "lists.h"

/**
 * *add_nodeint_end - adds a new node to the end of the listint_t list
 * @head: address to the first node of the listint_t list
 * @n: int of the new node
 *
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *check;

	end_node = (listint_t *)malloc(sizeof(listint_t));

	end_node->n = n;
	check = *head;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}

	while (check->next != NULL)
		check = check->next;

	check->next = end_node;

	return (end_node);
}
