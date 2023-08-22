#include "main.h"
/**
 * puts2 - prints every other character
 * of a string.
 * @str: the string.
 *
 * Return: void.
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a += 2)
	{
		if (a % 2 == 0)
			_putchar (str[a]);
	}
	_putchar ('\n');
}
