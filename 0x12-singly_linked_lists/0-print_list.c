#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all the elements in a linked list
 * @h; pointer to the list_t to be printed
 *
 * Return: The number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;



	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	
	}
	printf("[%u] %s\n", h->len, h->str);
	return(count + 1);
}
