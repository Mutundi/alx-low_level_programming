#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: a string.
 * @n: the number of incoming strings.
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	char *str;

	va_list ptr;

	va_start(ptr, n);

	for (m = 0; m < n; m++)
	{
		str = va_arg(ptr, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && m < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ptr);
	printf("\n");
}
