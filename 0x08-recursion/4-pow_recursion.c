#include "main.h"

/**
 * _pow_recursion - raises x to the power y
 * @x: int
 * @y: int
 * Return: x to the power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _powrecursion(x, y - 1));
}
