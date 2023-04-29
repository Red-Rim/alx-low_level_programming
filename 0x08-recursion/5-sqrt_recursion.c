#include "main.h"
/*Red-Rim*/
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number whose square root is to be computed
 * Return: natural square root n or -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	int i; /* move the declaration to the beginning of the function*/

	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	/*recursive case*/
	for (i = 1; i <= n / 2; i++)
	{
		if (i * i == n)
			return (i);
		else if (i * i > n)
			return (-1);
	}
	return (-1);
}
