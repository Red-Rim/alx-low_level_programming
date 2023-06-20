#include "main.h"
#include <stdio.h>

/**
 * _isupper -  function that checks for uppercase character
 * @c: interger need to be test it if uppercase or no
 * Return: Returns 1 if c is uppercas, 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
