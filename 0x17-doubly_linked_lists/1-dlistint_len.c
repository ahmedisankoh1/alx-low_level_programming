#include "lists.h"
/**
 * dlistint_len - counts the number of elements in the linked list
 * @h: A pointer to the first element
 *
 * Return: returns the numbe of elements present
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}
	count++;
	return (count);
}
