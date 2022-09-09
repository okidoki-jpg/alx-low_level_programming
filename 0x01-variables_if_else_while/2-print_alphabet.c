#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int count = 97;

	while (count < 123)
	{
		putchar(count++);
	}
	putchar(10);
	return (0);
}
