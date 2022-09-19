#include "main.h"

/**
 * _puts - print a string
 * @str: string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar((int) str[i++]);
	}
	_putchar(10);
}
