#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: int
 * Return: the concatenated string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';

	return (dest);
}
