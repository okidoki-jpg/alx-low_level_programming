#include "main.h"

/**
 * jack_bauer - print all minutes of
 * the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hr = -1;
	int min;

	while (hr++ < 24)
	{
		hr = -1;
		while (min++ < 60)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar(10);
		}
	}
}
