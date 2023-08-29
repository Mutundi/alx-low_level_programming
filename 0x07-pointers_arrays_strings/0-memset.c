#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: is a pointer to a memory location.
 * @b: constant byte.
 * @n: specifies the number of byts.
 *
 * Return: pointer to the memory area str.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
