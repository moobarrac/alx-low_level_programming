#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: array to copy into
 * @src: array to copy from
 * @n: number of element to copy
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *arr;

	arr = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (arr);
}
