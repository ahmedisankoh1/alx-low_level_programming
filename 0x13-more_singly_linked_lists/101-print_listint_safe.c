#include "lists.h"

/**
 * print_listint_safe - prints the elements in the listint_t list
 * @head: head of the listint_t list
 *
 * Return: returns the number of nodes in the list or 98
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;

	if (head == NULL)
		exit(98);

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		i++;
	}
	printf("[%p] %d\n", (void *)head, head->n);
	i++;

	return (i);
}
