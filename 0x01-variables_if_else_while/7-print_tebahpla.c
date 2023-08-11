#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints lowercase alphabets in reverse
 * Return: always 0 (success)
 */

int main(void)
{
	int a = 122;

	while (a >= 97)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
