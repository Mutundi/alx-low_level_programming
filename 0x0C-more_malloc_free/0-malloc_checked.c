#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: incoming argument.
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *temp;

	temp = malloc(b);
	if (temp == NULL)
	{
		exit(98);
	}
	return (temp);
}
