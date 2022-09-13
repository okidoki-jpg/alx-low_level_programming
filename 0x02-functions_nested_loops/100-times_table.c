#include "main.h"
/**
 * print_times_table - prints the n
 * times table greater than 0, less
 * than 15
 * @n: function parameter
 * Return: void
 */

void print_times_table(int n)
{
	int tot, incr, num = 0;

	if (n < 15 && n > -1)
	{
		while (num++ < n)
		{
			incr = -1;
			while (incr++ < n)
			{
				tot = num * incr;
				if (incr != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (tot < 10 && num != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((tot % 10) + '0');
				} else if (tot >= 10 && tot < 100)
				{
					_putchar(' ');
					_putchar((tot / 10) + '0');
					_putchar((tot % 10) + '0');
				} else if (tot >= 100 && incr != 0)
				{
					_putchar((tot / 100) + '0');
					_putchar((tot / 10) % 10 + '0');
					_putchar((tot % 10) + '0');
				} else
					_putchar((tot % 10) + '0');
			}
			_putchar(10);
		}
	}
}
