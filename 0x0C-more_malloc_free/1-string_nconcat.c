#include <stdlib.h>

/**
 * string_nconcat - join n number of charaters to string
 * @s1: string to append to
 * @s2: string being appended
 * @n: number of characters to append
 *
 * Return: pointer to appended string in new memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j, l1 = 0, l2 = 0;
	char *str;

	if (!(s1))
		s1 = "";
	if (!(s2))
		s2 = "";

	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;

	str = malloc(sizeof(char) * (l1 + n) + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		str[i + j] = s2[j];
		if (j == n)
			break;
	}
	str[i + j] = '\0';
	return (str);
}
