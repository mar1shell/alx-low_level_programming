#include "main.h"

/**
 * _isalpha - entry point
 * @c: character to check
 * Return: if c lowercase 1; otherwise 0
 */

int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 64) || (c < 58 && c > 47))
		return (1);
	else
		return (0);
}
