#include <stdlib.h>

/**
 * array_range - populate new array with a range of numbers
 * @min: minimum and starting value
 * @max: maximum and last value
 *
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *arr, range, i;

	if (min > max)
		return (NULL);
	range = max - min;
	arr = malloc(sizeof(int) * range);
	if (!arr)
		return (NULL);

	for (i = 0; min != max; min++)
		arr[i++] = min;

	return (arr);
}
