/**
 * _strncpy - copy n length of string to new variable
 * @dest: copy of string
 * @src: string being copied
 * @n: size of dest
 *
 * Return: copied string 'dest'
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
