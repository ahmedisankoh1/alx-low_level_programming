#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *tmp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = length;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (NULL);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = newNode;

	return (newNode);
}
