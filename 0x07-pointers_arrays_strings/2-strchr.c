#include "main.h"
/**
 * _strchr -  locates a character in a string.
 * @s: the string.
 * @c: the character to be located.
 *
 * Return: a pointer to the first occurrence
 * of the character c in the string s,
 * or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int m;

	for (m = 0; s[m] != '\0'; m++)
	{
		if (s[m] == c)
		{
			return (s + m);
		}
	}
	return ('\0');
}
