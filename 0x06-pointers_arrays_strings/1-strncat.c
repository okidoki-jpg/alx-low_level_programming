/**
 * _strncat - join n number of charaters to string
 * @dest: string to append to
 * @src: string being appended
 * @n: number of characters to append
 *
 * Return: appended string 'dest'
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[++i])
		continue;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
		if (j == n)
			break;
	}

	dest[i + j] = '\0';
	return (dest);
}
