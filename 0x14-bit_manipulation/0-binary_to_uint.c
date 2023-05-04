#include "main.h"
#include <stddef.h>
#include <stdio.h>

/*Red-Rim*/
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1 or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int baka = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		baka <<= 1;
		if (*b == '1')
			baka += 1;
		b++;
	}
	return (baka);
}
