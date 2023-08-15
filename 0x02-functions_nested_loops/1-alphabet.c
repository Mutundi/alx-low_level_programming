#include "main.h"
/**
 * main - entry point.
 *
 * Description: prints the alphabet in lowercase.
 *
 * Return: 0 on success.
 */
void print_alphabet(void)
{
	int a;

	for(a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
