#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creat an array of chars of defined size
 * and initialise the first index with c
 * @size: unsigned int
 * @c: char
 * Return: s
 */

char *create_array(unsigned int size, char c)
{
	char *s = NULL;

	unsigned int i;
	if (!size)
		return (NULL);
	s = malloc(sizeof(int) * size);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
