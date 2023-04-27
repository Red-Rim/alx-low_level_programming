#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/*Red-Rim*/
/**
 * list_len - function returns the number of elements in a linked list_t list
 * @h: pointer to the list_t list
 * Return: number of element in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
