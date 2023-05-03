#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for a dog_t struct
 * @d: pointer to the struct to free
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
