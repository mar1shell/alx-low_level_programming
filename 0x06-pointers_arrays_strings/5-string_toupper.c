#include "main.h"

/**
 * string_toupper - turns lowercas to uppercase
 * @s: string
 * Return: s
 */

char *string_toupper(char *s)
{
	char *t;
	
	t = s;
	while (*t != 0)
	{
		if (*t <= 'z' && *s >= 'a')
			*t -= 32;
		t++;
	}
	return (s);
}
