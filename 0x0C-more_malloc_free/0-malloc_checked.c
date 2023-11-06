#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - assigns a pointer to an allocated memory of
 * size b bytes and checks if ther(s no fault
 * @b: unsigned int for the size of memory
 * Return: exit if problem; else ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
