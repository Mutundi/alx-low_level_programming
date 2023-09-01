#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 *
 * @c: The input to be tested.
 *
 * Return: 1 for a digit and 0 for otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
