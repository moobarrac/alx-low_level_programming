#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 * Return: Success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
