#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/*Red-Rim*/
/**
 * free_listint_safe - frees a linked list
 * @h: first node
 * Return: numb of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *ama;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			ama = (*h)->next;
			free(*h);
			*h = ama;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
