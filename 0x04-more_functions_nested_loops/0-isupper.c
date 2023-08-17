#include "main.h"
/**
 * _isupper - checks for uppercase character.
 *
 * @c: the character to be checked.
 *
 * Return: 1 for upper case and 0 for otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
