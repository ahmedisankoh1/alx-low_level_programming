#include "lists.h"
/**
 * print_listint - prints the elements in the nodes of listint_t list
 * @h: head of the node
 *
 * Return: returns the number of nodes in the listint_t list
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	printf("%d\n", h->n);
	i++;

	return (i);
}
