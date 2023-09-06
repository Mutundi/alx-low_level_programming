#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculates the length of the string.
 * @s: the string.
 * Return: 0 for success.
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	dest = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (dest == NULL)
		return (NULL);

	for (m = 0; m < len1; m++)
		dest[m] = s1[m];
	for (n = 0; n < len2; n++)
		dest[n + m] = s2[n];

	dest[n + m] = '\0';
	return (dest);
}
