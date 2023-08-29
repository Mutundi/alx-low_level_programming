#include "main.h"
#include <stddef.h>
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
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
