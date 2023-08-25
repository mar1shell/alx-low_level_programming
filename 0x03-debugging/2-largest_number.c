#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: l if l is largest; otherwise c
 */

int largest_number(int a, int b, int c)
{
	int l;

	if (a > b)
		l = a;
	else
		l = b;
	if (l > c)
		return (l);
	else
		return (c);
}
