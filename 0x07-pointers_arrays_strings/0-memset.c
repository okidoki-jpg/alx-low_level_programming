/**
 * _memset - assign a constant value to a specified
 * amount of locations in memory
 * @s: area pointed to in memory
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: pointer to changed array 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (++i < n)
	{
		s[i] = b;
	}
	return (s);
}
