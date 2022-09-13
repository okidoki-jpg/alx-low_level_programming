#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long next, idx = -1, prev = 1, curr = 2;

	printf("1, 2, ");
	while (idx++ < 50)
	{
		next = prev + curr;
		prev = curr;
		curr = next;
		printf("%lu", next);
		if (idx < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
