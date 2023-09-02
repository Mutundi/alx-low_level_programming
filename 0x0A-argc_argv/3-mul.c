#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point.
 * @argc: the number of arguments.
 * @argv: points to the string.
 * Return: 0 for success.
 */

int main(int argc, char *argv[])
{
	int m, n, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	n = atoi(argv[2]);

	result = m * n;
	printf("%d\n", result);
	return (0);
}
