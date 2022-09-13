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

	while (idx++ < 50)
	{
		next = prev + curr;
		prev = curr;
		curr = next;
		printf("%lu", next);
		if (idx < 50)
			printf(", ");
		idx++;
	}
	printf("\n");
	return (0);
}
