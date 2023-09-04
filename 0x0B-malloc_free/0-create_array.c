#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of memory to allocate.
 * @c: incoming character input.
 * Return: pointer to the array,
 * or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int m;
	char *array;

	/** return NULL if size is 0 **/
	if (size == 0)
	{
		return (NULL);
	}
	/** Allocate memory **/
	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	/** Get all the elements **/
	for (m = 0; m < size; m++)
	{
		array[m] = c;
	}
	return (array);

}
