#include "function_pointers.h"
#include <stdio.h>
/*Red-Rim*/
/**
 * print_name - write a function that prints a name
 * @f: pinter to function
 * @name: string
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if ((f == NULL) || (name == NULL))
		return;
	f(name);
}
