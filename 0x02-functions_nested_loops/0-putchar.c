#include "main.h"
/**
 * main - Print the word _putchar
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	char p[] = "_putchar";

	while (i < 8)
	{
		_putchar(p[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
