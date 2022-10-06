/**
 * alloc_grid - create and allocate 0 to 2D array
 * @width: grid width/row size
 * @height: grid height/column size
 *
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;
	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(width);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(height * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
