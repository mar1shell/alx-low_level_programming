#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - determine the length of a string
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
 * _strdup - copies a string to a new location
 * @str: string
 * Return: NULL if error; otherwise cp
 */

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	char *cp = NULL;

	int len;

	len = _strlen(str);
	cp = malloc(sizeof(char) * (len + 1));
	if (cp == NULL)
		return (NULL);
	while (*str != '\0')
	{
		*cp = *str;
		str++;
		cp++;
	}
	*cp = '\0';
	cp -= len;
	return (cp);
}
