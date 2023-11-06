#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - aalocates memory
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: NULL if error; else c
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c = NULL;

	char *b = NULL;

	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	b = c;
	for (i = 0; i < nmemb * size; i++)
		b[i] = 0;
	return (c);
}
