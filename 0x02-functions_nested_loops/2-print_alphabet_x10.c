#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
