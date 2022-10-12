#include "function_pointers.h"

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
	if (array[size -1])
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
