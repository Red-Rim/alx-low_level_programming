#include "main.h"
/*Red-Rim*/
/**
 * sqrt_loop - returns the natural square using a loop
 * @n: the number whose square root is to be computed
 * @i: the current value to check
 * Return: natural square root n or -1 if n doesn't have a natural square root
 */
int sqrt_loop(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (sqrt_loop(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number whose square root is to be computed
 * Return: natural square root n or -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (srqt_loop(n, 0));
}
