#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int next, idx = -1, prev = 1 curr = 2;

	printf("1, 2, ");
	while (idx++ < 50)
	{
		next = prev + curr;
		curr = next;
		prev = curr;
		printf("%d", next);
		if (idx < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
