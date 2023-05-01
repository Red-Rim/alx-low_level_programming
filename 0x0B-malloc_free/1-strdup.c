#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Red-Rim*/
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: always 0
 */
char *_strdup(char *str)
{
	char *ama;

	if (str == NULL)
		return (NULL);

	ama = malloc(sizeof(char) * (strlen(str) + 1));

	if (ama == NULL)
		return (NULL);

	strcpy(ama, str);

	return (ama);
}
