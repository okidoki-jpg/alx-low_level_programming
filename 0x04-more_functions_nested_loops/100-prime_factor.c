#include <stdio.h>

/**
 * main - find the biggest prime factor
 * of 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long pf = 2;
	long val = 612852475143;

	while (++pf < val)
	{
		if (val % pf == 0)
			val /= pf;
	}
	printf("%ld ", pf);
	return (0);
}
