#include <unistd.h>
/**
 * main - A ptogramme with a new line
 * Return: 1 (success)
 */
int main(void)
{
	write(2, "and that piece of artis useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
