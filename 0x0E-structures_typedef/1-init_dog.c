#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/*Red-Rim*/
/**
 * init_dog - initialize a struct dog
 * @d: pointer to struct dog
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
