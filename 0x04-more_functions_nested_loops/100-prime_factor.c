#include <stdio.h>

/**
 * main - find the biggest prime factor
 * of 612852475143
 *
 * Return: 0
 */

int main(void)
{
	unsigned int pf = 2;
	unsigned int val = 612852475143;

	while (++pf < val)
	{
		if (val % pf == 0)
			val /= pf;
	}
	printf("%lu ", pf);
	return (0);
}
