#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: head of linked list
 * @index: node index to be returned
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
