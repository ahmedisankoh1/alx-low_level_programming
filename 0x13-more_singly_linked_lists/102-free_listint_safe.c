#include "lists.h"

/**
 * free_listint_safe - frees the nodes in the listint_t list
 * @h: the first node in the listint_t list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *check;

	check = *h;

	if (*h == NULL)
		return (0);

	while (*h != NULL)
	{
		check = (*h)->next;
		free(*h);
		*h = check;
		len++;
	}

	*h = NULL;

	return (len);
}
