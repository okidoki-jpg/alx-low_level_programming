/**
 * _strstr - point to a substring in main string
 * @haystack: string to evaluate
 * @needle: subtring to find
 *
 * Return: pointer to begining of substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, len = 0, idx = 0;

	while (*++needle)
	{
		len++;
	}
	needle -= len;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (needle[j] != haystack[i])
			{
				i -= idx;
				idx = 0;
				break;
			}
			else
			{
				idx++;
				if (idx == len)
					return (haystack + (i - idx));
				i++;
			}
		}
	}
	return ('\0');
}
