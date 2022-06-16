#include "main.h"

/**
 * _strcmp - compare two str
 * @s1: str
 * @s2: str
 * Return: -ve if s1 <= s2 and +ve if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
