#include "main.h"

/**
 * print_number - print number using
 * putchar
 * @n: number to be printed
 * Return: void
 *
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

void print_number(int n)
{
	int tmp, val, len = 1;

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
		val = (n / powr(10, --len)) % 10;
		_putchar(val + '0');
	}
}
