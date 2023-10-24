#include "lists.h"

/**
 * *get_nodeint_at_index - gets the node of the index in the listint_t list
 * @head: The first node of listint_t list
 * @index: index of the node to get
 *
 * Return: The node of the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;


	while (i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
