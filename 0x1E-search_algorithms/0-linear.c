#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: pointer to begining of int array
 * @size: size of array
 * @value: target value
 *
 * Return: index where value was found, else -1
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array)
		return (-1);

	for (; i < (int) size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}
