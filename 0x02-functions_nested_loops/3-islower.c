#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _islower(int c);

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}


/**
 * _islower - determines lowercase
 * alphabet
 *
 * Return: 1 if found, else 0.
 */

int _islower(int c)
{
	if ((122 - c) > 26)
	{
		return (0);
	}
	return (1);
}
