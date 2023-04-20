#include "function_pointers.h"
#include <stdio.h>
/*Red-Rim*/
/**
 * array_iterator - a function given as a parameter on each element of an array
 * @size: the size of the array
 * @action: pointer to the function need to use
 * @array: array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
