#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: interger witch need to be tested if digit or not
 *
 * Return: Returns 1 if c is a digit Returns 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
