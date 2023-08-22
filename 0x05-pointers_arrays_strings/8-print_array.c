#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements
 * of an array of integers.
 *
 * @a: an array of integers.
 * @n: the length of the array.
 *
 * Return: void.
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b != (n - 1))
			printf(",");
		printf("%d", a[b]);
	}
	printf("\n");
}
