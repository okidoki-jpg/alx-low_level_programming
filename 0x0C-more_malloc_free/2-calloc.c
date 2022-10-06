/**
 * _calloc - allocate, and assign 0 to, new memory
 * @nmemb: size of array
 * @size: size of each index
 *
 * Return: pointer to new memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);

	arr = malloc(sizeof(size) * nmemb);
	if (!arr)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		arr[i] = 0;

	return (arr);


}
