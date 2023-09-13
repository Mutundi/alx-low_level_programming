#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: incoming array.
 * @size: size of the array.
 * @action: function pointer.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t m;

	for (m = 0; m < size; m++)
	{
		action(array[m]);
	}
}
