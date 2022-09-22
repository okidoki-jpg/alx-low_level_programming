/**
 * leet - convert special letters to numbers
 * @src: string being converted
 *
 * Return: converted string 'src'
 */

char *leet(char *src)
{
	int i, j;
	char sp[] = "ol-ea--t";

	for (i = 0; src[i] != '\0'; i++)
	{
		for (j = 0; sp[j] != '\0'; j++)
		{
			if (src[i] == sp[j] || src[i] == (sp[j] - 32))
			{
				src[i] = j + '0';
				break;
			}
		}
	}
	return (src);
}
