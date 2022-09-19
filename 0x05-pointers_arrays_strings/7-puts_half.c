#include "main.h"

/**
 * _strlen - get string length
 * @s: string to evaluate
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * puts_half - print the last half of a string
 * @str: string to print
 * Return: void
 */

void puts_half(char *str)
{
	int len = _strlen(str), start = (_strlen(str) - 1) / 2;

	while (start++ != len)
	{
		_putchar((int) str[start]);
	}
	_putchar(10);
}
