#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: the number of elemnts.
 * @size: the size of each element.
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size, m;
	void *temp;
	char *char_temp;

	/** Check for invalid dimensions **/
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/** Calculate the total memory required **/
	total_size = nmemb * size;

	/** Allocate memory using malloc **/
	temp = malloc(total_size);

	/** Check if malloc returns NULL **/
	if (temp == NULL)
	{
		return (NULL);/** Allocation failure **/
	}

	/** Initialize the memory to zero **/
	char_temp = (char *)temp;
	for (m = 0; m < total_size; m++)
	{
		char_temp[m] = 0;
	}
	/** Return a pointer to the allocated memory **/
	return (temp);
}
