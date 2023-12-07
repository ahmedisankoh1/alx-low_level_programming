#include "lists.h"

/**
 * sum_dlistint - sums the datas of the nodes in listint_t list
 * @head: head of the listint_t list
 *
 * Return: the sum fo the datas in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *check;

	check = head;

	if (head == NULL)
		return (0);

	while (check->next != NULL)
	{
		sum = check->n + sum;
		check = check->next;
	}
	sum = check->n + sum;

	return (sum);
}
