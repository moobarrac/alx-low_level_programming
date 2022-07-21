#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to a str of 0 and 1 chars
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int shift = 1;
	unsigned int uint = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		uint <<= shift;
		if (b[i] == '1')
			uint += 1;
	}
	return (uint);
}
