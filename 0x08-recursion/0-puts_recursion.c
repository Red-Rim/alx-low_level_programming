#include "main.h"
/**
 * _puts_recursion - function that prints a string in reverse
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
if (*s)
{
	_putchar(*s);
	_puts_recursion(s++);
}
else
{
	_putchar('\n');
}
	return (void);
}