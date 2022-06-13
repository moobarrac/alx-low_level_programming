#include "main.h"

/**
 * puts2 - print one char out of two
 * @str: string type
 * Description: print 1st char, then 3red, then 5th, etc
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
