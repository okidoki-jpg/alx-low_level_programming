/**
 * cap_string - capitalise each word
 * @src: string being converted
 *
 * Return: converted string 'src'
 */

char *cap_string(char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		if ((src[i - 1] == 32 || src[i - 1] == '\t' ||
			src[i - 1] == '\n' || src[i - 1] == ',' ||
			src[i - 1] == ';' || src[i - 1] == '.' ||
			src[i - 1] == '?' || src[i - 1] == '!' ||
			src[i - 1] == '\"') &&
			(src[i] >= 'a' && src[i] <= 'z'))
		{
			src[i] -= 32;
		}
		i++;
	}
	return (src);
}
