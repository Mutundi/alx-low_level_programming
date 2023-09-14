#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: incoming array.
 * @size: number of elements in the array.
 * @cmp: pointer function.
 *
 * Return: 0 for success.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (cmp == NULL || array == NULL || size <= 0)
	{
		return (-1);
	}

	for (m = 0; m < size; m++)
	{
		if (cmp(array[m])  != 0)
		{
			return (m);
		}
	}
	return (-1);
}
