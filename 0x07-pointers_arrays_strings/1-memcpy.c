/**
 * _memcpy - copy n bytes from a source to a specified
 * location in memory
 * @dest: area in memory to be changed
 * @src: source of new data
 * @n: number of bytes
 *
 * Return: pointer to changed array 'dest'
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = -1;

	while (++i < n)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}
