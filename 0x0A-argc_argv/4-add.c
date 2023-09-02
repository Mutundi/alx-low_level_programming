#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * num_positive_integer - Checks if the string contains
 * only digits and is greater than 0.
 * @str: points to the string.
 * Return: void.
 */

int num_positive_integer(char *str)
{
	/** Checks if the string contains only digits and is greater than 0 **/
	int m;

	for (m = 0; str[m] != '\0'; m++)
	{
		if (str[m] < '0' || str[m] > '9')
		{
			return (0);
		}
	}
	return (atoi(str) > 0 ? 1 : 0);
}

/**
 * main - entry point.
 * @argc: the number of arguments.
 * @argv: points to the string.
 * Return: 0 for success.
 */

int main(int argc, char *argv[])
{
	int m, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (m = 1; m < argc; m++)
	{
		if (!num_positive_integer(argv[m]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[m]);
	}
	printf("%d\n", sum);
	return (0);
}
