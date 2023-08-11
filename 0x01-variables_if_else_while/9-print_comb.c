#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints single digits
 * Return: always 0(success)
 */

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a > 0)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('0' + a);
	}
	putchar('\n');
	return (0);
}
