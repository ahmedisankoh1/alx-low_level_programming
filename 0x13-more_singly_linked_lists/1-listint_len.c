#include "lists.h"

/**
 * listint_len - checks the number of nodes in the listint_t list
 * @h: Head of listint_t list
 *
 * Return: return the number of nodes in the listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (num + 1);

	while (h != NULL)
	{
		h = h->next;
		num++;
	}

	return (num);
}
