#include "main.h"
/**
 * _strcat - appends the src string to the dest string.
 * @dest: destination string.
 * @src: source string.
 *
 * Return: void.
 */

char *_strcat(char *dest, char *src)
{
	int m, n;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[m + n] = src[n];
	}
	dest[m + n] = '\0';
	return (dest);
}
