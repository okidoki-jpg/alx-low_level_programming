#include "main.h"

/**
 * print_number - print number using
 * putchar
 * @n: number to be printed
 * Return: void
 */

void print_number(int n)
{
	int n = 23465, tmp, val, len = 1;

	if (n < 0)
	{
		n = -n;
		putchar('-');
	}

	tmp = n;

	/* get length of number */
	while (tmp > 9)
	{
		len++;
		tmp /= 10;
	}

	/* print each number */
	while (len)
	{
		val = (n / (int) pow(10, --len)) % 10;
		putchar(val + '0');
	}
}
