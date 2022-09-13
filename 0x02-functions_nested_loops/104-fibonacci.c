#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long  next,  idx, prev, curr;

	idx =  0;
	prev = 0;
	curr = 1;

	while (idx++ < 98)
	{
		next = prev + curr;
		prev = curr;
		curr = next;
		printf("%lu", next);
		if (idx < 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
