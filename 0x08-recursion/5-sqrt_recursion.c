#include "main.h"

/**
 * _sqrt_recursion - return the natural sqr root of a number
 * @n: number
 * Return: sqr root or -1 if not
 */

int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}

/**
 * helper - help to solve the sqrt recursion
 * @n: number ot check for sqr root
 * @i: increment to compare
 * Return: sqr root or -1 if not
 */


int helper(int n, int i)
{
	int sqr;

	sqr = i * i;
	if (sqr == n)
		return (i);
	else if (sqr < n)
		return (helper(n, i + 1));
	else
		return (-1);
}
