#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @n: number of bytes
 * @src: memory where is copied
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int d = 0;
	int i = n;

	for (; d < i; d++)
	{
		dest[d] = src[d];
		n--;
	}
	return (dest);
}
