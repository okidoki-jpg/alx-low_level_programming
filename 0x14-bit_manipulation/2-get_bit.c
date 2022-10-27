#include "main.h"

/*
 * get_bit - return bit at given index
 * @n: number to read
 * @index: location of bit to find
 *
 * Return: bit at given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (!n && n != 0)
		return (-1);

	n >>= index;
	if (n & 1)
		return (1);
	else
		return (0);
}
