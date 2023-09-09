#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: points to the old memory block.
 * @old_size: size of the allocated space for ptr.
 * @new_size: size of the new memory block.
 *
 * Return: a pointer to the new memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int copy_size, m;
	void *new_ptr;
	char *src, *dest;

	/** Check for special cases **/
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	/** Sizes are equal, no need to copy or reallocate **/
	if (new_size == old_size)
		return (ptr);

	/** Allocate new memory **/
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);/** Memory allocation failure **/

	/** Determine the copy size **/
	if (old_size > new_size)
		copy_size = old_size;
	else
		copy_size = new_size;

	/** Copy data **/
	src = (char *)ptr;
	dest = (char *)new_ptr;

	for (m = 0; m < copy_size; m++)
		dest[m] = src[m];

	/** Free old memory **/
	free(ptr);
	/** Return a pointer to the newly allocated memory block **/
	return (new_ptr);
}
