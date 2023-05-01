#include "main.h"
#include <stdio.h>

/*Red-Rim*/
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: on success 1
 * on error -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
