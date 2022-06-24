#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: array string
 * @c: char to look for
 * Description: locate character i n a string
 * Reutn: null if character not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		s++;
	}

	return (s + 1);
}
