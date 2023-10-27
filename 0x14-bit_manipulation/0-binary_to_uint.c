#include "main.h"
/**
 * binary_to_uint - converts a binary to an int
 * @b: a string containing the binary to be converted
 *
 * Return: Returns the int of the binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int power = 1;
	int i;
	int result = 0;


	while (b[n] != '\0')
		n++;
	for (i = n - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			result = result + power;
		power = power * 2;
	}
	return (result);
}
