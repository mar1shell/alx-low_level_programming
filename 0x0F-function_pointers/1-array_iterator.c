#include "function_pointers"

/**
 * array_iterator - iterate through an arry and perform an action
 * on every index
 * @array: pointer to array of int
 * @size: size of array
 * @action: pointer to func
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
