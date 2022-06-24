#include "main.h"

/**
 * *_strcpy - cpoy string to pointer
 * @dest: char type string
 * @src: char type string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
