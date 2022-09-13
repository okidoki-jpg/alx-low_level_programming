#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int idx = -1, tot;
	while (idx++ < 1024)
	{
		if (idx % 3 == 0 || idx % 5 == 0)
			tot += idx;
	}
	printf("%d\n", tot);
	return (0);	
}
