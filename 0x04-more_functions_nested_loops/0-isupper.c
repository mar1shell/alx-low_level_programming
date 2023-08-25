#include "main.h"

/**
 * _isupper - entry point
 * @c: number
 * Return: 1 if uppercase; otherwise 0
 */

int _isupper(int c)
{
	if ((c > 64) && (c < 91))
		return (1);
	else
		return (0);
}
