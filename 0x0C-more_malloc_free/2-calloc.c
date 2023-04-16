#include "main.h"
#include <stdlib.h>
/*Red-Rim*/
/**
 * *_memset - fills memory with a constant byte
 * @b: constant
 * @s: pointer to put the constant
 * @n: max bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * *_calloc - Write a function that allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *d;

	if (size == 0 || nmemb == 0)
		return (NULL);
	d = malloc(sizeof(int) * nmemb);

	if (d == 0)
		return (NULL);

	_memset(d, 0, sizeof(int) * nmemb);

	return (d);
}
