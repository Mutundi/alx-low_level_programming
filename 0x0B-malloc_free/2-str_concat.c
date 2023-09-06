#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: pointer to the new allocated space in memory
 * which has content for s1 and s2.
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, m, n;
	char *dest;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	dest = (char *)malloc((len1 + len2) * sizeof(char) + 1);

	if (dest == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < len1; n++)
	{
		dest[n] = s1[n];
	}
	for (m = 0; m < len2; m++)
	{
		dest[n + m] = s2[m];
	}

	dest[n + m] = '\0';
	return (dest);
}
