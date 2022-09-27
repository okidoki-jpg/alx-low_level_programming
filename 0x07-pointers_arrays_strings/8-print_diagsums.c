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

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}
	a -= size;

	for (j = 0; j < size * size - 1; j++)
	{
		sum2 += a[j];
		a -= size
	}
	printf("%d, %d\n", sum1, sum2);
}
