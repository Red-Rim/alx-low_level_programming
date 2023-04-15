#include "main.h"
/*Red-Rim*/
/**
 * *malloc_checked - Write a function that allocates memory using malloc
 * @b: int
 * Return: print to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *malloc = malloc(b);

	if (malloc == 0)
		exit(98);
	return (malloc);
}
