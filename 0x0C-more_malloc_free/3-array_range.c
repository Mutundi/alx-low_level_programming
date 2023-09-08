#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: the minimum value.
 * @max: the maximum value.
 *
 * Return: a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int array_size, m;
	int *temp;

	/** Check for invalid dimensions **/
	if (min > max)
		return (NULL);

	/** Calculate array size **/
	array_size = max - min + 1;

	/** Memory allocation **/
	temp = malloc(sizeof(int) * array_size);
	/** Check if malloc returns NULL **/
	if (temp == NULL)
		return (NULL);/** Memory allocation failure **/

	/** Generate integer values **/
	for (m = 0; m < array_size; m++)
	{
		temp[m] = min + m;
	}

	/** Return a pointer to the newly created array **/
	return (temp);
}
