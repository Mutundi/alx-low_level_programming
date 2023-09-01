#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: points to the first string.
 * @s2: points to the second string.
 *
 * Return: 1 if greater/longer.
 * 0 if both strings are equal.
 * -1 if shorter/less.
 */

int _strcmp(char *s1, char *s2)
{
	int m;

	m = 0;
	while ((s1[m] != '\0' && s2[m] != '\0') && s1[m] == s2[m])
	{
		m++;
	}
	if (s1[m] == s2[m])
	{
		return (0);
	}
	else
	{
		return (s1[m] - s2[m]);
	}
}
