#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int a, i;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	for (i = 0; i < a; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

