/**
 * cap_string - capitalise each word
 * @src: string being converted
 *
 * Return: converted string 'src'
 */

char *cap_string(char *src)
{
	int i = 0, j;
	char sp[] = " \t\n,;.?!\"(){}";

	while (src[i] != '\0')
	{
		for (j = 0; sp[j] != '\0'; j++)
		{
			if ((i == 0 || src[i - 1] == sp[j]) &&
				(src[i] >= 'a' && src[i] <= 'z'))
			{
				src[i] -= 32;
			}
		}
		i++;
	}
	return (src);
}
