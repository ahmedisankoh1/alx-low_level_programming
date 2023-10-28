#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: decimal number passed by pointer
 * @index: index position to change, starting from 0
 *
 * Return: 1 if it workes, -1 if if it dosen't
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int result;
	unsigned long int mask;

	if (index > 64)
		return (-1);

	mask = 1 << index;
	result = mask | *n;

	return (result);
}
