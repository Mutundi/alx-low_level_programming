#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 *
 * @a: input number as an integer.
 *
 * Return: absolute value.
 */

int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (a * -1);
	}
}

