#include "lists.h"

/**
 * *insert_nodeint_at_index - Inserts a node a nod at index idx of listint_t
 * @head: head of the listint_t list
 * @idx: the index in which the new node should be placed
 * @n: The data of the new node
 *
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *check;
	int a;
	int i;

	check = *head;
	a = idx - 1;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	new_node->n = n;
	if (*head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < a; i++)
	{
		check = check->next;
	}
	new_node->next = check->next;
	check->next = new_node;

	return (new_node);
}
