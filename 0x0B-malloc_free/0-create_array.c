/**
 * create_array - create & initialize dynamic array
 * @size: size of array
 * @c: character to initialize with
 *
 * Return: char pointer if size > 0, else NULL
 */

char *create_array(unsigned int size, char c)
{
	char *lis;
	int i;

	if (size < 1)
		return ('\0');

	lis = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		lis[i] = c;
	}
	return (lis);
}
