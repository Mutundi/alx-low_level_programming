#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: points to the destination string.
 * @src: points to the source string.
 * @n: maximum number of characters.
 *
 * Return: void.
 */

char *_strncat(char *dest, char *src, int n)
{
	int m, l;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	for (l = 0; l < n && src[l] != '\0'; l++)
	{
		dest[m + l] = src[l];
	}
	dest[m + l] = '\0';
	return (dest);
}
