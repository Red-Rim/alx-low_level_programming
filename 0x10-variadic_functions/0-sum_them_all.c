#include "variadic_functions.h"
/*Red-Rim*/
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of paramters
 * @a: variable number of paramter to calculate the sum of
 * Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;


	va_start(ap, n);


	if (n == 0)
		return (0);


	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);


		va_end(ap);


		return (sum);

}
