#include  "lists.h"
/**
 * print_dlistint - prints all the data in a linked list
 * @h: pointer theo teh first node
 *
 * Return: The number of node in the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h->next == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	count++;
	printf("%d\n", h->n);
	return (count);
}
