#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/*Red-Rim*/
/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: pointer to the address of the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t c = 0;

	if (h == NULL || *h == NULL)
		return (c);

	while (*h != NULL)
	{
		if (*h <= (*h)->next)
		{
			free(*h);
			c++;
			break;
		}
		else
		{
			listint_t *ama = (*h)->next;

			free(*h);
			c++;
			*h = ama;
		}
	}

	*h = NULL;
	return (c);
}
