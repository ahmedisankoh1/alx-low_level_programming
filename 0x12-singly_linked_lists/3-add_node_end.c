#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * @tmp: my tracking pointer
 *
 * Return: Return NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = length;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (NULL);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new;
	
	return (NULL);
}
