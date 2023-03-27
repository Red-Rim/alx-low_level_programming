#include "main.h"
/**
 * _puts - print a string
 * @str: the string
 *
 * Return: the length of the string
 */

void _puts(char *str)
{
	int j = 0
		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
		}
	_putchar('\n');
}
