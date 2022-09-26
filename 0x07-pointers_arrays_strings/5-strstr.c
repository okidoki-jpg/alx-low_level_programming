/**
 * _strstr - point to a substring in main string
 * @haystack: string to evaluate
 * @needle: subtring to find
 *
 * Return: pointer to begining of substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, len = 0, idx = 0;

	while (*++needle)
	{
		len++;
	}
	needle -= len;

	for (i = 0; haystack[i]; i++)
	{
		if (needle[idx])
		{
			if (haystack[i] == needle[idx])
				idx++;
			else
				idx = 0;
			if (idx == len)
				return (haystack + (i - idx));
		}
	}
	return ('\0');
}
