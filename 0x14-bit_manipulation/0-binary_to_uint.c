#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: string with binary value
 *
 * Return: usigned value of binary number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, exp = 0, len = 0, num;

	if (!*b)
		return (0);

	while (*b)
	{
		len++;
		b++;
	}
	b -= len;

	while (len--)
	{
		if (b[len] > 47 && b[len] < 58)
		{
			num = b[len] - '0';
			if (num)
				res += powr(2, exp);
			exp++;
		}
		else
			return (0);
	}
	return (res);
}

/**
 * powr - exponentiate number
 * @num: base
 * @mul: exponent
 *
 * Return: exponentiated value
 */

unsigned int powr(unsigned int num, unsigned int mul)
{
	unsigned int tmp = num;

	if (!mul)
		return (1);

	while (--mul)
	{
		num *= tmp;
	}

	return (num);
}
