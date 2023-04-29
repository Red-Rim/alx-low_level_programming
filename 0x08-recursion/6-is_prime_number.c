#include "main.h"

/**
 * is_prime - to see if number is prime
 * @d: int
 * @n: int
 * Return: int
 */
int is_prime(int n, int d)
{
	if (n == d)
		return (1);
	else if (n % d != 0)
		return (is_prime(n, d + 1));
	else
		return (0);
}

/**
 * is_prime_number - if number is prime
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (is_prime(n, 2));
	else
		return (0);
}
