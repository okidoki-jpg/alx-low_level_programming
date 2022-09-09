#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int tenth = 0;
	int unit = 1;

	while (tenth < 9)
	{
		while (unit < 10)
		{
			putchar(tenth + '0');
			putchar(unit++ + '0');
			if (tenth != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		tenth++;
		unit = tenth + 1;
	}
	putchar(10);
	return (0);
}
