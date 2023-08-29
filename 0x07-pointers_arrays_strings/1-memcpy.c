#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: destination.
 * @src: source.
 * @n: number of bytes to copy.
 *
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dp = dest;
	char *sp = src;
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dp[m] = sp[m];
	}
	return (dest);
}
