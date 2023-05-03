#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: separator
 * @n: number of strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c = 0;
	char *str;
	va_list args;

	va_start(args, n);

	while (c < n)
	{
		str = va_arg(args, char*);
		if (!str)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator && c != (n - 1))
			printf("%s", separator);
		c++;
	}
	va_end(args);

	printf("\n");
}
