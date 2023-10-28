#include "main.h"

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip the number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;

	int count = 0;

	flip = n ^ m;

	while (flip)
	{
		count++;
		flip = flip & (flip - 1);
	}

	return (count);
}
