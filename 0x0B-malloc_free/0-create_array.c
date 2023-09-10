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

	if (!size)
		return (NULL);
	s = malloc(sizeof(int) * size);
	s[0] = c;
	return (s);
}
