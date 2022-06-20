#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of 2 diagonals of a sqr matrix
 * @a: 2d array of int type
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i, sum, sizes;

	i = 0;
	sum = 0;
	sizes = size * size;
	while (i < sizes)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		i++
	}
	printf("%d, ", sum);

	sum = 0;
	i = 0;
	while (i < sizes)
	{
		if (i % (size - 1) == 0 && i != (sizer - 1) && i != 0)
			sum += a[i];
		i++;
	}
	printf("%d, ", sum);
}
