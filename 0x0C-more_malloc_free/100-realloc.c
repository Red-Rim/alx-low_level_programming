#include "main.h"
#include <stdlib.h>
#include <string.h>

/*Red-Rim*/
/**
 * _realloc - reallocate memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc
 * @new_size: new size of the new memory block
 * @old_size: size of the allocated space for ptr
 * Return: pointer to the new memory block, or NULL if failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
		new_size = old_size;

	char *p1 = (char *)ptr;
	char *p2 = (char *)new_ptr;

	for (unsigned int i = 0; i < new_size; i++)
		p2[i] = p1[i];

	free(ptr);

	return (new_ptr);
}
