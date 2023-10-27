#include "main.h"
/**
 * binary_to_uint - converts a binary to an int
 * @b: a string containing the binary to be converted
 *
 * Return: Returns the int of the binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int pwr;
	unsigned int total;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (pwr = 1, total = 0, i--; i >= 0; i--, pwr *= 2)
	{
		if (b[i] == '1')
			total += i;
	}

	return (total);
}
