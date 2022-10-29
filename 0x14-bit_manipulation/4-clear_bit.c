#include "main.h"

/**
 * clear_bit - change bit at given index to 0
 * @n: number to change
 * @index: location of bit to change
 *
 * Return: 1 on success, -1 on fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int _switch = 1 << index;

	if (index > sizeof(*n) * 8)
		return (-1);

	if (*n & _switch)
		*n ^= _switch;
	return (1);
}
