#include "main.h"
/**
 * print_most_numbers - prints the numbers.
 *
 * Do not print 2 and 4.
 *
 * Return: void.
 */

void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a == 50 || a == 52)
		{
			continue;
			a++;
		}

			_putchar(a);
	}
	_putchar('\n');
}
