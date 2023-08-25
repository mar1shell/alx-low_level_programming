#include "main.h"

/**
 * _isdigit - entry point
 * @c: number
 * Return: 1 if digit; othewise 0
 */

int _isdigit(int c)
{
	if (((char) c > 47) && ((char) c < 58))
		return (1);
	else
		return (0);
}
