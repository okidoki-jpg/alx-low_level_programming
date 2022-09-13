#include "main.h"

/**
 * jack_bauer - print all minutes of
 * the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hr_t = 0;
	int hr_u;
	int min_t;
	int min_u;

	while (hr_t++ < 2)
	{
		hr_u = 0;
		while (hr_u++ < 9)
		{
			min_t = 0;
			while (min_t++ < 5)
			{
				min_u = 0;
				while (min_u++ < 9)
				{
					_putchar(hr_t + '0');
					_putchar(hr_u + '0');
					_putchar(':');
					_putchar(min_t + '0');
					_putchar(min_u + '0');
					_putchar(10);
				}
			}
		}
	}
}
