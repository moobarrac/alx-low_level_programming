#include "main.h"

/**
 * _sqrt_recursion - return the natural sqr root of a number
 * @n: number
 * Return: sqr root or -1 if not
 */

int _sqrt_recursion(int n)
{
	return (helper(n, 1));


	int helper(int s, int i)
	{
		int sqr;

		sqr = i * i;
		if (sqr == s)
			return (i);
		else if (sqr < s)
			return (helper(s, i + 1));
		else
			return (-1);
	}
}
