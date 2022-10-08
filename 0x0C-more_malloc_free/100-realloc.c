#include <stdlib.h>

/**
 * _realloc - reallocate some memory
 * @ptr: pointer to old memory
 * @old_size: bytes of old memory
 * @new_size: bytes of new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *reference, *src;
	void *append;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
		return (NULL);

	reference = malloc(new_size + 1);
	if (!reference)
		return (NULL);

	if (ptr)
	{
		src = ptr;
		for (i = 0; i < old_size; i++)
			reference[i] = src[i];
		free(ptr);
	}
	append = reference;
	return (append);
}
