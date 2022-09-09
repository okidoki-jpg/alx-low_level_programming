#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int first = 0;
	int second = 1;

	while (first <= 98)
	{
		while (second <= 99)
		{
			putchar((first / 10) + '0');
			putchar((first % 10) + '0');
			putchar(' ');
			putchar((second / 10) + '0');
			putchar((second % 10) + '0');

			if (first != 98 && second != 100)
			{
				putchar(',');
				putchar(' ');
			}
			second++;
		}
		first++;
		second = first + 1;
	}
	putchar(10);
	return (0);
}
