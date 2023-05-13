#include "search_algos.h"

/**
 * binary_search - binary search algorithm
 * @array: array of data
 * @size: size of array
 * @value: target value
 *
 * Return: index where value was found, else -1
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, i, mid;

	if (!array)
		return (-1);


	while (left <= right)
	{

		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = left + (right - left) / 2;

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
