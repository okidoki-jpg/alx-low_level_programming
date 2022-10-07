#include <stdlib.h>

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
	unsigned int *mid, i;

	if (!nmemb || !size)
		return (NULL);

	mid = malloc(size * nmemb);
	if (!mid)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		mid[i] = 0;

	arr = mid;
	return (arr);
}
