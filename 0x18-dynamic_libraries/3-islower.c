#include "main.h"
/**
 * _islower - Entry point
 * @c: parameter to be checked
 * Return: always 0 or 1
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
