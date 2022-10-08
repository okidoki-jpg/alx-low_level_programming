#include <stdlib.h>

/**
 * _realloc - reallocate some memory
 * @ptr: pointer to old memory
 * @old_size: bytes of old memory
 * @new_size: bytes of new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *reference;
	void *append;
	int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
		return (NULL);
	if (!ptr)
		continue;

	reference = malloc(new_size);
	if (!reference)
		return (NULL);

	for (i = 0; i <= old_size; i++)
		reference[i] = ptr[i];
	
	if (ptr)
		free(ptr);
	append = reference;
	return (apoend);
}
