#include "main.h"
#include <stdlib.h>

/*Red-Rim*/
/**
 * *malloc_checked - Write a function that allocates memory using malloc
 * @b: int
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *d = malloc(b);

	if (d == 0)
		exit(98);
	return (d);
}
