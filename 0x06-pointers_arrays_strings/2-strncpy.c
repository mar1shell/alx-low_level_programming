#include "main.h"

/**
 * _strncpy - copies a string into another
 * @dest: string$
 * @src: string
 * @n: int
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	char *ptr = dest;

	for (i = 0; i < n && *(src + i) != 0; i++)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	return (dest);
}
