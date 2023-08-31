#include "main.h"
/**
 * is_prime_number - checks for a prime number.
 * @n: incoming argument.
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 */

int is_prime_number(int n)
{
	int m;

    if (n <= 1)
    {
        return (0);
    }

    if (n <= 3)
    {
        return (1);
    }

    if (n % 2 == 0 || n % 3 == 0)
    {
        return (0);
    }

    for (m = 5; m * m <= n; m += 6)
    {
        if (n % m == 0 || n % (m + 2) == 0)
        {
            return (0);
        }
    }

    return (1);
}
