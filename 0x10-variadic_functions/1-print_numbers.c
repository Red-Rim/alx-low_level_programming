#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/*Red-Rim*/
/**
 * print_numbers - funtion that prints numbers
 * @separator: the string to be printed betwen numbers
 * @n: number of integers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int c = 0;

	va_start(args, n);


	while (c < n)
	{
		if (c != n - 1 && separator)
			printf("%d%s", va_arg(args, int), separator);
		else
			printf("%d", va_arg(args, int));
		c++;
	}
	printf("\n");

}
