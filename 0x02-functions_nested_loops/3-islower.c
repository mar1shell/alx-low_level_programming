#include "main.h"

/**
 * _islower(int c) - entry point
 * Return: if c lowercase 1; otherwise 0
 */

int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
	else
		return (0);
}
