#include "main.h"

/**
 * _pow_recursion - func that return the value of x raised to power of y
 * @x: the base
 * @y: the power
 * Return: the base to the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
