#include <limits.h>
#include "main.h"

/**
 * powr - exponetiate
 * @val: base
 * @p: exponent
 * Return: exponentiated value
 */


int powr(int val, int p)
{
	int i = 0, tmp = val;

	while (++i < p)
		val *= tmp;
	if (p == 0)
		return (1);
	return (val);
}


/**
 * print_number - print number using
 * putchar
 * @n: number to be printed
 * Return: void
 */

void print_number(int n)
{
	int tmp, val, swch = 0, len = 1;

	if (n == INT_MIN)
	{
		_putchar('-');
		n = INT_MAX;
		swch = 1;
	}

	if (n < 0)
	{
		n = -n;
		_putchar('-');
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
		if (len == 1 && swch)
		{
			val = 8;
			--len;
		}
		else
			val = (n / powr(10, --len)) % 10;
		_putchar(val + '0');
	}
}
