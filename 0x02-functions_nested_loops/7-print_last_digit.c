#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		l = -1 * (n % 10);
		_putchar(l + '0');
		return (l);
	}
	else
	{
		l = n % 10;
		_putchar(l + '0');
		return (l);
	}
}
