#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculates the length of a string.
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
 * string_nconcat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: the maximum number of characters to be copied from s2.
 *
 * Return: a pointer that points to the
 * newly allocated space in memory
 * that contains two concatenated strings.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, Total_length, m;
	char *temp;

	/** Check for invalid dimensions **/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/** Calculate the length of s1 **/
	len1 = _strlen(s1);

	/**
	 * If n is greater or equal to the length of s2
	 * then use the entire string s2
	 */
	if (n >= (unsigned int)_strlen(s2))
		n = (unsigned int)_strlen(s2);

	/** Calculate the total length of the concatenated string **/
	Total_length = len1 + n;

	/** Allocate memory for the concatenated string **/
	temp = malloc(Total_length + 1);
	if (temp == NULL)
		return (NULL);

	/** Copy s1 to the new string **/
	for (m = 0; m < len1; m++)
		temp[m] = s1[m];
	/** Copy the first n bytes of s2 to the new string **/
	for (m = 0; m < n; m++)
		temp[len1 + m] = s2[m];
	/** Add a null terminator to the concatenated string **/
	temp[Total_length] = '\0';
	/** Return a pointer the concatenated string **/
	return (temp);

}
