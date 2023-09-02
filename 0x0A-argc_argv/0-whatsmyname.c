#include <stdio.h>
/**
 * main- the main entry point.
 * @argc: the number of arguments.
 * @argv: points to the arguments address.
 * Return: 0 for success.
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("The name of the program is: %s\n", argv[0]);
	}
	return (0);
}
