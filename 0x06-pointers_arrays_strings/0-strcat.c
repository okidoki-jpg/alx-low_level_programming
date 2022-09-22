/**
 * _strcat - join two strings using pointers
 * @dest: string to append to
 * src: string being appended
 *
 * Return: appended string 'dest'
 */

char *_strcat(char *dest, char *src)
{
	int i=0, j;

	while (dest[++i]){}
	for (j=0; src[j] != '\0'; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';
	return (dest);
}
