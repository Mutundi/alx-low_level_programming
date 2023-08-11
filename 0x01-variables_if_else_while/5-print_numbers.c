#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints digits of base 10
 * Return: always 0 (success)
 */
int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
