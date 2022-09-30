#include "main.h"

/**
 * _isdigit - determine numeric value
 * @c: ascii value being evaluated
 * Return: 1 if found, else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
