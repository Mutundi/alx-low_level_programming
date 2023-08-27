#include "main.h"
/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase.
 * @str: pointes to the string.
 *
 * Return: void.
 */

char *string_toupper(char *str)
{
	int m;

	for (m = 0; str[m]; m++)
	{
		if (str[m] >= 97 && str[m] <= 122)
		{
			str[m] -= 32;
		}
	}
	return (str);
}
