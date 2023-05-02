#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/*Red-Rim*/
/**
 * listint_len - returns the number of elements in a linked listint_t list
 *
 * @h: pointer to the head of the list
 * Return: number of the elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}

