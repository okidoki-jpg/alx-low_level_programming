#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int count = 123;

	while (count > 96)
	{
		putchar(count--);
	}
	putchar(10);
	return (0);
}
