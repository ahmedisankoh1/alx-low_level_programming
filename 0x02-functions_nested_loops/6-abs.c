#include "main.h"
/**
 * _abs - Entry point
 * @b: int to be checked
 * Return: always b or -b
 */
int _abs(int b)
{
	if (b < 0)
		return (-b);
	else if (b >= 0)
		return (b);
	return (0);
}
