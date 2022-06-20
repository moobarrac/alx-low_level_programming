#include "main.h"

/**
 * _memset - Fills memory with aconst byte
 * @s: buffer array
 * @b: const byte
 * @n: number of bytes
 * Description: Fills the first n bytes of the memory pointed to by s
 * Return: Pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while(n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
