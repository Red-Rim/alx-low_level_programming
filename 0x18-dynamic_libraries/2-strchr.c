#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 *_strchr - fuction that locates a charracter in a string
 *@s : string
 * @c : character
 * Return: return a poiter to the first occurance of c or null
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
	if (s[i] == c)
	{
		return (s + i);
	}
	i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}
