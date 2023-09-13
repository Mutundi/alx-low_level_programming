#include "function_pointers.h"

/**
 * print_name - prints the name.
 * @f: the printing function pointer.
 * @name: the string name.
 *
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}