#include "main.h"

/**
 * string_toupper - turns lowercas to uppercase
 * @s: string
 * Return: s
 */

char *string_toupper(char *s)
{
	while (*s != 0)
	{
		if (*s <= 'z' && *s >= 'a')
			*s = *s - 32;
		*s++;
	}
	return (s);
}
