#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	int i;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (i =16 ; i >= 0; i--)
	{
		if (n & (1 << i))
			printf("1");
		else
			printf("0");
	}
}
