#include "main.h"

/**
 * _strpbrk - Write a function that searches a string for any of a set of bytes
 * @s: the first occurrence in the string
 * @accept: matches one of the bytes
 * @NULL: if no such byte is found
 * Returns: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])

					return (s);
		}
		s++;
	}
	return (NULL);
}
