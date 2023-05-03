#include <stdlib.h>
#include <string.h>
#include "dog.h"

/*Red-Rim*/
/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointerto the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return NULL;

	new_dog->name = strdup(name);
	if (new_dog->name == NULL) {
		free(new_dog);
		return NULL;
	}

		new_dog->owner = strdup(owner);
		if (new_dog->owner == NULL) {
		free(new_dog->name);
		free(new_dog);
		return NULL;
	}

	new_dog->age = age;
	return new_dog;
}
