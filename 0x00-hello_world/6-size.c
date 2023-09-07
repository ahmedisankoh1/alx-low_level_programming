#include <stdio.h>
/**
 * main - A programme that prints the size of type os variables
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	char c;
	float f;
	double d;
	printf("The size of an int is:%lu.\n", (unsigned long)sizeof(i));
	printf("The size of a char is:%lu.\n", (unsigned long)sizeof(c));
	printf("The size of a float is:%lu.\n", (unsigned long)sizeof(f));
	printf("The size of a double is:%li.\n", (unsigned long)sizeof(d));
	return (0);
}
