/**
 * string_toupper - convert string to uppercase
 * @src: string being converted
 *
 * Return: converted string 'src'
 */

char *string_toupper(char *src)
{
	int i = 0;

	while (src[i])
	{
		if (src[i] > 96 && src[i] < 123)
		{
			src[i] -= 32;
			i++;
		}
	}
	return (src);
}
