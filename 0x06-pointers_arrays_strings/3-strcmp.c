#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: string
 * @s2: string
 * Return: 13 if s1 > S2; -13 if s1 < s2, otherwise 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 < *s2)
			return (-13);
		if (*s1 > *s2)
			return (13);
		s1++;
		s2++;
	}
	if (*s1 < *s2)
		return (-13);
	if (*s1 > *s2)
		return (13);
	return (0);
}
