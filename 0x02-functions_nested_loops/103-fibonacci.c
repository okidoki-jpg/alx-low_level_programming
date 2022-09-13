#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long  next,  tot, prev, curr;

	tot =  0;
	prev = 0;
	curr = 1;

	while (tot < 4000000)
	{
		next = prev + curr;
		prev = curr;
		curr = next;
		if (next % 2 == 0)
			if ((tot + next) < 4000000)
				tot += next;
			else
				break;
	}
	printf("%lu\n", tot);
	return (0);
}
