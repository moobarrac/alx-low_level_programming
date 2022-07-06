#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: pointer to an array to look for the integer
 * @size: np of element in the array
 * @cmp: function to compare values
 * Return: index of first element or -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (size <= 0)
				return (-1);
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
