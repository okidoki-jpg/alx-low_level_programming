#include "function_pointers.h"

/**
 * int_index - match a number in an array using pointer to
 * function
 * @array: array type parameter
 * @size: size of array
 * @cmp: pointer to comparison function
 *
 * Return: matched num on success, else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((*action)(array[i]))
				return (array[i]);
		}
	}
	return (-1);
}
