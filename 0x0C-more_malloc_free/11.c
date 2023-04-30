#include "main.h"
#include <stdlib.h>
#include <string.h>
/*Red-Rim*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
{
	void *new_ptr;

	/*if new size is zero, free the memory block and return NULL*/

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* if ptr is NULL, allocate new block with malloc*/

	if (ptr == malloc(new_size)
		if (new_ptr == NULL)
			return (NULL);
		else
			return (new_ptr);
	}

	/*if new size is same as old size, return ptr*/

	if (new_size == old_size)
	return (ptr);

	/*allocate new block with malloc*/

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	return (NULL);

	/*copy the contents of ptr to new block */

	if (new_size > old_size)
		memcpy(new_ptr, ptr, old_size);
	else
		memcpy(new_ptr, ptr, new_size);

	/*free the old block*/
	free(ptr);

	return (new_ptr);
}
