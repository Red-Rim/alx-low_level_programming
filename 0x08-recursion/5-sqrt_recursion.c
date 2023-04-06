#include "main.h"
/**
 * _sqrt - square root of a number
 * @x: int
 * @y: int
 * Return: int
 */
int _sqrt(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
		return (_sqrt(x + 1, y));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(n, 1));
}
