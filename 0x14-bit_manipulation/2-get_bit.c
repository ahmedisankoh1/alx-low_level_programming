#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: number to be evaluate
 * @index: index  of the bit we want to get
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int keep, result;

	if (index > 64)
		return (-1);

	keep = n >> index;
	result = keep & 1;

	return (result);
}
