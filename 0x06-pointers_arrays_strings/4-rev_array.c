#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers.
 * @n: the number of elements to reverse.
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int m;
	int mote;

	for (m = 0; m < n / 2; m++)
	{
		mote = a[m];
		a[m] = a[n - m - 1];
		a[n - m - 1] = mote;
	}
}
