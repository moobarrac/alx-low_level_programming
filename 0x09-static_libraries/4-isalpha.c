#include "main.h"
/**
 * _isalpha - check if the character is an alphabet
 * @c: type int character
 * Return: 1 if it is an alphabet, 0 if not
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
