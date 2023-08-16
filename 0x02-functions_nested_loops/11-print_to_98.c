#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers.
 *
 * @n: input number.
 *
 * Return: 0 for success.
 */

void print_to_98(int n)
{
	int num;

	if (n > 98)
		for (num = n; num > 98; num--)
			printf("%d, ", num);
	else
		for (num = n; num < 98; num++)
			printf("%d, ", num);
	printf("98\n");
}
