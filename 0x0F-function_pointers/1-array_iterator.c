#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - execute pointer function on all
 * elements of array
 * @array: array type parameter
 * @size: size of array
 * @action: pointer to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && size && array)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
