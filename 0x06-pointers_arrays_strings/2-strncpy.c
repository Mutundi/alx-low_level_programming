#include "main.h"
/**
 * _strncpy - copies a string.
 * @dest: points to the destination string.
 * @src: points to the source string.
 * @n: maximum number of characters to be copied.
 *
 * Return: void.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && src[m] != '\0'; m++)
	{
		dest[m] = src[m];
	}
	for (; m < n; m++)
	{
		dest[m] = '\0';
	}
	return (dest);
}
