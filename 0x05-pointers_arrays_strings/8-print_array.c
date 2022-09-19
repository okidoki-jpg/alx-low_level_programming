#include <stdio.h>

/**
 * print_array - print n values from array
 * @a: array to print from
 * @n: number of values to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i++ < n)
			printf(", ");
	}
	printf("\n");
}
