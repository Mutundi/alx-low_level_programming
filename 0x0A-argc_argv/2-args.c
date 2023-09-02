#include <stdio.h>
/**
 * main - entry point.
 * @argc: the number of arguments.
 * @argv: points to the string.
 * Return: 0 for success.
 */

int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}
	return (0);
}

