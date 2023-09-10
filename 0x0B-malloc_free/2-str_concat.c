#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - determines the length of a string
 * @s: string
 * Return: length of s
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	return (i);
}

/**
 * str_concat - concatenates two string
 * @s1: string
 * @s2: string
 * Return: NULL if error; otherwise cs
 */

char *str_concat(char *s1, char *s2)
{
	char *cs = NULL;

	int len, len1, len2;

	len1 = (s1 == NULL) ? 0 : _strlen(s1);
	len2 = (s2 == NULL) ? 0 : _strlen(s2);
	len = len1 + len2;
	cs = malloc(sizeof(char) * (len + 1));
	if (cs == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		*cs = *s1;
		cs++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*cs = *s2;
		cs++;
		s2++;
	}
	*cs = '\0';
	cs -= len;
	return (cs);
}
