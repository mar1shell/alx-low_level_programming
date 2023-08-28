#include "main.h"

/**
 * _strcpy - function that copies a string
 * into another
 * @dest: string
 * @src: string
 * Return: strig
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	do {
		i++;
		*(dest + i) = *(src + i);
	} while (*(src + i) != (char) 0);

	return (dest);
}

