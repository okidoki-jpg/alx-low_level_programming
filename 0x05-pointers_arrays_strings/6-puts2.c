#include "main.h"

/**
 * puts2 - print every other character from string
 * @str: string to print from
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 != 0)
		{
			i++;
			continue;
		}
		_putchar((int) str[i++]);
	}
	_putchar(10);
}
