#include "main.h"

/**
 * get_endianness - check for  endianness
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	int myCheck;

	myCheck = 1;

	if (*(char *)&myCheck == 1)
		return (1);
	else
		return (0);
}
