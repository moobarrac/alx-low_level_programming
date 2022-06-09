#include "main.h"

/**
 * print_line - function that draw a straight line in terminal
 * @n: int amount of _
 */

void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
