#include "main.h"
/**
 * _isdigit - checks if it is a digit
 * @c: is the int to be tested
 * Return: always 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
