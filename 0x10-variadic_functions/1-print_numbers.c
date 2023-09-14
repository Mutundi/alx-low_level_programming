#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 * @...: a variable number of integer arguments.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsigned int m;

	va_list ptr;

	va_start(ptr, n);

	for (m = 0; m < n; m++)
	{
		num = va_arg(ptr, int);
		printf("%d", num);

		if (separator != NULL && m < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ptr);
	printf("\n");
}
