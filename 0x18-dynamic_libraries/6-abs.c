#include "main.h"
/**
 * _abs - Entry point
 * @b: int to be checked
 * Return: always b or -b
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else if (n >= 0)
		return (n);
	return (0);
}
