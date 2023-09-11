#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - determinbes the length of a string
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
 * string_nconcat - concatenets n bytes from a string to another
 * and stores them in a new string
 * @s1: string
 * @s2: string
 * @n: unsigned int number of bytes
 * Return: NULL if error; concatenated string cs
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cs = NULL;

	int i, j, len, len1, len2;

	len1 = (s1 == NULL) ? 0 : _strlen(s1);
	len2 = (s2 == NULL) ? 0 : _strlen(s2);
	len2 = (n < len2) ? n : len2;
	cs = malloc(sizeof(char) * (len + 1));
	if (cs == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		*(cs + i) = *(s1 + i);
	for (j = 0; j < n && j < len2; j++)
	{
		*(cs + i) = *(s2 + j);
			i++;
	}
	*(cs + i) = '\0';
	return (cs);
}
