#include "main.h"

/**
 * _isupper - determine uppercase letter
 * @c: ascii value being evaluated
 * Return: 1 if found, else 0
 */

int _isupper(int c)
{
	if (c >= 65 && <= 90)
	{
		return (1);
	}
	return (0);
}
