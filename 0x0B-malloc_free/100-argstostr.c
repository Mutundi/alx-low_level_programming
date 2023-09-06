#include "main.h"
#include <stdlib.h>

/**
 * _strlen - finds the length of a string.
 * @s: the string.
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * argstostr - Concatenates all arguments in a program.
 * @ac: number of arguments.
 * @av: points to the string with arguments.
 * Return: pointer to the concatenated string.
 */
char *argstostr(int ac, char **av)
{
	int m, n, tl, index = 0;
	char *temp;

	/** Check for invalid dimensions **/
	if (ac == 0 || av == NULL)
		return (NULL);

	/** Calculates the total length to be concatenated **/
	tl = 0;
	for (m = 0; m < ac; m++)
	{
		tl += _strlen(av[m]) + 1;
	}

	/** Allocate memory for the concatenated string **/
	temp = (char *)malloc((tl + 1) * sizeof(char));
	if (temp == 0)
		return (NULL);

	/** Concatenate the arguments **/
	for (n = 0; n < ac; n++)
	{
		m = 0;
		while (av[n][m] != '\0')
		{
			temp[index] = av[n][m];
			m++;
			index++;
		}
		/** Add a new line character **/
		temp[index] = '\n';
		index++;
	}
	/** Terminate the string with a null character **/
	temp[index] = '\0';
	return (temp);
}
