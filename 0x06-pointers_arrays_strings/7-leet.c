/**
 * leet - convert special letters to numbers
 * @src: string being converted
 *
 * Return: converted string 'src'
 */

char *leet(char *src)
{
	int i, j;
	char sp[] = "ol*ea**t", out;

	for (i = 0; src[i] != '\0'; i++)
	{
		out = src[i];
		for (j = 0; sp[j] != '\0'; j++)
		{
			if (src[i] == sp[j] || src[i] == (sp[j] - 32))
			{
				out = j + '0';
				break;
			}
		}
		putchar(out);
	}
	return (src);
}
