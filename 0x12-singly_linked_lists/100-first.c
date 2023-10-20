#include "lists.h"
int print_before_main(void) __attribute__((constructor));

/**
 * print_before_main - A function that executes before the main function
 *
 * Return: success 0
 */

int print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

	return (0);
}
