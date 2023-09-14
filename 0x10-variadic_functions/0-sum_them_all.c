#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: incoming first argument.
 *
 * Return: sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int m;

	va_list ptr;

	if (n == 0)
	{
		return (0);
	}

	/** Initialize the argument list with n **/
	va_start(ptr, n);

	/** Loop through the arguments and add them to sum **/
	for (m = 0; m < n; m++)
	{
		sum += va_arg(ptr, int);
	}

	/** Clean up the argument list **/
	va_end(ptr);

	/** Return the sum **/
	return (sum);
}
