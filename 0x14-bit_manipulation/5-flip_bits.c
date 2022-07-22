#include "main.h"

/**
 *flip_bits - returns the number of bits you would need to
 *flip to get from one number to another.
 *@n: integer n
 *@m: number to flip n to
 *
 *Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned long int i;

	i = 0;
	xor = n ^ m;
	while (xor)
	{
		if (xor & 1)
			i++;
		xor >>= 1;
	}
	return (i);
}
