#include "main.h"
/**
 * swap_int - a function that swaps
 * the values of two integers.
 * @a: the first variable.
 * @b: the second variable.
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
