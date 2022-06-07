#include "main.h"
/**
 * _islower - Return 1 if the letter is lowercase, else 0
 * @c: char type letter
 * Return: 1 if lowercase, 0 if not
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
		return (0);
}
