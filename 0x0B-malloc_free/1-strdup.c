#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: points to the string.
 * Return: On success,
 * the function returns a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	unsigned int len, m;
	char *copy;

	/** Return NULL if string is NULL **/
	if (str == NULL)
	{
		return (NULL);
	}

	/** Calculate the length of the input string **/
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	/** Allocate memory for the duplicate of the string **/
	copy = (char *)malloc((len + 1) * sizeof(char));

	/** Check if the memory has been allocated successfully **/
	if (copy == NULL)
	{
		return (NULL);
	}

	/** Copy content of the input string to the duplicate string **/
	for (m = 0; m <= len; m++)
	{
		copy[m] = str[m];
	}
	return (copy);
}
