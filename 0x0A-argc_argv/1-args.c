#include <stdio.h>
/**
 * main - entry point.
 * @argc: the number of arguments.
 * @argv: points to argument address.
 * Return: 0 for success.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf ("%d\n", argc - 1);
	return (0);
}
