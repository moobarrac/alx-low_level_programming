#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: char string
 * @src: char string
 * @n: number of character to concatenate
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
		dest[i] = src[c];
	return (dest);
}
