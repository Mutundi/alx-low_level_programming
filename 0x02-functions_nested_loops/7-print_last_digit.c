#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @a: the number to be tested.
 *
 * Return: the value of the last digit.
 */

int print_last_digit(int a)
{
	int ls;

	ls = a % 10;
	if (ls < 0)
	{
		ls = ls * -1;
	}
	_putchar(ls + '0');
	return (ls);
}
