#include "main.h"

/**
 * _islower - entry point
 * @c: character to check
 * Return: if c lowercase 1; otherwise 0
 */

int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
	else
		return (0);
}
