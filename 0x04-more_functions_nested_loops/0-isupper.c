#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: char type
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
