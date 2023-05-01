#include "main.h"
#include <stdlib.h>

/*Red-Rim*/
/**
 * create_array - an array of chars and initializes it with a specific char
 * @size: size of array
 * @c: char to assign
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
