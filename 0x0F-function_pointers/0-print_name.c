#include "function_pointers.h"

/**
 * print_name - print name aaccording to an input function
 * @name: string
 * @f: pointer to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
