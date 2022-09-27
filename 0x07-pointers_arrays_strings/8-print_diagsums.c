#include <stdio.h>

/**
 * print_diagsums - print sum of digits on diagonal
 * axis of 2D array
 * @a: array
 * @size: array size
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < (size * size); i += (size + 1))
	{
		sum1 += a[i];
	}
	for (j = (size - 1); j < size * size - 1; j += (size - 2))
	{
		sum2 += a[j];
	}
	printf("%d, %d\n", sum1, sum2);
}
